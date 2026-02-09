#pragma once
// IWYU pragma private; include "Oculus/Platform/ChallengeCreationType.hpp"
#include "Oculus/Platform/zzzz__ChallengeCreationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::ChallengeCreationType::ChallengeCreationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::ChallengeCreationType::ChallengeCreationType()   {
}
constexpr ::Oculus::Platform::ChallengeCreationType  Oculus::Platform::ChallengeCreationType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::ChallengeCreationType  Oculus::Platform::ChallengeCreationType::UserCreated{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::ChallengeCreationType  Oculus::Platform::ChallengeCreationType::DeveloperCreated{static_cast<int32_t>(0x2)};
