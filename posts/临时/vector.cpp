#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  vector<int> v1;     // 空vector
  vector<int> v2(4);  // 大小为4的空vector
  vector<int> v3{1,2,3};  //  vector内容为{1,2,3}
  v1.push_back(3);    // 添加元素
  v2.size();          // 查看大小
  sort(v3.begin(),v3.end()); // 进行排序
}
