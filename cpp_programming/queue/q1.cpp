// Example program
#include <cstdio>
#include <queue>

// operations of queue (FIFO-First In First Out)
// push(i): push an item to stack
// pop(): get an item from stack
// front(): return the top item
// size(): return the size of stack
// empty(): check the stack is empty or not

using namespace std;
int main()
{
    queue<int> myq;
    
    myq.push(2);
    myq.push(5);
    
    printf("frist element is %d\n", myq.front());
    printf("frist element is %d\n", myq.front());
   
    myq.pop();
    
    printf("frist element is %d\n", myq.front());
    
    myq.push(7);

    printf("size of queue %d\n", myq.size());

    printf("frist element is %d\n", myq.front());
 
    myq.pop();

    printf("size of queue %d\n", myq.size());
    
    return 0;
}