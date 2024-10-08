// #include "ArrayHandler.h"

// template<typename T>
// void ArrayHandler<T>::AppendElem(T elem) {
//     _array[_count++] = elem;
//     _min = (elem < _min) ? elem : _min;
//     _max = (elem > _max) ? elem : _max;
// }



// template<typename T>
// T ArrayHandler<T>::GetMax() const {
//     return _max;
// }


// template<typename T>
// T ArrayHandler<T>::GetMin() const {
//     return _min;
// }


// template<typename T>
// bool ArrayHandler<T>::IsContains(T __restrict* elem) const {
//     const T __restrict* end = _array + _count;
//     const T __restrict* ptr = _array;


//     while (ptr + 16 <= end) {
//         if (*ptr == elem || *(ptr + 1) == elem || *(ptr + 2) == elem || *(ptr + 3) == elem ||
//             *(ptr + 4) == elem || *(ptr + 5) == elem || *(ptr + 6) == elem || *(ptr + 7) == elem ||
//             *(ptr + 8) == elem || *(ptr + 9) == elem || *(ptr + 10) == elem || *(ptr + 11) == elem ||
//             *(ptr + 12) == elem || *(ptr + 13) == elem || *(ptr + 14) == elem || *(ptr + 15) == elem) {
//             return true;
//         }
//         ptr += 16;
//     }

//     while (ptr < end) {
//         if (*ptr == elem) {
//             return true;
//         }
//         ++ptr;
//     }

//     return false;
// }
// template<typename T>
// ArrayHandler<T>::~ArrayHandler() {
//     delete[] _array;
// }