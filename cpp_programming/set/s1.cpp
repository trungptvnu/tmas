#include <cstdio>
#include <set>
#include <string>
using namespace std;

// set implementation using BST (Binary Search Tree)
int main()
{

	set<int> test;
	test.insert(78);
	test.insert(40);
	test.insert(30);
	test.insert(80);
	test.insert(31);

	for (set<int>::iterator it=test.begin(); it != test.end(); it++)
	{
		printf("%d\n",*it);
	}

	return 0;
}