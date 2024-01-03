#pragma once
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshHit.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::NavMeshHit::*)()>(&::UnityEngine::AI::NavMeshHit::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c7d8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMeshHit>::get(), "get_position",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshHit::get_position() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AI::NavMeshHit>::get(), "get_position",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Hit", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AI::NavMeshHit::NavMeshHit(::UnityEngine::Vector3 m_Position, ::UnityEngine::Vector3 m_Normal, float_t m_Distance, int32_t m_Mask, int32_t m_Hit) noexcept {
  this->m_Position = m_Position;
  this->m_Normal = m_Normal;
  this->m_Distance = m_Distance;
  this->m_Mask = m_Mask;
  this->m_Hit = m_Hit;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshHit::NavMeshHit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
