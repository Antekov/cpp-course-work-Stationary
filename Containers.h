#pragma once
#include "Pen.h"
#include "Pencil.h"
#include "Circular.h"
#include "Board.h"
#include "Paints.h"
#include "Brush.h"
#include "StationaryContainer.h"
#include "ItemsContainer.h"

namespace Stationary {
	class Containers
	{
	public:
		static StationaryContainer<IStationary*> pointersContainer;
		static StationaryContainer<IStationary*> searchResultContainer;
		static ItemsContainer<Pen*> penItems;
		static ItemsContainer<Pencil*> pencilItems;
		static ItemsContainer<Circular*> circularItems;
		static ItemsContainer<Board*> boardItems;
		static ItemsContainer<Paints*> paintsItems;
		static ItemsContainer<Brush*> brushItems;
	};
}