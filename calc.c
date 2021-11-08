#include <stdio.h>
#include <emscripten/emscripten.h>

long long EMSCRIPTEN_KEEPALIVE calc()
{
    long long result = 1;
    for (int i = 1; i <= 10000000; i++)
    {
        result += i;
    }

    return result;
}
