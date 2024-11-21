#include "BitField.h"

class newclass
{
private:
    size_t _size;
    vector<BitField> _arr;
    size_t _maxpow;
    BitField _bf;

public:
    newclass(size_t maxpow, size_t size): _arr(size) , _bf(maxpow){
        _maxpow = maxpow;
        _size = size;
        for (int i = 0; i < size; i++){
            _arr[i] = _bf;
        }
    }

    void FillArray(){
        uint64_t tmp;
        int one = 1;
        for (size_t i = 0; i < _size; i++){
            cin >> tmp;
            for (size_t j = 0; j < _maxpow; j++){
                if (tmp & 1)
                    _arr[i].SetBit(j);
                tmp >> 1;
            }
        }
    }

};
