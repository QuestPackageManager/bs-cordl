#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FontAssetFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAssetFactory_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetFactory.ConvertFontToFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::UnityEngine::Font*)>(
    &::UnityEngine::TextCore::Text::FontAssetFactory::ConvertFontToFontAsset)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x70515dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetFactory*>(), { "ConvertFontToFontAsset", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetFactory.SetupFontAssetSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::TextCore::Text::FontAssetFactory::SetupFontAssetSettings)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x7051700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetFactory*>(),
                                                                                           { "SetupFontAssetSettings", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetFactory.SetHideFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::TextCore::Text::FontAssetFactory::SetHideFlags)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x70517a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetFactory*>(),
                                                                                           { "SetHideFlags", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::FontAssetFactory::setStaticF_visitedFontAssets(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "visitedFontAssets",
                                    ::UnityEngine::TextCore::Text::FontAssetFactory*>(
      std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::TextCore::Text::FontAssetFactory::getStaticF_visitedFontAssets() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "visitedFontAssets",
                                           ::UnityEngine::TextCore::Text::FontAssetFactory*>();
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAssetFactory::ConvertFontToFontAsset(::UnityEngine::Font* font) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetFactory*>(), { "ConvertFontToFontAsset", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, font);
}
inline void UnityEngine::TextCore::Text::FontAssetFactory::SetupFontAssetSettings(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetFactory*>(),
                                                                                         { "SetupFontAssetSettings", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fontAsset);
}
inline void UnityEngine::TextCore::Text::FontAssetFactory::SetHideFlags(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetFactory*>(), { "SetHideFlags", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fontAsset);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::FontAssetFactory::FontAssetFactory() {}
