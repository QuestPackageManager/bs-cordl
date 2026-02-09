#pragma once
// IWYU pragma private; include "UnityEngine/U2D/SpriteBone.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/U2D/zzzz__SpriteBone_def.hpp"
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Guid", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParentId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::U2D::SpriteBone::SpriteBone(::StringW  m_Name, ::StringW  m_Guid, ::UnityEngine::Vector3  m_Position, ::UnityEngine::Quaternion  m_Rotation, float_t  m_Length, int32_t  m_ParentId, ::UnityEngine::Color32  m_Color) noexcept  {
this->m_Name = m_Name;
this->m_Guid = m_Guid;
this->m_Position = m_Position;
this->m_Rotation = m_Rotation;
this->m_Length = m_Length;
this->m_ParentId = m_ParentId;
this->m_Color = m_Color;
}
// Ctor Parameters []
constexpr ::UnityEngine::U2D::SpriteBone::SpriteBone()   {
}
