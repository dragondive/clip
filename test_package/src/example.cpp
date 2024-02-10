#include "clip.h"
#include <vector>
#include <string>

int main() {
    clip();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    clip_print_vector(vec);
}
