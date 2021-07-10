class PerlinNoise {
private:
    int[512] hashTable;

    inline int hash(int x, int y, int z) {
        return hashTable[hashTable[hashTable[x] + y] + z];
    }


public:
  PerlinNoise(int seed) {

  }

  PerlinNoise() {
      PerlinNoise(0);
  }
}


inline double lerp(double t, double a, double b) {
    return a + t * (b - a);
}

inline double quintic(double t) {
    return t * t * t * (t * (t * 6 - 15) + 10);
}

double grad(int seed) {
    int lo = seed & 15; // map lo 4 bits of seed to gradient directions

}






