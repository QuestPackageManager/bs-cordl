#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ProGridsNoSnapAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProGridsNoSnapAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProGridsNoSnapAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProGridsNoSnapAttribute::*)()>(
    &::UnityEngine::ProBuilder::ProGridsNoSnapAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32d1314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProGridsNoSnapAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::ProBuilder::ProGridsNoSnapAttribute* UnityEngine::ProBuilder::ProGridsNoSnapAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::ProGridsNoSnapAttribute*>());
}
inline void UnityEngine::ProBuilder::ProGridsNoSnapAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProGridsNoSnapAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ProGridsNoSnapAttribute::ProGridsNoSnapAttribute() {}
