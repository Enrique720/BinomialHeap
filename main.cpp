#include <iostream>
#include "Binomial_heap.h"
using namespace std;

int main () {
  Binomial_heap<int> myBH;
  int n = 10;

  for(int i = 0; i<n; i++){
    auto newNodo  = new NodoB<int>(i);
    myBH.Insert(newNodo);
  }
    myBH.Delete_Min();
    myBH.PrintHeap();
}