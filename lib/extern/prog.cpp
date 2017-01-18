// compile, (suppose that already exported shared lib)
// g++ prog.cpp -lctest

#include <cstdio>
using namespace std;

extern "C" {
void ctest1(int *);
void ctest2(int *);
}

int main() {
	int x;
	
	ctest1(&x);
	printf("%d\n",x);

	return 0;
}
