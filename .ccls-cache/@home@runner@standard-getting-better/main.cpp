#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  vector<int> z(500,0);

  for (int i:z)
    cout<<i<<" ";
  cout<<endl;

  int a=5;
  int b=3;
  cout<<"a-> "<< a<<" "<<"b-> "<<b<<endl;

  swap(a,b);

  cout<<"a-> "<< a<< " "<<"b-> "<<b<<endl;

  //min
  cout<<"min -> "<<min(a,b)<<endl;
  //max
  cout<<"max -> "<<max(a,b)<<endl;
  
}