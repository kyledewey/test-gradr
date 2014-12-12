#include "stdio.h"
#include "unistd.h"

int main() {
  sleep(3);
  printf("test1:PASS\ntest2:FAIL\n");
  return 0;
}

