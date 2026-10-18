template <typename X, typename Y>
auto add(X x, Y y) -> decltype(x + y) {
    return x + y;
}

int main() {
    add(1, 2);     // == 3
    add(1, 2.0);   // == 3.0
    add(1.5, 1.5); // == 3.0
}