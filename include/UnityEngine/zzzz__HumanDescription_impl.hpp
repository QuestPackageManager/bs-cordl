#pragma once
// IWYU pragma private; include "UnityEngine/HumanDescription.hpp"
#include "UnityEngine/zzzz__HumanDescription_def.hpp"
#include "UnityEngine/zzzz__HumanBone_def.hpp"
#include "UnityEngine/zzzz__SkeletonBone_def.hpp"
// Ctor Parameters [CppParam { name: "human", ty: "::ArrayW<::UnityEngine::HumanBone,::Array<::UnityEngine::HumanBone>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "skeleton", ty: "::ArrayW<::UnityEngine::SkeletonBone,::Array<::UnityEngine::SkeletonBone>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ArmTwist", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ForeArmTwist", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UpperLegTwist", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LegTwist", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ArmStretch", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LegStretch", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FeetSpacing", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GlobalScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RootMotionBoneName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HasTranslationDoF", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HasExtraRoot", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SkeletonHasParents", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::HumanDescription::HumanDescription(::ArrayW<::UnityEngine::HumanBone,::Array<::UnityEngine::HumanBone>*>  human, ::ArrayW<::UnityEngine::SkeletonBone,::Array<::UnityEngine::SkeletonBone>*>  skeleton, float_t  m_ArmTwist, float_t  m_ForeArmTwist, float_t  m_UpperLegTwist, float_t  m_LegTwist, float_t  m_ArmStretch, float_t  m_LegStretch, float_t  m_FeetSpacing, float_t  m_GlobalScale, ::StringW  m_RootMotionBoneName, bool  m_HasTranslationDoF, bool  m_HasExtraRoot, bool  m_SkeletonHasParents) noexcept  {
this->human = human;
this->skeleton = skeleton;
this->m_ArmTwist = m_ArmTwist;
this->m_ForeArmTwist = m_ForeArmTwist;
this->m_UpperLegTwist = m_UpperLegTwist;
this->m_LegTwist = m_LegTwist;
this->m_ArmStretch = m_ArmStretch;
this->m_LegStretch = m_LegStretch;
this->m_FeetSpacing = m_FeetSpacing;
this->m_GlobalScale = m_GlobalScale;
this->m_RootMotionBoneName = m_RootMotionBoneName;
this->m_HasTranslationDoF = m_HasTranslationDoF;
this->m_HasExtraRoot = m_HasExtraRoot;
this->m_SkeletonHasParents = m_SkeletonHasParents;
}
// Ctor Parameters []
constexpr ::UnityEngine::HumanDescription::HumanDescription()   {
}
