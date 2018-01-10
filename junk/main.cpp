#include "class/tcl.hh"
#include <iostream>

int main(int argc, char *argv[]) {
	tcl *t = new tcl();
	t->setData(3);
	std::cout << t->getData() << std::endl;
	return 0;
}
