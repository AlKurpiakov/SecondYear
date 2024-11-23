#include "BitField.h"

class newclass
{
private:
    size_t _size;
    BitField _arr;
    size_t _maxpow;

public:
    newclass(size_t maxpow, size_t size): _arr(maxpow * size){
        _maxpow = maxpow;
        _size = size;
    }

    void FillArray(){
        uint64_t tmp;
        int one = 1;
        for (int j = 0; j <_size; j++){
                cin >> tmp;
            for (size_t i = 0; i < _maxpow; i++){
                    if (tmp & 1)
                        _arr.SetBit(i);
                    tmp = tmp >> 1;
            }
        }
    }

    friend ostream& operator<<(ostream& os, const newclass& nc){
        uint64_t tmp, tmp2;
        for (int i = 0; i < nc._size; i++){
            for (int j = i*nc._maxpow; j < (i+1)*nc._maxpow; j++ ){
                if (1 & nc._arr.GetBit(j)){
                    tmp2 += 1;
                }
                tmp2 = tmp2 << 1;
            }

            for (int k = 0; k < nc._maxpow; k++ ){
                if (1 & tmp2){
                    tmp += 1;
                }
                tmp = tmp << 1;
            }

            os << tmp << endl;
        }

        return os;

    }

};
