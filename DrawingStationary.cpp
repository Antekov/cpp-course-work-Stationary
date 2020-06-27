#include "DrawingStationary.h"
namespace Stationary {
	DrawingStationary::DrawingStationary(System::String^ name, double price) : price(price) {
		if (price < 0) {
			throw InvalidPriceException();
		}
		MarshalString(name, this->name);
	}

	System::String^ DrawingStationary::Name() { return gcnew String(name.c_str()); }
	void DrawingStationary::Name(String^ name) { MarshalString(name, this->name); }

	double DrawingStationary::Price() { return price; }
	void DrawingStationary::Price(double price) {
		if (price < 0) {
			throw InvalidPriceException();
		}
		this->price = price;
	}

	DrawingStationary::DrawingStationary(System::String^ name, double price, System::String^ category) :
		DrawingStationary(name, price) {
		MarshalString(category, this->category);
	}

	String^ DrawingStationary::Category() { return gcnew String(category.c_str()); }
	void DrawingStationary::Category(String^ category) { MarshalString(category, this->category); }
}
