#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelFailedText.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFailedText_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizedTextMeshPro_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelFailedText.OverrideText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFailedText::*)(::StringW)>(&::GlobalNamespace::LevelFailedText::OverrideText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59827f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFailedText*>(), { "OverrideText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFailedText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFailedText::*)()>(&::GlobalNamespace::LevelFailedText::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598283c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFailedText*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::LevelFailedText::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::LevelFailedText::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::LevelFailedText::__cordl_internal_set__text(::UnityW<::TMPro::TMP_Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshPro>& GlobalNamespace::LevelFailedText::__cordl_internal_get__localizedText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedText;
}
constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshPro> const& GlobalNamespace::LevelFailedText::__cordl_internal_get__localizedText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedText;
}
constexpr void GlobalNamespace::LevelFailedText::__cordl_internal_set__localizedText(::UnityW<::BGLib::Polyglot::LocalizedTextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localizedText = value;
}
inline void GlobalNamespace::LevelFailedText::OverrideText(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFailedText*>(), { "OverrideText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::LevelFailedText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFailedText*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelFailedText* GlobalNamespace::LevelFailedText::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelFailedText*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFailedText::LevelFailedText() {}
