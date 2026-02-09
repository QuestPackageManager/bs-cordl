#pragma once
// IWYU pragma private; include "Oculus/Platform/LivestreamingStartStatus.hpp"
#include "Oculus/Platform/zzzz__LivestreamingStartStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LivestreamingStartStatus::LivestreamingStartStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::LivestreamingStartStatus::LivestreamingStartStatus()   {
}
constexpr ::Oculus::Platform::LivestreamingStartStatus  Oculus::Platform::LivestreamingStartStatus::Success{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::LivestreamingStartStatus  Oculus::Platform::LivestreamingStartStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::LivestreamingStartStatus  Oculus::Platform::LivestreamingStartStatus::NoPackageSet{static_cast<int32_t>(0xffffffff)};
constexpr ::Oculus::Platform::LivestreamingStartStatus  Oculus::Platform::LivestreamingStartStatus::NoFbConnect{static_cast<int32_t>(0xfffffffe)};
constexpr ::Oculus::Platform::LivestreamingStartStatus  Oculus::Platform::LivestreamingStartStatus::NoSessionId{static_cast<int32_t>(0xfffffffd)};
constexpr ::Oculus::Platform::LivestreamingStartStatus  Oculus::Platform::LivestreamingStartStatus::MissingParameters{static_cast<int32_t>(0xfffffffc)};
