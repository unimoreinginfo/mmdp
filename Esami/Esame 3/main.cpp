#include "lzs.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {
    ifstream is(argv[1]);
    ofstream os(argv[2]);

    lzs_decompress(is, os);

}