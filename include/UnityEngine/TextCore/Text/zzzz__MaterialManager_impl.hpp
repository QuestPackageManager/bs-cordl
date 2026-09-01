#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\MaterialManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialManager.GetFallbackMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(
    &::UnityEngine::TextCore::Text::MaterialManager::GetFallbackMaterial)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x6bc76b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialManager*>(),
                                                             { "GetFallbackMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialManager.GetFallbackMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::Material*, int32_t)>(
    &::UnityEngine::TextCore::Text::MaterialManager::GetFallbackMaterial)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6bc7d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialManager*>(),
                            { "GetFallbackMaterial", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialManager.CopyMaterialPresetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::UnityEngine::TextCore::Text::MaterialManager::CopyMaterialPresetProperties)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6bc7abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialManager*>(),
                                                             { "CopyMaterialPresetProperties", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::MaterialManager::setStaticF_s_FallbackMaterials(::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>*, "s_FallbackMaterials", ::UnityEngine::TextCore::Text::MaterialManager*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>* UnityEngine::TextCore::Text::MaterialManager::getStaticF_s_FallbackMaterials() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::Material>>*, "s_FallbackMaterials",
                                           ::UnityEngine::TextCore::Text::MaterialManager*>();
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::TextCore::Text::MaterialManager::GetFallbackMaterial(::UnityEngine::Material* sourceMaterial, ::UnityEngine::Material* targetMaterial) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialManager*>(),
                                                           { "GetFallbackMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, sourceMaterial, targetMaterial);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::TextCore::Text::MaterialManager::GetFallbackMaterial(::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::Material* sourceMaterial,
                                                                                                           int32_t atlasIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialManager*>(),
                          { "GetFallbackMaterial", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, fontAsset, sourceMaterial, atlasIndex);
}
inline void UnityEngine::TextCore::Text::MaterialManager::CopyMaterialPresetProperties(::UnityEngine::Material* source, ::UnityEngine::Material* destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialManager*>(),
                                                           { "CopyMaterialPresetProperties", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::MaterialManager::MaterialManager() {}
