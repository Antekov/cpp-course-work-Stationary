#pragma once
#include "Containers.h"
namespace Stationary {
	class Controller
	{
	public:
		static void Clear();

		static void Load(String^ filename);
		static void Save(String^ filename);
		static void ShowAll(DataGridView^ dgv);
		static void ShowSearchResult(DataGridView^ dgv);
	};
}
