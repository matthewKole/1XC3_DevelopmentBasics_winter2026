#include "a2.h"

unsigned flipBit(unsigned n, unsigned i){
    return n ^ (1u << i);
}

unsigned swapBits(unsigned n, unsigned i, unsigned j){
    unsigned biti = (n >> i) & 1u;
    unsigned bitj = (n >> j) & 1u;

    if (biti != bitj){
        n = n ^ (1u << i);
        n = n ^ (1u << j);
    }

    return n;
    
}

unsigned reverseBits(unsigned n){
    unsigned result = 0;
    for (unsigned i = 0; i < 32; i++){
        unsigned bit = (n >> i) & 1u;
        result = result | (bit << (31 - i));
    }
    return result;
}

unsigned countOnes(unsigned n){
    unsigned count = 0;

    while (n != 0){
        count += n & 1u;
        n = n >> 1;
    }

    return count;
}