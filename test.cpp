//test.cpp

// you may write array comparison function to compare true/actual and expected use in test cases to see if the array is in reverse or not.

#include <cassert>
#include <string>
#include "reverse.hpp"

template <typename T>
bool arrays_equal(const T* a, const T* b, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {

    //int test
    int ai[]{1, 2, 3, 4};
    int expected_i[]{4, 3, 2, 1};
    int ni = sizeof(ai) / sizeof(ai[0]);

    reverse_array(ai, ni);
    assert(arrays_equal(ai, expected_i, ni));


    //double test
    double ad[]{1.5, 2.5, 3.5, 4.5};
    double expected_d[]{4.5, 3.5, 2.5, 1.5};
    int nd = sizeof(ad) / sizeof(ad[0]);

    reverse_array(ad, nd);
    assert(arrays_equal(ad, expected_d, nd));


    //char test
    char letters[]{'A','B','C','D'};
    char expected_c[]{'D','C','B','A'};
    int nc = sizeof(letters) / sizeof(letters[0]);

    reverse_array(letters, nc);
    assert(arrays_equal(letters, expected_c, nc));


    //std::string test
    std::string words[]{"one","two","three"};
    std::string expected_s[]{"three","two","one"};
    int ns = sizeof(words) / sizeof(words[0]);

    reverse_array(words, ns);
    assert(arrays_equal(words, expected_s, ns));


    return 0;
}