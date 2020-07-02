#include "DrawingStationary.h"
namespace Stationary {
	DrawingStationary::DrawingStationary(System::String^ name, double price, System::String^ category, System::String^ size) :
		Stationary(name, price) {
		MarshalString(category, this->category);
		MarshalString(size, this->size);
	}

	String^ DrawingStationary::Category() { return gcnew String(category.c_str()); }
	void DrawingStationary::Category(String^ category) { MarshalString(category, this->category); }

	String^ DrawingStationary::Size() { return gcnew String(size.c_str()); }
	void DrawingStationary::Size(String^ size) { MarshalString(size, this->size); }
}
