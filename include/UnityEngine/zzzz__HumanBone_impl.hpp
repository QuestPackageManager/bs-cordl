#pragma once
// IWYU pragma private; include "UnityEngine/HumanBone.hpp"
#include "UnityEngine/zzzz__HumanLimit_impl.hpp"
#include "UnityEngine/zzzz__HumanBone_def.hpp"
// Ctor Parameters [CppParam { name: "m_BoneName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HumanName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "limit", ty: "::UnityEngine::HumanLimit", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::HumanBone::HumanBone(::StringW  m_BoneName, ::StringW  m_HumanName, ::UnityEngine::HumanLimit  limit) noexcept  {
this->m_BoneName = m_BoneName;
this->m_HumanName = m_HumanName;
this->limit = limit;
}
// Ctor Parameters []
constexpr ::UnityEngine::HumanBone::HumanBone()   {
}
