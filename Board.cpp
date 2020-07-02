#include "Board.h"

namespace Stationary {
    Board::Board(String^ name, double price,
        String^ category, String^ size,
        String^ material,
        double width, double height) : DrawingStationary(name, price, category, size) {
        MarshalString(material, this->material);
    };

	bool Board::operator<(const IStationary& other) {
		if (typeid(other) != typeid(Board)) {
			throw CompareException();
		}

		const Board& board = (Board&)other;

		return (name < board.name ? true : (price < board.price ? true : false));
	}

	bool Board::operator==(const IStationary& other) {
		if (typeid(other) != typeid(Board)) {
			return false;
		}

		const Board& board = (Board&)other;

		return (name == board.name && price == board.price
			&& category == board.category && size == board.size
			&& width == board.width && height == board.height);
	}

	String^ Board::Material() { return gcnew String(material.c_str()); }
	void Board::Material(String^ material) { MarshalString(material, this->material); }

	double Board::Width() { return width; }
	void Board::Width(double model) { this->width = width; }

	double Board::Height() { return height; }
	void Board::Height(double model) { this->height = height; }

	void Board::print(DataGridView^ dgw) {
		dgw->Rows->Add();
		DataGridViewRow^ row = dgw->Rows[dgw->Rows->Count - 1];

		row->Cells[0]->Value = gcnew String(L"Доска");
		row->Cells[1]->Value = Name();
		row->Cells[2]->Value = Price();
		row->Cells[3]->Value = L"Категория: " + Category() + L"; Размер: " + Size() + L"; Материал: " + Material();

	}

	void Board::save(StreamWriter^ f) {
		f->WriteLine("Board");
		f->WriteLine(gcnew String(name.c_str()));
		f->WriteLine(price);
		f->WriteLine(gcnew String(category.c_str()));
		f->WriteLine(gcnew String(size.c_str()));
		f->WriteLine(gcnew String(material.c_str()));
		f->WriteLine(width);
		f->WriteLine(height);
	};

	void Board::load(StreamReader^ f) {
		MarshalString(f->ReadLine(), name);
		price = Convert::ToDouble(f->ReadLine());
		MarshalString(f->ReadLine(), category);
		MarshalString(f->ReadLine(), size);
		MarshalString(f->ReadLine(), material);
		width = Convert::ToDouble(f->ReadLine());
		height = Convert::ToDouble(f->ReadLine());
	};
}
