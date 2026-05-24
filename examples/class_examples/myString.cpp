#include "myString.h"
#include <cstring>

// 기본 생성자
myString::myString(void) :capacity_(0),size_(0),buffer_(nullptr){}

// 문자열 생성자
myString::myString(const char* pStr) {
    if (pStr == nullptr) {
        size_ = 0;
        capacity_ = 0;
        buffer_ = nullptr;
        return;
    }

    else {
        size_ = strlen(pStr);
        capacity_ = size_ + 3;

        buffer_ = new char[capacity_];
        strcpy_s(buffer_, capacity_, pStr);
    }
}

// 복사 생성자
myString::myString(const myString& rStr) {
    size_ = rStr.size_;
    capacity_ = rStr.capacity_;

    buffer_ = new char[capacity_];
    strcpy_s(buffer_, capacity_, rStr.buffer_);
}

// 소멸자
myString::~myString(void) {
    if (buffer_ != nullptr) {
        delete[] buffer_;
    }
}

const char& myString::operator[](size_t index) const{
    if (index >= size_) {
        throw std::out_of_range("Index out of range");
    }
    return buffer_[index];
}
ostream& operator<<(ostream& os, const myString& rStr) {
    if (rStr.buffer_ != nullptr) {
        os << rStr.buffer_;
    }
    return os;
}
istream& operator>>(istream& is, myString& rStr) {
    char temp[1024];
    is >> temp;
    rStr = myString(temp);
    return is;
}

myString& myString::operator=(const myString& rStr) {
    if (this == &rStr) {
        return *this;
    }
    if (buffer_ != nullptr) {
        delete[] buffer_;
    }

    size_ = rStr.size_;
    capacity_ = rStr.capacity_;
    buffer_ = new char[capacity_];

    strcpy_s(buffer_, capacity_, rStr.buffer_);

    buffer_[size_] = '\0';
    return *this;
}	
myString myString::operator+(const char* pStr) const {
    if (pStr == nullptr) {
        return *this;
    }
    int size = 0;
    while (pStr[size])++size;

    int newSize = size_ + size;
    int newCapacity = newSize +3;
    char* newBuffer = new char[newCapacity];

    strcpy_s(newBuffer, newCapacity, buffer_);
    strcat_s(newBuffer, newCapacity, pStr);

    return myString(newBuffer);

}
myString& myString::operator+=(const char* pStr) {
    if (pStr == nullptr) {
        return *this;
    }
    int size = strlen(pStr);
    
    int newSize = size_ + size;
    int newCapacity = newSize + 3;
    char* newBuffer = new char[newCapacity];

    for (int i = 0;i < size_;i++) {
        newBuffer[i] = buffer_[i];
    }

    for (int i = 0;i < size;i++) {
        newBuffer[size_+i] = pStr[i];
    }
    newBuffer[newSize] = '\0';

    if (buffer_ != nullptr) {
        delete[] buffer_;
    }

    size_ = newSize;
    capacity_ = newCapacity;
    buffer_ = newBuffer;

    return *this;
}


bool myString::operator==(const myString& rStr) const {
    if (size_ != rStr.size_) {
        return false;
    }

    for (int i = 0;i < size_;i++) {
        if (buffer_[i] != rStr.buffer_[i]){
                return false;
        }
    }
    return true;
}
bool myString::operator!=(const myString& rStr) const {
    if (size_ != rStr.size_) {
        return true;
    }

    for (int i = 0;i < size_;i++) {
        if (buffer_[i] != rStr.buffer_[i]) {
            return true;
        }
    }
    return false;
}



