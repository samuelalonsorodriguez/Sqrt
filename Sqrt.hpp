#pragma once
#include <Core\Types.hpp>
#include <Core\Inline.hpp>
#include <Core\Intrinsics.hpp>

namespace Alice
{
    namespace Math
    {
        namespace Arithmetic
        {
            AliceInline f32 Sqrt(f32 x) noexcept
            {
                #if defined(AliceIos) || defined(AliceAndroid)
                #if defined(AliceFastSqrt)
                __asm__ ("frsqrte" : "=t" (x) : "0" (x));
                __asm__ ("fmul" : "=t" (x) : "0" (x));
                #else
                __asm__ ("fsqrt" : "=t" (x) : "0" (x));
                #endif
                return x;
                #else
                __m128 xx;
                xx f128[0] = x;
                #if defined(AliceFastSqrt)
                return _mm_mul_ss(xx, _mm_rsqrt_ss(xx)) f128[0];
                #else
                return _mm_sqrt_ss(xx) f128[0];
                #endif
                #endif
            }

            AliceInline f64 Sqrt(f64 x) noexcept
            {
                #if defined(AliceIos) || defined(AliceAndroid)
                #if defined(AliceFastSqrt)
                __asm__ ("frsqrte" : "=t" (x) : "0" (x));
                __asm__ ("fmul" : "=t" (x) : "0" (x));
                #else
                __asm__ ("fsqrt" : "=t" (x) : "0" (x));
                #endif
                return x;
                #else
                __m128d xx;
                xx d128[0] = x;
                return _mm_sqrt_sd(xx, xx) d128[0];
                #endif
            }
        }
    }
}
