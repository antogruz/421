#include "player.h"
#include "utils.h"

//Constructors

Player::Player() {
  tokens = 0;
}

// Tokens interactions

int Player::giveTokens(int tokens) {
  int tokensGiven = min(this->tokens, tokens);
  this->tokens -= tokensGiven;
  return tokensGiven;
}

void Player::takeTokens(int tokens) {
  this->tokens += tokens;
}

// Getter
int Player::getTokens() const {
  return tokens;
}
