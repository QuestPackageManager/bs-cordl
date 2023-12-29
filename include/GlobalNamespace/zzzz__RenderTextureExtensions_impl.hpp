#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RenderTextureExtensions_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RenderTextureExtensions.GetTexture2D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (*)(::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::RenderTextureExtensions::GetTexture2D)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1f930b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureExtensions*>::get(), "GetTexture2D", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Texture2D* GlobalNamespace::RenderTextureExtensions::GetTexture2D(::UnityEngine::RenderTexture* rt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureExtensions*>::get(), "GetTexture2D", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(nullptr, ___internal_method, rt);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderTextureExtensions::RenderTextureExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
