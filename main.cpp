#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  cout << "Hello World!"<<endl;

  int a = 0;
  int *b; 

  b = &a;

  cout <<"This is the address of a: "<< b << endl;
  cout <<"This is the value of b: "<< *b << endl;
  
  cout <<"Testing << endl;

  return 0;
}
