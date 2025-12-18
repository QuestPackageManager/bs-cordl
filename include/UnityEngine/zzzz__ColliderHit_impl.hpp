#pragma once
// IWYU pragma private; include "UnityEngine/ColliderHit.hpp"
#include "UnityEngine/zzzz__ColliderHit_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::UnityEngine::ColliderHit.get_instanceID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ColliderHit::*)()>(&::UnityEngine::ColliderHit::get_instanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ca9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColliderHit>::get(), "get_instanceID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColliderHit.get_collider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::ColliderHit::*)()>(&::UnityEngine::ColliderHit::get_collider)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x69ca9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColliderHit>::get(), "get_collider",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ColliderHit::get_instanceID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColliderHit>::get(), "get_instanceID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::ColliderHit::get_collider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColliderHit>::get(), "get_collider",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ColliderInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ColliderHit::ColliderHit(int32_t m_ColliderInstanceID) noexcept {
  this->m_ColliderInstanceID = m_ColliderInstanceID;
}
// Ctor Parameters []
constexpr ::UnityEngine::ColliderHit::ColliderHit() {}
