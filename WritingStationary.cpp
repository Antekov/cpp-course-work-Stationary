#include "WritingStationary.h"
namespace Stationary {
	WritingStationary::WritingStationary(System::String^ name, double price, System::String^ color) :
		Stationary(name, price) {
		MarshalString(color, this->color);
	}
}
