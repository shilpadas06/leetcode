uint32_t reverseBits(uint32_t n) {
     uint32_t reversed = 0;

    for (int i = 0; i < 32; i++) {
        
        uint32_t bit = n & 1;
        
        
        reversed <<= 1;
       
        reversed |= bit;
        
       
        n >>= 1;
    }

    return reversed;
}
