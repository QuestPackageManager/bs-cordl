#pragma once
// IWYU pragma private; include "UnityEngine/InspectorSortDirection.hpp"
#include "UnityEngine/zzzz__InspectorSortDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InspectorSortDirection::InspectorSortDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InspectorSortDirection::InspectorSortDirection()   {
}
constexpr ::UnityEngine::InspectorSortDirection  UnityEngine::InspectorSortDirection::Ascending{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InspectorSortDirection  UnityEngine::InspectorSortDirection::Descending{static_cast<int32_t>(0x1)};
