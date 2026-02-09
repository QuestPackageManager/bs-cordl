#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/ScheduleMode.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__ScheduleMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode::ScheduleMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode::ScheduleMode()   {
}
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  Unity::Jobs::LowLevel::Unsafe::ScheduleMode::Run{static_cast<int32_t>(0x0)};
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  Unity::Jobs::LowLevel::Unsafe::ScheduleMode::Batched{static_cast<int32_t>(0x1)};
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  Unity::Jobs::LowLevel::Unsafe::ScheduleMode::Parallel{static_cast<int32_t>(0x1)};
constexpr ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  Unity::Jobs::LowLevel::Unsafe::ScheduleMode::Single{static_cast<int32_t>(0x2)};
