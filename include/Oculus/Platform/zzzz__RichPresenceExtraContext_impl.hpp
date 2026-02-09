#pragma once
// IWYU pragma private; include "Oculus/Platform/RichPresenceExtraContext.hpp"
#include "Oculus/Platform/zzzz__RichPresenceExtraContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::RichPresenceExtraContext::RichPresenceExtraContext(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::RichPresenceExtraContext::RichPresenceExtraContext()   {
}
constexpr ::Oculus::Platform::RichPresenceExtraContext  Oculus::Platform::RichPresenceExtraContext::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::RichPresenceExtraContext  Oculus::Platform::RichPresenceExtraContext::None{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::RichPresenceExtraContext  Oculus::Platform::RichPresenceExtraContext::CurrentCapacity{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::RichPresenceExtraContext  Oculus::Platform::RichPresenceExtraContext::StartedAgo{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::RichPresenceExtraContext  Oculus::Platform::RichPresenceExtraContext::EndingIn{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Platform::RichPresenceExtraContext  Oculus::Platform::RichPresenceExtraContext::LookingForAMatch{static_cast<int32_t>(0x5)};
