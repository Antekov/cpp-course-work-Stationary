#include "Brush.h"
namespace Stationary {
	Brush::Brush() : PaintingStationary("", 10, ""),
		thickness(10) {}

	Brush::Brush(System::String^ name, double price,
		System::String^ type,
		int thickness) : PaintingStationary(name, price, type), thickness(thickness) {}

	bool Brush::operator<(const IStationary& other) {
		if (typeid(other) != typeid(Brush)) {
			throw CompareException();
		}

		const Brush& brush = (Brush&)other;

		return (name < brush.name ? true : (price < brush.price ? true : false));
	}

	bool Brush::operator==(const IStationary& other) {
		if (typeid(other) != typeid(Brush)) {
			return false;
		}

		const Brush& brush = (Brush&)other;

		return (name == brush.name && price == brush.price
			&& type == brush.type && thickness == brush.thickness);
	}

	int Brush::Thickness() { return thickness; }
	void Brush::Thickness(int thickness) { this->thickness = thickness; }

	void Brush::print(DataGridView^ dgw) {
		dgw->Rows->Add();
		DataGridViewRow^ row = dgw->Rows[dgw->Rows->Count - 1];

		row->Cells[0]->Value = gcnew String(L"Кисть");
		row->Cells[1]->Value = Name();
		row->Cells[2]->Value = Price();
		row->Cells[3]->Value = L"Тип: " + Type() + L"; Толщина: " + Thickness();
	}

	void Brush::save(StreamWriter^ f) {
		f->WriteLine("Brush");
		f->WriteLine(gcnew String(name.c_str()));
		f->WriteLine(price);
		f->WriteLine(gcnew String(type.c_str()));
		f->WriteLine(thickness);
	};

	void Brush::load(StreamReader^ f) {
		MarshalString(f->ReadLine(), name);
		price = Convert::ToDouble(f->ReadLine());
		MarshalString(f->ReadLine(), type);
		thickness = Convert::ToInt32(f->ReadLine());
	};
}
