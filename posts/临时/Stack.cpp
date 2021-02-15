#include <stack>
using namespace std;

int main(){
  stack<int> s;  // 定义一个空栈
  s.push(1);     // 向栈内添加元素
  s.top();       // 查看栈顶元素
  s.pop();       // 出栈，无返回值
  s.size();      // 查看元素个数
}

