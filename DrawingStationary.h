#pragma once
#include "IStationary.h"
namespace Stationary {
	class DrawingStationary :
		public IStationary
	{
	protected:
		std::string category;
	public:
		DrawingStationary() : IStationary("", 0.0) {}

		DrawingStationary(System::String^ name, double price, System::String^ category);

		String^ Category();
		void Category(String^ type);
	};
}

