#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/MaterialManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialManager.GetFallbackMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(
    &::UnityEngine::TextCore::Text::MaterialManager::GetFallbackMaterial)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x48c6ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get(), "GetFallbackMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialManager.GetFallbackMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::Material*, int32_t)>(
    &::UnityEngine::TextCore::Text::MaterialManager::GetFallbackMaterial)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x48c7514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get(), "GetFallbackMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialManager.CopyMaterialPresetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(
    &::UnityEngine::TextCore::Text::MaterialManager::CopyMaterialPresetProperties)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x48c728c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get(), "CopyMaterialPresetProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::MaterialManager::setStaticF_s_FallbackMaterials(::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>*, "s_FallbackMaterials",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>* UnityEngine::TextCore::Text::MaterialManager::getStaticF_s_FallbackMaterials() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>*, "s_FallbackMaterials",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get>();
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::TextCore::Text::MaterialManager::GetFallbackMaterial(::UnityEngine::Material* sourceMaterial, ::UnityEngine::Material* targetMaterial) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get(), "GetFallbackMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, sourceMaterial, targetMaterial);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::TextCore::Text::MaterialManager::GetFallbackMaterial(::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::Material* sourceMaterial,
                                                                                                           int32_t atlasIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get(), "GetFallbackMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, fontAsset, sourceMaterial, atlasIndex);
}
inline void UnityEngine::TextCore::Text::MaterialManager::CopyMaterialPresetProperties(::UnityEngine::Material* source, ::UnityEngine::Material* destination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::MaterialManager*>::get(), "CopyMaterialPresetProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, destination);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::MaterialManager::MaterialManager() {}
