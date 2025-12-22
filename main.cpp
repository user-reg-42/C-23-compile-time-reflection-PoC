#include <print>
#include <concepts>
#include <string_view>
#include <source_location>

template<typename T>
constexpr std::string_view type_name() {
    constexpr std::string_view func = __PRETTY_FUNCTION__;
    constexpr std::size_t start = func.find("T = ") + 4;
    constexpr std::size_t end = func.rfind("]");
    return func.substr(start, end - start);
}

template<typename T>
concept Printable = requires(T t) {
    { t.print() } -> std::same_as<void>;
};

struct Message {
    void print() const { std::println("ZENITH OURCC — REFLECTION POC"); }
};

static_assert(Printable<Message>);

int main() {
    std::println("OURCC v1.0 — COMPILE-TIME REFLECTION POC");
    std::println("Type: {}", type_name<int>());
    std::println("Type: {}", type_name<std::string>());
    std::println("Type: {}", type_name<Message>());

    Message msg;
    msg.print();

    return 0;
}
