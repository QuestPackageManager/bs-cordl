#pragma once
// IWYU pragma private; include "System/IO/SeekOrigin.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::SeekOrigin::SeekOrigin(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::SeekOrigin::SeekOrigin()   {
}
constexpr ::System::IO::SeekOrigin  System::IO::SeekOrigin::Begin{static_cast<int32_t>(0x0)};
constexpr ::System::IO::SeekOrigin  System::IO::SeekOrigin::Current{static_cast<int32_t>(0x1)};
constexpr ::System::IO::SeekOrigin  System::IO::SeekOrigin::End{static_cast<int32_t>(0x2)};
