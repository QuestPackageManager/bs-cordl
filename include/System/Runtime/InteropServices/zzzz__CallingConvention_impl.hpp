#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/CallingConvention.hpp"
#include "System/Runtime/InteropServices/zzzz__CallingConvention_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::CallingConvention::CallingConvention(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::CallingConvention::CallingConvention()   {
}
constexpr ::System::Runtime::InteropServices::CallingConvention  System::Runtime::InteropServices::CallingConvention::Winapi{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::InteropServices::CallingConvention  System::Runtime::InteropServices::CallingConvention::Cdecl{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::InteropServices::CallingConvention  System::Runtime::InteropServices::CallingConvention::StdCall{static_cast<int32_t>(0x3)};
constexpr ::System::Runtime::InteropServices::CallingConvention  System::Runtime::InteropServices::CallingConvention::ThisCall{static_cast<int32_t>(0x4)};
constexpr ::System::Runtime::InteropServices::CallingConvention  System::Runtime::InteropServices::CallingConvention::FastCall{static_cast<int32_t>(0x5)};
