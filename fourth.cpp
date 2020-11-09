#include <iostream>

class Picker {
private:
    int* array;
public:
    int length;
    Picker(int* arr, int size) {
        length = size;
        array = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = arr[i];
        }
    }
    int GetMin() {
        int min = array[0];
        for (int i = 0; i < length; i++) {
            if (min >= array[i])
                min = array[i];
        }
        return min;
    }
    int GetMax() {
        int max= array[0];
        for (int i = 0; i < length; i++) {
            if (max <= array[i])
                max = array[i];

        }
        return max;
    }

};

int main() {
    int arr[3] = { 2, 3, 4 };
    Picker picker(arr, 3);
    std::cout << picker.GetMin() << std::endl;
    std::cout << picker.GetMax();

}
