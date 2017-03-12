#include <cstdio>
using namespace std;


class textView {
public:
	textView() {
		printf("this is adaptee\n");
	}
	void getExtent() {
		printf("implement getExtent here\n");
	}
	bool isEmpty() {
		return false; //for test
	}
};

class shape {
public:
	
	shape() {
		printf("constructor - this is base shape class\n");
	}

	virtual void boundingBox() {
		printf("this is default boundingBox\n");
		// draw applied for Lineshape,CicleShape, all common shape
	}

};

// Textshape is adapter
// texView is adaptee
class textShape : public shape {
public:
	textShape(textView* t) {
		_text = t;
	}
	void boundingBox(){
		_text->getExtent();
	}
	bool isEmpty() {
		return _text->isEmpty();
	}
	
private:
	textView* _text;

};

int main() {
	textView* tv;
	shape* ts = new textShape(tv);
	ts->boundingBox();

	return 0;
}