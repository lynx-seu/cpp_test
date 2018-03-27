
#include <iostream>
#include <vector>
#include <thread>
#include <functional>

int main(int argc, char const* argv[])
{
    std::vector<int> vi;
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);

    for (auto i : vi) {
        std::cout << i << std::endl;
    }

    vi.push_back(4);
    for (int i = 0; i < vi.size(); i++) {
        std::cout << vi.at(i) << std::endl;
    }

    const std::function<void ()> f = []() {
        std::cout << "hello,world" << std::endl;
    };
    f();

    const auto f2 = [](int a, int b) -> int {
        return a+b;
    };
    std::cout << f2(3, 4) << std::endl;

    return 0;
}

