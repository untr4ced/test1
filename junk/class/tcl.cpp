#include "tcl.hh"

tcl::tcl() {
	this->data = 0;
}

tcl::~tcl() {
	this->data = 0;
}

void tcl::setData(int data) {
	this->data = data;
}

int tcl::getData() {
	return this->data;
}
