#include "WritingStationary.h"
namespace Stationary {
	WritingStationary::WritingStationary(System::String^ name, double price) : price(price) {
		if (price < 0) {
			throw InvalidPriceException();
		}
		MarshalString(name, this->name);
	}

	System::String^ WritingStationary::Name() { return gcnew String(name.c_str()); }
	void WritingStationary::Name(String^ name) { MarshalString(name, this->name); }

	double WritingStationary::Price() { return price; }
	void WritingStationary::Price(double price) {
		if (price < 0) {
			throw InvalidPriceException();
		}
		this->price = price;
	}

	WritingStationary::WritingStationary(System::String^ name, double price, System::String^ color) :
		WritingStationary(name, price) {
		MarshalString(color, this->color);
	}
}
