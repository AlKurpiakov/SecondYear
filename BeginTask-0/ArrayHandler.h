#include <cstddef>
#include <cstring>
#include <cstdint>
#include <limits>

template<typename T>
class ArrayHandler {
private:
    T* _array;
    size_t _size;
    size_t _count;
    T _min;
    T _max;
public:
    ArrayHandler(size_t initial_size = 1000000)
        : _size(initial_size), _count(0), _min(std::numeric_limits<T>::max()), _max(std::numeric_limits<T>::min()) {
        _array = new T[_size];
    }

    void AppendElem(T elem) {
        _array[_count++] = elem;
        _min = (elem < _min) ? elem : _min;
        _max = (elem > _max) ? elem : _max;
    }

    T GetMax() const {
        return _max;
    } 

    T GetMin() const {
        return _min;
    }

    
    bool IsContains(const T &elem) const {
        for (size_t i = 0; i < _count; ++i) {
            if (_array[i] == elem) return true;
        }
        return false;
    }
    ~ArrayHandler() {
        delete[] _array;
    }
};