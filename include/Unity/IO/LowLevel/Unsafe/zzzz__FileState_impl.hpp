#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/FileState.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::FileState::FileState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::FileState::FileState()   {
}
constexpr ::Unity::IO::LowLevel::Unsafe::FileState  Unity::IO::LowLevel::Unsafe::FileState::Absent{static_cast<int32_t>(0x0)};
constexpr ::Unity::IO::LowLevel::Unsafe::FileState  Unity::IO::LowLevel::Unsafe::FileState::Exists{static_cast<int32_t>(0x1)};
