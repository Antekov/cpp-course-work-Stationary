#include "IStationary.h"
namespace Stationary {
	void extern MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	IStationary::IStationary(System::String^ name, double price) : price(price) {
		if (price < 0) {
			throw InvalidPriceException();
		}
		MarshalString(name, this->name);
	}

	System::String^ IStationary::Name() { return gcnew String(name.c_str()); }
	void IStationary::Name(String^ name) { MarshalString(name, this->name); }

	double IStationary::Price() { return price; }
	void IStationary::Price(double price) { 
		if (price < 0) {
			throw InvalidPriceException();
		}
	}
}

