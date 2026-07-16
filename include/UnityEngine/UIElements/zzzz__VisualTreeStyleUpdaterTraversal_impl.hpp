#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeStyleUpdaterTraversal.hpp"
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
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleMatchingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeStyleUpdaterTraversal_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c::*)()>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ccd610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c._ProcessMatchedRules_b__28_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c::*)(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord,
                                                                                                                                   ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c::_ProcessMatchedRules_b__28_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ccd614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c*>(),
                            { "<ProcessMatchedRules>b__28_0",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c::setStaticF___9(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c*, "<>9", ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c*>(
      std::forward<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c*>(value));
}
inline ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c* UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c*, "<>9", ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c*>();
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c::setStaticF___9__28_0(::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*, "<>9__28_0", ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c::getStaticF___9__28_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*, "<>9__28_0",
                                           ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c*>();
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c::_ProcessMatchedRules_b__28_0(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord a,
                                                                                                          ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c*>(),
                          { "<ProcessMatchedRules>b__28_0",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c* UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal___c::VisualTreeStyleUpdaterTraversal___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.get_currentPixelsPerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)()>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::get_currentPixelsPerPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ccc438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(), { "get_currentPixelsPerPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.set_currentPixelsPerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(float_t)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::set_currentPixelsPerPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ccc440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(), { "set_currentPixelsPerPoint", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.get_currentPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BaseVisualElementPanel* (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)()>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::get_currentPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ccc448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(), { "get_currentPanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.set_currentPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::set_currentPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ccc450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                                                           { "set_currentPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.PrepareTraversal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::BaseVisualElementPanel*, float_t)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PrepareTraversal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ccbdcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                             { "PrepareTraversal", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.AddChangedElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::AddChangedElement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ccb694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                            { "AddChangedElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VersionChangeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)()>(&::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::Clear)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6ccba60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.PropagateToChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PropagateToChildren)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6ccc458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                                                           { "PropagateToChildren", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.PropagateToParents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PropagateToParents)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6ccc538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                                                           { "PropagateToParents", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.OnProcessMatchResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::OnProcessMatchResult)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6ccc5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                         { "OnProcessMatchResult", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.TraverseRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::TraverseRecursive)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x6ccc600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.ProcessTransitions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(
    ::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::ComputedStyle>, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessTransitions)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6ccd220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                             { "ProcessTransitions",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.ForceUpdateTransitions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ForceUpdateTransitions)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6ccd2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                                                           { "ForceUpdateTransitions", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.CancelAnimationsWithNoTransitionProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(
        &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::CancelAnimationsWithNoTransitionProperty)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6ccbb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                { "CancelAnimationsWithNoTransitionProperty",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.ShouldSkipElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ShouldSkipElement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6cccba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                                                           { "ShouldSkipElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.ProcessMatchedRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ComputedStyle (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*)>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessMatchedRules)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x6cccc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                             { "ProcessMatchedRules",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal.ProcessMatchedVariables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)(
    ::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleRule*)>(&::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessMatchedVariables)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6ccd51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                         { "ProcessMatchedVariables", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleRule*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::*)()>(&::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6ccbea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::StyleVariableContext*& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_ProcessVarContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessVarContext;
}
constexpr ::UnityEngine::UIElements::StyleVariableContext* const& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_ProcessVarContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessVarContext;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_ProcessVarContext(::UnityEngine::UIElements::StyleVariableContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProcessVarContext = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_UpdateList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateList;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_UpdateList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateList;
}
constexpr void
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_UpdateList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateList = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_ParentList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentList;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_ParentList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentList;
}
constexpr void
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_ParentList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParentList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_TempMatchResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempMatchResults;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* const&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_TempMatchResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempMatchResults;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_TempMatchResults(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TempMatchResults = value;
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
constexpr ::UnityEngine::UIElements::StyleMatchingContext* const& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_StyleMatchingContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleMatchingContext;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_StyleMatchingContext(::UnityEngine::UIElements::StyleMatchingContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StyleMatchingContext = value;
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyReader*& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_StylePropertyReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StylePropertyReader;
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* const& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_StylePropertyReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StylePropertyReader;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_StylePropertyReader(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StylePropertyReader = value;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get__currentPanel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPanel_k__BackingField;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get__currentPanel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPanel_k__BackingField;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set__currentPanel_k__BackingField(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPanel_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_AnimatedProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimatedProperties;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* const&
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_get_m_AnimatedProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimatedProperties;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::__cordl_internal_set_m_AnimatedProperties(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AnimatedProperties = value;
}
inline float_t UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::get_currentPixelsPerPoint() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(), { "get_currentPixelsPerPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::set_currentPixelsPerPoint(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(), { "set_currentPixelsPerPoint", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::BaseVisualElementPanel* UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::get_currentPanel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(), { "get_currentPanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseVisualElementPanel*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::set_currentPanel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                                                         { "set_currentPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PrepareTraversal(::UnityEngine::UIElements::BaseVisualElementPanel* panel, float_t pixelsPerPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                           { "PrepareTraversal", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel, pixelsPerPoint);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::AddChangedElement(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                       { "AddChangedElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VersionChangeType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PropagateToChildren(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                                                         { "PropagateToChildren", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::PropagateToParents(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                                                         { "PropagateToParents", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::OnProcessMatchResult(::UnityEngine::UIElements::VisualElement* current,
                                                                                           ::UnityEngine::UIElements::StyleSheets::MatchResultInfo info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                          { "OnProcessMatchResult", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::MatchResultInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, current, info);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, depth);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessTransitions(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::ComputedStyle> oldStyle,
                                                                                         ::by_ref<::UnityEngine::UIElements::ComputedStyle> newStyle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                           { "ProcessTransitions",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, oldStyle, newStyle);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ForceUpdateTransitions(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                                                         { "ForceUpdateTransitions", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::CancelAnimationsWithNoTransitionProperty(::UnityEngine::UIElements::VisualElement* element,
                                                                                                               ::by_ref<::UnityEngine::UIElements::ComputedStyle> newStyle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
          { "CancelAnimationsWithNoTransitionProperty", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, newStyle);
}
inline bool UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ShouldSkipElement(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                                                         { "ShouldSkipElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element);
}
inline ::UnityEngine::UIElements::ComputedStyle
UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessMatchedRules(::UnityEngine::UIElements::VisualElement* element,
                                                                              ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchingSelectors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                                           { "ProcessMatchedRules",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ComputedStyle>(this, ___internal_method, element, matchingSelectors);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::ProcessMatchedVariables(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleRule* rule) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(),
                                       { "ProcessMatchedVariables", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleRule*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sheet, rule);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal* UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal::VisualTreeStyleUpdaterTraversal() {}
