#pragma once
// IWYU pragma private; include "Oculus/Platform/LivestreamingAudience.hpp"
#include "Oculus/Platform/zzzz__LivestreamingAudience_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LivestreamingAudience::LivestreamingAudience(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::LivestreamingAudience::LivestreamingAudience()   {
}
constexpr ::Oculus::Platform::LivestreamingAudience  Oculus::Platform::LivestreamingAudience::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::LivestreamingAudience  Oculus::Platform::LivestreamingAudience::Public{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::LivestreamingAudience  Oculus::Platform::LivestreamingAudience::Friends{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::LivestreamingAudience  Oculus::Platform::LivestreamingAudience::OnlyMe{static_cast<int32_t>(0x3)};
