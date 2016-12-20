#include <cstdio>
#include <stack>
using namespace std;
// operations of stack (LIFO-Last In First Out)
// push(i): push an item to stack
// pop(): get an item from stack
// top(): return the top item
// size(): return the size of stack
// empty(): check the stack is empty or not

int main() {

	stack<int> st;

	st.push(2);	
	st.push(3);
	st.push(4);
	printf("size of stack %d\n", st.size());
	printf("the top element is %d\n",st.top());	
	printf("the top element is %d\n",st.top());
	printf("pop out an element \n");
	st.pop();
	printf("size of stack %d\n", st.size());

}
