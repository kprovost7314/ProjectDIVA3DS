#include "main.h"

void startMenu(){
  printf("TEST\n");
  printf("Press A to go back to menu");
  
  if (kDown & KEY_A){
    main();
  }

}
