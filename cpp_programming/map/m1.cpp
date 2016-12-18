#include <cstdio>
#include <map>
#include <string>
using namespace std;

// map implementation using BST (Binary Search Tree), blanced Red-Black tree actually
int main() {
	map<string, int> mapper;

	mapper["thomas"] = 4;
	mapper["bin"] = 3;
	mapper["ginner"] = 7;

	for (map<string, int>::iterator it = mapper.begin(); it != mapper.end(); it++)
	{
		printf("%s %d\n", ((string)it->first).c_str(), it->second);
	}

	return 0;
}