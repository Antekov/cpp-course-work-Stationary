#pragma once
#include "Stationary.h"

namespace Stationary {
	class DrawingStationary :
		public Stationary
	{
	protected:
		std::string category;
	public:
		DrawingStationary() : DrawingStationary("", 0.0, "") {}

		DrawingStationary(System::String^ name, double price, System::String^ category);

		String^ Category();
		void Category(String^ type);
	};
}

