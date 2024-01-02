#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BakedLightTexturePacking_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakedLightTexturePacking.PackTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::RenderTexture* (*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::RenderTexture*>*, ::UnityEngine::RenderTextureDescriptor)>(
        &::GlobalNamespace::BakedLightTexturePacking::PackTextures)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x22f59b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightTexturePacking*>::get(), "PackTextures", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::RenderTexture*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BakedLightTexturePacking::setStaticF__texPropertyIds(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "_texPropertyIds", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightTexturePacking*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> GlobalNamespace::BakedLightTexturePacking::getStaticF__texPropertyIds() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "_texPropertyIds",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightTexturePacking*>::get>();
}
inline void GlobalNamespace::BakedLightTexturePacking::setStaticF__material(::UnityEngine::Material* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Material*, "_material", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightTexturePacking*>::get>(
      std::forward<::UnityEngine::Material*>(value));
}
inline ::UnityEngine::Material* GlobalNamespace::BakedLightTexturePacking::getStaticF__material() {
  return ::cordl_internals::getStaticField<::UnityEngine::Material*, "_material", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightTexturePacking*>::get>();
}
inline ::UnityEngine::RenderTexture* GlobalNamespace::BakedLightTexturePacking::PackTextures(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::RenderTexture*>* textures,
                                                                                             ::UnityEngine::RenderTextureDescriptor descriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightTexturePacking*>::get(), "PackTextures", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::RenderTexture*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTexture*, false>(nullptr, ___internal_method, textures, descriptor);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakedLightTexturePacking::BakedLightTexturePacking() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
