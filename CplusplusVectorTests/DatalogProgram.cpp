//
//
// 
//

#include "DatalogProgram.hpp"

void DatalogProgram::addScheme(Predicate* scheme) {
    schemes.push_back(scheme);
}

void DatalogProgram::addSchemeParam(Param* param) {
    if (schemes.size() > 0) {
        schemes.back()->addParam(param);
    }
}
