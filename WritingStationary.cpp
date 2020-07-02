#include "WritingStationary.h"
namespace Stationary {
	WritingStationary::WritingStationary(System::String^ name, double price, System::String^ color) :
		Stationary(name, price) {
		MarshalString(color, this->color);
	}

	String^ WritingStationary::Color() { return gcnew String(color.c_str()); }
	void WritingStationary::Color(String^ color) { MarshalString(color, this->color); }
}
