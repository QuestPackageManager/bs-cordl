#pragma once
// IWYU pragma private; include "Unity/Collections/NativeArrayOptions.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeArrayOptions::NativeArrayOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeArrayOptions::NativeArrayOptions()   {
}
constexpr ::Unity::Collections::NativeArrayOptions  Unity::Collections::NativeArrayOptions::UninitializedMemory{static_cast<int32_t>(0x0)};
constexpr ::Unity::Collections::NativeArrayOptions  Unity::Collections::NativeArrayOptions::ClearMemory{static_cast<int32_t>(0x1)};
