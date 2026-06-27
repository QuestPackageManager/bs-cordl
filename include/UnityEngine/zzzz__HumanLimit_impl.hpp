#pragma once
// IWYU pragma private; include "UnityEngine/HumanLimit.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__HumanLimit_def.hpp"
// Ctor Parameters [CppParam { name: "m_Min", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Max", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AxisLength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UseDefaultValues", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::HumanLimit::HumanLimit(::UnityEngine::Vector3  m_Min, ::UnityEngine::Vector3  m_Max, ::UnityEngine::Vector3  m_Center, float_t  m_AxisLength, int32_t  m_UseDefaultValues) noexcept  {
this->m_Min = m_Min;
this->m_Max = m_Max;
this->m_Center = m_Center;
this->m_AxisLength = m_AxisLength;
this->m_UseDefaultValues = m_UseDefaultValues;
}
// Ctor Parameters []
constexpr ::UnityEngine::HumanLimit::HumanLimit()   {
}
