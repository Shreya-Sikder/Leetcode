#include <latch>
 class Foo {
private:
latch first_done{1};
latch second_done{1};
public:
    Foo() {
        
    }

    void first(function<void()> printFirst) {
 
        printFirst();
        first_done.count_down();
    }

    void second(function<void()> printSecond) {
        first_done.wait();
        printSecond();
        second_done.count_down();
    }

    void third(function<void()> printThird) {
      second_done.wait();
        printThird();
        
    }
};