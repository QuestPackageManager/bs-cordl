#pragma once
// IWYU pragma private; include "UnityEngine/QueryParameters.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
//  Writing Method size for method: ::UnityEngine::QueryParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::QueryParameters::*)(int32_t, bool, ::UnityEngine::QueryTriggerInteraction, bool)>(
    &::UnityEngine::QueryParameters::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x48a9ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QueryParameters>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QueryParameters.get_Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::QueryParameters (*)()>(&::UnityEngine::QueryParameters::get_Default)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48a9edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QueryParameters>::get(), "get_Default",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @param layerMask: int32_t (default: static_cast<int32_t>(0xfffffffb))
/// @param hitMultipleFaces: bool (default: false)
/// @param hitTriggers: ::UnityEngine::QueryTriggerInteraction (default: static_cast<int32_t>(0x0))
/// @param hitBackfaces: bool (default: false)
inline void UnityEngine::QueryParameters::_ctor(int32_t layerMask, bool hitMultipleFaces, ::UnityEngine::QueryTriggerInteraction hitTriggers, bool hitBackfaces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QueryParameters>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layerMask, hitMultipleFaces, hitTriggers, hitBackfaces);
}
inline ::UnityEngine::QueryParameters UnityEngine::QueryParameters::get_Default() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::QueryParameters>::get(), "get_Default",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryParameters, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "layerMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hitMultipleFaces", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "hitTriggers", ty: "::UnityEngine::QueryTriggerInteraction", modifiers: "", def_value: Some("{}") }, CppParam { name: "hitBackfaces", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::QueryParameters::QueryParameters(int32_t layerMask, bool hitMultipleFaces, ::UnityEngine::QueryTriggerInteraction hitTriggers, bool hitBackfaces) noexcept {
  this->layerMask = layerMask;
  this->hitMultipleFaces = hitMultipleFaces;
  this->hitTriggers = hitTriggers;
  this->hitBackfaces = hitBackfaces;
}
// Ctor Parameters []
constexpr ::UnityEngine::QueryParameters::QueryParameters() {}
