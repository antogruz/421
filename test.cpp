#include "player.h"
#include <assert.h>

int main () {

  Player tic;
  Player tac;
  assert (tic.getTokens() == 0);
  assert (tac.getTokens() == 0);

  tic.takeTokens(5);
  assert (tic.getTokens() == 5);
  
  tac.takeTokens(tic.giveTokens(2));
  assert (tic.getTokens() == 3);
  assert (tac.getTokens() == 2);

  tic.takeTokens(tac.giveTokens(8));
  assert (tic.getTokens() == 5);
  assert (tac.getTokens() == 0);
  
  return 0;
}

