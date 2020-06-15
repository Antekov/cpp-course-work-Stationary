#pragma once
#include "Pen.h"
#include "Pencil.h"
#include "StationaryContainer.h"
#include "ItemsContainer.h"

namespace Stationary {
	class Containers
	{
	public:
		static StationaryContainer<IStationary*> pointersContainer;
		static ItemsContainer<Pen*> penItems;
		static ItemsContainer<Pencil*> pencilItems;

		

		
	};
}