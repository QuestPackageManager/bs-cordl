#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FontStyleStack.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyleStack_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontStyleStack.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontStyleStack::*)()>(&::UnityEngine::TextCore::Text::FontStyleStack::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c0f7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontStyleStack>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontStyleStack.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::UnityEngine::TextCore::Text::FontStyleStack::*)(::UnityEngine::TextCore::Text::FontStyles)>(
    &::UnityEngine::TextCore::Text::FontStyleStack::Add)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6c0f7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontStyleStack>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontStyleStack.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::UnityEngine::TextCore::Text::FontStyleStack::*)(::UnityEngine::TextCore::Text::FontStyles)>(
    &::UnityEngine::TextCore::Text::FontStyleStack::Remove)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6c0f8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontStyleStack>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::FontStyleStack::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontStyleStack>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline uint8_t UnityEngine::TextCore::Text::FontStyleStack::Add(::UnityEngine::TextCore::Text::FontStyles style) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontStyleStack>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, style);
}
inline uint8_t UnityEngine::TextCore::Text::FontStyleStack::Remove(::UnityEngine::TextCore::Text::FontStyles style) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontStyleStack>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, style);
}
// Ctor Parameters [CppParam { name: "bold", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "italic", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "underline", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethrough", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlight", ty:
// "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "superscript", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "subscript", ty: "uint8_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "uppercase", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lowercase", ty: "uint8_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "smallcaps", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::FontStyleStack::FontStyleStack(uint8_t bold, uint8_t italic, uint8_t underline, uint8_t strikethrough, uint8_t highlight, uint8_t superscript,
                                                                        uint8_t subscript, uint8_t uppercase, uint8_t lowercase, uint8_t smallcaps) noexcept {
  this->bold = bold;
  this->italic = italic;
  this->underline = underline;
  this->strikethrough = strikethrough;
  this->highlight = highlight;
  this->superscript = superscript;
  this->subscript = subscript;
  this->uppercase = uppercase;
  this->lowercase = lowercase;
  this->smallcaps = smallcaps;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::FontStyleStack::FontStyleStack() {}
