#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRPlayerController.hpp"
#include "GlobalNamespace/zzzz__OVRPose_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlayerController_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.add_TransformUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(::System::Action_1<::UnityW<::UnityEngine::Transform>>*)>(
    &::GlobalNamespace::OVRPlayerController::add_TransformUpdated)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f075d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(),
                                                             { "add_TransformUpdated", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Transform>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.remove_TransformUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(::System::Action_1<::UnityW<::UnityEngine::Transform>>*)>(
    &::GlobalNamespace::OVRPlayerController::remove_TransformUpdated)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f07690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(),
                                                             { "remove_TransformUpdated", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Transform>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.add_CameraUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(::System::Action*)>(&::GlobalNamespace::OVRPlayerController::add_CameraUpdated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f07750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "add_CameraUpdated", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.remove_CameraUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(::System::Action*)>(&::GlobalNamespace::OVRPlayerController::remove_CameraUpdated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f077fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "remove_CameraUpdated", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.add_PreCharacterMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(::System::Action*)>(&::GlobalNamespace::OVRPlayerController::add_PreCharacterMove)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f078a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "add_PreCharacterMove", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.remove_PreCharacterMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(::System::Action*)>(&::GlobalNamespace::OVRPlayerController::remove_PreCharacterMove)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f07954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "remove_PreCharacterMove", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.get_InitialYRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRPlayerController::*)()>(&::GlobalNamespace::OVRPlayerController::get_InitialYRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "get_InitialYRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.set_InitialYRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(float_t)>(&::GlobalNamespace::OVRPlayerController::set_InitialYRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "set_InitialYRotation", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)()>(&::GlobalNamespace::OVRPlayerController::Start)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5f07a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)()>(&::GlobalNamespace::OVRPlayerController::Awake)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5f07e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)()>(&::GlobalNamespace::OVRPlayerController::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f07ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)()>(&::GlobalNamespace::OVRPlayerController::OnDisable)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5f08000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)()>(&::GlobalNamespace::OVRPlayerController::Update)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5f08234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.UpdateController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)()>(&::GlobalNamespace::OVRPlayerController::UpdateController)> {
  constexpr static std::size_t size = 0x790;
  constexpr static std::size_t addrs = 0x5f084b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { ::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.UpdateMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)()>(&::GlobalNamespace::OVRPlayerController::UpdateMovement)> {
  constexpr static std::size_t size = 0xe48;
  constexpr static std::size_t addrs = 0x5f08c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { ::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.UpdateTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(::GlobalNamespace::OVRCameraRig*)>(&::GlobalNamespace::OVRPlayerController::UpdateTransform)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5f09a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "UpdateTransform", {}, { ::i2c::type_of<::GlobalNamespace::OVRCameraRig*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.Jump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPlayerController::*)()>(&::GlobalNamespace::OVRPlayerController::Jump)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f09c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "Jump", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)()>(&::GlobalNamespace::OVRPlayerController::Stop)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f09c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.GetMoveScaleMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(::by_ref<float_t>)>(&::GlobalNamespace::OVRPlayerController::GetMoveScaleMultiplier)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f09d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "GetMoveScaleMultiplier", {}, { ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.SetMoveScaleMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(float_t)>(&::GlobalNamespace::OVRPlayerController::SetMoveScaleMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f09d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "SetMoveScaleMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.GetRotationScaleMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(::by_ref<float_t>)>(&::GlobalNamespace::OVRPlayerController::GetRotationScaleMultiplier)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f09d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "GetRotationScaleMultiplier", {}, { ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.SetRotationScaleMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(float_t)>(&::GlobalNamespace::OVRPlayerController::SetRotationScaleMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f09d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "SetRotationScaleMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.GetSkipMouseRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(::by_ref<bool>)>(&::GlobalNamespace::OVRPlayerController::GetSkipMouseRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f09d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "GetSkipMouseRotation", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.SetSkipMouseRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(bool)>(&::GlobalNamespace::OVRPlayerController::SetSkipMouseRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f09d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "SetSkipMouseRotation", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.GetHaltUpdateMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(::by_ref<bool>)>(&::GlobalNamespace::OVRPlayerController::GetHaltUpdateMovement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f09d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "GetHaltUpdateMovement", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.SetHaltUpdateMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)(bool)>(&::GlobalNamespace::OVRPlayerController::SetHaltUpdateMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f09d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "SetHaltUpdateMovement", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController.ResetOrientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)()>(&::GlobalNamespace::OVRPlayerController::ResetOrientation)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f09d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "ResetOrientation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlayerController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlayerController::*)()>(&::GlobalNamespace::OVRPlayerController::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f09e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_Acceleration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Acceleration;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_Acceleration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Acceleration;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_Acceleration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Acceleration = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_Damping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Damping;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_Damping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Damping;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_Damping(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Damping = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_BackAndSideDampen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BackAndSideDampen;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_BackAndSideDampen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BackAndSideDampen;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_BackAndSideDampen(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BackAndSideDampen = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_JumpForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___JumpForce;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_JumpForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___JumpForce;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_JumpForce(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___JumpForce = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_RotationAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RotationAmount;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_RotationAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RotationAmount;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_RotationAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RotationAmount = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_RotationRatchet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RotationRatchet;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_RotationRatchet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RotationRatchet;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_RotationRatchet(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RotationRatchet = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_SnapRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SnapRotation;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_SnapRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SnapRotation;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_SnapRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SnapRotation = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_RotateAroundGuardianCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RotateAroundGuardianCenter;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_RotateAroundGuardianCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RotateAroundGuardianCenter;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_RotateAroundGuardianCenter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RotateAroundGuardianCenter = value;
}
constexpr int32_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_FixedSpeedSteps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FixedSpeedSteps;
}
constexpr int32_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_FixedSpeedSteps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FixedSpeedSteps;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_FixedSpeedSteps(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FixedSpeedSteps = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_HmdResetsY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HmdResetsY;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_HmdResetsY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HmdResetsY;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_HmdResetsY(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HmdResetsY = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_HmdRotatesY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HmdRotatesY;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_HmdRotatesY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HmdRotatesY;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_HmdRotatesY(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HmdRotatesY = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_GravityModifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GravityModifier;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_GravityModifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GravityModifier;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_GravityModifier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___GravityModifier = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_useProfileData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useProfileData;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_useProfileData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useProfileData;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_useProfileData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useProfileData = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_CameraHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CameraHeight;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_CameraHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CameraHeight;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_CameraHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CameraHeight = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::OVRPlayerController::__cordl_internal_get_TransformUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TransformUpdated;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_TransformUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TransformUpdated;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_TransformUpdated(::System::Action_1<::UnityW<::UnityEngine::Transform>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TransformUpdated = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_Teleported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Teleported;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_Teleported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Teleported;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_Teleported(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Teleported = value;
}
constexpr ::System::Action*& GlobalNamespace::OVRPlayerController::__cordl_internal_get_CameraUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CameraUpdated;
}
constexpr ::System::Action* const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_CameraUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CameraUpdated;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_CameraUpdated(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CameraUpdated = value;
}
constexpr ::System::Action*& GlobalNamespace::OVRPlayerController::__cordl_internal_get_PreCharacterMove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PreCharacterMove;
}
constexpr ::System::Action* const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_PreCharacterMove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PreCharacterMove;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_PreCharacterMove(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PreCharacterMove = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_EnableLinearMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableLinearMovement;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_EnableLinearMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableLinearMovement;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_EnableLinearMovement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EnableLinearMovement = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_EnableRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableRotation;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_EnableRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableRotation;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_EnableRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EnableRotation = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_RotationEitherThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RotationEitherThumbstick;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_RotationEitherThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RotationEitherThumbstick;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_RotationEitherThumbstick(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RotationEitherThumbstick = value;
}
constexpr ::UnityW<::UnityEngine::CharacterController>& GlobalNamespace::OVRPlayerController::__cordl_internal_get_Controller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Controller;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_Controller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Controller;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_Controller(::UnityW<::UnityEngine::CharacterController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Controller = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& GlobalNamespace::OVRPlayerController::__cordl_internal_get_CameraRig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_CameraRig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CameraRig;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_CameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CameraRig = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_MoveScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveScale;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_MoveScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveScale;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_MoveScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MoveScale = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRPlayerController::__cordl_internal_get_MoveThrottle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveThrottle;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_MoveThrottle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveThrottle;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_MoveThrottle(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MoveThrottle = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_FallSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FallSpeed;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_FallSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FallSpeed;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_FallSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FallSpeed = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::OVRPose>& GlobalNamespace::OVRPlayerController::__cordl_internal_get_InitialPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitialPose;
}
constexpr ::System::Nullable_1<::GlobalNamespace::OVRPose> const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_InitialPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitialPose;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_InitialPose(::System::Nullable_1<::GlobalNamespace::OVRPose> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InitialPose = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get__InitialYRotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InitialYRotation_k__BackingField;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get__InitialYRotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InitialYRotation_k__BackingField;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set__InitialYRotation_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InitialYRotation_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_MoveScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveScaleMultiplier;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_MoveScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveScaleMultiplier;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_MoveScaleMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MoveScaleMultiplier = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_RotationScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RotationScaleMultiplier;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_RotationScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RotationScaleMultiplier;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_RotationScaleMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RotationScaleMultiplier = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_SkipMouseRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SkipMouseRotation;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_SkipMouseRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SkipMouseRotation;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_SkipMouseRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SkipMouseRotation = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_HaltUpdateMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HaltUpdateMovement;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_HaltUpdateMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HaltUpdateMovement;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_HaltUpdateMovement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HaltUpdateMovement = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_prevHatLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevHatLeft;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_prevHatLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevHatLeft;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_prevHatLeft(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prevHatLeft = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_prevHatRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevHatRight;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_prevHatRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevHatRight;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_prevHatRight(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prevHatRight = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_SimulationRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimulationRate;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_SimulationRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimulationRate;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_SimulationRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SimulationRate = value;
}
constexpr float_t& GlobalNamespace::OVRPlayerController::__cordl_internal_get_buttonRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonRotation;
}
constexpr float_t const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_buttonRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonRotation;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_buttonRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonRotation = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_ReadyToSnapTurn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReadyToSnapTurn;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_ReadyToSnapTurn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReadyToSnapTurn;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_ReadyToSnapTurn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReadyToSnapTurn = value;
}
constexpr bool& GlobalNamespace::OVRPlayerController::__cordl_internal_get_playerControllerEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerControllerEnabled;
}
constexpr bool const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_playerControllerEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerControllerEnabled;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_playerControllerEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerControllerEnabled = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::OVRPlayerController::__cordl_internal_get_moveForwardAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveForwardAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_moveForwardAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveForwardAction;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_moveForwardAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveForwardAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::OVRPlayerController::__cordl_internal_get_moveLeftAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveLeftAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_moveLeftAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveLeftAction;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_moveLeftAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveLeftAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::OVRPlayerController::__cordl_internal_get_moveRightAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveRightAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_moveRightAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveRightAction;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_moveRightAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveRightAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::OVRPlayerController::__cordl_internal_get_moveBackAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveBackAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_moveBackAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveBackAction;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_moveBackAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveBackAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::OVRPlayerController::__cordl_internal_get_runAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::OVRPlayerController::__cordl_internal_get_runAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runAction;
}
constexpr void GlobalNamespace::OVRPlayerController::__cordl_internal_set_runAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___runAction = value;
}
inline void GlobalNamespace::OVRPlayerController::add_TransformUpdated(::System::Action_1<::UnityW<::UnityEngine::Transform>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "add_TransformUpdated", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Transform>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPlayerController::remove_TransformUpdated(::System::Action_1<::UnityW<::UnityEngine::Transform>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(),
                                                           { "remove_TransformUpdated", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Transform>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPlayerController::add_CameraUpdated(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "add_CameraUpdated", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPlayerController::remove_CameraUpdated(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "remove_CameraUpdated", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPlayerController::add_PreCharacterMove(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "add_PreCharacterMove", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPlayerController::remove_PreCharacterMove(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "remove_PreCharacterMove", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRPlayerController::get_InitialYRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "get_InitialYRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlayerController::set_InitialYRotation(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "set_InitialYRotation", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPlayerController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlayerController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlayerController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlayerController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlayerController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlayerController::UpdateController() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlayerController::UpdateMovement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlayerController::UpdateTransform(::GlobalNamespace::OVRCameraRig* rig) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "UpdateTransform", {}, { ::i2c::type_of<::GlobalNamespace::OVRCameraRig*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline bool GlobalNamespace::OVRPlayerController::Jump() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "Jump", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlayerController::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlayerController::GetMoveScaleMultiplier(::by_ref<float_t> moveScaleMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "GetMoveScaleMultiplier", {}, { ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, moveScaleMultiplier);
}
inline void GlobalNamespace::OVRPlayerController::SetMoveScaleMultiplier(float_t moveScaleMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "SetMoveScaleMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, moveScaleMultiplier);
}
inline void GlobalNamespace::OVRPlayerController::GetRotationScaleMultiplier(::by_ref<float_t> rotationScaleMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "GetRotationScaleMultiplier", {}, { ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotationScaleMultiplier);
}
inline void GlobalNamespace::OVRPlayerController::SetRotationScaleMultiplier(float_t rotationScaleMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "SetRotationScaleMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotationScaleMultiplier);
}
inline void GlobalNamespace::OVRPlayerController::GetSkipMouseRotation(::by_ref<bool> skipMouseRotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "GetSkipMouseRotation", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skipMouseRotation);
}
inline void GlobalNamespace::OVRPlayerController::SetSkipMouseRotation(bool skipMouseRotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "SetSkipMouseRotation", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skipMouseRotation);
}
inline void GlobalNamespace::OVRPlayerController::GetHaltUpdateMovement(::by_ref<bool> haltUpdateMovement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "GetHaltUpdateMovement", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, haltUpdateMovement);
}
inline void GlobalNamespace::OVRPlayerController::SetHaltUpdateMovement(bool haltUpdateMovement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "SetHaltUpdateMovement", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, haltUpdateMovement);
}
inline void GlobalNamespace::OVRPlayerController::ResetOrientation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { "ResetOrientation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPlayerController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRPlayerController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlayerController* GlobalNamespace::OVRPlayerController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRPlayerController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlayerController::OVRPlayerController() {}
