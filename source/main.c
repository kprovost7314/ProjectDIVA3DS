#include "main.h"

int main(int argc, char **argv)
{
	gfxInitDefault();

	printf("Project DIVA 3DS Homebrew\n");
	printf("Press A to start game (will currently exit)\n");
	printf("Press START to exit homebrew\n");
	
	while (aptMainLoop())
	{
		hidScanInput();

		u32 kDown = hidKeysDown();

		if (kDown & KEY_START) break;

		gfxFlushBuffers();
		gfxSwapBuffers();

		gspWaitForVBlank();
	}

	gfxExit();
	return 0;
}
