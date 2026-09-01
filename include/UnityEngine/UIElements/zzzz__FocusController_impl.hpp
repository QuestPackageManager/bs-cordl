#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\FocusController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__DispatchMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
// Ctor Parameters [CppParam { name: "m_SubTreeRoot", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FocusedElement", ty:
// "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::FocusController_FocusedElement::FocusController_FocusedElement(::UnityEngine::UIElements::VisualElement* m_SubTreeRoot,
                                                                                                    ::UnityEngine::UIElements::VisualElement* m_FocusedElement) noexcept {
  this->m_SubTreeRoot = m_SubTreeRoot;
  this->m_FocusedElement = m_FocusedElement;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FocusController_FocusedElement::FocusController_FocusedElement() {}
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::IFocusRing*)>(
    &::UnityEngine::UIElements::FocusController::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6da85f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::IFocusRing*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.get_focusRing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IFocusRing* (::UnityEngine::UIElements::FocusController::*)()>(
    &::UnityEngine::UIElements::FocusController::get_focusRing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6da8680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "get_focusRing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.set_selectedTextElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::FocusController::set_selectedTextElement)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6da8688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                                                           { "set_selectedTextElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.get_focusedElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::FocusController::*)()>(
    &::UnityEngine::UIElements::FocusController::get_focusedElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6da8748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "get_focusedElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.IgnoreEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::FocusController::IgnoreEvent)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6da8954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "IgnoreEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.IsFocused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*)>(
    &::UnityEngine::UIElements::FocusController::IsFocused)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6da8a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "IsFocused", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.GetRetargetedFocusedElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::FocusController::GetRetargetedFocusedElement)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6da878c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                                                           { "GetRetargetedFocusedElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.GetLeafFocusedElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::FocusController::*)()>(
    &::UnityEngine::UIElements::FocusController::GetLeafFocusedElement)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6d9bd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "GetLeafFocusedElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.IsLocalElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*)>(
    &::UnityEngine::UIElements::FocusController::IsLocalElement)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6da8918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "IsLocalElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.IsPendingFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*)>(
    &::UnityEngine::UIElements::FocusController::IsPendingFocus)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6da8ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "IsPendingFocus", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.SetFocusToLastFocusedElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)()>(&::UnityEngine::UIElements::FocusController::SetFocusToLastFocusedElement)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6da8c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "SetFocusToLastFocusedElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.BlurLastFocusedElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)()>(&::UnityEngine::UIElements::FocusController::BlurLastFocusedElement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6da8cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "BlurLastFocusedElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.DoFocusChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*)>(
    &::UnityEngine::UIElements::FocusController::DoFocusChange)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6da8d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "DoFocusChange", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.ProcessPendingFocusChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*)>(
    &::UnityEngine::UIElements::FocusController::ProcessPendingFocusChange)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6d9cb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                                                           { "ProcessPendingFocusChange", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.GetFocusTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::UIElements::Focusable*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>*)>(
        &::UnityEngine::UIElements::FocusController::GetFocusTargets)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6da8e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                             { "GetFocusTargets",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.FocusNextInDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(
        &::UnityEngine::UIElements::FocusController::FocusNextInDirection)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6da8f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                            { "FocusNextInDirection", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.AboutToReleaseFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*,
                                                                                                            ::UnityEngine::UIElements::FocusChangeDirection*, ::UnityEngine::UIElements::DispatchMode)>(
    &::UnityEngine::UIElements::FocusController::AboutToReleaseFocus)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6da901c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                             { "AboutToReleaseFocus",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.ReleaseFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*,
                                                                                                            ::UnityEngine::UIElements::FocusChangeDirection*, ::UnityEngine::UIElements::DispatchMode)>(
    &::UnityEngine::UIElements::FocusController::ReleaseFocus)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x6da919c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                             { "ReleaseFocus",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.AboutToGrabFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*,
                                                                                                            ::UnityEngine::UIElements::FocusChangeDirection*, ::UnityEngine::UIElements::DispatchMode)>(
    &::UnityEngine::UIElements::FocusController::AboutToGrabFocus)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6da9510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                             { "AboutToGrabFocus",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.GrabFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(
    ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, bool, ::UnityEngine::UIElements::DispatchMode)>(
    &::UnityEngine::UIElements::FocusController::GrabFocus)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x6da9690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                            { "GrabFocus",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(),
                                ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.Blur
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, bool, ::UnityEngine::UIElements::DispatchMode)>(
    &::UnityEngine::UIElements::FocusController::Blur)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6da7ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                            { "Blur", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.SwitchFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, bool, ::UnityEngine::UIElements::DispatchMode)>(
    &::UnityEngine::UIElements::FocusController::SwitchFocus)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6da79e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                            { "SwitchFocus", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.SwitchFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*,
                                                                                                            bool, ::UnityEngine::UIElements::DispatchMode)>(
    &::UnityEngine::UIElements::FocusController::SwitchFocus)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x6da80a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                             { "SwitchFocus",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.SwitchFocusOnEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::FocusController::SwitchFocusOnEvent)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x6da1fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                { "SwitchFocusOnEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.ReevaluateFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)()>(&::UnityEngine::UIElements::FocusController::ReevaluateFocus)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6da9a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "ReevaluateFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.GetFocusableParentForPointerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::by_ref<::UnityEngine::UIElements::Focusable*>)>(
    &::UnityEngine::UIElements::FocusController::GetFocusableParentForPointerEvent)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6da9abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                         { "GetFocusableParentForPointerEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Focusable*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.get_imguiKeyboardControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::FocusController::*)()>(&::UnityEngine::UIElements::FocusController::get_imguiKeyboardControl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6da9bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "get_imguiKeyboardControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.set_imguiKeyboardControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(int32_t)>(&::UnityEngine::UIElements::FocusController::set_imguiKeyboardControl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6da9bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "set_imguiKeyboardControl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.SyncIMGUIFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(int32_t, ::UnityEngine::UIElements::Focusable*, bool)>(
    &::UnityEngine::UIElements::FocusController::SyncIMGUIFocus)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6da9bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                { "SyncIMGUIFocus", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::IFocusRing*& UnityEngine::UIElements::FocusController::__cordl_internal_get__focusRing_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____focusRing_k__BackingField;
}
constexpr ::UnityEngine::UIElements::IFocusRing* const& UnityEngine::UIElements::FocusController::__cordl_internal_get__focusRing_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____focusRing_k__BackingField;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set__focusRing_k__BackingField(::UnityEngine::UIElements::IFocusRing* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____focusRing_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_SelectedTextElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedTextElement;
}
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_SelectedTextElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedTextElement;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set_m_SelectedTextElement(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedTextElement = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>*& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_FocusedElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FocusedElements;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>* const&
UnityEngine::UIElements::FocusController::__cordl_internal_get_m_FocusedElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FocusedElements;
}
constexpr void
UnityEngine::UIElements::FocusController::__cordl_internal_set_m_FocusedElements(::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FocusedElements = value;
}
constexpr ::UnityEngine::UIElements::Focusable*& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_LastFocusedElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFocusedElement;
}
constexpr ::UnityEngine::UIElements::Focusable* const& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_LastFocusedElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFocusedElement;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set_m_LastFocusedElement(::UnityEngine::UIElements::Focusable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastFocusedElement = value;
}
constexpr ::UnityEngine::UIElements::Focusable*& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_LastPendingFocusedElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPendingFocusedElement;
}
constexpr ::UnityEngine::UIElements::Focusable* const& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_LastPendingFocusedElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPendingFocusedElement;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set_m_LastPendingFocusedElement(::UnityEngine::UIElements::Focusable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastPendingFocusedElement = value;
}
constexpr int32_t& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_PendingFocusCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingFocusCount;
}
constexpr int32_t const& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_PendingFocusCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingFocusCount;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set_m_PendingFocusCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PendingFocusCount = value;
}
constexpr int32_t& UnityEngine::UIElements::FocusController::__cordl_internal_get__imguiKeyboardControl_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imguiKeyboardControl_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::FocusController::__cordl_internal_get__imguiKeyboardControl_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imguiKeyboardControl_k__BackingField;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set__imguiKeyboardControl_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____imguiKeyboardControl_k__BackingField = value;
}
inline void UnityEngine::UIElements::FocusController::_ctor(::UnityEngine::UIElements::IFocusRing* focusRing) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::IFocusRing*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focusRing);
}
inline ::UnityEngine::UIElements::IFocusRing* UnityEngine::UIElements::FocusController::get_focusRing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "get_focusRing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IFocusRing*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::FocusController::set_selectedTextElement(::UnityEngine::UIElements::TextElement* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                                                         { "set_selectedTextElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::FocusController::get_focusedElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "get_focusedElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::FocusController::IgnoreEvent(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "IgnoreEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::FocusController::IsFocused(::UnityEngine::UIElements::Focusable* f) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "IsFocused", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::FocusController::GetRetargetedFocusedElement(::UnityEngine::UIElements::VisualElement* retargetAgainst) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                                                         { "GetRetargetedFocusedElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(this, ___internal_method, retargetAgainst);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::FocusController::GetLeafFocusedElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "GetLeafFocusedElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::FocusController::IsLocalElement(::UnityEngine::UIElements::Focusable* f) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "IsLocalElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline bool UnityEngine::UIElements::FocusController::IsPendingFocus(::UnityEngine::UIElements::Focusable* f) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "IsPendingFocus", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline void UnityEngine::UIElements::FocusController::SetFocusToLastFocusedElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "SetFocusToLastFocusedElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::FocusController::BlurLastFocusedElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "BlurLastFocusedElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::FocusController::DoFocusChange(::UnityEngine::UIElements::Focusable* f) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "DoFocusChange", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void UnityEngine::UIElements::FocusController::ProcessPendingFocusChange(::UnityEngine::UIElements::Focusable* f) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                                                         { "ProcessPendingFocusChange", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void UnityEngine::UIElements::FocusController::GetFocusTargets(::UnityEngine::UIElements::Focusable* f,
                                                                      ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>* outTargets) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                           { "GetFocusTargets",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController_FocusedElement>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f, outTargets);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::FocusController::FocusNextInDirection(::UnityEngine::UIElements::Focusable* currentFocusable,
                                                                                                            ::UnityEngine::UIElements::FocusChangeDirection* direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                          { "FocusNextInDirection", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(this, ___internal_method, currentFocusable, direction);
}
inline void UnityEngine::UIElements::FocusController::AboutToReleaseFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willGiveFocusTo,
                                                                          ::UnityEngine::UIElements::FocusChangeDirection* direction, ::UnityEngine::UIElements::DispatchMode dispatchMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                           { "AboutToReleaseFocus",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focusable, willGiveFocusTo, direction, dispatchMode);
}
inline void UnityEngine::UIElements::FocusController::ReleaseFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willGiveFocusTo,
                                                                   ::UnityEngine::UIElements::FocusChangeDirection* direction, ::UnityEngine::UIElements::DispatchMode dispatchMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                           { "ReleaseFocus",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focusable, willGiveFocusTo, direction, dispatchMode);
}
inline void UnityEngine::UIElements::FocusController::AboutToGrabFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willTakeFocusFrom,
                                                                       ::UnityEngine::UIElements::FocusChangeDirection* direction, ::UnityEngine::UIElements::DispatchMode dispatchMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                           { "AboutToGrabFocus",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focusable, willTakeFocusFrom, direction, dispatchMode);
}
inline void UnityEngine::UIElements::FocusController::GrabFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willTakeFocusFrom,
                                                                ::UnityEngine::UIElements::FocusChangeDirection* direction, bool bIsFocusDelegated,
                                                                ::UnityEngine::UIElements::DispatchMode dispatchMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                       { "GrabFocus",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(),
                                           ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focusable, willTakeFocusFrom, direction, bIsFocusDelegated, dispatchMode);
}
inline void UnityEngine::UIElements::FocusController::Blur(::UnityEngine::UIElements::Focusable* focusable, bool bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode dispatchMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                          { "Blur", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focusable, bIsFocusDelegated, dispatchMode);
}
inline void UnityEngine::UIElements::FocusController::SwitchFocus(::UnityEngine::UIElements::Focusable* newFocusedElement, bool bIsFocusDelegated,
                                                                  ::UnityEngine::UIElements::DispatchMode dispatchMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                          { "SwitchFocus", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newFocusedElement, bIsFocusDelegated, dispatchMode);
}
inline void UnityEngine::UIElements::FocusController::SwitchFocus(::UnityEngine::UIElements::Focusable* newFocusedElement, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                                                                  bool bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode dispatchMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                           { "SwitchFocus",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newFocusedElement, direction, bIsFocusDelegated, dispatchMode);
}
inline void UnityEngine::UIElements::FocusController::SwitchFocusOnEvent(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                              { "SwitchFocusOnEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentFocusable, e);
}
inline void UnityEngine::UIElements::FocusController::ReevaluateFocus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "ReevaluateFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::FocusController::GetFocusableParentForPointerEvent(::UnityEngine::UIElements::Focusable* target, ::by_ref<::UnityEngine::UIElements::Focusable*> effectiveTarget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                       { "GetFocusableParentForPointerEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Focusable*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target, effectiveTarget);
}
inline int32_t UnityEngine::UIElements::FocusController::get_imguiKeyboardControl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "get_imguiKeyboardControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::FocusController::set_imguiKeyboardControl(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(), { "set_imguiKeyboardControl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::FocusController::SyncIMGUIFocus(int32_t imguiKeyboardControlID, ::UnityEngine::UIElements::Focusable* imguiContainerHavingKeyboardControl, bool forceSwitch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusController*>(),
                                                           { "SyncIMGUIFocus", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, imguiKeyboardControlID, imguiContainerHavingKeyboardControl, forceSwitch);
}
inline ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::FocusController::New_ctor(::UnityEngine::UIElements::IFocusRing* focusRing) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::FocusController*>(focusRing));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FocusController::FocusController() {}
