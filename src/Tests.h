#pragma once
#include "Tests.g.h"

namespace winrt::Test::implementation
{
    struct Tests
    {
        Tests() = default;

        static void Simple();
    };
}

namespace winrt::Test::factory_implementation
{
    struct Tests : TestsT<Tests, implementation::Tests>
    {
    };
}
