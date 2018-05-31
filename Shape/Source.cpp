#include"Point.h"
#include"Triangle.h"
#include "Rectangle.h"
#include"Circle.h"

int main() {
	int n;
	cout << "enter the task num:";
	cin >> n;
	switch (n) {
	
	case 1: {
		Triangle t1(2, 3, 4, 1, 1);
		Triangle t2(2, 3, 4, 4, 4);
		cout << (t1 < t2) << endl;
		cout  << endl;
		cout << (t1 == t2) << endl;
		cout  << endl;
		t1.rotation(90);
		cout << t1 << endl;
		cout << endl;
		t1.move(2, 2);
		cout << t1 << endl;
		cout  << endl;

	}break;
	
	case 2: {
		Rectangle t1(2, 3, 1, 1);
		Rectangle t2(2, 3, 3, 3);
		cout << (t1 < t2) << endl;
		cout  << endl;
		cout << (t1 == t2) << endl;
		cout  << endl;
		t1.rotation(90);
		cout << t1 << endl;
		cout  << endl;
		t1.move(2, 2);
		cout << t1 << endl;
		cout<< endl;

	}break;
		
	case 3: {
		Circle t1(2, 1, 1);
		Circle t2(3, 3, 3);
		cout << (t1 < t2) << endl;
		cout  << endl;
		cout << (t1 == t2) << endl;
		cout << endl;
		t1.move(2, 2);
		cout << t1 << endl;
		cout  << endl;
	}
	}

	system("pause");
	return 0;
}