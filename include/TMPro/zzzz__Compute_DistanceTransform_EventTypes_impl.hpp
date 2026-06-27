#pragma once
// IWYU pragma private; include "TMPro/Compute_DistanceTransform_EventTypes.hpp"
#include "TMPro/zzzz__Compute_DistanceTransform_EventTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::Compute_DistanceTransform_EventTypes::Compute_DistanceTransform_EventTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::Compute_DistanceTransform_EventTypes::Compute_DistanceTransform_EventTypes()   {
}
constexpr ::TMPro::Compute_DistanceTransform_EventTypes  TMPro::Compute_DistanceTransform_EventTypes::Processing{static_cast<int32_t>(0x0)};
constexpr ::TMPro::Compute_DistanceTransform_EventTypes  TMPro::Compute_DistanceTransform_EventTypes::Completed{static_cast<int32_t>(0x1)};
