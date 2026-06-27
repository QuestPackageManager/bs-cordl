#pragma once
// IWYU pragma private; include "Oculus/Platform/AchievementType.hpp"
#include "Oculus/Platform/zzzz__AchievementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::AchievementType::AchievementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AchievementType::AchievementType()   {
}
constexpr ::Oculus::Platform::AchievementType  Oculus::Platform::AchievementType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::AchievementType  Oculus::Platform::AchievementType::Simple{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::AchievementType  Oculus::Platform::AchievementType::Bitfield{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::AchievementType  Oculus::Platform::AchievementType::Count{static_cast<int32_t>(0x3)};
