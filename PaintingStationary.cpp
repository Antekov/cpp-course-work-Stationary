#include "PaintingStationary.h"
namespace Stationary {
	PaintingStationary::PaintingStationary(System::String^ name, double price, System::String^ type) :
		IStationary(name, price) {
		MarshalString(type, this->type);
	}
}
