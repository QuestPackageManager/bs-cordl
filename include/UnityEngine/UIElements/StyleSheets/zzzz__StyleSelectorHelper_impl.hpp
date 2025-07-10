#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSelectorHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSelectorHelper_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultInfo_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__SelectorMatchRecord_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleMatchingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper.MatchesSelector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::MatchResultInfo (*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSelector*)>(&::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::MatchesSelector)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x49d9c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>::get(), "MatchesSelector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper.MatchRightToLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleComplexSelector*,
                         ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*)>(
        &::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::MatchRightToLeft)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x49d9f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>::get(), "MatchRightToLeft", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper.FastLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*,
                         ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*, ::UnityEngine::UIElements::StyleMatchingContext*, ::StringW,
                         ::ByRef<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>)>(&::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::FastLookup)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x49da108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>::get(), "FastLookup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleMatchingContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper.FindMatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::StyleMatchingContext*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*, int32_t)>(
        &::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::FindMatches)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x49da2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>::get(), "FindMatches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleMatchingContext*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::StyleSheets::MatchResultInfo UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::MatchesSelector(::UnityEngine::UIElements::VisualElement* element,
                                                                                                                                          ::UnityEngine::UIElements::StyleSelector* selector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>::get(), "MatchesSelector", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::MatchResultInfo, false>(nullptr, ___internal_method, element, selector);
}
inline bool UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::MatchRightToLeft(
    ::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleComplexSelector* complexSelector,
    ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* processResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>::get(), "MatchRightToLeft", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, element, complexSelector, processResult);
}
inline void UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::FastLookup(::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* table,
                                                                                  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchedSelectors,
                                                                                  ::UnityEngine::UIElements::StyleMatchingContext* context, ::StringW input,
                                                                                  ::ByRef<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> record) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>::get(), "FastLookup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleMatchingContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, table, matchedSelectors, context, input, record);
}
inline void
UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::FindMatches(::UnityEngine::UIElements::StyleMatchingContext* context,
                                                                       ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchedSelectors,
                                                                       int32_t parentSheetIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*>::get(), "FindMatches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleMatchingContext*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, matchedSelectors, parentSheetIndex);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper::StyleSelectorHelper() {}
