#include "Controller.h"

namespace Stationary {
	void Controller::Load(String^ filename) {
		StreamReader f(filename, System::Text::Encoding::GetEncoding("windows-1251"));

		Clear();

		while (!f.EndOfStream) {
			String^ type;
			type = f.ReadLine();

			IStationary* st = nullptr;

			if (type == "Pen") {
				st = new Pen();
				Containers::penItems.push_back((Pen*)st);
			}
			else if (type == "Pencil") {
				st = new Pencil();
				Containers::pencilItems.push_back((Pencil*)st);
			}
			else if (type == "Circular") {
				st = new Circular();
				Containers::circularItems.push_back((Circular*)st);
			}
			/*
			else if (type == "Board") {
				st = new Board();
				Containers::boardItems.push_back((Board*)st);
			}
			else if (type == "Paints") {
				st = new Paints();
				Containers::paintsItems.push_back((Paints*)st);
			}
			else if (type == "Brush") {
				st = new Brush();
				Containers::brush.push_back((Brush*)st);
			}
			*/

			if (st != nullptr) {
				st->load(% f);
				Containers::pointersContainer.push_back(st);
			}
		}
		f.Close();
	}

	void Controller::Save(String^ filename) {
		StreamWriter f(filename, false, System::Text::Encoding::GetEncoding("windows-1251"));
		
		for (size_t i = 0; i < Containers::penItems.getSize(); i++) {
			if (Containers::penItems[i] != nullptr) {
				Containers::penItems[i]->save(% f);
			}
		}

		for (size_t i = 0; i < Containers::pencilItems.getSize(); i++) {
			if (Containers::pencilItems[i] != nullptr) {
				Containers::pencilItems[i]->save(% f);
			}
		}

		for (size_t i = 0; i < Containers::circularItems.getSize(); i++) {
			if (Containers::circularItems[i] != nullptr) {
				Containers::circularItems[i]->save(% f);
			}
		}

		for (size_t i = 0; i < Containers::boardItems.getSize(); i++) {
			if (Containers::boardItems[i] != nullptr) {
				Containers::boardItems[i]->save(% f);
			}
		}

		for (size_t i = 0; i < Containers::paintsItems.getSize(); i++) {
			if (Containers::paintsItems[i] != nullptr) {
				Containers::paintsItems[i]->save(% f);
			}
		}

		for (size_t i = 0; i < Containers::brushItems.getSize(); i++) {
			if (Containers::brushItems[i] != nullptr) {
				Containers::brushItems[i]->save(% f);
			}
		}
	
		f.Close();
	}

	void Controller::ShowAll(DataGridView^ dgv) {
		dgv->Rows->Clear();
		for (auto& item : Containers::pointersContainer) {
			item->print(dgv);
		}
	}

	void Controller::ShowSearchResult(DataGridView^ dgv) {
		dgv->Rows->Clear();
		for (auto& item : Containers::searchResultContainer) {
			item->print(dgv);
		}
	}

	void Controller::Clear() {
		for (size_t i = 0; i < Containers::penItems.getSize(); i++) {
			if (Containers::penItems[i] != nullptr) {
				delete Containers::penItems[i];
				Containers::penItems[i] = nullptr;
			}
		}
		for (size_t i = 0; i < Containers::pencilItems.getSize(); i++) {
			if (Containers::pencilItems[i] != nullptr) {
				delete Containers::pencilItems[i];
				Containers::pencilItems[i] = nullptr;
			}
		}
		for (size_t i = 0; i < Containers::circularItems.getSize(); i++) {
			if (Containers::circularItems[i] != nullptr) {
				delete Containers::circularItems[i];
				Containers::circularItems[i] = nullptr;
			}
		}
		for (size_t i = 0; i < Containers::boardItems.getSize(); i++) {
			if (Containers::boardItems[i] != nullptr) {
				delete Containers::boardItems[i];
				Containers::boardItems[i] = nullptr;
			}
		}
		for (size_t i = 0; i < Containers::paintsItems.getSize(); i++) {
			if (Containers::paintsItems[i] != nullptr) {
				delete Containers::paintsItems[i];
				Containers::paintsItems[i] = nullptr;
			}
		}
		for (size_t i = 0; i < Containers::brushItems.getSize(); i++) {
			if (Containers::brushItems[i] != nullptr) {
				delete Containers::brushItems[i];
				Containers::brushItems[i] = nullptr;
			}
		}

		Containers::pointersContainer.clear();
	}
}