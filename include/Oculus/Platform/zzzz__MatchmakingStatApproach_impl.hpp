#pragma once
#include "Oculus/Platform/zzzz__MatchmakingStatApproach_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::MatchmakingStatApproach::MatchmakingStatApproach(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MatchmakingStatApproach::MatchmakingStatApproach() {}
constexpr ::Oculus::Platform::MatchmakingStatApproach Oculus::Platform::MatchmakingStatApproach::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::MatchmakingStatApproach Oculus::Platform::MatchmakingStatApproach::Trailing{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::MatchmakingStatApproach Oculus::Platform::MatchmakingStatApproach::Swingy{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
