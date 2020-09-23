//
//
// 
//


#include <iostream>
#include <vector>
#include "Predicate.hpp"
#include "DatalogProgram.hpp"

int main(int argc, const char * argv[]) {
    DatalogProgram* dp = new DatalogProgram();
    Predicate* predicate = new Predicate();

    dp->addScheme(predicate);

    Param* param = new Param();
    param->setName("Steve");
    dp->addSchemeParam(param);
    
    return 0;
}
