#pragma once
#include "IStationary.h"

namespace Stationary {
	class WritingStationary :
		public IStationary
	{
	protected:
		std::string color;
	public:
		WritingStationary() : IStationary("", 0.0) {}

		WritingStationary(System::String^ name, double price, System::String^ color);

		void print(DataGridView^ dgw) override;
	};
}
