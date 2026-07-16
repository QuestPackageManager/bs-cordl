#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/PalmPoseInteraction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__PalmPoseInteraction_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__QuaternionControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__PalmPoseInteraction_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__PoseControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.get_palmPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Input::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_palmPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_palmPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.set_palmPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)(::UnityEngine::XR::OpenXR::Input::PoseControl*)>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_palmPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                                                           { "set_palmPose", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.get_isTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_isTracked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.set_isTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                                                           { "set_isTracked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.get_trackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_trackingState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.set_trackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)(
    ::UnityEngine::InputSystem::Controls::IntegerControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                                                           { "set_trackingState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.get_devicePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_devicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_devicePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.set_devicePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)(
    ::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_devicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                                                           { "set_devicePosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.get_deviceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_deviceRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_deviceRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.set_deviceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)(
    ::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_deviceRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                             { "set_deviceRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.get_palmPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_palmPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_palmPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.set_palmPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)(
    ::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_palmPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                                                           { "set_palmPosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.get_palmRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_palmRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_palmRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.set_palmRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)(
    ::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_palmRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a15b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                             { "set_palmRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::FinishSetup)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a15b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6a15bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__palmPose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____palmPose_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__palmPose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____palmPose_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_set__palmPose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____palmPose_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__isTracked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTracked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__isTracked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTracked_k__BackingField;
}
constexpr void
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isTracked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__trackingState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackingState_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__trackingState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackingState_k__BackingField;
}
constexpr void
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackingState_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__devicePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const&
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__devicePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicePosition_k__BackingField;
}
constexpr void
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____devicePosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*&
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__deviceRotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__deviceRotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceRotation_k__BackingField;
}
constexpr void
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceRotation_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__palmPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____palmPosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const&
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__palmPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____palmPosition_k__BackingField;
}
constexpr void
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_set__palmPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____palmPosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*&
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__palmRotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____palmRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const&
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_get__palmRotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____palmRotation_k__BackingField;
}
constexpr void
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::__cordl_internal_set__palmRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____palmRotation_k__BackingField = value;
}
inline ::UnityEngine::XR::OpenXR::Input::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_palmPose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_palmPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_palmPose(::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                                                         { "set_palmPose", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::PoseControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_isTracked() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_isTracked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                                                         { "set_isTracked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_trackingState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_trackingState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                                                         { "set_trackingState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_devicePosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_devicePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                                                         { "set_devicePosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_deviceRotation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_deviceRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                           { "set_deviceRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_palmPosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_palmPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_palmPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                                                         { "set_palmPosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::get_palmRotation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { "get_palmRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::set_palmRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(),
                                                                                         { "set_palmRotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose* UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose::PalmPoseInteraction_PalmPose() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a15c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c._AddAdditiveActions_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::*)(
    ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::_AddAdditiveActions_b__15_0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a15c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>(),
                                                { "<AddAdditiveActions>b__15_0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c._AddAdditiveActions_b__15_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::*)(
    ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::_AddAdditiveActions_b__15_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a15d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>(),
                                                { "<AddAdditiveActions>b__15_1", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::setStaticF___9(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*, "<>9", ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>(
      std::forward<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>(value));
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c* UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*, "<>9",
                                           ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>();
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::setStaticF___9__15_0(
    ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>*, "<>9__15_0",
                                    ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>*
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>*, "<>9__15_0",
                                           ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>();
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::setStaticF___9__15_1(
    ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>*, "<>9__15_1",
                                    ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>*
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::getStaticF___9__15_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>*, "<>9__15_1",
                                           ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>();
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::_AddAdditiveActions_b__15_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>(),
                                                           { "<AddAdditiveActions>b__15_0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, d);
}
inline bool UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::_AddAdditiveActions_b__15_1(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig* a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>(),
                                                           { "<AddAdditiveActions>b__15_1", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c* UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c::PalmPoseInteraction___c() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction.get_IsAdditive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::get_IsAdditive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a14ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a14ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction.RegisterDeviceLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::RegisterDeviceLayout)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6a14d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction.UnregisterDeviceLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::UnregisterDeviceLayout)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a14e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction.GetDeviceLayoutName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::GetDeviceLayoutName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a14f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction.RegisterActionMapsWithRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::RegisterActionMapsWithRuntime)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x6a14f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction.AddBindingBasedOnRuntimeAPIVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>* (
    ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::AddBindingBasedOnRuntimeAPIVersion)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6a152fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), { "AddBindingBasedOnRuntimeAPIVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction.AddAdditiveActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*,
    ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::AddAdditiveActions)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x6a1547c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a15a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::get_IsAdditive() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::OnInstanceCreate(uint64_t instance) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::RegisterDeviceLayout() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::UnregisterDeviceLayout() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::GetDeviceLayoutName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::RegisterActionMapsWithRuntime() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>*
UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::AddBindingBasedOnRuntimeAPIVersion() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), { "AddBindingBasedOnRuntimeAPIVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::AddAdditiveActions(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>* actionMaps,
    ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig* additiveMap) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionMaps, additiveMap);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction* UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction::PalmPoseInteraction() {}
