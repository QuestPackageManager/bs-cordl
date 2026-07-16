#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/BaseStyleMatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__BaseStyleMatcher_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__Expression_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__BaseStyleMatcher_def.hpp"
// Ctor Parameters [CppParam { name: "valueIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "matchedVariableCount", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext::BaseStyleMatcher_MatchContext(int32_t valueIndex, int32_t matchedVariableCount) noexcept {
  this->valueIndex = valueIndex;
  this->matchedVariableCount = matchedVariableCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext::BaseStyleMatcher_MatchContext() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::StringW)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchKeyword)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchInteger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchPercentage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchPercentage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchResource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchUrl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchAngle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchCustomIdent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchCustomIdent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.get_valueCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_valueCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.get_isCurrentVariable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_isCurrentVariable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.get_isCurrentComma
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_isCurrentComma)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.get_hasCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_hasCurrent)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6d16ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "get_hasCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.get_currentIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_currentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d16f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "get_currentIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.set_currentIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::set_currentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d16f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "set_currentIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.get_matchedVariableCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_matchedVariableCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d16f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "get_matchedVariableCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.set_matchedVariableCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::set_matchedVariableCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d16f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "set_matchedVariableCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::Initialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6d16f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MoveNext)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d16f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.SaveContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::SaveContext)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6d16fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "SaveContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.RestoreContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::RestoreContext)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6d17028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "RestoreContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.DropContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::DropContext)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d17084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "DropContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.Match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::Match)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6d170d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                           { "Match", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchExpression)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6d1719c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                             { "MatchExpression", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchExpressionWithMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchExpressionWithMultiplier)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6d172b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                             { "MatchExpressionWithMultiplier", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchGroup)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6d17624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                           { "MatchGroup", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchCombinator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchCombinator)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6d173e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                             { "MatchCombinator", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchOr)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6d176e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                           { "MatchOr", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchOrOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchOrOr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d177ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                           { "MatchOrOr", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchAndAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchAndAnd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6d177c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                           { "MatchAndAnd", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchMany
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchMany)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6d1786c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                           { "MatchMany", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchManyByOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, int32_t*)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchManyByOrder)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6d17a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                { "MatchManyByOrder", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>(), ::i2c::type_of<int32_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchJuxtaposition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchJuxtaposition)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d177f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                             { "MatchJuxtaposition", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher.MatchDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(
    &::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchDataType)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6d174bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                             { "MatchDataType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d17bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext>*&
UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::__cordl_internal_get_m_ContextStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContextStack;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext>* const&
UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::__cordl_internal_get_m_ContextStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContextStack;
}
constexpr void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::__cordl_internal_set_m_ContextStack(
    ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContextStack = value;
}
constexpr ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext& UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::__cordl_internal_get_m_CurrentContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentContext;
}
constexpr ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext const& UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::__cordl_internal_get_m_CurrentContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentContext;
}
constexpr void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::__cordl_internal_set_m_CurrentContext(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher_MatchContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentContext = value;
}
inline void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::setStaticF_s_CustomIdentRegex(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "s_CustomIdentRegex", ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::getStaticF_s_CustomIdentRegex() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "s_CustomIdentRegex", ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>();
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchKeyword(::StringW keyword) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyword);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchNumber() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchInteger() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchLength() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchPercentage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchColor() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchResource() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchUrl() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchAngle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchCustomIdent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_valueCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_isCurrentVariable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_isCurrentComma() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_hasCurrent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "get_hasCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_currentIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "get_currentIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::set_currentIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "set_currentIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_matchedVariableCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "get_matchedVariableCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::set_matchedVariableCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "set_matchedVariableCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::SaveContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "SaveContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::RestoreContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "RestoreContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::DropContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { "DropContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::Match(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                         { "Match", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exp);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchExpression(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                           { "MatchExpression", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exp);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchExpressionWithMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                           { "MatchExpressionWithMultiplier", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exp);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchGroup(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                         { "MatchGroup", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exp);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchCombinator(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                           { "MatchCombinator", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exp);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                         { "MatchOr", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exp);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchOrOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                         { "MatchOrOr", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exp);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchAndAnd(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                         { "MatchAndAnd", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exp);
}
inline int32_t UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchMany(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                         { "MatchMany", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, exp);
}
inline int32_t UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchManyByOrder(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp, int32_t* matchOrder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                           { "MatchManyByOrder", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>(), ::i2c::type_of<int32_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, exp, matchOrder);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchJuxtaposition(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                           { "MatchJuxtaposition", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exp);
}
inline bool UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchDataType(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(),
                                                                                         { "MatchDataType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exp);
}
inline void UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher* UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::BaseStyleMatcher() {}
