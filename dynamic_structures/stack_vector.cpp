//#include <iostream>
//#include <string.h>
//#include <time.h>
//using namespace std;
//
//
//
//#include "Vector.h"
//
//template <class T>
//class Stack
//{
//private:
//    Vector<T> data;
//public:
//
//    Stack(const Stack<T>& st) : data(st.data) { }
//
//
//    void Clear() { data.Clear(); }
//
//
//    Stack& operator=(const Stack<T>& st);
//
//
//    int GetCount() const { return data.GetCount(); }
//    bool IsEmpty() const { return data.IsEmpty(); }
//
//
//    void Push(const T& item);
//    void Pop(T& item);
//    void Peek(T& item);
//};
//
//template <class T>
//Stack<T>& Stack<T>::operator=(const Stack<T>& st)
//{
//    if (this != &st)
//        data = st.data;
//    return *this;
//}
//
//template <class T>
//void Stack<T>::Push(const T& item)
//{
//    data.Insert(0, item);
//}
//
//template <class T>
//void Stack<T>::Pop(T& item)
//{
//    if (!IsEmpty())
//    {
//        item = data[0];
//        data.Remove(0);
//    }
//}
//
//template <class T>
//void Stack<T>::Peek(T& item)
//{
//    if (!IsEmpty())
//        item = data[0];
//}


