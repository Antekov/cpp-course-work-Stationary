#include "PaintingStationary.h"
namespace Stationary {
	PaintingStationary::PaintingStationary(System::String^ name, double price, System::String^ type) :
		IStationary(name, price) {
		MarshalString(type, this->type);
	}

	String^ PaintingStationary::Type() { return gcnew String(type.c_str()); }
	void PaintingStationary::Type(String^ type) { MarshalString(type, this->type); }
}
