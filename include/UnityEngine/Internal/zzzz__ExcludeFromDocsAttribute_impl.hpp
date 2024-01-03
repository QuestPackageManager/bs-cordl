#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Internal/zzzz__ExcludeFromDocsAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Internal::ExcludeFromDocsAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Internal::ExcludeFromDocsAttribute::*)()>(
    &::UnityEngine::Internal::ExcludeFromDocsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ce9e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Internal::ExcludeFromDocsAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::Internal::ExcludeFromDocsAttribute* UnityEngine::Internal::ExcludeFromDocsAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Internal::ExcludeFromDocsAttribute*>());
}
inline void UnityEngine::Internal::ExcludeFromDocsAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Internal::ExcludeFromDocsAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Internal::ExcludeFromDocsAttribute::ExcludeFromDocsAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
