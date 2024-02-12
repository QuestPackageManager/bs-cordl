#pragma once
#include "Oculus/Platform/zzzz__MatchmakingCriterionImportance_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::MatchmakingCriterionImportance::MatchmakingCriterionImportance(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MatchmakingCriterionImportance::MatchmakingCriterionImportance() {}
constexpr ::Oculus::Platform::MatchmakingCriterionImportance Oculus::Platform::MatchmakingCriterionImportance::Required{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::MatchmakingCriterionImportance Oculus::Platform::MatchmakingCriterionImportance::High{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::MatchmakingCriterionImportance Oculus::Platform::MatchmakingCriterionImportance::Medium{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Platform::MatchmakingCriterionImportance Oculus::Platform::MatchmakingCriterionImportance::Low{ static_cast<int32_t>(0x3) };
constexpr ::Oculus::Platform::MatchmakingCriterionImportance Oculus::Platform::MatchmakingCriterionImportance::Unknown{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
