#include "Paints.h"
namespace Stationary {
	Paints::Paints() : PaintingStationary("", 10, ""),
		colorsCount(10) {}

	Paints::Paints(System::String^ name, double price,
		System::String^ type,
		int colorsCount) : PaintingStationary(name, price, type), colorsCount(colorsCount) {}

	bool Paints::operator<(const IStationary& other) {
		if (typeid(other) != typeid(Paints)) {
			throw CompareException();
		}

		const Paints& paints = (Paints&)other;

		return (name < paints.name ? true : (price < paints.price ? true : false));
	}

	bool Paints::operator==(const IStationary& other) {
		if (typeid(other) != typeid(Paints)) {
			return false;
		}

		const Paints& paints = (Paints&)other;

		return (name == paints.name && price == paints.price
			&& type == paints.type && colorsCount == paints.colorsCount);
	}

	int Paints::ColorsCount() { return colorsCount; }
	void Paints::ColorsCount(int colorsCount) { this->colorsCount = colorsCount; }

	void Paints::print(DataGridView^ dgw) {
		dgw->Rows->Add();
		DataGridViewRow^ row = dgw->Rows[dgw->Rows->Count - 1];

		row->Cells[0]->Value = gcnew String(L"Краски");
		row->Cells[1]->Value = Name();
		row->Cells[2]->Value = Price();
		row->Cells[3]->Value = L"Тип: " + Type() + L"; Цветов: " + ColorsCount();
	}

	void Paints::save(StreamWriter^ f) {
		f->WriteLine("Paints");
		f->WriteLine(gcnew String(name.c_str()));
		f->WriteLine(price);
		f->WriteLine(gcnew String(type.c_str()));
		f->WriteLine(colorsCount);
	};

	void Paints::load(StreamReader^ f) {
		MarshalString(f->ReadLine(), name);
		price = Convert::ToDouble(f->ReadLine());
		MarshalString(f->ReadLine(), type);
		colorsCount = Convert::ToInt32(f->ReadLine());
	};
}