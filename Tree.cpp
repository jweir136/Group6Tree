#include <iostream>
#include "Node.h"
#include "Tree.h"

using namespace std;

Tree::Tree() {
  this->root = NULL;
  this->size = 0;
}

int Tree::size() {
  return this->size;
}
