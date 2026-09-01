#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\FontAssetUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAssetUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Character_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteCharacter_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetUtilities.GetCharacterFromFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::TextCore::Text::Character* (*)(uint32_t, ::UnityEngine::TextCore::Text::FontAsset*, bool, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight,
                                                  ::by_ref<bool>, bool)>(&::UnityEngine::TextCore::Text::FontAssetUtilities::GetCharacterFromFontAsset)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6bfeae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                                                             { "GetCharacterFromFontAsset",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(),
                                                                 ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetUtilities.GetCharacterFromFontAsset_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::TextCore::Text::Character* (*)(uint32_t, ::UnityEngine::TextCore::Text::FontAsset*, bool, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight,
                                                  ::by_ref<bool>, bool)>(&::UnityEngine::TextCore::Text::FontAssetUtilities::GetCharacterFromFontAsset_Internal)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x6bfec00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                                                             { "GetCharacterFromFontAsset_Internal",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(),
                                                                 ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetUtilities.GetCharacterFromFontAssetsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::TextCore::Text::Character* (*)(uint32_t, ::UnityEngine::TextCore::Text::FontAsset*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*,
                                                  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, bool, ::UnityEngine::TextCore::Text::FontStyles,
                                                  ::UnityEngine::TextCore::Text::TextFontWeight, ::by_ref<bool>, bool)>(
    &::UnityEngine::TextCore::Text::FontAssetUtilities::GetCharacterFromFontAssetsInternal)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6bff178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                                                             { "GetCharacterFromFontAssetsInternal",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(),
                                                                 ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetUtilities.GetCharacterFromFontAssetsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::TextCore::Text::Character* (*)(uint32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, bool,
                                                              ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight, ::by_ref<bool>, bool)>(
        &::UnityEngine::TextCore::Text::FontAssetUtilities::GetCharacterFromFontAssetsInternal)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6bff2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                                                { "GetCharacterFromFontAssetsInternal",
                                                  {},
                                                  { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(),
                                                    ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetUtilities.GetTextElementFromTextAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::TextCore::Text::TextElement* (*)(uint32_t, ::UnityEngine::TextCore::Text::FontAsset*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>*,
                                                    bool, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight, ::by_ref<bool>, bool)>(
    &::UnityEngine::TextCore::Text::FontAssetUtilities::GetTextElementFromTextAssets)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6bff4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                                                             { "GetTextElementFromTextAssets",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(),
                                                                 ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetUtilities.GetSpriteCharacterFromSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::SpriteCharacter* (*)(uint32_t, ::UnityEngine::TextCore::Text::SpriteAsset*, bool)>(
    &::UnityEngine::TextCore::Text::FontAssetUtilities::GetSpriteCharacterFromSpriteAsset)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x6bff984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                            { "GetSpriteCharacterFromSpriteAsset", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetUtilities.GetSpriteCharacterFromSpriteAsset_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::SpriteCharacter* (*)(uint32_t, ::UnityEngine::TextCore::Text::SpriteAsset*, bool)>(
    &::UnityEngine::TextCore::Text::FontAssetUtilities::GetSpriteCharacterFromSpriteAsset_Internal)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6bff7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                         { "GetSpriteCharacterFromSpriteAsset_Internal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::FontAssetUtilities::setStaticF_k_SearchedAssets(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedAssets", ::UnityEngine::TextCore::Text::FontAssetUtilities*>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::TextCore::Text::FontAssetUtilities::getStaticF_k_SearchedAssets() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedAssets", ::UnityEngine::TextCore::Text::FontAssetUtilities*>();
}
inline ::UnityEngine::TextCore::Text::Character* UnityEngine::TextCore::Text::FontAssetUtilities::GetCharacterFromFontAsset(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset* sourceFontAsset,
                                                                                                                            bool includeFallbacks, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                                                                            ::UnityEngine::TextCore::Text::TextFontWeight fontWeight,
                                                                                                                            ::by_ref<bool> isAlternativeTypeface, bool populateLigatures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                                                           { "GetCharacterFromFontAsset",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(),
                                                               ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::Character*>(nullptr, ___internal_method, unicode, sourceFontAsset, includeFallbacks, fontStyle, fontWeight,
                                                                                        isAlternativeTypeface, populateLigatures);
}
inline ::UnityEngine::TextCore::Text::Character*
UnityEngine::TextCore::Text::FontAssetUtilities::GetCharacterFromFontAsset_Internal(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset* sourceFontAsset, bool includeFallbacks,
                                                                                    ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight,
                                                                                    ::by_ref<bool> isAlternativeTypeface, bool populateLigatures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                                                           { "GetCharacterFromFontAsset_Internal",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(),
                                                               ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::Character*>(nullptr, ___internal_method, unicode, sourceFontAsset, includeFallbacks, fontStyle, fontWeight,
                                                                                        isAlternativeTypeface, populateLigatures);
}
inline ::UnityEngine::TextCore::Text::Character* UnityEngine::TextCore::Text::FontAssetUtilities::GetCharacterFromFontAssetsInternal(
    uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset* sourceFontAsset, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* fontAssets,
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* OSFallbackList, bool includeFallbacks, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
    ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ::by_ref<bool> isAlternativeTypeface, bool populateLigatures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                                                           { "GetCharacterFromFontAssetsInternal",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(),
                                                               ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::Character*>(nullptr, ___internal_method, unicode, sourceFontAsset, fontAssets, OSFallbackList, includeFallbacks, fontStyle,
                                                                                        fontWeight, isAlternativeTypeface, populateLigatures);
}
inline ::UnityEngine::TextCore::Text::Character* UnityEngine::TextCore::Text::FontAssetUtilities::GetCharacterFromFontAssetsInternal(
    uint32_t unicode, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* fontAssets, bool includeFallbacks,
    ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ::by_ref<bool> isAlternativeTypeface, bool populateLigatures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                                              { "GetCharacterFromFontAssetsInternal",
                                                {},
                                                { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(),
                                                  ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::Character*>(nullptr, ___internal_method, unicode, fontAssets, includeFallbacks, fontStyle, fontWeight,
                                                                                        isAlternativeTypeface, populateLigatures);
}
inline ::UnityEngine::TextCore::Text::TextElement*
UnityEngine::TextCore::Text::FontAssetUtilities::GetTextElementFromTextAssets(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset* sourceFontAsset,
                                                                              ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>* textAssets,
                                                                              bool includeFallbacks, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                              ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ::by_ref<bool> isAlternativeTypeface, bool populateLigatures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                                                           { "GetTextElementFromTextAssets",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(),
                                                               ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextElement*>(nullptr, ___internal_method, unicode, sourceFontAsset, textAssets, includeFallbacks, fontStyle, fontWeight,
                                                                                          isAlternativeTypeface, populateLigatures);
}
inline ::UnityEngine::TextCore::Text::SpriteCharacter*
UnityEngine::TextCore::Text::FontAssetUtilities::GetSpriteCharacterFromSpriteAsset(uint32_t unicode, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, bool includeFallbacks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                          { "GetSpriteCharacterFromSpriteAsset", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::SpriteCharacter*>(nullptr, ___internal_method, unicode, spriteAsset, includeFallbacks);
}
inline ::UnityEngine::TextCore::Text::SpriteCharacter*
UnityEngine::TextCore::Text::FontAssetUtilities::GetSpriteCharacterFromSpriteAsset_Internal(uint32_t unicode, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, bool includeFallbacks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::TextCore::Text::FontAssetUtilities*>(),
                       { "GetSpriteCharacterFromSpriteAsset_Internal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::SpriteCharacter*>(nullptr, ___internal_method, unicode, spriteAsset, includeFallbacks);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::FontAssetUtilities::FontAssetUtilities() {}
