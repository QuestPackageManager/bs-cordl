#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/ProcessingState.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ProcessingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState::ProcessingState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState::ProcessingState()   {
}
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState  Unity::IO::LowLevel::Unsafe::ProcessingState::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState  Unity::IO::LowLevel::Unsafe::ProcessingState::InQueue{static_cast<int32_t>(0x1)};
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState  Unity::IO::LowLevel::Unsafe::ProcessingState::Reading{static_cast<int32_t>(0x2)};
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState  Unity::IO::LowLevel::Unsafe::ProcessingState::Completed{static_cast<int32_t>(0x3)};
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState  Unity::IO::LowLevel::Unsafe::ProcessingState::Failed{static_cast<int32_t>(0x4)};
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState  Unity::IO::LowLevel::Unsafe::ProcessingState::Canceled{static_cast<int32_t>(0x5)};
