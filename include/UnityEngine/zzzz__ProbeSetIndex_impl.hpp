#pragma once
// IWYU pragma private; include "UnityEngine/ProbeSetIndex.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/zzzz__ProbeSetIndex_def.hpp"
// Ctor Parameters [CppParam { name: "m_Hash", ty: "::UnityEngine::Hash128", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Offset", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_Size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::ProbeSetIndex::ProbeSetIndex(::UnityEngine::Hash128 m_Hash, int32_t m_Offset, int32_t m_Size) noexcept {
  this->m_Hash = m_Hash;
  this->m_Offset = m_Offset;
  this->m_Size = m_Size;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProbeSetIndex::ProbeSetIndex() {}
