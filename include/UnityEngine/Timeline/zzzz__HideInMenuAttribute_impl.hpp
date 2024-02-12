#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__HideInMenuAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::HideInMenuAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::HideInMenuAttribute::*)()>(&::UnityEngine::Timeline::HideInMenuAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6b304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::HideInMenuAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Timeline::HideInMenuAttribute* UnityEngine::Timeline::HideInMenuAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::HideInMenuAttribute*>());
}
inline void UnityEngine::Timeline::HideInMenuAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::HideInMenuAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::HideInMenuAttribute::HideInMenuAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
