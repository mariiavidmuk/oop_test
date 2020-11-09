#include <iostream>

class Picker{
private:
    int* array;
public:
    int length;
    Picker(int* arr, int size){
        length = size;
        array = new int[size];
        for (int i = 0; i < size; i++){
            array[i] = arr[i];
        }
    }
    int GetMin(){
        int min = array[0];
        for (int i = 0; i < length; i++){
            if (array[i] < array[i + 1])
                min = array[i];
            else
                min = array[i + 1];
        }
        return min;
    }
    int GetMax(){
        int max = array[0];
        for (int i = 0; i < length; i++){
            if (array[i] > array[i + 1])
                max = array[i];
            else
                max = array[i + 1];
        }
        return max;
    }

};

int main() {
    int arr[3] = {1, 2, 3};
    Picker picker(arr, 3);
    std::cout <<picker.GetMax()<< std::endl;
    std::cout <<picker.GetMin();

}


