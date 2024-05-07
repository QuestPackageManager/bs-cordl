#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReflectionProbeSortingCriteria.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeSortingCriteria_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ReflectionProbeSortingCriteria::ReflectionProbeSortingCriteria(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReflectionProbeSortingCriteria::ReflectionProbeSortingCriteria() {}
constexpr ::UnityEngine::Rendering::ReflectionProbeSortingCriteria UnityEngine::Rendering::ReflectionProbeSortingCriteria::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ReflectionProbeSortingCriteria UnityEngine::Rendering::ReflectionProbeSortingCriteria::Importance{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ReflectionProbeSortingCriteria UnityEngine::Rendering::ReflectionProbeSortingCriteria::Size{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::ReflectionProbeSortingCriteria UnityEngine::Rendering::ReflectionProbeSortingCriteria::ImportanceThenSize{ static_cast<int32_t>(0x3) };
