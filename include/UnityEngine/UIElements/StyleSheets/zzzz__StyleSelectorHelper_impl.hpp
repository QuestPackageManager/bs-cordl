#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSelectorHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSelectorHelper_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultInfo_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__SelectorMatchRecord_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSelectorHelper_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleMatchingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem::*)(
    ::UnityEngine::UIElements::StyleSheet_OrderedSelectorType, ::StringW)>(&::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d1458c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet_OrderedSelectorType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem::_ctor(::UnityEngine::UIElements::StyleSheet_OrderedSelectorType type, ::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet_OrderedSelectorType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, input);
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::UIElements::StyleSheet_OrderedSelectorType", modifiers: "", def_value: Some("{}") }, CppParam { name: "input", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem::StyleSelectorHelper_SelectorWorkItem(::UnityEngine::UIElements::StyleSheet_OrderedSelectorType type,
                                                                                                                             ::StringW input) noexcept {
  this->type = type;
  this->input = input;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper_SelectorWorkItem::StyleSelectorHelper_SelectorWorkItem() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper.MatchesSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::MatchResultInfo (*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSelector*)>(&::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::MatchesSelector)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x6d13908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>(),
                                         { "MatchesSelector", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSelector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper.MatchRightToLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleComplexSelector*,
                                                                ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::MatchRightToLeft)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6d13b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>(),
                                                { "MatchRightToLeft",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleComplexSelector*>(),
                                                    ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper.TestSelectorLinkedList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::UIElements::StyleComplexSelector*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*,
                         ::UnityEngine::UIElements::StyleMatchingContext*, ::by_ref<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>)>(
        &::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::TestSelectorLinkedList)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6d13ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>(),
                            { "TestSelectorLinkedList",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::StyleComplexSelector*>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>(),
                                ::i2c::type_of<::UnityEngine::UIElements::StyleMatchingContext*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper.FastLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*,
                                                                ::UnityEngine::UIElements::StyleMatchingContext*, ::StringW, ::by_ref<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::FastLookup)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6d13e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>(),
                                                             { "FastLookup",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StyleMatchingContext*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper.FindMatches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::UIElements::StyleMatchingContext*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*, int32_t)>(
        &::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::FindMatches)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x6d13f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>(),
                                         { "FindMatches",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::UIElements::StyleMatchingContext*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::StyleSheets::MatchResultInfo UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::MatchesSelector(::UnityEngine::UIElements::VisualElement* element,
                                                                                                                                          ::UnityEngine::UIElements::StyleSelector* selector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>(),
                                       { "MatchesSelector", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSelector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>(nullptr, ___internal_method, element, selector);
}
inline bool UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::MatchRightToLeft(
    ::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleComplexSelector* complexSelector,
    ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* processResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>(),
                                              { "MatchRightToLeft",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleComplexSelector*>(),
                                                  ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, complexSelector, processResult);
}
inline void UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::TestSelectorLinkedList(
    ::UnityEngine::UIElements::StyleComplexSelector* currentComplexSelector, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchedSelectors,
    ::UnityEngine::UIElements::StyleMatchingContext* context, ::by_ref<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> record) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>(),
                          { "TestSelectorLinkedList",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::StyleComplexSelector*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>(),
                              ::i2c::type_of<::UnityEngine::UIElements::StyleMatchingContext*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentComplexSelector, matchedSelectors, context, record);
}
inline void UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::FastLookup(::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* table,
                                                                                  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchedSelectors,
                                                                                  ::UnityEngine::UIElements::StyleMatchingContext* context, ::StringW input,
                                                                                  ::by_ref<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> record) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>(),
                                                           { "FastLookup",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleMatchingContext*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, table, matchedSelectors, context, input, record);
}
inline void
UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::FindMatches(::UnityEngine::UIElements::StyleMatchingContext* context,
                                                                       ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchedSelectors,
                                                                       int32_t parentSheetIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>(),
                                       { "FindMatches",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::UIElements::StyleMatchingContext*>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, matchedSelectors, parentSheetIndex);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::StyleSelectorHelper() {}
