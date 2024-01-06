#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialManager.GetFallbackMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(
    &::UnityEngine::TextCore::Text::MaterialManager::GetFallbackMaterial)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x2d42abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get(), "GetFallbackMaterial", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialManager.GetFallbackMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::Material*, int32_t)>(
    &::UnityEngine::TextCore::Text::MaterialManager::GetFallbackMaterial)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2d42e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get(), "GetFallbackMaterial", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::MaterialManager::setStaticF_s_FallbackMaterials(::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::Material*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::Material*>*, "s_FallbackMaterials",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::Material*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::Material*>* UnityEngine::TextCore::Text::MaterialManager::getStaticF_s_FallbackMaterials() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::Material*>*, "s_FallbackMaterials",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get>();
}
inline ::UnityEngine::Material* UnityEngine::TextCore::Text::MaterialManager::GetFallbackMaterial(::UnityEngine::Material* sourceMaterial, ::UnityEngine::Material* targetMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get(), "GetFallbackMaterial", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, sourceMaterial, targetMaterial);
}
inline ::UnityEngine::Material* UnityEngine::TextCore::Text::MaterialManager::GetFallbackMaterial(::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::Material* sourceMaterial,
                                                                                                  int32_t atlasIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get(), "GetFallbackMaterial", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, fontAsset, sourceMaterial, atlasIndex);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::MaterialManager::MaterialManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
