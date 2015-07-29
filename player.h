#ifndef _PLAYER_
#define _PLAYER_

class Player {

 private:
  int tokens;

 public:
  // Constructors
  Player();

  // Tokens interactions
  int giveTokens(int tokens);
  void takeTokens(int tokens);

  // Getter
  int getTokens() const;
};

#endif
