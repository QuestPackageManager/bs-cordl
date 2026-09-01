#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleSheets\Syntax\StyleSyntaxToken.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxTokenType_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxToken_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxTokenType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::*)(
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d1e2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::*)(
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, ::StringW)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d1e2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::*)(
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, int32_t)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d1e2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::_ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, t);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::_ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, ::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, text);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::_ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, int32_t number) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, number);
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "number", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::StyleSyntaxToken(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, ::StringW text,
                                                                                             int32_t number) noexcept {
  this->type = type;
  this->text = text;
  this->number = number;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::StyleSyntaxToken() {}
