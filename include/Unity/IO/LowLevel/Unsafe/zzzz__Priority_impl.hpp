#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/Priority.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__Priority_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::Priority::Priority(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::Priority::Priority()   {
}
constexpr ::Unity::IO::LowLevel::Unsafe::Priority  Unity::IO::LowLevel::Unsafe::Priority::PriorityLow{static_cast<int32_t>(0x0)};
constexpr ::Unity::IO::LowLevel::Unsafe::Priority  Unity::IO::LowLevel::Unsafe::Priority::PriorityHigh{static_cast<int32_t>(0x1)};
