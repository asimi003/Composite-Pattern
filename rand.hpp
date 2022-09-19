#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <stdlib.h>

class Rand : public Base {
	public:
		Rand() : Base() { object = new Op(rand() % 100); }
		virtual double evaluate() { return object->evaluate(); }
		virtual std::string stringify() { return object->stringify(); }
	private:
		Base* object;
};

#endif
