#pragma once
#include "Stationary.h"

namespace Stationary {
	class DrawingStationary :
		public Stationary
	{
	protected:
		std::string category;
		std::string size;
	public:
		DrawingStationary() : DrawingStationary("", 0.0, "", "") {}

		DrawingStationary(System::String^ name, double price, System::String^ category, System::String^ size);

		String^ Category();
		void Category(String^ type);

		String^ Size();
		void Size(String^ size);
	};
}

