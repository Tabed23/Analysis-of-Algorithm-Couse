#include"vector.h"

int main()
{
    vector<int>ptr;
    ptr.push_back(1);
    ptr.push_back(2);
    ptr.push_back(3);
    ptr.push_back(4);
    ptr.push_back(5);
    ptr.push_back(6);
    ptr.push_back(7);
    ptr.push_back(8);
    ptr.push_back(9);
    ptr.print();
    cout << "size of vector :" << ptr.Size()<<endl;
    cout << "vector at index 5 :" << ptr.at(5)<<endl;
    cout <<"vector operator [] at 4 :" <<ptr[4]<<endl;
    cout <<"vecotr front:" << ptr.front()<<endl;
    cout <<"vector back : " << ptr.back()<<endl;
    cout << "check if empty :" << ptr.empty()<<endl;
    cout <<"pop back vector"<<endl;
    ptr.pop_back();
    ptr.pop_back();
    ptr.pop_back();
    ptr.pop_back();
    ptr.pop_back();
    ptr.pop_back();
    cout << "size of vector :" << ptr.Size()<<endl;
    ptr.print();
    return 0;
}

