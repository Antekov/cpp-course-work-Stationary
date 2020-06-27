#pragma once
#include "Stationary.h"

namespace Stationary {
	class WritingStationary :
		public Stationary
	{
	protected:
		std::string color;
	public:
		WritingStationary() : WritingStationary("", 0.0, "blue") {}

		WritingStationary(System::String^ name, double price, System::String^ color);
	};
}
