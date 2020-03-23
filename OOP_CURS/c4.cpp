#include <iostream>
#include <algorithm>
#include <vector>
#include "shape.h"

//H1 
using namespace std;
template <typename t>
t add(vector<t> A, int start, int end, t aw)
{
    //int x = A.end;
    if (start > A.size() || end > A.size())
        return aw;
    for (int i = start; i < end; i++) {
        aw += A[i];
    }
    return aw;

}
//H2
template <typename T>
T add_lambda(vector<T> A, int start, int end, T aw)
{
    auto f1 = [&aw](T x, T y) { aw = x + y; };
    if (start > A.size() || end > A.size())
        return aw;
    for (int i = start; i < end; i++)
        f1(aw, A[i]);
    return aw;
}

//H3  2)
template <typename F>
void apply(std::vector <shape*> vec, F f)
{
    std::for_each(vec.begin(), vec.end(), f);
}


int main()
{
    vector<int> A = { 4, 8, 2, 1, 5 };
    int x = add<int>(A, 2, 0, 3);
    int y = add_lambda<int>(A, 3, 16, 5);
    cout << x << '\n';
    cout << y << '\n';
    shape a = shape("A", 1.0);
    shape* a1 = &a;
    shape b = shape("B", 2.0);
    shape* b1 = &b;
    shape c = shape("C", 3.0);
    shape* c1 = &c;
    shape d = shape("D", 4.0);
    shape* d1 = &d;
    shape e = shape("E", 5.0);
    shape* e1 = &e;

    std::vector <shape*> B = { a1, b1, c1, d1, e1 };

    apply(B, mul(10));
    apply(B, __str__());
    apply(B, divide(10));
    apply(B, __str__());
}
