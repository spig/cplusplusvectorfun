//
//
// 
//


#ifndef Predicate_hpp
#define Predicate_hpp

#include <vector>
#include "Param.hpp"

class Predicate {
public:
    Predicate(){}
    void addParam(Param* param);
private:
    std::vector<Param*> params;
};

#endif /* Predicate_hpp */
