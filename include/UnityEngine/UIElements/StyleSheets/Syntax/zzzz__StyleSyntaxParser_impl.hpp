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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::StringW)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::Parse)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6ae7380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "Parse",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseExpression)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6ae8280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseExpression", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ProcessCombinatorStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)()>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ProcessCombinatorStack)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x6ae8a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(),
                                                 "ProcessCombinatorStack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseTerm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseTerm)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6ae85b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseTerm", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseCombinatorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseCombinatorType)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6ae8930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseCombinatorType",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseGroup)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6ae8714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseDataType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseDataType)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x6ae8d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseDataType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseNonTerminalValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::StringW)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseNonTerminalValue)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6ae9484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseNonTerminalValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::Syntax::Expression* (
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseProperty)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x6ae95e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, ::ByRef<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseMultiplier)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6ae9264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseMultiplier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.ParseRanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)(
    ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, ::ByRef<int32_t>, ::ByRef<int32_t>)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseRanges)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6ae98f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseRanges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.EatSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::EatSpace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ae9444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "EatSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.IsExpressionEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::IsExpressionEnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ae8d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "IsExpressionEnd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.IsCombinator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::IsCombinator)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ae9430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "IsCombinator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser.IsMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken)>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::IsMultiplier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ae98dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "IsMultiplier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::*)()>(
    &::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6ae9a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProcessExpressionList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExpressionStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CombinatorStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ParsedExpressionCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::Parse(::StringW syntax) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "Parse",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, false>(this, ___internal_method, syntax);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseExpression(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseExpression", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, false>(this, ___internal_method, tokenizer);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ProcessCombinatorStack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(),
                                               "ProcessCombinatorStack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseTerm(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseTerm", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, false>(this, ___internal_method, tokenizer);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseCombinatorType(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseCombinatorType",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator, false>(this, ___internal_method, tokenizer);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseGroup(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, false>(this, ___internal_method, tokenizer);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseDataType(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseDataType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, false>(this, ___internal_method, tokenizer);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseNonTerminalValue(::StringW syntax) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseNonTerminalValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, false>(this, ___internal_method, syntax);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*
UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseProperty(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, false>(this, ___internal_method, tokenizer);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer,
                                                                                             ::ByRef<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier> multiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseMultiplier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tokenizer, multiplier);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::ParseRanges(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer, ::ByRef<int32_t> min,
                                                                                         ::ByRef<int32_t> max) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "ParseRanges", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tokenizer, min, max);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::EatSpace(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "EatSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tokenizer);
}
inline bool UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::IsExpressionEnd(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "IsExpressionEnd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
inline bool UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::IsCombinator(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "IsCombinator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
inline bool UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::IsMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), "IsMultiplier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser::StyleSyntaxParser() {}
