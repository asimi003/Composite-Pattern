#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <string>

class Op : public Base {
    private: 
	double integer;
    public:
        Op(double value) : Base() { integer = value; }
        virtual double evaluate() { return integer; }
        virtual std::string stringify() { return std::to_string(integer); }
};

#endif //__OP_HPP__
