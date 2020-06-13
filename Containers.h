#pragma once
#include "Pen.h"
#include "StationaryContainer.h"
#include "ItemsContainer.h"

namespace Stationary {
	class Containers
	{
	public:
		static StationaryContainer<IStationary*> pointersContainer;
		static ItemsContainer<Pen*> penItems;
		static ItemsContainer<Pen*> pencilItems;

		

		
	};
}