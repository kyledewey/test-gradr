#include "stdio.h"
#include "unistd.h"

int main() {
  usleep(500000);
  printf("test1:PASS\ntest2:FAIL\n");
  return 0;
}

