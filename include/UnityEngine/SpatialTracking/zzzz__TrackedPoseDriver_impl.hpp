#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/Experimental/XR/Interaction/zzzz__BasePoseProvider_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__PoseDataFlags_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType::TrackedPoseDriver_DeviceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType::TrackedPoseDriver_DeviceType() {}
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType::GenericXRDevice{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType::GenericXRController{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType::GenericXRRemote{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::TrackedPoseDriver_TrackedPose(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::TrackedPoseDriver_TrackedPose() {}
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::LeftEye{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::RightEye{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::Center{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::Head{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::LeftPose{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::RightPose{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::ColorCamera{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::DepthCameraDeprecated{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::FisheyeCameraDeprected{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::DeviceDeprecated{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose::RemotePose{ static_cast<int32_t>(0xa) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType::TrackedPoseDriver_TrackingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType::TrackedPoseDriver_TrackingType() {}
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType::RotationAndPosition{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType::RotationOnly{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType::PositionOnly{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType::TrackedPoseDriver_UpdateType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType::TrackedPoseDriver_UpdateType() {}
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType::UpdateAndBeforeRender{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType::Update{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType::BeforeRender{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_deviceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::get_deviceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb4008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_deviceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_deviceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::set_deviceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb4010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                                                             { "set_deviceType", {}, { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_poseSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::get_poseSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb4018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_poseSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_poseSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::set_poseSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb4020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                                                             { "set_poseSource", {}, { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.SetPoseSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(
    ::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType, ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose)>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::SetPoseSource)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6bb4028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                            { "SetPoseSource",
                              {},
                              { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType>(), ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_poseProviderComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::get_poseProviderComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb4188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_poseProviderComponent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_poseProviderComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::set_poseProviderComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb4190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                                                             { "set_poseProviderComponent", {}, { ::i2c::type_of<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.GetPoseData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpatialTracking::PoseDataFlags (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(
    ::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType, ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose, ::by_ref<::UnityEngine::Pose>)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::GetPoseData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6bb4198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                                                { "GetPoseData",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType>(),
                                                    ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_trackingType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::get_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb426c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_trackingType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_trackingType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::set_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb4274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                                                             { "set_trackingType", {}, { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_updateType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::get_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb427c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_updateType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_updateType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::set_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb4284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                                                             { "set_updateType", {}, { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_UseRelativeTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::get_UseRelativeTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb428c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_UseRelativeTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_UseRelativeTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(bool)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::set_UseRelativeTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb4294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "set_UseRelativeTransform", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.get_originPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::get_originPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bb429c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_originPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.set_originPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(::UnityEngine::Pose)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::set_originPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6bb42b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "set_originPose", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.CacheLocalPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::CacheLocalPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6bb42cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "CacheLocalPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.ResetToCachedLocalPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::ResetToCachedLocalPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6bb431c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "ResetToCachedLocalPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb433c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb4340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6bb4344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::OnDisable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6bb441c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.FixedUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::FixedUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6bb44fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6bb4518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.OnBeforeRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::OnBeforeRender)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6bb4534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.SetLocalTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::SpatialTracking::PoseDataFlags)>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::SetLocalTransform)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6bb4554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.TransformPoseByOriginIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)(::UnityEngine::Pose)>(
    &::UnityEngine::SpatialTracking::TrackedPoseDriver::TransformPoseByOriginIfNeeded)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6bb4648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "TransformPoseByOriginIfNeeded", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.HasStereoCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::HasStereoCamera)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6bb46fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "HasStereoCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver.PerformUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::PerformUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6bb47b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriver::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bb4844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_Device() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_Device() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_Device(::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Device = value;
}
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_PoseSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PoseSource;
}
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_PoseSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PoseSource;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_PoseSource(::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PoseSource = value;
}
constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_PoseProviderComponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PoseProviderComponent;
}
constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_PoseProviderComponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PoseProviderComponent;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_PoseProviderComponent(::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PoseProviderComponent = value;
}
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_TrackingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingType;
}
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_TrackingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingType;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_TrackingType(::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackingType = value;
}
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_UpdateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateType;
}
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_UpdateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateType;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_UpdateType(::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateType = value;
}
constexpr bool& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_UseRelativeTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseRelativeTransform;
}
constexpr bool const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_UseRelativeTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseRelativeTransform;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_UseRelativeTransform(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseRelativeTransform = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_OriginPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_get_m_OriginPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginPose;
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__cordl_internal_set_m_OriginPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OriginPose = value;
}
inline ::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType UnityEngine::SpatialTracking::TrackedPoseDriver::get_deviceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_deviceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_deviceType(::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                                                           { "set_deviceType", {}, { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver::get_poseSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_poseSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_poseSource(::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                                                           { "set_poseSource", {}, { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::SpatialTracking::TrackedPoseDriver::SetPoseSource(::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType deviceType,
                                                                           ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose pose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                          { "SetPoseSource",
                            {},
                            { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType>(), ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, deviceType, pose);
}
inline ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> UnityEngine::SpatialTracking::TrackedPoseDriver::get_poseProviderComponent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_poseProviderComponent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_poseProviderComponent(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                                                           { "set_poseProviderComponent", {}, { ::i2c::type_of<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::SpatialTracking::TrackedPoseDriver::GetPoseData(::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType device,
                                                                                                                  ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose poseSource,
                                                                                                                  ::by_ref<::UnityEngine::Pose> resultPose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                                                           { "GetPoseData",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_DeviceType>(),
                                                               ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackedPose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::PoseDataFlags>(this, ___internal_method, device, poseSource, resultPose);
}
inline ::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType UnityEngine::SpatialTracking::TrackedPoseDriver::get_trackingType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_trackingType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_trackingType(::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                                                           { "set_trackingType", {}, { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_TrackingType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType UnityEngine::SpatialTracking::TrackedPoseDriver::get_updateType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_updateType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_updateType(::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(),
                                                           { "set_updateType", {}, { ::i2c::type_of<::UnityEngine::SpatialTracking::TrackedPoseDriver_UpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::SpatialTracking::TrackedPoseDriver::get_UseRelativeTransform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_UseRelativeTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_UseRelativeTransform(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "set_UseRelativeTransform", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Pose UnityEngine::SpatialTracking::TrackedPoseDriver::get_originPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "get_originPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::set_originPose(::UnityEngine::Pose value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "set_originPose", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::CacheLocalPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "CacheLocalPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::ResetToCachedLocalPosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "ResetToCachedLocalPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::FixedUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::OnBeforeRender() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation,
                                                                               ::UnityEngine::SpatialTracking::PoseDataFlags poseFlags) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPosition, newRotation, poseFlags);
}
inline ::UnityEngine::Pose UnityEngine::SpatialTracking::TrackedPoseDriver::TransformPoseByOriginIfNeeded(::UnityEngine::Pose pose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "TransformPoseByOriginIfNeeded", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, pose);
}
inline bool UnityEngine::SpatialTracking::TrackedPoseDriver::HasStereoCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { "HasStereoCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::PerformUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SpatialTracking::TrackedPoseDriver* UnityEngine::SpatialTracking::TrackedPoseDriver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SpatialTracking::TrackedPoseDriver*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriver::TrackedPoseDriver() {}
