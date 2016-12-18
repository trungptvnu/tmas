// Example program
#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<int> myq;
    
    myq.push(2);
    myq.push(5);
    
    myq.pop();
    
    cout<<myq.front()<<endl;
    cout<<myq.front()<<endl;
    
    return 0;
}