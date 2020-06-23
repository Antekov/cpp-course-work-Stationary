#pragma once
#include "IStationary.h"
namespace Stationary {
	class PaintingStationary :
		public IStationary
	{
	protected:
		std::string type;
	public:
		PaintingStationary() : IStationary("", 0.0) {}

		PaintingStationary(System::String^ name, double price, System::String^ type);

		String^ Type();
		void Type(String^ type);
	};
}

