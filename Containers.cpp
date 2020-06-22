#include "Containers.h"

namespace Stationary {
	StationaryContainer<IStationary*> Containers::pointersContainer;
	StationaryContainer<IStationary*> Containers::searchResultContainer;
	ItemsContainer<Pen*> Containers::penItems;
	ItemsContainer<Pencil*> Containers::pencilItems;
	ItemsContainer<Circular*> Containers::circularItems;
	ItemsContainer<Board*> Containers::boardItems;
	ItemsContainer<Paints*> Containers::paintsItems;
	ItemsContainer<Brush*> Containers::brushItems;
}
