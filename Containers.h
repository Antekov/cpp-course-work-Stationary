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

		static void Load(String^ filename);
		static void Save(String^ filename);

		static void ShowAll(DataGridView^ dgv);
	};
}