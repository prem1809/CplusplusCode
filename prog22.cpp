//static variable of class initialize explicitly

#include<iostream>

class staticOutside {

	public:
		static int num;
	staticOutside() {
	
	}
};
int staticOutside::num = 1;
int staticOutside::num = 2;		//error : redefination not allowed

int main() {

}
