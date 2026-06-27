#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorTransitionInfo.hpp"
#include "UnityEngine/zzzz__AnimatorTransitionInfo_def.hpp"
// Ctor Parameters [CppParam { name: "m_FullPath", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserName", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HasFixedDuration", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AnyState", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TransitionType", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorTransitionInfo::AnimatorTransitionInfo(int32_t  m_FullPath, int32_t  m_UserName, int32_t  m_Name, bool  m_HasFixedDuration, float_t  m_Duration, float_t  m_NormalizedTime, bool  m_AnyState, int32_t  m_TransitionType) noexcept  {
this->m_FullPath = m_FullPath;
this->m_UserName = m_UserName;
this->m_Name = m_Name;
this->m_HasFixedDuration = m_HasFixedDuration;
this->m_Duration = m_Duration;
this->m_NormalizedTime = m_NormalizedTime;
this->m_AnyState = m_AnyState;
this->m_TransitionType = m_TransitionType;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorTransitionInfo::AnimatorTransitionInfo()   {
}
