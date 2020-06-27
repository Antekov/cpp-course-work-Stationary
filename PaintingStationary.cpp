#include "PaintingStationary.h"
namespace Stationary {
	PaintingStationary::PaintingStationary(System::String^ name, double price) : price(price) {
		if (price < 0) {
			throw InvalidPriceException();
		}
		MarshalString(name, this->name);
	}

	System::String^ PaintingStationary::Name() { return gcnew String(name.c_str()); }
	void PaintingStationary::Name(String^ name) { MarshalString(name, this->name); }

	double PaintingStationary::Price() { return price; }
	void PaintingStationary::Price(double price) {
		if (price < 0) {
			throw InvalidPriceException();
		}
		this->price = price;
	}

	PaintingStationary::PaintingStationary(System::String^ name, double price, System::String^ type) :
		PaintingStationary(name, price) {
		MarshalString(type, this->type);
	}

	String^ PaintingStationary::Type() { return gcnew String(type.c_str()); }
	void PaintingStationary::Type(String^ type) { MarshalString(type, this->type); }
}
