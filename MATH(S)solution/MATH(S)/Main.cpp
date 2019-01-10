#include "GFX.h"
#include "GFXmath.h"

class Demo : public olcConsoleGameEngine {
	public:
		int x = 0;
		int y = 10;
		int w = 20;
		
		Demo() {
		
		};

	protected:
		virtual bool OnUserCreate() {
			return true;
		};

		virtual bool OnUserUpdate(float fElapsedTime) {
			Fill(0, 0, 160, 100, BG_BLACK, FG_BLACK);
			Fill(x, y, x + w, y + w, 0x2588, 0x000F);
			x++;
			x %= 160;
			return true;
		};
	};

int main(){
	Demo game;
	game.ConstructConsole(160, 100, 8, 8);
	game.Start();

	return 0;
};