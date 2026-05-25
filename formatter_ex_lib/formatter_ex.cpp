#include "formatter_ex.h"
#include "formatter.hpp"

void formatter(std::ostream& out, const std::string& text) {
    out << "=== ";
    print(text, out);
    out << " ===" << std::endl;
}
