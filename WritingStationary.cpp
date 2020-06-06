#include "WritingStationary.h"
namespace Stationary {
	WritingStationary::WritingStationary(System::String^ name, double price, System::String^ color) :
		IStationary(name, price) {
		MarshalString(color, this->color);
	}

	void WritingStationary::print(DataGridView^ dgw) {

	}

	void static Stationary::MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
}
