#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMixedRealityCaptureSettings.hpp"
#include "GlobalNamespace/zzzz__OVRManager_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureSettings_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureConfiguration_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_enableMixedReality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_enableMixedReality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f018d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_enableMixedReality", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_enableMixedReality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(bool)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_enableMixedReality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f018d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.set_enableMixedReality", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f018e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::UnityEngine::LayerMask)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f018e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f018f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::UnityEngine::LayerMask)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f018f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(bool)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_compositionMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_CompositionMethod (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_compositionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_compositionMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_compositionMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::GlobalNamespace::OVRManager_CompositionMethod)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_compositionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                { "OVRMixedRealityCaptureConfiguration.set_compositionMethod", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_CompositionMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f01920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f0192c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f01938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f01944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_CameraDevice (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::GlobalNamespace::OVRManager_CameraDevice)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                { "OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_CameraDevice>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(bool)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(bool)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(float_t)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(float_t)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f019a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(int32_t)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f019a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_chromaKeyColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_chromaKeyColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f019b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeyColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_chromaKeyColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_chromaKeyColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f019bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_chromaKeyColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f019c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(float_t)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f019d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f019d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(float_t)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f019e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f019e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(float_t)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f019f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_useDynamicLighting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_useDynamicLighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f019f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_useDynamicLighting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_useDynamicLighting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(bool)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_useDynamicLighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.set_useDynamicLighting", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_depthQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_DepthQuality (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_depthQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_depthQuality", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_depthQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::GlobalNamespace::OVRManager_DepthQuality)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_depthQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_depthQuality", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_DepthQuality>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(float_t)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(float_t)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_VirtualGreenScreenType (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::GlobalNamespace::OVRManager_VirtualGreenScreenType)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_VirtualGreenScreenType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(float_t)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(float_t)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(bool)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(float_t)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_mrcActivationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_MrcActivationMode (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_mrcActivationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_mrcActivationMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_mrcActivationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::GlobalNamespace::OVRManager_MrcActivationMode)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_mrcActivationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                { "OVRMixedRealityCaptureConfiguration.set_mrcActivationMode", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_MrcActivationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings.OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*)>(
    &::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureSettings::*)()>(&::GlobalNamespace::OVRMixedRealityCaptureSettings::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f01aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_enableMixedReality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMixedReality;
}
constexpr bool const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_enableMixedReality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMixedReality;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_enableMixedReality(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableMixedReality = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_extraHiddenLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraHiddenLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_extraHiddenLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraHiddenLayers;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_extraHiddenLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraHiddenLayers = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_extraVisibleLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraVisibleLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_extraVisibleLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraVisibleLayers;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_extraVisibleLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraVisibleLayers = value;
}
constexpr bool& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_dynamicCullingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicCullingMask;
}
constexpr bool const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_dynamicCullingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicCullingMask;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_dynamicCullingMask(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dynamicCullingMask = value;
}
constexpr ::GlobalNamespace::OVRManager_CompositionMethod& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_compositionMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositionMethod;
}
constexpr ::GlobalNamespace::OVRManager_CompositionMethod const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_compositionMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositionMethod;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_compositionMethod(::GlobalNamespace::OVRManager_CompositionMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositionMethod = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_externalCompositionBackdropColorRift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCompositionBackdropColorRift;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_externalCompositionBackdropColorRift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCompositionBackdropColorRift;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_externalCompositionBackdropColorRift(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___externalCompositionBackdropColorRift = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_externalCompositionBackdropColorQuest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCompositionBackdropColorQuest;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_externalCompositionBackdropColorQuest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCompositionBackdropColorQuest;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___externalCompositionBackdropColorQuest = value;
}
constexpr ::GlobalNamespace::OVRManager_CameraDevice& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_capturingCameraDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capturingCameraDevice;
}
constexpr ::GlobalNamespace::OVRManager_CameraDevice const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_capturingCameraDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capturingCameraDevice;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_capturingCameraDevice(::GlobalNamespace::OVRManager_CameraDevice value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___capturingCameraDevice = value;
}
constexpr bool& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_flipCameraFrameHorizontally() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipCameraFrameHorizontally;
}
constexpr bool const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_flipCameraFrameHorizontally() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipCameraFrameHorizontally;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_flipCameraFrameHorizontally(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flipCameraFrameHorizontally = value;
}
constexpr bool& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_flipCameraFrameVertically() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipCameraFrameVertically;
}
constexpr bool const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_flipCameraFrameVertically() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipCameraFrameVertically;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_flipCameraFrameVertically(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flipCameraFrameVertically = value;
}
constexpr float_t& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_handPoseStateLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handPoseStateLatency;
}
constexpr float_t const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_handPoseStateLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handPoseStateLatency;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_handPoseStateLatency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handPoseStateLatency = value;
}
constexpr float_t& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_sandwichCompositionRenderLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sandwichCompositionRenderLatency;
}
constexpr float_t const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_sandwichCompositionRenderLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sandwichCompositionRenderLatency;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_sandwichCompositionRenderLatency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sandwichCompositionRenderLatency = value;
}
constexpr int32_t& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_sandwichCompositionBufferedFrames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sandwichCompositionBufferedFrames;
}
constexpr int32_t const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_sandwichCompositionBufferedFrames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sandwichCompositionBufferedFrames;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_sandwichCompositionBufferedFrames(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sandwichCompositionBufferedFrames = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_chromaKeyColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeyColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_chromaKeyColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeyColor;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_chromaKeyColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chromaKeyColor = value;
}
constexpr float_t& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_chromaKeySimilarity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeySimilarity;
}
constexpr float_t const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_chromaKeySimilarity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeySimilarity;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_chromaKeySimilarity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chromaKeySimilarity = value;
}
constexpr float_t& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_chromaKeySmoothRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeySmoothRange;
}
constexpr float_t const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_chromaKeySmoothRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeySmoothRange;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_chromaKeySmoothRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chromaKeySmoothRange = value;
}
constexpr float_t& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_chromaKeySpillRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeySpillRange;
}
constexpr float_t const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_chromaKeySpillRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeySpillRange;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_chromaKeySpillRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chromaKeySpillRange = value;
}
constexpr bool& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_useDynamicLighting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useDynamicLighting;
}
constexpr bool const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_useDynamicLighting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useDynamicLighting;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_useDynamicLighting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useDynamicLighting = value;
}
constexpr ::GlobalNamespace::OVRManager_DepthQuality& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_depthQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthQuality;
}
constexpr ::GlobalNamespace::OVRManager_DepthQuality const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_depthQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthQuality;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_depthQuality(::GlobalNamespace::OVRManager_DepthQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthQuality = value;
}
constexpr float_t& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_dynamicLightingSmoothFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicLightingSmoothFactor;
}
constexpr float_t const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_dynamicLightingSmoothFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicLightingSmoothFactor;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_dynamicLightingSmoothFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dynamicLightingSmoothFactor = value;
}
constexpr float_t& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_dynamicLightingDepthVariationClampingValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicLightingDepthVariationClampingValue;
}
constexpr float_t const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_dynamicLightingDepthVariationClampingValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicLightingDepthVariationClampingValue;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_dynamicLightingDepthVariationClampingValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dynamicLightingDepthVariationClampingValue = value;
}
constexpr ::GlobalNamespace::OVRManager_VirtualGreenScreenType& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_virtualGreenScreenType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenType;
}
constexpr ::GlobalNamespace::OVRManager_VirtualGreenScreenType const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_virtualGreenScreenType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenType;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_virtualGreenScreenType(::GlobalNamespace::OVRManager_VirtualGreenScreenType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualGreenScreenType = value;
}
constexpr float_t& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_virtualGreenScreenTopY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenTopY;
}
constexpr float_t const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_virtualGreenScreenTopY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenTopY;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_virtualGreenScreenTopY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualGreenScreenTopY = value;
}
constexpr float_t& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_virtualGreenScreenBottomY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenBottomY;
}
constexpr float_t const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_virtualGreenScreenBottomY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenBottomY;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_virtualGreenScreenBottomY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualGreenScreenBottomY = value;
}
constexpr bool& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_virtualGreenScreenApplyDepthCulling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenApplyDepthCulling;
}
constexpr bool const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_virtualGreenScreenApplyDepthCulling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenApplyDepthCulling;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_virtualGreenScreenApplyDepthCulling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualGreenScreenApplyDepthCulling = value;
}
constexpr float_t& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_virtualGreenScreenDepthTolerance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenDepthTolerance;
}
constexpr float_t const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_virtualGreenScreenDepthTolerance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenDepthTolerance;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_virtualGreenScreenDepthTolerance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualGreenScreenDepthTolerance = value;
}
constexpr ::GlobalNamespace::OVRManager_MrcActivationMode& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_mrcActivationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mrcActivationMode;
}
constexpr ::GlobalNamespace::OVRManager_MrcActivationMode const& GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get_mrcActivationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mrcActivationMode;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set_mrcActivationMode(::GlobalNamespace::OVRManager_MrcActivationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mrcActivationMode = value;
}
constexpr ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*&
GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField;
}
constexpr ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* const&
GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_get__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField;
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureSettings::__cordl_internal_set__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField(
    ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField = value;
}
inline bool GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_enableMixedReality() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_enableMixedReality", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_enableMixedReality(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.set_enableMixedReality", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(::UnityEngine::LayerMask value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(::UnityEngine::LayerMask value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_CompositionMethod GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_compositionMethod() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_compositionMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_CompositionMethod>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_compositionMethod(::GlobalNamespace::OVRManager_CompositionMethod value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                              { "OVRMixedRealityCaptureConfiguration.set_compositionMethod", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_CompositionMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_CameraDevice GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_CameraDevice>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice(::GlobalNamespace::OVRManager_CameraDevice value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_CameraDevice>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_chromaKeyColor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeyColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_chromaKeyColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_chromaKeyColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_useDynamicLighting() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_useDynamicLighting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_useDynamicLighting(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.set_useDynamicLighting", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_DepthQuality GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_depthQuality() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_depthQuality", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_DepthQuality>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_depthQuality(::GlobalNamespace::OVRManager_DepthQuality value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_depthQuality", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_DepthQuality>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_VirtualGreenScreenType GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_VirtualGreenScreenType>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType(::GlobalNamespace::OVRManager_VirtualGreenScreenType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                              { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_VirtualGreenScreenType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_MrcActivationMode GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_mrcActivationMode() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { "OVRMixedRealityCaptureConfiguration.get_mrcActivationMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_MrcActivationMode>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_mrcActivationMode(::GlobalNamespace::OVRManager_MrcActivationMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                              { "OVRMixedRealityCaptureConfiguration.set_mrcActivationMode", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_MrcActivationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                                                                                         { "OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(this, ___internal_method);
}
inline void
GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(),
                       { "OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRMixedRealityCaptureSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMixedRealityCaptureSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMixedRealityCaptureSettings* GlobalNamespace::OVRMixedRealityCaptureSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRMixedRealityCaptureSettings*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
constexpr GlobalNamespace::OVRMixedRealityCaptureSettings::operator ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*() noexcept {
  return static_cast<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
constexpr ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* GlobalNamespace::OVRMixedRealityCaptureSettings::i___GlobalNamespace__OVRMixedRealityCaptureConfiguration() noexcept {
  return static_cast<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMixedRealityCaptureSettings::OVRMixedRealityCaptureSettings() {}
