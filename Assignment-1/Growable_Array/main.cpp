#include"Growable.h"

int main()
{
    Growable<char>ptr;
    ptr.push_back('a');
    ptr.push_back('b');
    ptr.push_back('c');
    ptr.push_back('d');
    ptr.push_back('e');
    ptr.push_back('f');
    ptr.push_back('g');
    ptr.push_back('h');
    ptr.push_back('i');
    ptr.print();
    cout << "size of vector :" << ptr.Size()<<endl;
    cout << "Array at index 5 :" << ptr.at(5)<<endl;
    cout <<"Array operator [] at 4 :" <<ptr[4]<<endl;
    cout <<"Array front:" << ptr.front()<<endl;
    cout <<"Array back : " << ptr.back()<<endl;
    cout << "check if empty :" << ptr.empty()<<endl;
    cout <<"pop back vector"<<endl;
    ptr.pop();
    ptr.pop();
    ptr.pop();
    ptr.pop();
    ptr.pop();
    ptr.pop();
    cout << "size of vector :" << ptr.Size()<<endl;
    return 0;
}


