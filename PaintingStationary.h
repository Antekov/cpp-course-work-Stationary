#pragma once
#include "Stationary.h"
namespace Stationary {
	class PaintingStationary :
		public Stationary
	{
	protected:
		std::string type;

	public:
		PaintingStationary() : PaintingStationary("", 0.0, "") {}

		PaintingStationary(System::String^ name, double price, System::String^ type);

		String^ Type();
		void Type(String^ type);
	};
}

