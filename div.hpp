#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include <string>

class Div : public Base {
        private:
                Base* lhs_a;
                Base* rhs_b;
        public:
                /*constructer*/
               	Div(Base* object1, Base* object2) : Base() {
                        lhs_a = object1;
                        rhs_b = object2;
                }
                /*Member Function*/
                virtual double evaluate() {
			if( rhs_b->evaluate() == 0) {
				return 0;
			}
                        return lhs_a->evaluate() / rhs_b->evaluate();
                }

                virtual std::string stringify() {
                        return lhs_a->stringify() + " / " + rhs_b->stringify();
                        }
};

#endif

