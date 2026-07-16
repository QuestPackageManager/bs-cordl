#pragma once
// IWYU pragma private; include "GlobalNamespace/TextStyleSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__TextStyleSO_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IReadOnlyTextStyle_def.hpp"
#include "GlobalNamespace/zzzz__TextStyle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextStyleSO.get_textStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadOnlyTextStyle* (::GlobalNamespace::TextStyleSO::*)()>(&::GlobalNamespace::TextStyleSO::get_textStyle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32c9704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyleSO*>(), { "get_textStyle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextStyleSO.get_languageOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::UnityExtension::SerializableDictionary_2<::BGLib::Polyglot::LocalizationLanguage, ::GlobalNamespace::TextStyle*>* (
    ::GlobalNamespace::TextStyleSO::*)()>(&::GlobalNamespace::TextStyleSO::get_languageOverrides)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32c970c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyleSO*>(), { "get_languageOverrides", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextStyleSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextStyleSO::*)()>(&::GlobalNamespace::TextStyleSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32c9714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyleSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TextStyle*& GlobalNamespace::TextStyleSO::__cordl_internal_get__textStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textStyle;
}
constexpr ::GlobalNamespace::TextStyle* const& GlobalNamespace::TextStyleSO::__cordl_internal_get__textStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textStyle;
}
constexpr void GlobalNamespace::TextStyleSO::__cordl_internal_set__textStyle(::GlobalNamespace::TextStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textStyle = value;
}
constexpr ::BGLib::UnityExtension::SerializableDictionary_2<::BGLib::Polyglot::LocalizationLanguage, ::GlobalNamespace::TextStyle*>*&
GlobalNamespace::TextStyleSO::__cordl_internal_get__languageOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____languageOverrides;
}
constexpr ::BGLib::UnityExtension::SerializableDictionary_2<::BGLib::Polyglot::LocalizationLanguage, ::GlobalNamespace::TextStyle*>* const&
GlobalNamespace::TextStyleSO::__cordl_internal_get__languageOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____languageOverrides;
}
constexpr void GlobalNamespace::TextStyleSO::__cordl_internal_set__languageOverrides(
    ::BGLib::UnityExtension::SerializableDictionary_2<::BGLib::Polyglot::LocalizationLanguage, ::GlobalNamespace::TextStyle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____languageOverrides = value;
}
inline ::GlobalNamespace::IReadOnlyTextStyle* GlobalNamespace::TextStyleSO::get_textStyle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyleSO*>(), { "get_textStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadOnlyTextStyle*>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::SerializableDictionary_2<::BGLib::Polyglot::LocalizationLanguage, ::GlobalNamespace::TextStyle*>* GlobalNamespace::TextStyleSO::get_languageOverrides() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyleSO*>(), { "get_languageOverrides", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::UnityExtension::SerializableDictionary_2<::BGLib::Polyglot::LocalizationLanguage, ::GlobalNamespace::TextStyle*>*>(this, ___internal_method);
}
inline void GlobalNamespace::TextStyleSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyleSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextStyleSO* GlobalNamespace::TextStyleSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextStyleSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextStyleSO::TextStyleSO() {}
