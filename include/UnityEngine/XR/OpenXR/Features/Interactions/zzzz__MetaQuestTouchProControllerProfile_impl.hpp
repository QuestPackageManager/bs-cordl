#pragma once
// IWYU pragma private; include "UnityEngine\XR\OpenXR\Features\Interactions\MetaQuestTouchProControllerProfile.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__MetaQuestTouchProControllerProfile_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__QuaternionControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__MetaQuestTouchProControllerProfile_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__HapticControl_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__PoseControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_thumbstick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_thumbstick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_thumbstick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_thumbstick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::Vector2Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_thumbstick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1309c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_thumbstick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_grip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a130a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_grip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_grip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a130ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_grip", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_gripPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a130b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_gripPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_gripPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a130bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_gripPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_menu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a130c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_menu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_menu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a130cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_menu", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_primaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_primaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a130d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_primaryButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_primaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_primaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a130dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_primaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_primaryTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_primaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a130e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_primaryTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_primaryTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_primaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a130ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_primaryTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_secondaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_secondaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a130f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_secondaryButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_secondaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_secondaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a130fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_secondaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_secondaryTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_secondaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_secondaryTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_secondaryTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_secondaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1310c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_secondaryTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_trigger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1311c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_trigger", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_triggerPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_triggerPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_triggerPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1312c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_triggerPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_triggerTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_triggerTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_triggerTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_triggerTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_triggerTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1313c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_triggerTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_thumbstickClicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_thumbstickClicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_thumbstickClicked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_thumbstickClicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_thumbstickClicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1314c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_thumbstickClicked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_thumbstickTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_thumbstickTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_thumbstickTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_thumbstickTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_thumbstickTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1315c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_thumbstickTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_thumbrestTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_thumbrestTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_thumbrestTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_thumbrestTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_thumbrestTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1316c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_thumbrestTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_devicePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::Input::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_devicePose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_devicePose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_devicePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::XR::OpenXR::Input::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_devicePose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1317c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_devicePose", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_pointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::Input::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_pointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_pointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::XR::OpenXR::Input::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1318c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_pointer", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_isTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_isTracked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_isTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1319c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_isTracked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_trackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a131a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_trackingState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_trackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::IntegerControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a131ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_trackingState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_devicePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_devicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a131b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_devicePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_devicePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_devicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a131bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_devicePosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_deviceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_deviceRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a131c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_deviceRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_deviceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_deviceRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a131cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_deviceRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_pointerPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_pointerPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a131d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_pointerPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_pointerPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_pointerPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a131dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_pointerPosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_pointerRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_pointerRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a131e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_pointerRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_pointerRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_pointerRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a131ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_pointerRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_haptic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::Input::HapticControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_haptic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a131f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_haptic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_haptic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::XR::OpenXR::Input::HapticControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_haptic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a131fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_haptic", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_thumbrestForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_thumbrestForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_thumbrestForce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_thumbrestForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_thumbrestForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1320c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_thumbrestForce", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_stylusForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_stylusForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_stylusForce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_stylusForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_stylusForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1321c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_stylusForce", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_triggerCurl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_triggerCurl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_triggerCurl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_triggerCurl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_triggerCurl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1322c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_triggerCurl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_triggerSlide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_triggerSlide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_triggerSlide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_triggerSlide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_triggerSlide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1323c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_triggerSlide", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_triggerProximity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_triggerProximity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_triggerProximity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_triggerProximity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_triggerProximity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1324c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_triggerProximity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_thumbProximity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_thumbProximity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_thumbProximity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_thumbProximity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_thumbProximity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1325c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_thumbProximity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_hapticTrigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::Input::HapticControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_hapticTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_hapticTrigger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_hapticTrigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::XR::OpenXR::Input::HapticControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_hapticTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1326c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_hapticTrigger", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.get_hapticThumb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::XR::OpenXR::Input::HapticControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_hapticThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a13274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_hapticThumb", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.set_hapticThumb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)(
    ::UnityEngine::XR::OpenXR::Input::HapticControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_hapticThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a1327c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                             { "set_hapticThumb", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::FinishSetup)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x6a13284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6a138d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__thumbstick_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__thumbstick_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstick_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__thumbstick_k__BackingField(
    ::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbstick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__grip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grip_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__grip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grip_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__grip_k__BackingField(
    ::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____grip_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__gripPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gripPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__gripPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gripPressed_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__gripPressed_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gripPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__menu_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menu_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__menu_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menu_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__menu_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menu_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__primaryButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__primaryButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryButton_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__primaryButton_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____primaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__primaryTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__primaryTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__primaryTouched_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____primaryTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__secondaryButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__secondaryButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryButton_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__secondaryButton_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secondaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__secondaryTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__secondaryTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__secondaryTouched_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secondaryTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__trigger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trigger_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__trigger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trigger_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__trigger_k__BackingField(
    ::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trigger_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__triggerPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__triggerPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerPressed_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__triggerPressed_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__triggerTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__triggerTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__triggerTouched_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__thumbstickClicked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickClicked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__thumbstickClicked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickClicked_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__thumbstickClicked_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbstickClicked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__thumbstickTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__thumbstickTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__thumbstickTouched_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbstickTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__thumbrestTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbrestTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__thumbrestTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbrestTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__thumbrestTouched_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbrestTouched_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__devicePose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePose_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__devicePose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePose_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__devicePose_k__BackingField(
    ::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____devicePose_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__pointer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointer_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__pointer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointer_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__pointer_k__BackingField(
    ::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointer_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__isTracked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTracked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__isTracked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTracked_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__isTracked_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isTracked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__trackingState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackingState_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__trackingState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackingState_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__trackingState_k__BackingField(
    ::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackingState_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__devicePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__devicePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePosition_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__devicePosition_k__BackingField(
    ::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____devicePosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__deviceRotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__deviceRotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceRotation_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__deviceRotation_k__BackingField(
    ::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceRotation_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__pointerPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__pointerPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPosition_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__pointerPosition_k__BackingField(
    ::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerPosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__pointerRotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__pointerRotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerRotation_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__pointerRotation_k__BackingField(
    ::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerRotation_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__haptic_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____haptic_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__haptic_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____haptic_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__haptic_k__BackingField(
    ::UnityEngine::XR::OpenXR::Input::HapticControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____haptic_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__thumbrestForce_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbrestForce_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__thumbrestForce_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbrestForce_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__thumbrestForce_k__BackingField(
    ::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbrestForce_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__stylusForce_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylusForce_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__stylusForce_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylusForce_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__stylusForce_k__BackingField(
    ::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stylusForce_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__triggerCurl_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerCurl_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__triggerCurl_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerCurl_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__triggerCurl_k__BackingField(
    ::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerCurl_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__triggerSlide_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerSlide_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__triggerSlide_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerSlide_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__triggerSlide_k__BackingField(
    ::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerSlide_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__triggerProximity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerProximity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__triggerProximity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerProximity_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__triggerProximity_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerProximity_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__thumbProximity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbProximity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__thumbProximity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbProximity_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__thumbProximity_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbProximity_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__hapticTrigger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticTrigger_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__hapticTrigger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticTrigger_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__hapticTrigger_k__BackingField(
    ::UnityEngine::XR::OpenXR::Input::HapticControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticTrigger_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__hapticThumb_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticThumb_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_get__hapticThumb_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticThumb_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::__cordl_internal_set__hapticThumb_k__BackingField(
    ::UnityEngine::XR::OpenXR::Input::HapticControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticThumb_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_thumbstick() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_thumbstick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_thumbstick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_grip() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_grip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_grip", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_gripPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_gripPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_gripPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_menu() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_menu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_menu", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_primaryButton() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_primaryButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_primaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_primaryTouched() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_primaryTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_primaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_primaryTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_secondaryButton() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_secondaryButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_secondaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_secondaryTouched() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_secondaryTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_secondaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_secondaryTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_trigger() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_trigger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_trigger", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_triggerPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_triggerPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_triggerPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_triggerTouched() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_triggerTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_triggerTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_triggerTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_thumbstickClicked() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_thumbstickClicked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_thumbstickClicked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_thumbstickTouched() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_thumbstickTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_thumbstickTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_thumbrestTouched() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_thumbrestTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_thumbrestTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_thumbrestTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_devicePose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_devicePose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_devicePose", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_pointer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_pointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_pointer", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_isTracked() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_isTracked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_isTracked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_trackingState() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_trackingState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_trackingState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_devicePosition() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_devicePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_devicePosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_deviceRotation() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_deviceRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_deviceRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_pointerPosition() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_pointerPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_pointerPosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_pointerRotation() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_pointerRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_pointerRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::HapticControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_haptic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_haptic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::HapticControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_haptic", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_thumbrestForce() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_thumbrestForce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_thumbrestForce(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_thumbrestForce", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_stylusForce() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_stylusForce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_stylusForce(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_stylusForce", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_triggerCurl() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_triggerCurl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_triggerCurl(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_triggerCurl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_triggerSlide() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_triggerSlide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_triggerSlide(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_triggerSlide", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_triggerProximity() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_triggerProximity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_triggerProximity(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_triggerProximity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_thumbProximity() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_thumbProximity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_thumbProximity(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_thumbProximity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::HapticControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_hapticTrigger() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_hapticTrigger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::HapticControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_hapticTrigger(::UnityEngine::XR::OpenXR::Input::HapticControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_hapticTrigger", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::HapticControl* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::get_hapticThumb() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { "get_hapticThumb", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::HapticControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::set_hapticThumb(::UnityEngine::XR::OpenXR::Input::HapticControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(),
                                                           { "set_hapticThumb", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*
UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile_QuestProTouchController::MetaQuestTouchProControllerProfile_QuestProTouchController() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a0f490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile.RegisterDeviceLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::RegisterDeviceLayout)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6a0f4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile.UnregisterDeviceLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::UnregisterDeviceLayout)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a0f644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile.GetDeviceLayoutName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::GetDeviceLayoutName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a0f6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile.RegisterActionMapsWithRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::RegisterActionMapsWithRuntime)> {
  constexpr static std::size_t size = 0x3940;
  constexpr static std::size_t addrs = 0x6a0f6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a13038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::OnInstanceCreate(uint64_t instance) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::RegisterDeviceLayout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::UnregisterDeviceLayout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::GetDeviceLayoutName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::RegisterActionMapsWithRuntime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile* UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile::MetaQuestTouchProControllerProfile() {}
