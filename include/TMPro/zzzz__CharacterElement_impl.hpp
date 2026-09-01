#pragma once
// IWYU pragma private; include "TMPro\CharacterElement.hpp"
#include "TMPro/zzzz__CharacterElement_def.hpp"
#include "TMPro/zzzz__TMP_TextElement_def.hpp"
//  Writing Method size for method: ::TMPro::CharacterElement.get_Unicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::CharacterElement::*)()>(&::TMPro::CharacterElement::get_Unicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a6a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::CharacterElement>(), { "get_Unicode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::CharacterElement.set_Unicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::CharacterElement::*)(uint32_t)>(&::TMPro::CharacterElement::set_Unicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a6a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::CharacterElement>(), { "set_Unicode", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::CharacterElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::CharacterElement::*)(::TMPro::TMP_TextElement*)>(&::TMPro::CharacterElement::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69a6a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::CharacterElement>(), { ".ctor", {}, { ::i2c::type_of<::TMPro::TMP_TextElement*>() } })));
    return ___internal_method;
  }
};
inline uint32_t TMPro::CharacterElement::get_Unicode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::CharacterElement>(), { "get_Unicode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void TMPro::CharacterElement::set_Unicode(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::CharacterElement>(), { "set_Unicode", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void TMPro::CharacterElement::_ctor(::TMPro::TMP_TextElement* textElement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::CharacterElement>(), { ".ctor", {}, { ::i2c::type_of<::TMPro::TMP_TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, textElement);
}
// Ctor Parameters [CppParam { name: "m_Unicode", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TextElement", ty: "::TMPro::TMP_TextElement*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::TMPro::CharacterElement::CharacterElement(uint32_t m_Unicode, ::TMPro::TMP_TextElement* m_TextElement) noexcept {
  this->m_Unicode = m_Unicode;
  this->m_TextElement = m_TextElement;
}
// Ctor Parameters []
constexpr ::TMPro::CharacterElement::CharacterElement() {}
