#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> a(500,0);

  for (int i:a)
    cout<<i<<" ";
  cout<<endl;
}