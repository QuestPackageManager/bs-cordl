#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PseudoHDREncoding_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PseudoHDREncoding.CreatePseudoHDREncodedTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (*)(::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::PseudoHDREncoding::CreatePseudoHDREncodedTexture)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x22f8108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PseudoHDREncoding*>::get(), "CreatePseudoHDREncodedTexture", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PseudoHDREncoding::setStaticF__material(::UnityEngine::Material* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Material*, "_material", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PseudoHDREncoding*>::get>(
      std::forward<::UnityEngine::Material*>(value));
}
inline ::UnityEngine::Material* GlobalNamespace::PseudoHDREncoding::getStaticF__material() {
  return ::cordl_internals::getStaticField<::UnityEngine::Material*, "_material", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PseudoHDREncoding*>::get>();
}
inline ::UnityEngine::RenderTexture* GlobalNamespace::PseudoHDREncoding::CreatePseudoHDREncodedTexture(::UnityEngine::RenderTexture* src) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PseudoHDREncoding*>::get(), "CreatePseudoHDREncodedTexture", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTexture*, false>(nullptr, ___internal_method, src);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PseudoHDREncoding::PseudoHDREncoding() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
