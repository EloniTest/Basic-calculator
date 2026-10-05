#pragma once

namespace math {
    template <typename T, typename U>
    auto add(T& a, U& b) {return a + b;}

    template <typename T, typename U>
    auto subtract(T& a, U& b) {return a - b;}
    
    template <typename T, typename U>
    auto multiply(T& a, U& b) {return a * b;}

    template <typename T, typename U>
    auto divide(T& a, U& b) {return a / b;}

}