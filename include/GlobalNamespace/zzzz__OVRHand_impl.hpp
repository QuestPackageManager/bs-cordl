#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRHand.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRHandSkeletonVersion_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRInputRayData_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRMesh_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRRayHelper_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeletonRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRInputModule_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRHand_Hand::OVRHand_Hand(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHand_Hand::OVRHand_Hand() {}
constexpr ::GlobalNamespace::OVRHand_Hand GlobalNamespace::OVRHand_Hand::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::OVRHand_Hand GlobalNamespace::OVRHand_Hand::HandLeft{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRHand_Hand GlobalNamespace::OVRHand_Hand::HandRight{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRHand_HandFinger::OVRHand_HandFinger(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHand_HandFinger::OVRHand_HandFinger() {}
constexpr ::GlobalNamespace::OVRHand_HandFinger GlobalNamespace::OVRHand_HandFinger::Thumb{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRHand_HandFinger GlobalNamespace::OVRHand_HandFinger::Index{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRHand_HandFinger GlobalNamespace::OVRHand_HandFinger::Middle{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRHand_HandFinger GlobalNamespace::OVRHand_HandFinger::Ring{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRHand_HandFinger GlobalNamespace::OVRHand_HandFinger::Pinky{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRHand_HandFinger GlobalNamespace::OVRHand_HandFinger::Max{ static_cast<int32_t>(0x5) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence::OVRHand_TrackingConfidence(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence::OVRHand_TrackingConfidence() {}
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence GlobalNamespace::OVRHand_TrackingConfidence::Low{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence GlobalNamespace::OVRHand_TrackingConfidence::High{ static_cast<int32_t>(0x3f800000) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRHand_MicrogestureType::OVRHand_MicrogestureType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHand_MicrogestureType::OVRHand_MicrogestureType() {}
constexpr ::GlobalNamespace::OVRHand_MicrogestureType GlobalNamespace::OVRHand_MicrogestureType::NoGesture{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRHand_MicrogestureType GlobalNamespace::OVRHand_MicrogestureType::SwipeLeft{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRHand_MicrogestureType GlobalNamespace::OVRHand_MicrogestureType::SwipeRight{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRHand_MicrogestureType GlobalNamespace::OVRHand_MicrogestureType::SwipeForward{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRHand_MicrogestureType GlobalNamespace::OVRHand_MicrogestureType::SwipeBackward{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRHand_MicrogestureType GlobalNamespace::OVRHand_MicrogestureType::ThumbTap{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRHand_MicrogestureType GlobalNamespace::OVRHand_MicrogestureType::Invalid{ static_cast<int32_t>(0xffffffff) };
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_GlobalHandSkeletonVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRHandSkeletonVersion (*)()>(&::GlobalNamespace::OVRHand::get_GlobalHandSkeletonVersion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5efe0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_GlobalHandSkeletonVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsDataValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_IsDataValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsDataValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_IsDataValid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_IsDataHighConfidence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_IsDataHighConfidence", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_IsTracked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_IsTracked", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsSystemGestureInProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsSystemGestureInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_IsSystemGestureInProgress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsSystemGestureInProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsSystemGestureInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_IsSystemGestureInProgress", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsPointerPoseValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsPointerPoseValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_IsPointerPoseValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsPointerPoseValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsPointerPoseValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_IsPointerPoseValid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_PointerPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_PointerPose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5efe130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_PointerPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_HandScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_HandScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_HandScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_HandScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)(float_t)>(&::GlobalNamespace::OVRHand::set_HandScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_HandScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_HandConfidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRHand_TrackingConfidence (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_HandConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_HandConfidence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_HandConfidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand_TrackingConfidence)>(&::GlobalNamespace::OVRHand::set_HandConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_HandConfidence", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_TrackingConfidence>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsDominantHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsDominantHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_IsDominantHand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsDominantHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsDominantHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_IsDominantHand", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.InitializePointerPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::InitializePointerPose)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5efe1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "InitializePointerPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::Awake)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5efe364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::Update)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5efe764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.FixedUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::FixedUpdate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5efe8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "FixedUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::OnDestroy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5efe988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetHandState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRPlugin_Step)>(&::GlobalNamespace::OVRHand::GetHandState)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5efe440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetHandState", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Step>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetFingerIsPinching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand_HandFinger)>(&::GlobalNamespace::OVRHand::GetFingerIsPinching)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5efe860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetFingerIsPinching", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_HandFinger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetFingerPinchStrength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand_HandFinger)>(&::GlobalNamespace::OVRHand::GetFingerPinchStrength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5efea1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetFingerPinchStrength", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_HandFinger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetFingerConfidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRHand_TrackingConfidence (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand_HandFinger)>(
    &::GlobalNamespace::OVRHand::GetFingerConfidence)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5efea58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetFingerConfidence", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_HandFinger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonType (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5efea98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonPoseData (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5efeb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5efeba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetMicrogestureType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRHand_MicrogestureType (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::GetMicrogestureType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5efebf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetMicrogestureType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRMesh_IOVRMeshDataProvider_GetMeshType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRMesh_MeshType (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::OVRMesh_IOVRMeshDataProvider_GetMeshType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5efec6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OVRMesh.IOVRMeshDataProvider.GetMeshType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRMeshRenderer_MeshRendererData (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5efece8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::OnEnable)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5efed28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::OnDisable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5efeef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OnSceneChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene)>(
    &::GlobalNamespace::OVRHand::OnSceneChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5eff038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(),
                                                { "OnSceneChanged", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::OnValidate)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5eff094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.IsPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::IsPressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5eff2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "IsPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.IsReleased
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::IsReleased)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eff2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "IsReleased", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetPointerRayTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::GetPointerRayTransform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5eff2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetPointerRayTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.ShouldShowHandUIRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::ShouldShowHandUIRay)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5efee7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "ShouldShowHandUIRay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::IsValid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5eff32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::IsActive)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5efe880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "IsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Hand (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::GetHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eff38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetHand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.UpdatePointerRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRInputRayData)>(&::GlobalNamespace::OVRHand::UpdatePointerRay)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5eff394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "UpdatePointerRay", {}, { ::i2c::type_of<::GlobalNamespace::OVRInputRayData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5eff460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRSkeleton_IOVRSkeletonDataProvider_get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eff474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OVRSkeleton.IOVRSkeletonDataProvider.get_enabled", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRHand_Hand& GlobalNamespace::OVRHand::__cordl_internal_get_HandType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandType;
}
constexpr ::GlobalNamespace::OVRHand_Hand const& GlobalNamespace::OVRHand::__cordl_internal_get_HandType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandType;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set_HandType(::GlobalNamespace::OVRHand_Hand value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HandType = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRHand::__cordl_internal_get__pointerPoseRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPoseRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRHand::__cordl_internal_get__pointerPoseRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPoseRoot;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__pointerPoseRoot(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerPoseRoot = value;
}
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState& GlobalNamespace::OVRHand::__cordl_internal_get_m_showState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_showState;
}
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState const& GlobalNamespace::OVRHand::__cordl_internal_get_m_showState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_showState;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set_m_showState(::GlobalNamespace::OVRInput_InputDeviceShowState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_showState = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRRayHelper>& GlobalNamespace::OVRHand::__cordl_internal_get_RayHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RayHelper;
}
constexpr ::UnityW<::GlobalNamespace::OVRRayHelper> const& GlobalNamespace::OVRHand::__cordl_internal_get_RayHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RayHelper;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set_RayHelper(::UnityW<::GlobalNamespace::OVRRayHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RayHelper = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRHand::__cordl_internal_get__pointerPoseGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPoseGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRHand::__cordl_internal_get__pointerPoseGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPoseGO;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__pointerPoseGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerPoseGO = value;
}
constexpr ::GlobalNamespace::OVRPlugin_HandState& GlobalNamespace::OVRHand::__cordl_internal_get__handState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handState;
}
constexpr ::GlobalNamespace::OVRPlugin_HandState const& GlobalNamespace::OVRHand::__cordl_internal_get__handState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handState;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__handState(::GlobalNamespace::OVRPlugin_HandState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handState = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__wasIndexPinching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasIndexPinching;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__wasIndexPinching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasIndexPinching;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__wasIndexPinching(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasIndexPinching = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__wasReleased() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasReleased;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__wasReleased() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasReleased;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__wasReleased(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasReleased = value;
}
constexpr ::GlobalNamespace::OVRPlugin_HandTrackingState& GlobalNamespace::OVRHand::__cordl_internal_get__handTrackingState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handTrackingState;
}
constexpr ::GlobalNamespace::OVRPlugin_HandTrackingState const& GlobalNamespace::OVRHand::__cordl_internal_get__handTrackingState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handTrackingState;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__handTrackingState(::GlobalNamespace::OVRPlugin_HandTrackingState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handTrackingState = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__handTrackingStateValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handTrackingStateValid;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__handTrackingStateValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handTrackingStateValid;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__handTrackingStateValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handTrackingStateValid = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__IsDataValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__IsDataValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__IsDataValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataValid_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__IsDataHighConfidence_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataHighConfidence_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__IsDataHighConfidence_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataHighConfidence_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__IsDataHighConfidence_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataHighConfidence_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__IsTracked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsTracked_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__IsTracked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsTracked_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__IsTracked_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsTracked_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__IsSystemGestureInProgress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSystemGestureInProgress_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__IsSystemGestureInProgress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSystemGestureInProgress_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__IsSystemGestureInProgress_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsSystemGestureInProgress_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__IsPointerPoseValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsPointerPoseValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__IsPointerPoseValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsPointerPoseValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__IsPointerPoseValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsPointerPoseValid_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::OVRHand::__cordl_internal_get__HandScale_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HandScale_k__BackingField;
}
constexpr float_t const& GlobalNamespace::OVRHand::__cordl_internal_get__HandScale_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HandScale_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__HandScale_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HandScale_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence& GlobalNamespace::OVRHand::__cordl_internal_get__HandConfidence_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HandConfidence_k__BackingField;
}
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence const& GlobalNamespace::OVRHand::__cordl_internal_get__HandConfidence_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HandConfidence_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__HandConfidence_k__BackingField(::GlobalNamespace::OVRHand_TrackingConfidence value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HandConfidence_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__IsDominantHand_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDominantHand_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__IsDominantHand_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDominantHand_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__IsDominantHand_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDominantHand_k__BackingField = value;
}
inline ::GlobalNamespace::OVRHandSkeletonVersion GlobalNamespace::OVRHand::get_GlobalHandSkeletonVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_GlobalHandSkeletonVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRHandSkeletonVersion>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRHand::get_IsDataValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_IsDataValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsDataValid(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_IsDataValid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsDataHighConfidence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_IsDataHighConfidence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsDataHighConfidence(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_IsDataHighConfidence", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsTracked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_IsTracked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsTracked(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_IsTracked", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsSystemGestureInProgress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_IsSystemGestureInProgress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsSystemGestureInProgress(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_IsSystemGestureInProgress", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsPointerPoseValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_IsPointerPoseValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsPointerPoseValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_IsPointerPoseValid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRHand::get_PointerPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_PointerPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRHand::get_HandScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_HandScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_HandScale(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_HandScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRHand_TrackingConfidence GlobalNamespace::OVRHand::get_HandConfidence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_HandConfidence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRHand_TrackingConfidence>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_HandConfidence(::GlobalNamespace::OVRHand_TrackingConfidence value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_HandConfidence", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_TrackingConfidence>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsDominantHand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "get_IsDominantHand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsDominantHand(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "set_IsDominantHand", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRHand::InitializePointerPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "InitializePointerPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "FixedUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::GetHandState(::GlobalNamespace::OVRPlugin_Step step) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetHandState", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Step>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, step);
}
inline bool GlobalNamespace::OVRHand::GetFingerIsPinching(::GlobalNamespace::OVRHand_HandFinger finger) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetFingerIsPinching", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_HandFinger>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline float_t GlobalNamespace::OVRHand::GetFingerPinchStrength(::GlobalNamespace::OVRHand_HandFinger finger) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetFingerPinchStrength", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_HandFinger>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline ::GlobalNamespace::OVRHand_TrackingConfidence GlobalNamespace::OVRHand::GetFingerConfidence(::GlobalNamespace::OVRHand_HandFinger finger) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetFingerConfidence", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_HandFinger>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRHand_TrackingConfidence>(this, ___internal_method, finger);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonType>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData GlobalNamespace::OVRHand::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRHand_MicrogestureType GlobalNamespace::OVRHand::GetMicrogestureType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetMicrogestureType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRHand_MicrogestureType>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMesh_MeshType GlobalNamespace::OVRHand::OVRMesh_IOVRMeshDataProvider_GetMeshType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OVRMesh.IOVRMeshDataProvider.GetMeshType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMesh_MeshType>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMeshRenderer_MeshRendererData GlobalNamespace::OVRHand::OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::OnSceneChanged(::UnityEngine::SceneManagement::Scene unloading, ::UnityEngine::SceneManagement::Scene loading) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(),
                                              { "OnSceneChanged", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unloading, loading);
}
inline void GlobalNamespace::OVRHand::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRHand::IsPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "IsPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRHand::IsReleased() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "IsReleased", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRHand::GetPointerRayTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetPointerRayTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRHand::ShouldShowHandUIRay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "ShouldShowHandUIRay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRHand::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRHand::IsActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "IsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_Hand GlobalNamespace::OVRHand::GetHand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "GetHand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Hand>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::UpdatePointerRay(::GlobalNamespace::OVRInputRayData rayData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "UpdatePointerRay", {}, { ::i2c::type_of<::GlobalNamespace::OVRInputRayData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayData);
}
inline void GlobalNamespace::OVRHand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_get_enabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHand*>(), { "OVRSkeleton.IOVRSkeletonDataProvider.get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRHand* GlobalNamespace::OVRHand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRHand*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::OVRInputModule_InputSource"
constexpr GlobalNamespace::OVRHand::operator ::UnityEngine::EventSystems::OVRInputModule_InputSource*() noexcept {
  return static_cast<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::OVRInputModule_InputSource"
constexpr ::UnityEngine::EventSystems::OVRInputModule_InputSource* GlobalNamespace::OVRHand::i___UnityEngine__EventSystems__OVRInputModule_InputSource() noexcept {
  return static_cast<::UnityEngine::EventSystems::OVRInputModule_InputSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr GlobalNamespace::OVRHand::operator ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* GlobalNamespace::OVRHand::i___GlobalNamespace__OVRSkeleton_IOVRSkeletonDataProvider() noexcept {
  return static_cast<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider"
constexpr GlobalNamespace::OVRHand::operator ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider"
constexpr ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider* GlobalNamespace::OVRHand::i___GlobalNamespace__OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider() noexcept {
  return static_cast<::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::OVRMesh_IOVRMeshDataProvider"
constexpr GlobalNamespace::OVRHand::operator ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRMesh_IOVRMeshDataProvider"
constexpr ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider* GlobalNamespace::OVRHand::i___GlobalNamespace__OVRMesh_IOVRMeshDataProvider() noexcept {
  return static_cast<::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider"
constexpr GlobalNamespace::OVRHand::operator ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider"
constexpr ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider* GlobalNamespace::OVRHand::i___GlobalNamespace__OVRMeshRenderer_IOVRMeshRendererDataProvider() noexcept {
  return static_cast<::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHand::OVRHand() {}
