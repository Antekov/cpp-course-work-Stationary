#include "Pen.h"
namespace Stationary {
	Pen::Pen() : WritingStationary("ErichKrause", 10, "blue"),
		type("Ball"), model("PL-1") {}

	Pen::Pen(System::String^ name, double price,
		System::String^ color,
		System::String^ type,
		System::String^ model) : WritingStationary(name, price, color) {
		Stationary::MarshalString(type, this->type);
		Stationary::MarshalString(model, this->model);
	}

	bool Pen::operator<(const IStationary& other) {
		if (typeid(other) != typeid(Pen)) {
			throw CompareException();
		}

		const Pen& pen = (Pen&)other;

		return (name < pen.name ? true : (price < pen.price ? true : false));
	}

	bool Pen::operator==(const IStationary& other) {
		if (typeid(other) != typeid(Pen)) {
			return false;
		}

		const Pen& pen = (Pen&)other;

		return (name == pen.name && price == pen.price
			&& color == pen.color && type == pen.type && model == pen.model);
	}

	void Pen::print(DataGridView^ dgw) {
		dgw->Rows->Add();
		DataGridViewRow^ row = dgw->Rows[dgw->Rows->Count - 1];

		row->Cells[0]->Value = "xdvkhdvk";
		row->Cells[1]->Value = gcnew String("dfkghfk");
		row->Cells[2]->Value = "fgredrg";
		row->Cells[3]->Value = "drghrg";

	}

	void Pen::save(StreamWriter^ f) {
		f->WriteLine("Pen");
		f->WriteLine(gcnew String(type.c_str()));
		f->WriteLine(gcnew String(model.c_str()));

		f->WriteLine(gcnew String(color.c_str()));
		f->WriteLine(gcnew String(name.c_str()));
		f->WriteLine(price);
	};

	void Pen::load(StreamReader^ f) {
		MarshalString(f->ReadLine(), type);
		MarshalString(f->ReadLine(), model);
		MarshalString(f->ReadLine(), color);
		MarshalString(f->ReadLine(), name);
		price = Convert::ToDouble(f->ReadLine());
	};

	void static Stationary::MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
}