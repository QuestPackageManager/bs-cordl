#pragma once
// IWYU pragma private; include "Oculus/Platform/LeaderboardStartAt.hpp"
#include "Oculus/Platform/zzzz__LeaderboardStartAt_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LeaderboardStartAt::LeaderboardStartAt(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::LeaderboardStartAt::LeaderboardStartAt()   {
}
constexpr ::Oculus::Platform::LeaderboardStartAt  Oculus::Platform::LeaderboardStartAt::Top{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::LeaderboardStartAt  Oculus::Platform::LeaderboardStartAt::CenteredOnViewer{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::LeaderboardStartAt  Oculus::Platform::LeaderboardStartAt::CenteredOnViewerOrTop{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::LeaderboardStartAt  Oculus::Platform::LeaderboardStartAt::Unknown{static_cast<int32_t>(0x3)};
