#pragma once
// IWYU pragma private; include "TMPro/TMP_FontUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_FontUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Character_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_FontUtilities.SearchForCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::TMPro::TMP_FontAsset*, uint32_t, ::by_ref<::TMPro::TMP_Character*>)>(
    &::TMPro::TMP_FontUtilities::SearchForCharacter)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6957e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontUtilities*>(),
                            { "SearchForCharacter", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_Character*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontUtilities.SearchForCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, uint32_t,
                                                                                            ::by_ref<::TMPro::TMP_Character*>)>(&::TMPro::TMP_FontUtilities::SearchForCharacter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69582a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontUtilities*>(), { "SearchForCharacter",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>(),
                                                                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_Character*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontUtilities.SearchForCharacterInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::TMPro::TMP_FontAsset*, uint32_t, ::by_ref<::TMPro::TMP_Character*>)>(
    &::TMPro::TMP_FontUtilities::SearchForCharacterInternal)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x6957f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontUtilities*>(),
                            { "SearchForCharacterInternal", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_Character*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontUtilities.SearchForCharacterInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, uint32_t,
                                                                                            ::by_ref<::TMPro::TMP_Character*>)>(&::TMPro::TMP_FontUtilities::SearchForCharacterInternal)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x69582a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontUtilities*>(), { "SearchForCharacterInternal",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>(),
                                                                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_Character*>>() } })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_FontUtilities::setStaticF_k_searchedFontAssets(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "k_searchedFontAssets", ::TMPro::TMP_FontUtilities*>(
      std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* TMPro::TMP_FontUtilities::getStaticF_k_searchedFontAssets() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "k_searchedFontAssets", ::TMPro::TMP_FontUtilities*>();
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontUtilities::SearchForCharacter(::TMPro::TMP_FontAsset* font, uint32_t unicode, ::by_ref<::TMPro::TMP_Character*> character) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontUtilities*>(),
                                       { "SearchForCharacter", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_Character*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method, font, unicode, character);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontUtilities::SearchForCharacter(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* fonts, uint32_t unicode,
                                                                                     ::by_ref<::TMPro::TMP_Character*> character) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontUtilities*>(), { "SearchForCharacter",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>(),
                                                                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_Character*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method, fonts, unicode, character);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontUtilities::SearchForCharacterInternal(::TMPro::TMP_FontAsset* font, uint32_t unicode, ::by_ref<::TMPro::TMP_Character*> character) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontUtilities*>(),
                          { "SearchForCharacterInternal", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_Character*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method, font, unicode, character);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontUtilities::SearchForCharacterInternal(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* fonts, uint32_t unicode,
                                                                                             ::by_ref<::TMPro::TMP_Character*> character) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontUtilities*>(), { "SearchForCharacterInternal",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>(),
                                                                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_Character*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method, fonts, unicode, character);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_FontUtilities::TMP_FontUtilities() {}
