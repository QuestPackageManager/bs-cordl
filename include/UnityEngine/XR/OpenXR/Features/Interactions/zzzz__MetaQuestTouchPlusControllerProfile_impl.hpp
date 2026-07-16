#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/MetaQuestTouchPlusControllerProfile.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__MetaQuestTouchPlusControllerProfile_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__QuaternionControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__MetaQuestTouchPlusControllerProfile_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__HapticControl_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__PoseControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_thumbstick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_thumbstick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a094c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_thumbstick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_thumbstick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::Vector2Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_thumbstick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a094d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_thumbstick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_grip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a094d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_grip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_grip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a094e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_grip", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_gripPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a094e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_gripPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_gripPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a094f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_gripPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_menu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a094f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_menu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_menu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_menu", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_primaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_primaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_primaryButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_primaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_primaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_primaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_primaryTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_primaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_primaryTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_primaryTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_primaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_primaryTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_secondaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_secondaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_secondaryButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_secondaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_secondaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_secondaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_secondaryTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_secondaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_secondaryTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_secondaryTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_secondaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_secondaryTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_trigger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_trigger", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_triggerPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_triggerPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_triggerPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_triggerPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_triggerTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_triggerTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_triggerTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_triggerTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_triggerTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_triggerTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_thumbstickClicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_thumbstickClicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_thumbstickClicked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_thumbstickClicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_thumbstickClicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_thumbstickClicked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_thumbstickTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_thumbstickTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_thumbstickTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_thumbstickTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_thumbstickTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_thumbstickTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_thumbrestTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_thumbrestTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_thumbrestTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_thumbrestTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_thumbrestTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a095a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_thumbrestTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_devicePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::Input::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_devicePose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a095a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_devicePose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_devicePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::XR::OpenXR::Input::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_devicePose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a095b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_devicePose", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_pointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::Input::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a095b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_pointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_pointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::XR::OpenXR::Input::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a095c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_pointer", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_isTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a095c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_isTracked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_isTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a095d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_isTracked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_trackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a095d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_trackingState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_trackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::IntegerControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a095e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_trackingState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_devicePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_devicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a095e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_devicePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_devicePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_devicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a095f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_devicePosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_deviceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_deviceRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a095f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_deviceRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_deviceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_deviceRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_deviceRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_pointerPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_pointerPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_pointerPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_pointerPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_pointerPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_pointerPosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_pointerRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_pointerRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_pointerRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_pointerRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_pointerRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_pointerRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_haptic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::Input::HapticControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_haptic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_haptic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_haptic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::XR::OpenXR::Input::HapticControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_haptic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_haptic", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_triggerForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_triggerForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_triggerForce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_triggerForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_triggerForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_triggerForce", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_triggerCurl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_triggerCurl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_triggerCurl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_triggerCurl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_triggerCurl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_triggerCurl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_triggerSlide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_triggerSlide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_triggerSlide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_triggerSlide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_triggerSlide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_triggerSlide", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_triggerProximity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_triggerProximity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_triggerProximity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_triggerProximity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_triggerProximity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_triggerProximity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.get_thumbProximity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_thumbProximity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_thumbProximity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.set_thumbProximity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_thumbProximity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a09680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                             { "set_thumbProximity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::FinishSetup)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x6a09688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                               { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6a09c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__thumbstick_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__thumbstick_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstick_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__thumbstick_k__BackingField(
    ::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbstick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__grip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grip_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__grip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grip_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__grip_k__BackingField(
    ::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____grip_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__gripPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gripPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__gripPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gripPressed_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__gripPressed_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gripPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__menu_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menu_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__menu_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menu_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__menu_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menu_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__primaryButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__primaryButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryButton_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__primaryButton_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____primaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__primaryTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__primaryTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__primaryTouched_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____primaryTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__secondaryButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__secondaryButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryButton_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__secondaryButton_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secondaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__secondaryTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__secondaryTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__secondaryTouched_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secondaryTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__trigger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trigger_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__trigger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trigger_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__trigger_k__BackingField(
    ::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trigger_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__triggerPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__triggerPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerPressed_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__triggerPressed_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__triggerTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__triggerTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__triggerTouched_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__thumbstickClicked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickClicked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__thumbstickClicked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickClicked_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__thumbstickClicked_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbstickClicked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__thumbstickTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__thumbstickTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__thumbstickTouched_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbstickTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__thumbrestTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbrestTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__thumbrestTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbrestTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__thumbrestTouched_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbrestTouched_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__devicePose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePose_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__devicePose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePose_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__devicePose_k__BackingField(
    ::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____devicePose_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__pointer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointer_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__pointer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointer_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__pointer_k__BackingField(
    ::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointer_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__isTracked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTracked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__isTracked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTracked_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__isTracked_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isTracked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__trackingState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackingState_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__trackingState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackingState_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__trackingState_k__BackingField(
    ::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackingState_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__devicePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__devicePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePosition_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__devicePosition_k__BackingField(
    ::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____devicePosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__deviceRotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__deviceRotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceRotation_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__deviceRotation_k__BackingField(
    ::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceRotation_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__pointerPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__pointerPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPosition_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__pointerPosition_k__BackingField(
    ::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerPosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__pointerRotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__pointerRotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerRotation_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__pointerRotation_k__BackingField(
    ::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerRotation_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__haptic_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____haptic_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__haptic_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____haptic_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__haptic_k__BackingField(
    ::UnityEngine::XR::OpenXR::Input::HapticControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____haptic_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__triggerForce_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerForce_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__triggerForce_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerForce_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__triggerForce_k__BackingField(
    ::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerForce_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__triggerCurl_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerCurl_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__triggerCurl_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerCurl_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__triggerCurl_k__BackingField(
    ::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerCurl_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__triggerSlide_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerSlide_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__triggerSlide_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerSlide_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__triggerSlide_k__BackingField(
    ::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerSlide_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__triggerProximity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerProximity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__triggerProximity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerProximity_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__triggerProximity_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerProximity_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__thumbProximity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbProximity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_get__thumbProximity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbProximity_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::__cordl_internal_set__thumbProximity_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbProximity_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_thumbstick() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_thumbstick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_thumbstick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_grip() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_grip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_grip", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_gripPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_gripPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_gripPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_menu() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_menu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_menu", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_primaryButton() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_primaryButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_primaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_primaryTouched() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_primaryTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_primaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_primaryTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_secondaryButton() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_secondaryButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_secondaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_secondaryTouched() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_secondaryTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_secondaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_secondaryTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_trigger() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_trigger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_trigger", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_triggerPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_triggerPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_triggerPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_triggerTouched() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_triggerTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_triggerTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_triggerTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_thumbstickClicked() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_thumbstickClicked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_thumbstickClicked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_thumbstickTouched() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_thumbstickTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_thumbstickTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_thumbrestTouched() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_thumbrestTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_thumbrestTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_thumbrestTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_devicePose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_devicePose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_devicePose", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_pointer() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_pointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_pointer", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_isTracked() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_isTracked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_isTracked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_trackingState() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_trackingState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_trackingState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_devicePosition() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_devicePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_devicePosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_deviceRotation() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_deviceRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_deviceRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_pointerPosition() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_pointerPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_pointerPosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_pointerRotation() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_pointerRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_pointerRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::HapticControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_haptic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_haptic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::HapticControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_haptic", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_triggerForce() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_triggerForce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_triggerForce(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_triggerForce", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_triggerCurl() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_triggerCurl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_triggerCurl(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_triggerCurl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_triggerSlide() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_triggerSlide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_triggerSlide(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_triggerSlide", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_triggerProximity() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_triggerProximity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_triggerProximity(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_triggerProximity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::get_thumbProximity() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { "get_thumbProximity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::set_thumbProximity(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(),
                                                           { "set_thumbProximity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a030e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile.RegisterDeviceLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::RegisterDeviceLayout)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6a0314c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile.UnregisterDeviceLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::UnregisterDeviceLayout)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a03294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile.GetDeviceLayoutName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::GetDeviceLayoutName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a03304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile.RegisterActionMapsWithRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::RegisterActionMapsWithRuntime)> {
  constexpr static std::size_t size = 0x339c;
  constexpr static std::size_t addrs = 0x6a03348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a066e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::OnInstanceCreate(uint64_t instance) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::RegisterDeviceLayout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::UnregisterDeviceLayout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::GetDeviceLayoutName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::RegisterActionMapsWithRuntime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile::MetaQuestTouchPlusControllerProfile() {}
