#include <iostream>
#include <vector>
#include <algorithm>

class MyArray {
private:
    std::vector<int> arr;
    size_t capacity;

public:
    // Constructor to initialize the array with a given size
    MyArray(size_t size) : capacity(size) {
        arr.reserve(size);
    }

    // Get the current length of the array
    size_t getLength() const {
        return arr.size();
    }

    // Add element at the beginning
    void addAtBegin(int x) {
        if (arr.size() < capacity) {
            arr.insert(arr.begin(), x);
        } else {
            std::cout << "Array is at full capacity" << std::endl;
        }
    }

    // Add element at the end
    void addAtEnd(int x) {
        if (arr.size() < capacity) {
            arr.push_back(x);
        } else {
            std::cout << "Array is at full capacity" << std::endl;
        }
    }

    // Remove element from the end
    void removeFromEnd() {
        if (!arr.empty()) {
            arr.pop_back();
        } else {
            std::cout << "Array is empty" << std::endl;
        }
    }

    // Remove element from the beginning
    void removeFromBegin() {
        if (!arr.empty()) {
            arr.erase(arr.begin());
        } else {
            std::cout << "Array is empty" << std::endl;
        }
    }

    // Find element x, return index or -1 if not found
    int find(int x) const {
        auto it = std::find(arr.begin(), arr.end(), x);
        if (it != arr.end()) {
            return std::distance(arr.begin(), it);
        }
        return -1;
    }

    // Print the array
    void print() const {
        for (int num : arr) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
};

// Example Usage:
int main() {
    MyArray mar(50);
    mar.addAtBegin(6);
    mar.addAtEnd(7);
    mar.print();
    std::cout << "Index of 6: " << mar.find(6) << std::endl;
    return 0;
}
