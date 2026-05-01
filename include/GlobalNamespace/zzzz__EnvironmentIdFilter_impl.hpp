#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentIdFilter.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIdFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentIdFilter::EnvironmentIdFilter(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentIdFilter::EnvironmentIdFilter() {}
constexpr ::GlobalNamespace::EnvironmentIdFilter GlobalNamespace::EnvironmentIdFilter::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::EnvironmentIdFilter GlobalNamespace::EnvironmentIdFilter::ExcludeTutorial{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::EnvironmentIdFilter GlobalNamespace::EnvironmentIdFilter::ExcludeMultiplayer{ static_cast<int32_t>(0x2) };
