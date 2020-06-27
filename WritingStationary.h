#pragma once
#include "IStationary.h"

namespace Stationary {
	class WritingStationary :
		public IStationary
	{
	protected:
		std::string name;
		double price;
		std::string color;
		WritingStationary(System::String^ name, double price);
	public:
		WritingStationary() : WritingStationary(L"", 0.0) {}

		WritingStationary(System::String^ name, double price, System::String^ color);

		System::String^ Name();
		void Name(String^ name);

		double Price();
		void Price(double price);
	};
}
