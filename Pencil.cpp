#include "Pencil.h"

namespace Stationary {
	double Pencil::Thickness() { return thickness; }
	void Pencil::Thickness(double thicness) {
		if (thicness < 0) {
			throw InvalidPriceException();
		}
		this->thickness = thickness;
	}

	bool Pencil::operator<(const IStationary& other) {
		if (typeid(other) != typeid(Pencil)) {
			throw CompareException();
		}

		const Pencil& pencil = (Pencil&)other;

		return (name < pencil.name ? true : (price < pencil.price ? true : false));
	}

	bool Pencil::operator==(const IStationary& other) {
		if (typeid(other) != typeid(Pencil)) {
			return false;
		}

		const Pencil& pencil = (Pencil&)other;

		return (name == pencil.name && price == pencil.price
			&& color == pencil.color && thickness == pencil.thickness);
	}

	void Pencil::print(DataGridView^ dgw) {
		dgw->Rows->Add();
		DataGridViewRow^ row = dgw->Rows[dgw->Rows->Count - 1];

		row->Cells[0]->Value = gcnew String(L"Карандаш");
		row->Cells[1]->Value = Name();
		row->Cells[2]->Value = Price();
		row->Cells[3]->Value = L"Цвет: " + Color() + L"; Толщина: " + Thickness();

	}

	void Pencil::save(StreamWriter^ f) {
		f->WriteLine("Pencil");
		f->WriteLine(gcnew String(name.c_str()));
		f->WriteLine(price);
		f->WriteLine(gcnew String(color.c_str()));
		f->WriteLine(thickness);
	};

	void Pencil::load(StreamReader^ f) {
		MarshalString(f->ReadLine(), name);
		price = Convert::ToDouble(f->ReadLine());
		MarshalString(f->ReadLine(), color);
		thickness = Convert::ToDouble(f->ReadLine());
	};

}
