#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Syntax/StyleSyntaxTokenizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxTokenizer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxToken_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::*)()>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::get_current)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d196b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::*)()>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::MoveNext)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6d1a314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer.PeekNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::*)()>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::PeekNext)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6d1a528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(), { "PeekNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer.Tokenize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::*)(::StringW)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::Tokenize)> {
  constexpr static std::size_t size = 0xcc4;
  constexpr static std::size_t addrs = 0x6d18778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(), { "Tokenize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer.IsNextCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t, char16_t)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::IsNextCharacter)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d1adb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(),
                                                             { "IsNextCharacter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer.IsNextLetterOrDash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::IsNextLetterOrDash)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6d1ae68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(),
                                                                                           { "IsNextLetterOrDash", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer.IsNextNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::IsNextNumber)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d1ae00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(),
                                                                                           { "IsNextNumber", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer.GlobCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, char16_t)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::GlobCharacter)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6d1ad78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(),
                                                             { "GlobCharacter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::*)()>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6d186fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>*&
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::__cordl_internal_get_m_Tokens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tokens;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>* const&
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::__cordl_internal_get_m_Tokens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tokens;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::__cordl_internal_set_m_Tokens(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tokens = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::__cordl_internal_get_m_CurrentTokenIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTokenIndex;
}
constexpr int32_t const& UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::__cordl_internal_get_m_CurrentTokenIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTokenIndex;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::__cordl_internal_set_m_CurrentTokenIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentTokenIndex = value;
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::get_current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::PeekNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(), { "PeekNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::Tokenize(::StringW syntax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(), { "Tokenize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syntax);
}
inline bool UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::IsNextCharacter(::StringW s, int32_t index, char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(),
                                                           { "IsNextCharacter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, index, c);
}
inline bool UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::IsNextLetterOrDash(::StringW s, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(),
                                                                                         { "IsNextLetterOrDash", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, index);
}
inline bool UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::IsNextNumber(::StringW s, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(),
                                                                                         { "IsNextNumber", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, index);
}
inline int32_t UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::GlobCharacter(::StringW s, int32_t index, char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(),
                                                           { "GlobCharacter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, index, c);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer::StyleSyntaxTokenizer() {}
