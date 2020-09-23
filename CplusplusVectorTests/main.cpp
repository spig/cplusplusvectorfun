//
//
// 
//


#include <iostream>
#include <vector>
#include <sstream>
#include "Predicate.hpp"
#include "DatalogProgram.hpp"

int main(int argc, const char * argv[]) {
    DatalogProgram* dp = new DatalogProgram();
    Predicate* predicate = new Predicate();

    dp->addScheme(predicate);

    for (uint i=0; i<100; i++) {
        Param* param = new Param();
        std::stringstream name;
        name << "Steve " << i;
        param->setName(name.str());
        dp->addSchemeParam(param);
    }

    return 0;
}
