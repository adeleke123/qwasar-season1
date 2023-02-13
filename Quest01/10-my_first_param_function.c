#include <stdio.h>
// function will printf("detonation in... %d secondes.\n", seconds_left);
void detonation_in(int timer)
{
    printf("detonation in... %d secondes.\n", timer);
}

int main() {
  int timer = 10;

  while (timer > 0) {
    detonation_in(timer);
    timer--;
  }
  return 0;
}
