#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProGridsConditionalSnapAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute::*)()>(
    &::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b60d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute* UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute*>());
}
inline void UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute::ProGridsConditionalSnapAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
