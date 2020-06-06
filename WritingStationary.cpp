#include "WritingStationary.h"
namespace Stationary {
	WritingStationary::WritingStationary(System::String^ name, double price, System::String^ color) :
		IStationary(name, price) {
		MarshalString(color, this->color);
	}

	void WritingStationary::print(DataGridView^ dgw) {

	}
}
