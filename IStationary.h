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

	protected:
		std::string name;
		double price;

	public:
		IStationary(System::String^ name, double price);
		virtual ~IStationary() {};

		virtual bool operator<(const IStationary& other) = 0;
		virtual bool operator==(const IStationary& other) = 0;
		virtual void print(DataGridView^ dgw) = 0;
		virtual void save(StreamWriter^ f) = 0;
		virtual void load(StreamReader^ f) = 0;

		System::String^ Name();
		double Price();
	};

	void extern MarshalString(String^ s, std::string& os);
}



