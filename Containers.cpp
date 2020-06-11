#include "Containers.h"

namespace Stationary {
	StationaryContainer<IStationary*> Containers::pointersContainer;
	ItemsContainer<Pen*> Containers::penItems;
	ItemsContainer<Pen*> Containers::pencilItems;

	void Containers::Load(String^ filename) {
		StreamReader f(filename);
		
		while (!f.EndOfStream) {
			String^ type;
			type = f.ReadLine();

			IStationary* st = nullptr;

			if (type == "Pen") {
				st = new Pen();
				Containers::penItems.push_back((Pen*)st);	
			}
			else if (type == "Pencil") {
				st = new Pen();
				Containers::pencilItems.push_back((Pen*)st);
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
		StreamWriter f(filename);
		/*
		for (size_t i = 0; i < Containers::penItems.getSize(); i++) {
			if (Containers::penItems[i] != nullptr) {
				delete Containers::penItems[i];
			}
		}
		for (auto item : Containers::penItems) {
			if 
			f.WriteLine("Pen");
			item->save(%f);
		}

		/*
		for (auto item : Containers::pencilItems) {
			f.WriteLine("Pencil");
			item->save(% f);
		}
		*/
		
		f.Close();
	}

	void Containers::ShowAll(DataGridView^ dgv) {
		dgv->Rows->Clear();
		for (auto& item : pointersContainer) {
			item->print(dgv);
		}
	}

	void Containers::Clear() {
		for (size_t i = 0; i < Containers::penItems.getSize(); i++) {
			if (Containers::penItems[i] != nullptr) {
				delete Containers::penItems[i];
				Containers::penItems[i] = nullptr;
			}
		}
		for (size_t i = 0; i < Containers::pencilItems.getSize(); i++) {
			if (Containers::pencilItems[i] != nullptr) {
				delete Containers::pencilItems[i];
			}
		}
		
	}
}
