#pragma once
// IWYU pragma private; include "Oculus/Platform/ChallengeVisibility.hpp"
#include "Oculus/Platform/zzzz__ChallengeVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::ChallengeVisibility::ChallengeVisibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::ChallengeVisibility::ChallengeVisibility()   {
}
constexpr ::Oculus::Platform::ChallengeVisibility  Oculus::Platform::ChallengeVisibility::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::ChallengeVisibility  Oculus::Platform::ChallengeVisibility::InviteOnly{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::ChallengeVisibility  Oculus::Platform::ChallengeVisibility::Public{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::ChallengeVisibility  Oculus::Platform::ChallengeVisibility::Private{static_cast<int32_t>(0x3)};
