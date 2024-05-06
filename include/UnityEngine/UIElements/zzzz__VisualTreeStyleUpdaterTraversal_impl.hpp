#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__HierarchyTraversal_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeStyleUpdaterTraversal_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultInfo_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__SelectorMatchRecord_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyReader_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleMatchingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeStyleUpdaterTraversal_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c::*)()>(
    &::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35181dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c._ProcessMatchedRules_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c::*)(
    ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord, ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord)>(
    &::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c::_ProcessMatchedRules_b__24_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x35181e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*>::get(), "<ProcessMatchedRules>b__24_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c::setStaticF___9(::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*>::get>(
      std::forward<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*>(value));
}
inline ::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c* UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*>::get>();
}
inline void UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c::setStaticF___9__24_0(::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*, "<>9__24_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*, "<>9__24_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*>::get>();
}
inline ::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c* UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*>());
}
inline void UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c::_ProcessMatchedRules_b__24_0(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord a,
                                                                                                             ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*>::get(), "<ProcessMatchedRules>b__24_0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c::__VisualTreeStyleUpdaterTraversal____c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.get_currentPixelsPerPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)()>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::get_currentPixelsPerPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3516d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(),
                                                 "get_currentPixelsPerPoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.set_currentPixelsPerPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(float_t)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::set_currentPixelsPerPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3516d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "set_currentPixelsPerPoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.PrepareTraversal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(float_t)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PrepareTraversal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35166e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "PrepareTraversal",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.AddChangedElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::AddChangedElement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3515ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "AddChangedElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VersionChangeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)()>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::Clear)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3516364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.PropagateToChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PropagateToChildren)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3516d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "PropagateToChildren", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.PropagateToParents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PropagateToParents)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3516dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "PropagateToParents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.OnProcessMatchResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::OnProcessMatchResult)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3516e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "OnProcessMatchResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.TraverseRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(
    ::UnityEngine::UIElements::VisualElement*, int32_t)>(&::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::TraverseRecursive)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x3516ec4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.ProcessTransitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(
    ::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::UIElements::ComputedStyle>, ByRef<::UnityEngine::UIElements::ComputedStyle>)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessTransitions)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3517d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "ProcessTransitions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::ComputedStyle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::ComputedStyle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.ForceUpdateTransitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ForceUpdateTransitions)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x3517de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "ForceUpdateTransitions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.CancelAnimationsWithNoTransitionProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::UIElements::ComputedStyle>)>(
        &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::CancelAnimationsWithNoTransitionProperty)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x3516408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(),
                                                 "CancelAnimationsWithNoTransitionProperty", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::ComputedStyle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.ShouldSkipElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ShouldSkipElement)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x35174c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "ShouldSkipElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.ProcessMatchedRules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ComputedStyle (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessMatchedRules)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x3517548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "ProcessMatchedRules", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.ProcessMatchedVariables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(
    ::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleRule*)>(&::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessMatchedVariables)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x351807c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "ProcessMatchedVariables", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRule*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)()>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x35167bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::StyleVariableContext*& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_ProcessVarContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessVarContext;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleVariableContext*> const&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_ProcessVarContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessVarContext;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_ProcessVarContext(::UnityEngine::UIElements::StyleVariableContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProcessVarContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_UpdateList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_UpdateList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateList;
}
constexpr void
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_UpdateList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UpdateList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_ParentList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_ParentList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentList;
}
constexpr void
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_ParentList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ParentList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_TempMatchResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempMatchResults;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*> const&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_TempMatchResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempMatchResults;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_TempMatchResults(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TempMatchResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get__currentPixelsPerPoint_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPixelsPerPoint_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get__currentPixelsPerPoint_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPixelsPerPoint_k__BackingField;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set__currentPixelsPerPoint_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPixelsPerPoint_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::StyleMatchingContext*& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_StyleMatchingContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleMatchingContext;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleMatchingContext*> const&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_StyleMatchingContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleMatchingContext;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_StyleMatchingContext(::UnityEngine::UIElements::StyleMatchingContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StyleMatchingContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyReader*& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_StylePropertyReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StylePropertyReader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*> const&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_StylePropertyReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StylePropertyReader;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_StylePropertyReader(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StylePropertyReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_AnimatedProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimatedProperties;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_AnimatedProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimatedProperties;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_AnimatedProperties(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AnimatedProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::get_currentPixelsPerPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(),
                                                                             "get_currentPixelsPerPoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::set_currentPixelsPerPoint(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "set_currentPixelsPerPoint",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PrepareTraversal(float_t pixelsPerPoint) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "PrepareTraversal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pixelsPerPoint);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::AddChangedElement(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "AddChangedElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VersionChangeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PropagateToChildren(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "PropagateToChildren", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PropagateToParents(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "PropagateToParents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::OnProcessMatchResult(::UnityEngine::UIElements::VisualElement* current,
                                                                                           ::UnityEngine::UIElements::StyleSheets::MatchResultInfo info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "OnProcessMatchResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, current, info);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element, depth);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessTransitions(::UnityEngine::UIElements::VisualElement* element, ByRef<::UnityEngine::UIElements::ComputedStyle> oldStyle,
                                                                                         ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "ProcessTransitions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::ComputedStyle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::ComputedStyle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element, oldStyle, newStyle);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ForceUpdateTransitions(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "ForceUpdateTransitions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::CancelAnimationsWithNoTransitionProperty(::UnityEngine::UIElements::VisualElement* element,
                                                                                                               ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(),
                                               "CancelAnimationsWithNoTransitionProperty", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::ComputedStyle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element, newStyle);
}
inline bool UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ShouldSkipElement(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "ShouldSkipElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, element);
}
inline ::UnityEngine::UIElements::ComputedStyle
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessMatchedRules(::UnityEngine::UIElements::VisualElement* element,
                                                                              ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchingSelectors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "ProcessMatchedRules", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ComputedStyle, false>(this, ___internal_method, element, matchingSelectors);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessMatchedVariables(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleRule* rule) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(), "ProcessMatchedVariables", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRule*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sheet, rule);
}
inline ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal* UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>());
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::VisualTreeStyleUpdaterTraversal() {}
