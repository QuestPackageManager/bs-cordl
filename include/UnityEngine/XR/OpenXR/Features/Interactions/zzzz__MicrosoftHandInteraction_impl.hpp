#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/MicrosoftHandInteraction.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__MicrosoftHandInteraction_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__QuaternionControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__MicrosoftHandInteraction_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__PoseControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.get_select
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_select)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_select", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.set_select
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_select)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                           { "set_select", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.get_selectPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_selectPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_selectPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.set_selectPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_selectPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                           { "set_selectPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.get_squeeze
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_squeeze)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_squeeze", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.set_squeeze
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)(
    ::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_squeeze)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                           { "set_squeeze", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.get_squeezePressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_squeezePressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_squeezePressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.set_squeezePressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_squeezePressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                           { "set_squeezePressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.get_devicePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Input::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_devicePose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_devicePose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.set_devicePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)(
    ::UnityEngine::XR::OpenXR::Input::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_devicePose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                           { "set_devicePose", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.get_pointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Input::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_pointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.set_pointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)(
    ::UnityEngine::XR::OpenXR::Input::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                           { "set_pointer", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.get_isTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_isTracked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.set_isTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)(
    ::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                           { "set_isTracked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.get_trackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_trackingState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.set_trackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)(
    ::UnityEngine::InputSystem::Controls::IntegerControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                           { "set_trackingState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.get_devicePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_devicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_devicePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.set_devicePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)(
    ::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_devicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                           { "set_devicePosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.get_deviceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_deviceRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_deviceRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.set_deviceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)(
    ::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_deviceRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                             { "set_deviceRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.get_pointerPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_pointerPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_pointerPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.set_pointerPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)(
    ::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_pointerPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                             { "set_pointerPosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.get_pointerRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
        &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_pointerRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_pointerRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.set_pointerRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)(
    ::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_pointerRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a0f2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                             { "set_pointerRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::FinishSetup)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x6a0f2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6a0f5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__select_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____select_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__select_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____select_k__BackingField;
}
constexpr void
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_set__select_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____select_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__selectPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__selectPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectPressed_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_set__selectPressed_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__squeeze_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____squeeze_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__squeeze_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____squeeze_k__BackingField;
}
constexpr void
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_set__squeeze_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____squeeze_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__squeezePressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____squeezePressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__squeezePressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____squeezePressed_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_set__squeezePressed_k__BackingField(
    ::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____squeezePressed_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__devicePose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePose_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__devicePose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePose_k__BackingField;
}
constexpr void
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_set__devicePose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____devicePose_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__pointer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointer_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__pointer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointer_k__BackingField;
}
constexpr void
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_set__pointer_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointer_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__isTracked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTracked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__isTracked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTracked_k__BackingField;
}
constexpr void
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isTracked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__trackingState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackingState_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__trackingState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackingState_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_set__trackingState_k__BackingField(
    ::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackingState_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__devicePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__devicePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePosition_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_set__devicePosition_k__BackingField(
    ::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____devicePosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__deviceRotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__deviceRotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceRotation_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_set__deviceRotation_k__BackingField(
    ::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceRotation_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__pointerPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__pointerPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPosition_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_set__pointerPosition_k__BackingField(
    ::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerPosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__pointerRotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_get__pointerRotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerRotation_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::__cordl_internal_set__pointerRotation_k__BackingField(
    ::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerRotation_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_select() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_select", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_select(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                         { "set_select", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_selectPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_selectPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_selectPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                         { "set_selectPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_squeeze() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_squeeze", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_squeeze(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                         { "set_squeeze", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_squeezePressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_squeezePressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_squeezePressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                         { "set_squeezePressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_devicePose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_devicePose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                         { "set_devicePose", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_pointer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_pointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                         { "set_pointer", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_isTracked() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_isTracked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                         { "set_isTracked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_trackingState() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_trackingState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                         { "set_trackingState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_devicePosition() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_devicePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                         { "set_devicePosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_deviceRotation() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_deviceRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                           { "set_deviceRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_pointerPosition() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_pointerPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                                                         { "set_pointerPosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::get_pointerRotation() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { "get_pointerRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(),
                                                           { "set_pointerRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction_HoloLensHand::MicrosoftHandInteraction_HoloLensHand() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction.RegisterDeviceLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::RegisterDeviceLayout)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6a0e0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction.UnregisterDeviceLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::UnregisterDeviceLayout)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a0e228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction.GetDeviceLayoutName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::GetDeviceLayoutName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a0e298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction.RegisterActionMapsWithRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::RegisterActionMapsWithRuntime)> {
  constexpr static std::size_t size = 0xef0;
  constexpr static std::size_t addrs = 0x6a0e2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a0f1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::RegisterDeviceLayout() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::UnregisterDeviceLayout() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::GetDeviceLayoutName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::RegisterActionMapsWithRuntime() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction* UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction::MicrosoftHandInteraction() {}
