#include "utils.h"

int max(int a, int b) {
  if (a < b) {
    return b;
  } else {
    return a;
  }
}

int min(int a, int b) {
  if (a > b) {
    return b;
  } else {
    return a;
  }
}
