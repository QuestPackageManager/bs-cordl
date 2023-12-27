#pragma once
#include "UnityEngine/TextCore/Text/zzzz__FontStyleStack_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontStyleStack.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontStyleStack::*)()>(&::UnityEngine::TextCore::Text::FontStyleStack::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d4a820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontStyleStack>::get(), "Clear",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontStyleStack.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::UnityEngine::TextCore::Text::FontStyleStack::*)(::UnityEngine::TextCore::Text::FontStyles)>(
    &::UnityEngine::TextCore::Text::FontStyleStack::Add)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2d4a82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontStyleStack>::get(), "Add", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontStyles>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontStyleStack.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::UnityEngine::TextCore::Text::FontStyleStack::*)(::UnityEngine::TextCore::Text::FontStyles)>(
    &::UnityEngine::TextCore::Text::FontStyleStack::Remove)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2d4a928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontStyleStack>::get(), "Remove", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontStyles>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::FontStyleStack::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontStyleStack>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t UnityEngine::TextCore::Text::FontStyleStack::Add(::UnityEngine::TextCore::Text::FontStyles style) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontStyleStack>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontStyles>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, style);
}
inline uint8_t UnityEngine::TextCore::Text::FontStyleStack::Remove(::UnityEngine::TextCore::Text::FontStyles style) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontStyleStack>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontStyles>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, style);
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
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
