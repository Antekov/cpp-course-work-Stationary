#pragma once
#include <string>
#include <sstream>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

namespace Stationary {
	class InvalidPriceException : std::exception {};
	class CompareException : std::exception {};

	class IStationary
	{
	public:
		virtual bool operator<(const IStationary& other) = 0;
		virtual bool operator==(const IStationary& other) = 0;
		virtual void print(DataGridView^ dgw) = 0;
		virtual void save(StreamWriter^ f) = 0;
		virtual void load(StreamReader^ f) = 0;

		virtual System::String^ Name() = 0;
		virtual void Name(String^ name) = 0;

		virtual double Price() = 0;
		virtual void Price(double price) = 0;
	};

	void extern MarshalString(String^ s, std::string& os);
}



