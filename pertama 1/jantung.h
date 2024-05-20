#ifndef JANTUNG_H
#define JANTUNG_H
#include <iostream>
using namespace std;

class jantung {
	public:
		jantung() {
			cout << "jantung di hidupkan\n";
		}
		~jantung() {
			cout << "jantung dimatikan\n";
		}
};
#endif
