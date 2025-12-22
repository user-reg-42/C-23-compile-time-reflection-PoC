#include <print>
#include <string_view>

template<typename T>
constexpr std::string_view type_name() {
    constexpr std::string_view func = __PRETTY_FUNCTION__;
    constexpr std::size_t start = func.find("T = ") + 4;
    constexpr std::size_t end = func.rfind("]");
    return func.substr(start, end - start);
}

struct Agent {
    void run() const { std::println("ZENITH AGENT — ACTIVE"); }
};

int main() {
    std::println("ZENITH IMPACT — REFLECTION ON AGENT");
    std::println("Agent type: {}", type_name<Agent>());

    Agent a;
    a.run();

    return 0;
}
