//
//
// 
//


#ifndef DatalogProgram_hpp
#define DatalogProgram_hpp

#include <stdio.h>
#include <vector>
#include "Predicate.hpp"
#include "Param.hpp"

class DatalogProgram {
public:
    DatalogProgram(){}
    void addScheme(Predicate* scheme);
    void addSchemeParam(Param* param);
private:
    std::vector<Predicate*> schemes;
};

#endif /* DatalogProgram_hpp */
