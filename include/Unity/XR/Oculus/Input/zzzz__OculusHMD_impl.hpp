#pragma once
// IWYU pragma private; include "Unity\XR\Oculus\Input\OculusHMD.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_impl.hpp"
#include "Unity/XR/Oculus/Input/zzzz__OculusHMD_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_userPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_userPresence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_userPresence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_userPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_userPresence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d161c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                                                           { "set_userPresence", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_deviceAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_deviceAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_deviceAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_deviceAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_deviceAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d162c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                             { "set_deviceAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_deviceAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_deviceAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_deviceAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_deviceAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_deviceAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d163c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "set_deviceAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_deviceAngularAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_deviceAngularAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_deviceAngularAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_deviceAngularAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_deviceAngularAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d164c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                             { "set_deviceAngularAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_leftEyeAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_leftEyeAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_leftEyeAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_leftEyeAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_leftEyeAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d165c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                             { "set_leftEyeAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_leftEyeAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_leftEyeAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_leftEyeAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_leftEyeAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_leftEyeAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d166c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                             { "set_leftEyeAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_leftEyeAngularAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_leftEyeAngularAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_leftEyeAngularAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_leftEyeAngularAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_leftEyeAngularAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d167c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                             { "set_leftEyeAngularAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_rightEyeAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_rightEyeAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_rightEyeAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_rightEyeAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_rightEyeAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d168c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                             { "set_rightEyeAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_rightEyeAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_rightEyeAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_rightEyeAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_rightEyeAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_rightEyeAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d169c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                             { "set_rightEyeAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_rightEyeAngularAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_rightEyeAngularAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d16a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_rightEyeAngularAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_rightEyeAngularAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_rightEyeAngularAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d16ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                             { "set_rightEyeAngularAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_centerEyeAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_centerEyeAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d16b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_centerEyeAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_centerEyeAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_centerEyeAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d16bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                             { "set_centerEyeAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_centerEyeAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_centerEyeAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d16c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_centerEyeAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_centerEyeAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_centerEyeAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d16cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                             { "set_centerEyeAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.get_centerEyeAngularAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusHMD::*)()>(
    &::Unity::XR::Oculus::Input::OculusHMD::get_centerEyeAngularAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d16d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_centerEyeAngularAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.set_centerEyeAngularAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusHMD::set_centerEyeAngularAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d16dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                             { "set_centerEyeAngularAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)()>(&::Unity::XR::Oculus::Input::OculusHMD::FinishSetup)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x64d16e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { ::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusHMD._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusHMD::*)()>(&::Unity::XR::Oculus::Input::OculusHMD::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64d1988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__userPresence_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresence_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__userPresence_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresence_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userPresence_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__deviceAngularVelocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularVelocity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__deviceAngularVelocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularVelocity_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceAngularVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__deviceAcceleration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAcceleration_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__deviceAcceleration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAcceleration_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__deviceAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceAcceleration_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__deviceAngularAcceleration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularAcceleration_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__deviceAngularAcceleration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularAcceleration_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__deviceAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceAngularAcceleration_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__leftEyeAngularVelocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftEyeAngularVelocity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__leftEyeAngularVelocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftEyeAngularVelocity_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__leftEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftEyeAngularVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__leftEyeAcceleration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftEyeAcceleration_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__leftEyeAcceleration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftEyeAcceleration_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__leftEyeAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftEyeAcceleration_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__leftEyeAngularAcceleration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftEyeAngularAcceleration_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__leftEyeAngularAcceleration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftEyeAngularAcceleration_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__leftEyeAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftEyeAngularAcceleration_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__rightEyeAngularVelocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightEyeAngularVelocity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__rightEyeAngularVelocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightEyeAngularVelocity_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__rightEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightEyeAngularVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__rightEyeAcceleration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightEyeAcceleration_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__rightEyeAcceleration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightEyeAcceleration_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__rightEyeAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightEyeAcceleration_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__rightEyeAngularAcceleration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightEyeAngularAcceleration_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__rightEyeAngularAcceleration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightEyeAngularAcceleration_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__rightEyeAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightEyeAngularAcceleration_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__centerEyeAngularVelocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerEyeAngularVelocity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__centerEyeAngularVelocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerEyeAngularVelocity_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__centerEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerEyeAngularVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__centerEyeAcceleration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerEyeAcceleration_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__centerEyeAcceleration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerEyeAcceleration_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__centerEyeAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerEyeAcceleration_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__centerEyeAngularAcceleration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerEyeAngularAcceleration_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_get__centerEyeAngularAcceleration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerEyeAngularAcceleration_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusHMD::__cordl_internal_set__centerEyeAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerEyeAngularAcceleration_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::Oculus::Input::OculusHMD::get_userPresence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_userPresence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                                                         { "set_userPresence", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusHMD::get_deviceAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_deviceAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                           { "set_deviceAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusHMD::get_deviceAcceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_deviceAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "set_deviceAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusHMD::get_deviceAngularAcceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_deviceAngularAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                           { "set_deviceAngularAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusHMD::get_leftEyeAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_leftEyeAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_leftEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                           { "set_leftEyeAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusHMD::get_leftEyeAcceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_leftEyeAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_leftEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "set_leftEyeAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusHMD::get_leftEyeAngularAcceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_leftEyeAngularAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_leftEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                           { "set_leftEyeAngularAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusHMD::get_rightEyeAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_rightEyeAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_rightEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                           { "set_rightEyeAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusHMD::get_rightEyeAcceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_rightEyeAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_rightEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "set_rightEyeAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusHMD::get_rightEyeAngularAcceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_rightEyeAngularAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_rightEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                           { "set_rightEyeAngularAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusHMD::get_centerEyeAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_centerEyeAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_centerEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                           { "set_centerEyeAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusHMD::get_centerEyeAcceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_centerEyeAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_centerEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                           { "set_centerEyeAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusHMD::get_centerEyeAngularAcceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { "get_centerEyeAngularAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::set_centerEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(),
                                                           { "set_centerEyeAngularAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::Oculus::Input::OculusHMD::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusHMD::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusHMD*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::Oculus::Input::OculusHMD* Unity::XR::Oculus::Input::OculusHMD::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::Oculus::Input::OculusHMD*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::Input::OculusHMD::OculusHMD() {}
