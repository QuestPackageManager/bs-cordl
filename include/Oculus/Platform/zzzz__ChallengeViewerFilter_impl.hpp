#pragma once
// IWYU pragma private; include "Oculus/Platform/ChallengeViewerFilter.hpp"
#include "Oculus/Platform/zzzz__ChallengeViewerFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::ChallengeViewerFilter::ChallengeViewerFilter(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::ChallengeViewerFilter::ChallengeViewerFilter()   {
}
constexpr ::Oculus::Platform::ChallengeViewerFilter  Oculus::Platform::ChallengeViewerFilter::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::ChallengeViewerFilter  Oculus::Platform::ChallengeViewerFilter::AllVisible{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::ChallengeViewerFilter  Oculus::Platform::ChallengeViewerFilter::Participating{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::ChallengeViewerFilter  Oculus::Platform::ChallengeViewerFilter::Invited{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::ChallengeViewerFilter  Oculus::Platform::ChallengeViewerFilter::ParticipatingOrInvited{static_cast<int32_t>(0x4)};
