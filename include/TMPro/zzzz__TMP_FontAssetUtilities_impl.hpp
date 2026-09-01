#pragma once
// IWYU pragma private; include "TMPro\TMP_FontAssetUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_FontAssetUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__FontWeight_def.hpp"
#include "TMPro/zzzz__TMP_Asset_def.hpp"
#include "TMPro/zzzz__TMP_Character_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "TMPro/zzzz__TMP_SpriteCharacter_def.hpp"
#include "TMPro/zzzz__TMP_TextElement_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_FontAssetUtilities* (*)()>(&::TMPro::TMP_FontAssetUtilities::get_instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x695dc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.GetCharacterFromFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_Character* (*)(uint32_t, ::TMPro::TMP_FontAsset*, bool, ::TMPro::FontStyles, ::TMPro::FontWeight, ::by_ref<bool>)>(
    &::TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x695dc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(),
                                                             { "GetCharacterFromFontAsset",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::TMPro::FontStyles>(),
                                                                 ::i2c::type_of<::TMPro::FontWeight>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.GetCharacterFromFontAsset_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_Character* (*)(uint32_t, ::TMPro::TMP_FontAsset*, bool, ::TMPro::FontStyles, ::TMPro::FontWeight, ::by_ref<bool>)>(
    &::TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset_Internal)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x695ddd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(),
                                                             { "GetCharacterFromFontAsset_Internal",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::TMPro::FontStyles>(),
                                                                 ::i2c::type_of<::TMPro::FontWeight>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.SearchFallbacksForCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_Character* (*)(uint32_t, ::TMPro::TMP_FontAsset*, ::TMPro::FontStyles, ::TMPro::FontWeight, ::by_ref<bool>)>(
    &::TMPro::TMP_FontAssetUtilities::SearchFallbacksForCharacter)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x695e21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(), { "SearchFallbacksForCharacter",
                                                                                   {},
                                                                                   { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::TMPro::FontStyles>(),
                                                                                     ::i2c::type_of<::TMPro::FontWeight>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.GetCharacterFromFontAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_Character* (*)(uint32_t, ::TMPro::TMP_FontAsset*, ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, bool,
                                                                                   ::TMPro::FontStyles, ::TMPro::FontWeight, ::by_ref<bool>)>(
    &::TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAssets)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x695e3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(),
                            { "GetCharacterFromFontAssets",
                              {},
                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<::TMPro::FontStyles>(), ::i2c::type_of<::TMPro::FontWeight>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.GetTextElementFromTextAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_TextElement* (*)(uint32_t, ::TMPro::TMP_FontAsset*, ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>*, bool,
                                                                                     ::TMPro::FontStyles, ::TMPro::FontWeight, ::by_ref<bool>)>(
    &::TMPro::TMP_FontAssetUtilities::GetTextElementFromTextAssets)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x695e614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(),
                            { "GetTextElementFromTextAssets",
                              {},
                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>*>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<::TMPro::FontStyles>(), ::i2c::type_of<::TMPro::FontWeight>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.GetSpriteCharacterFromSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_SpriteCharacter* (*)(uint32_t, ::TMPro::TMP_SpriteAsset*, bool)>(
    &::TMPro::TMP_FontAssetUtilities::GetSpriteCharacterFromSpriteAsset)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x695eb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(),
                                                { "GetSpriteCharacterFromSpriteAsset", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.GetSpriteCharacterFromSpriteAsset_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_SpriteCharacter* (*)(uint32_t, ::TMPro::TMP_SpriteAsset*, bool)>(
    &::TMPro::TMP_FontAssetUtilities::GetSpriteCharacterFromSpriteAsset_Internal)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x695e954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(),
                                         { "GetSpriteCharacterFromSpriteAsset_Internal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAssetUtilities::*)()>(&::TMPro::TMP_FontAssetUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x695dc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_FontAssetUtilities::setStaticF_s_Instance(::TMPro::TMP_FontAssetUtilities* value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_FontAssetUtilities*, "s_Instance", ::TMPro::TMP_FontAssetUtilities*>(std::forward<::TMPro::TMP_FontAssetUtilities*>(value));
}
inline ::TMPro::TMP_FontAssetUtilities* TMPro::TMP_FontAssetUtilities::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_FontAssetUtilities*, "s_Instance", ::TMPro::TMP_FontAssetUtilities*>();
}
inline void TMPro::TMP_FontAssetUtilities::setStaticF_k_SearchedAssets(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedAssets", ::TMPro::TMP_FontAssetUtilities*>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* TMPro::TMP_FontAssetUtilities::getStaticF_k_SearchedAssets() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedAssets", ::TMPro::TMP_FontAssetUtilities*>();
}
inline ::TMPro::TMP_FontAssetUtilities* TMPro::TMP_FontAssetUtilities::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_FontAssetUtilities*>(nullptr, ___internal_method);
}
inline ::TMPro::TMP_Character* TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset(uint32_t unicode, ::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, ::TMPro::FontStyles fontStyle,
                                                                                        ::TMPro::FontWeight fontWeight, ::by_ref<bool> isAlternativeTypeface) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(),
                                                           { "GetCharacterFromFontAsset",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::TMPro::FontStyles>(),
                                                               ::i2c::type_of<::TMPro::FontWeight>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Character*>(nullptr, ___internal_method, unicode, sourceFontAsset, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface);
}
inline ::TMPro::TMP_Character* TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset_Internal(uint32_t unicode, ::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks,
                                                                                                 ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ::by_ref<bool> isAlternativeTypeface) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(),
                                                           { "GetCharacterFromFontAsset_Internal",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::TMPro::FontStyles>(),
                                                               ::i2c::type_of<::TMPro::FontWeight>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Character*>(nullptr, ___internal_method, unicode, sourceFontAsset, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface);
}
inline ::TMPro::TMP_Character* TMPro::TMP_FontAssetUtilities::SearchFallbacksForCharacter(uint32_t unicode, ::TMPro::TMP_FontAsset* sourceFontAsset, ::TMPro::FontStyles fontStyle,
                                                                                          ::TMPro::FontWeight fontWeight, ::by_ref<bool> isAlternativeTypeface) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(), { "SearchFallbacksForCharacter",
                                                                                 {},
                                                                                 { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::TMPro::FontStyles>(),
                                                                                   ::i2c::type_of<::TMPro::FontWeight>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Character*>(nullptr, ___internal_method, unicode, sourceFontAsset, fontStyle, fontWeight, isAlternativeTypeface);
}
inline ::TMPro::TMP_Character* TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAssets(uint32_t unicode, ::TMPro::TMP_FontAsset* sourceFontAsset,
                                                                                         ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* fontAssets, bool includeFallbacks,
                                                                                         ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ::by_ref<bool> isAlternativeTypeface) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(),
                          { "GetCharacterFromFontAssets",
                            {},
                            { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<::TMPro::FontStyles>(), ::i2c::type_of<::TMPro::FontWeight>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Character*>(nullptr, ___internal_method, unicode, sourceFontAsset, fontAssets, includeFallbacks, fontStyle, fontWeight,
                                                                      isAlternativeTypeface);
}
inline ::TMPro::TMP_TextElement* TMPro::TMP_FontAssetUtilities::GetTextElementFromTextAssets(uint32_t unicode, ::TMPro::TMP_FontAsset* sourceFontAsset,
                                                                                             ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>* textAssets, bool includeFallbacks,
                                                                                             ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ::by_ref<bool> isAlternativeTypeface) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(),
                          { "GetTextElementFromTextAssets",
                            {},
                            { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Asset>>*>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<::TMPro::FontStyles>(), ::i2c::type_of<::TMPro::FontWeight>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_TextElement*>(nullptr, ___internal_method, unicode, sourceFontAsset, textAssets, includeFallbacks, fontStyle, fontWeight,
                                                                        isAlternativeTypeface);
}
inline ::TMPro::TMP_SpriteCharacter* TMPro::TMP_FontAssetUtilities::GetSpriteCharacterFromSpriteAsset(uint32_t unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, bool includeFallbacks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(),
                                              { "GetSpriteCharacterFromSpriteAsset", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_SpriteCharacter*>(nullptr, ___internal_method, unicode, spriteAsset, includeFallbacks);
}
inline ::TMPro::TMP_SpriteCharacter* TMPro::TMP_FontAssetUtilities::GetSpriteCharacterFromSpriteAsset_Internal(uint32_t unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, bool includeFallbacks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(),
                                       { "GetSpriteCharacterFromSpriteAsset_Internal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_SpriteCharacter*>(nullptr, ___internal_method, unicode, spriteAsset, includeFallbacks);
}
inline void TMPro::TMP_FontAssetUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAssetUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_FontAssetUtilities* TMPro::TMP_FontAssetUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_FontAssetUtilities*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_FontAssetUtilities::TMP_FontAssetUtilities() {}
