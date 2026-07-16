#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDispatchUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatchUtilities_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.PropagateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*,
                                                                bool)>(&::UnityEngine::UIElements::EventDispatchUtilities::PropagateEvent)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6d96510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "PropagateEvent",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.HandleEventAtTargetAndDefaultPhase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::HandleEventAtTargetAndDefaultPhase)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x6d97a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "HandleEventAtTargetAndDefaultPhase",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.HandleEventAcrossPropagationPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*,
                                                                bool)>(&::UnityEngine::UIElements::EventDispatchUtilities::HandleEventAcrossPropagationPath)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0x6d97294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "HandleEventAcrossPropagationPath",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.HandleEventAcrossPropagationPathWithCompatibilityEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*,
                                                                ::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::HandleEventAcrossPropagationPathWithCompatibilityEvent)> {
  constexpr static std::size_t size = 0xc34;
  constexpr static std::size_t addrs = 0x6d96660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                            { "HandleEventAcrossPropagationPathWithCompatibilityEvent",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(),
                                ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.HandleEvent_DefaultActionAtTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*,
                                                                bool)>(&::UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_DefaultActionAtTarget)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6d981e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "HandleEvent_DefaultActionAtTarget",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.HandleEvent_DefaultAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*,
                                                                bool)>(&::UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_DefaultAction)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6d9827c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "HandleEvent_DefaultAction",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.HandleEvent_TrickleDownCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_TrickleDownCallbacks)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6d98310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "HandleEvent_TrickleDownCallbacks",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.HandleEvent_BubbleUpCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_BubbleUpCallbacks)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6d9833c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "HandleEvent_BubbleUpCallbacks",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.HandleEvent_TrickleDownHandleEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*,
                                                                bool)>(&::UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_TrickleDownHandleEvent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6d98368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "HandleEvent_TrickleDownHandleEvent",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.HandleEvent_BubbleUpHandleEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*,
                                                                bool)>(&::UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_BubbleUpHandleEvent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6d983c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "HandleEvent_BubbleUpHandleEvent",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.HandleEvent_BubbleUpAllDefaultActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*,
                                                                bool, bool)>(&::UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_BubbleUpAllDefaultActions)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6d98418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "HandleEvent_BubbleUpAllDefaultActions",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.Disabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::Disabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6d97eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                { "Disabled", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.DispatchToFocusedElementOrPanelRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::DispatchToFocusedElementOrPanelRoot)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6d985d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
            { "DispatchToFocusedElementOrPanelRoot", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.DispatchToElementUnderPointerOrPanelRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, int32_t, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::DispatchToElementUnderPointerOrPanelRoot)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6d98920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "DispatchToElementUnderPointerOrPanelRoot",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.DispatchToCachedElementUnderPointerOrPanelRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, int32_t, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::DispatchToCachedElementUnderPointerOrPanelRoot)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6d98a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "DispatchToCachedElementUnderPointerOrPanelRoot",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.DispatchToAssignedTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::DispatchToAssignedTarget)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6d98ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                            { "DispatchToAssignedTarget", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.DefaultDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::DefaultDispatch)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6d94ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                            { "DefaultDispatch", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.DispatchToCapturingElementOrElementUnderPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, int32_t, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::DispatchToCapturingElementOrElementUnderPointer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6d98b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "DispatchToCapturingElementOrElementUnderPointer",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.DispatchToCapturingElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, int32_t, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::DispatchToCapturingElement)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6d98bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                             { "DispatchToCapturingElement",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.DispatchToPanelRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::DispatchToPanelRoot)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d98d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                            { "DispatchToPanelRoot", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.PropagateToRemainingIMGUIContainers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::PropagateToRemainingIMGUIContainers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d988b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                            { "PropagateToRemainingIMGUIContainers", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatchUtilities.PropagateToRemainingIMGUIContainerRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::EventDispatchUtilities::PropagateToRemainingIMGUIContainerRecursive)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x6d98d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
            { "PropagateToRemainingIMGUIContainerRecursive", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::EventDispatchUtilities::PropagateEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                            ::UnityEngine::UIElements::VisualElement* target, bool isCapturingTarget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "PropagateEvent",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, target, isCapturingTarget);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::HandleEventAtTargetAndDefaultPhase(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                                ::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "HandleEventAtTargetAndDefaultPhase",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, target);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::HandleEventAcrossPropagationPath(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                              ::UnityEngine::UIElements::VisualElement* target, bool isCapturingTarget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "HandleEventAcrossPropagationPath",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, target, isCapturingTarget);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::HandleEventAcrossPropagationPathWithCompatibilityEvent(::UnityEngine::UIElements::EventBase* evt,
                                                                                                                    ::UnityEngine::UIElements::EventBase* compatibilityEvt,
                                                                                                                    ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                                                    ::UnityEngine::UIElements::VisualElement* target, bool isCapturingTarget) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                          { "HandleEventAcrossPropagationPathWithCompatibilityEvent",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(),
                              ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, compatibilityEvt, panel, target, isCapturingTarget);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_DefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                               ::UnityEngine::UIElements::VisualElement* element, bool disabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "HandleEvent_DefaultActionAtTarget",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, element, disabled);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_DefaultAction(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                       ::UnityEngine::UIElements::VisualElement* element, bool disabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "HandleEvent_DefaultAction",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, element, disabled);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_TrickleDownCallbacks(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                              ::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "HandleEvent_TrickleDownCallbacks",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, element);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_BubbleUpCallbacks(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                           ::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "HandleEvent_BubbleUpCallbacks",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, element);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_TrickleDownHandleEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                                ::UnityEngine::UIElements::VisualElement* element, bool disabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "HandleEvent_TrickleDownHandleEvent",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, element, disabled);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_BubbleUpHandleEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                             ::UnityEngine::UIElements::VisualElement* element, bool disabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "HandleEvent_BubbleUpHandleEvent",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, element, disabled);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::HandleEvent_BubbleUpAllDefaultActions(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                                   ::UnityEngine::UIElements::VisualElement* element, bool disabled, bool isCapturingTarget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "HandleEvent_BubbleUpAllDefaultActions",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, element, disabled, isCapturingTarget);
}
inline bool UnityEngine::UIElements::EventDispatchUtilities::Disabled(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                              { "Disabled", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, evt, target);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::DispatchToFocusedElementOrPanelRoot(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
          { "DispatchToFocusedElementOrPanelRoot", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::DispatchToElementUnderPointerOrPanelRoot(::UnityEngine::UIElements::EventBase* evt,
                                                                                                      ::UnityEngine::UIElements::BaseVisualElementPanel* panel, int32_t pointerId,
                                                                                                      ::UnityEngine::Vector2 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "DispatchToElementUnderPointerOrPanelRoot",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, pointerId, position);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::DispatchToCachedElementUnderPointerOrPanelRoot(::UnityEngine::UIElements::EventBase* evt,
                                                                                                            ::UnityEngine::UIElements::BaseVisualElementPanel* panel, int32_t pointerId,
                                                                                                            ::UnityEngine::Vector2 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "DispatchToCachedElementUnderPointerOrPanelRoot",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, pointerId, position);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::DispatchToAssignedTarget(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                          { "DispatchToAssignedTarget", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::DefaultDispatch(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                       { "DefaultDispatch", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::DispatchToCapturingElementOrElementUnderPointer(::UnityEngine::UIElements::EventBase* evt,
                                                                                                             ::UnityEngine::UIElements::BaseVisualElementPanel* panel, int32_t pointerId,
                                                                                                             ::UnityEngine::Vector2 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "DispatchToCapturingElementOrElementUnderPointer",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel, pointerId, position);
}
inline bool UnityEngine::UIElements::EventDispatchUtilities::DispatchToCapturingElement(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                        int32_t pointerId, ::UnityEngine::Vector2 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                                                           { "DispatchToCapturingElement",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, evt, panel, pointerId, position);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::DispatchToPanelRoot(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                          { "DispatchToPanelRoot", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, panel);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::PropagateToRemainingIMGUIContainers(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::VisualElement* root) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
                          { "PropagateToRemainingIMGUIContainers", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, root);
}
inline void UnityEngine::UIElements::EventDispatchUtilities::PropagateToRemainingIMGUIContainerRecursive(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::VisualElement* root) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::EventDispatchUtilities*>(),
          { "PropagateToRemainingIMGUIContainerRecursive", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, root);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventDispatchUtilities::EventDispatchUtilities() {}
