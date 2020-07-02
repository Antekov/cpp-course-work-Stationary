#include "Circular.h"
namespace Stationary {
	Circular::Circular() : DrawingStationary("", 0, "standart", "big") {}

	Circular::Circular(System::String^ name, double price,
		System::String^ category,
		System::String^ size) : DrawingStationary(name, price, category, size) {}

	bool Circular::operator<(const IStationary& other) {
		if (typeid(other) != typeid(Circular)) {
			throw CompareException();
		}

		const Circular& circular = (Circular&)other;

		return (name < circular.name ? true : (price < circular.price ? true : false));
	}

	bool Circular::operator==(const IStationary& other) {
		if (typeid(other) != typeid(Circular)) {
			return false;
		}

		const Circular& circular = (Circular&)other;

		return (name == circular.name && price == circular.price
			&& category == circular.category && size == circular.size);
	}

	void Circular::print(DataGridView^ dgw) {
		dgw->Rows->Add();
		DataGridViewRow^ row = dgw->Rows[dgw->Rows->Count - 1];

		row->Cells[0]->Value = gcnew String(L"Циркуль");
		row->Cells[1]->Value = Name();
		row->Cells[2]->Value = Price();
		row->Cells[3]->Value = L"Категория: " + Category() + L"; Размер: " + Size();

	}

	void Circular::save(StreamWriter^ f) {
		f->WriteLine("Circular");
		f->WriteLine(gcnew String(name.c_str()));
		f->WriteLine(price);
		f->WriteLine(gcnew String(category.c_str()));
		f->WriteLine(gcnew String(size.c_str()));
	};

	void Circular::load(StreamReader^ f) {
		MarshalString(f->ReadLine(), name);
		price = Convert::ToDouble(f->ReadLine());
		MarshalString(f->ReadLine(), category);
		MarshalString(f->ReadLine(), size);
	};


}
