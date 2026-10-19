#include <iostream>
#include <functional>

int applyTwice(std::function<int(int)> f, int x)
{
    return f(f(x));
}

int main()
{
    auto addThree = [](int n) { return n + 3; };   // a lambda
    std::cout << applyTwice(addThree, 10) << '\n'; // 16
}