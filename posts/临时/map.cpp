#include <map>           // 树状map,有序,按照第一个键排序
#include <unordered_map> // 哈希map,无序
#include <iostream>
using namespace std;

int main(){
  map<int,int> m1;
  unordered_map<int,int> m2;

  m1[1] = 1;
  m1[5] = 2;
  m1[3] = 3;
  cout << "Map" << endl;
  for(auto x:m1){
    cout << x.first << " " << x.second << endl;
  }

  m2[1] = 1;
  m2[5] = 2;
  m2[3] = 3;
  cout << "unordered_Map" << endl;
  for(auto x:m2){
    cout << x.first << " " << x.second << endl;
  }
}
