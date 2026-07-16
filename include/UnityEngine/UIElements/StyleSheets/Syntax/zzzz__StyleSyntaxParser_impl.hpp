#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Syntax/StyleSyntaxParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxParser_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionCombinator_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionMultiplier_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__Expression_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxToken_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxTokenizer_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::StringW)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::Parse)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6d1853c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseExpression)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6d1943c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                             { "ParseExpression", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ProcessCombinatorStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)()>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ProcessCombinatorStack)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x6d19c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(), { "ProcessCombinatorStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseTerm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseTerm)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6d19774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                             { "ParseTerm", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseCombinatorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseCombinatorType)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6d19aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                             { "ParseCombinatorType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseGroup)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6d198d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                             { "ParseGroup", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseDataType)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x6d19f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                             { "ParseDataType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseNonTerminalValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::StringW)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseNonTerminalValue)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6d1a640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(), { "ParseNonTerminalValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseProperty)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x6d1a79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                             { "ParseProperty", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, ::by_ref<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseMultiplier)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6d1a420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                                                           { "ParseMultiplier",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseRanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseRanges)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6d1aab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                                                           { "ParseRanges",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(),
                                                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.EatSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::EatSpace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6d1a600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                             { "EatSpace", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.IsExpressionEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::IsExpressionEnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d19f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                             { "IsExpressionEnd", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.IsCombinator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::IsCombinator)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d1a5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                             { "IsCombinator", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.IsMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::IsMultiplier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d1aa98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                             { "IsMultiplier", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)()>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6d1abd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*&
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::__cordl_internal_get_m_ProcessExpressionList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessExpressionList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* const&
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::__cordl_internal_get_m_ProcessExpressionList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessExpressionList;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::__cordl_internal_set_m_ProcessExpressionList(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProcessExpressionList = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*&
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::__cordl_internal_get_m_ExpressionStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExpressionStack;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* const&
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::__cordl_internal_get_m_ExpressionStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExpressionStack;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::__cordl_internal_set_m_ExpressionStack(
    ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExpressionStack = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>*&
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::__cordl_internal_get_m_CombinatorStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinatorStack;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>* const&
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::__cordl_internal_get_m_CombinatorStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinatorStack;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::__cordl_internal_set_m_CombinatorStack(
    ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CombinatorStack = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*&
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::__cordl_internal_get_m_ParsedExpressionCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParsedExpressionCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* const&
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::__cordl_internal_get_m_ParsedExpressionCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParsedExpressionCache;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::__cordl_internal_set_m_ParsedExpressionCache(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParsedExpressionCache = value;
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::Parse(::StringW syntax) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>(this, ___internal_method, syntax);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseExpression(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                           { "ParseExpression", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>(this, ___internal_method, tokenizer);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ProcessCombinatorStack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(), { "ProcessCombinatorStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseTerm(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                           { "ParseTerm", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>(this, ___internal_method, tokenizer);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseCombinatorType(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                           { "ParseCombinatorType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>(this, ___internal_method, tokenizer);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseGroup(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                           { "ParseGroup", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>(this, ___internal_method, tokenizer);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseDataType(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                           { "ParseDataType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>(this, ___internal_method, tokenizer);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseNonTerminalValue(::StringW syntax) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(), { "ParseNonTerminalValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>(this, ___internal_method, syntax);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseProperty(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                           { "ParseProperty", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>(this, ___internal_method, tokenizer);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer,
                                                                                             ::by_ref<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier> multiplier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                                                         { "ParseMultiplier",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tokenizer, multiplier);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseRanges(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer, ::by_ref<int32_t> min,
                                                                                         ::by_ref<int32_t> max) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                          { "ParseRanges",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tokenizer, min, max);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::EatSpace(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                           { "EatSpace", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tokenizer);
}
inline bool UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::IsExpressionEnd(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                           { "IsExpressionEnd", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, token);
}
inline bool UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::IsCombinator(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                           { "IsCombinator", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, token);
}
inline bool UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::IsMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(),
                                                           { "IsMultiplier", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, token);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::StyleSyntaxParser() {}
