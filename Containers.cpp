#include "Containers.h"

namespace Stationary {
	StationaryContainer<IStationary*> Containers::pointersContainer;
	ItemsContainer<Pen*> Containers::penItems;

	void Containers::Load(String^ filename) {
		StreamReader f(filename);
		
		while (!f.EndOfStream) {
			String^ type;
			type = f.ReadLine();

			IStationary* st = nullptr;

			if (type == "Pen") {
				st = new Pen();
				Containers::penItems[0] = ((Pen *) st);	
			}
			else if (type == "Pencil") {
				//st = new Pencil();
				//pencils[pencilsCount++] = (Pencil*) st;
			}
			else if (type == "Brush") {
				//st = new Brush();
				//brushes[brushesCount++] = (Brush*) st;
			}

			if (st != nullptr) {
				st->load(%f);
				Containers::pointersContainer.push_back(st);
			}
		}
		f.Close();
	}

	void Containers::Save(String^ filename) {

	}

	void Containers::ShowAll(DataGridView^ dgv) {
		dgv->Rows->Clear();
		for (auto& item : pointersContainer) {
			item->print(dgv);
		}
	}
}
