#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ExcludeFromObjectFactoryAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ExcludeFromObjectFactoryAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ExcludeFromObjectFactoryAttribute::*)()>(
    &::UnityEngine::ExcludeFromObjectFactoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b6cef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExcludeFromObjectFactoryAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::ExcludeFromObjectFactoryAttribute* UnityEngine::ExcludeFromObjectFactoryAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ExcludeFromObjectFactoryAttribute*>());
}
inline void UnityEngine::ExcludeFromObjectFactoryAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExcludeFromObjectFactoryAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ExcludeFromObjectFactoryAttribute::ExcludeFromObjectFactoryAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
