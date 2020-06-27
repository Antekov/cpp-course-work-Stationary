#include "DrawingStationary.h"
namespace Stationary {
	DrawingStationary::DrawingStationary(System::String^ name, double price, System::String^ category) :
		Stationary(name, price) {
		MarshalString(category, this->category);
	}

	String^ DrawingStationary::Category() { return gcnew String(category.c_str()); }
	void DrawingStationary::Category(String^ category) { MarshalString(category, this->category); }
}
