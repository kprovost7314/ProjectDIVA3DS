#include "main.h"

void startMenu(){
  printf("TEST\n");
  printf("Press A to go back to menu");
  
  u32 kDown = hidKeysDown();
  
  if (kDown & KEY_A){
    main();
  }

}
