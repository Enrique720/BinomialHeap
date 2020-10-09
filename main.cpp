#include <iostream>
#include "Binomial_heap.h"
using namespace std;

int main () {
  Binomial_heap<int> myBH;
  string filename;
  cin >> filename;
  myBH.ReadFromFile(filename);  
  myBH.Delete_Min();
  myBH.PrintHeap();
}