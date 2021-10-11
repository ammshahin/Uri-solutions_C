#include <iostream.h>
#include <sstream.h>
#include <string.h>

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream in(line, std::istringstream::in);
    int n;
    vector<int> v;
    while (in >> n) {
        v.push_back(n);
    }
    return 0;
}
