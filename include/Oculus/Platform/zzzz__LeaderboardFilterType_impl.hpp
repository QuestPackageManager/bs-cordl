#pragma once
// IWYU pragma private; include "Oculus/Platform/LeaderboardFilterType.hpp"
#include "Oculus/Platform/zzzz__LeaderboardFilterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LeaderboardFilterType::LeaderboardFilterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::LeaderboardFilterType::LeaderboardFilterType()   {
}
constexpr ::Oculus::Platform::LeaderboardFilterType  Oculus::Platform::LeaderboardFilterType::None{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::LeaderboardFilterType  Oculus::Platform::LeaderboardFilterType::Friends{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::LeaderboardFilterType  Oculus::Platform::LeaderboardFilterType::Unknown{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::LeaderboardFilterType  Oculus::Platform::LeaderboardFilterType::UserIds{static_cast<int32_t>(0x3)};
