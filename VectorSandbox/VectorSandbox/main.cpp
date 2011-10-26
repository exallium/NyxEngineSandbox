#include<iostream>
#include"vector.h"

using namespace std;

int main(int argc, char** argv) {
	vector2 a = {1, 2};
	vector2 b = {3, 4};
	vector2 r;

	AddVector2(a, b, r);

	cout << r.x << " " << r.y << endl;
	cin.get();

	return 0;
}