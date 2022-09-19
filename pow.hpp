#include "base.hpp"
#include <string>

class Pow : public Base {
        private:
                Base* LHS;
                Base* RHS;
        public:
                /*constructer*/
                Pow(Base* object1, Base* object2) : Base() {
                        this->LHS = object1;
                        this->RHS = object2;
                }
                /*Member Function*/
                virtual double evaluate() {
                        return LHS->evaluate() ^  RHS->evaluate();
                }
                virtual std::string stringify() {
                        return LHS->stringify() + " ^  " + RHS->stringify();
                        }
};

#endif

