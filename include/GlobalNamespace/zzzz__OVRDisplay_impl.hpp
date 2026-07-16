#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDisplay.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDisplay_def.hpp"
#include "GlobalNamespace/zzzz__OVRDisplay_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "UpFov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DownFov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "LeftFov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RightFov", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDisplay_EyeFov::OVRDisplay_EyeFov(float_t UpFov, float_t DownFov, float_t LeftFov, float_t RightFov) noexcept {
  this->UpFov = UpFov;
  this->DownFov = DownFov;
  this->LeftFov = LeftFov;
  this->RightFov = RightFov;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDisplay_EyeFov::OVRDisplay_EyeFov() {}
// Ctor Parameters [CppParam { name: "resolution", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "fov", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "fullFov", ty: "::GlobalNamespace::OVRDisplay_EyeFov", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDisplay_EyeRenderDesc::OVRDisplay_EyeRenderDesc(::UnityEngine::Vector2 resolution, ::UnityEngine::Vector2 fov, ::GlobalNamespace::OVRDisplay_EyeFov fullFov) noexcept {
  this->resolution = resolution;
  this->fov = fov;
  this->fullFov = fullFov;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDisplay_EyeRenderDesc::OVRDisplay_EyeRenderDesc() {}
// Ctor Parameters [CppParam { name: "render", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeWarp", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "postPresent", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderError", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeWarpError",
// ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDisplay_LatencyData::OVRDisplay_LatencyData(float_t render, float_t timeWarp, float_t postPresent, float_t renderError, float_t timeWarpError) noexcept {
  this->render = render;
  this->timeWarp = timeWarp;
  this->postPresent = postPresent;
  this->renderError = renderError;
  this->timeWarpError = timeWarpError;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDisplay_LatencyData::OVRDisplay_LatencyData() {}
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e1cca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::Update)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5e1cd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.add_RecenteredPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRDisplay::*)(::System::Action*)>(&::GlobalNamespace::OVRDisplay::add_RecenteredPose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e1cedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "add_RecenteredPose", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.remove_RecenteredPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRDisplay::*)(::System::Action*)>(&::GlobalNamespace::OVRDisplay::remove_RecenteredPose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e1cf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "remove_RecenteredPose", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.RecenterPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::RecenterPose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e1d034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "RecenterPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_acceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_acceleration)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5e1d0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_acceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_angularAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_angularAcceleration)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5e1d22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_angularAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_velocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_velocity)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5e1d390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_velocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_angularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_angularVelocity)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5e1d4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_angularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.GetEyeRenderDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRDisplay_EyeRenderDesc (::GlobalNamespace::OVRDisplay::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::OVRDisplay::GetEyeRenderDesc)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e1d658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "GetEyeRenderDesc", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_latency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRDisplay_LatencyData (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_latency)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5e1d690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_latency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_appFramerate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_appFramerate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e1d864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_appFramerate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_recommendedMSAALevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_recommendedMSAALevel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e1d8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_recommendedMSAALevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_displayFrequenciesAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_displayFrequenciesAvailable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e1d95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_displayFrequenciesAvailable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_displayFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_displayFrequency)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e1d9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_displayFrequency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.set_displayFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRDisplay::*)(float_t)>(&::GlobalNamespace::OVRDisplay::set_displayFrequency)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e1da04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "set_displayFrequency", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.UpdateTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::UpdateTextures)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1cd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "UpdateTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.ConfigureEyeDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRDisplay::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::OVRDisplay::ConfigureEyeDesc)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5e1da68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "ConfigureEyeDesc", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRDisplay::__cordl_internal_get_needsConfigureTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needsConfigureTexture;
}
constexpr bool const& GlobalNamespace::OVRDisplay::__cordl_internal_get_needsConfigureTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needsConfigureTexture;
}
constexpr void GlobalNamespace::OVRDisplay::__cordl_internal_set_needsConfigureTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needsConfigureTexture = value;
}
constexpr ::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc>& GlobalNamespace::OVRDisplay::__cordl_internal_get_eyeDescs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyeDescs;
}
constexpr ::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc> const& GlobalNamespace::OVRDisplay::__cordl_internal_get_eyeDescs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyeDescs;
}
constexpr void GlobalNamespace::OVRDisplay::__cordl_internal_set_eyeDescs(::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eyeDescs = value;
}
constexpr bool& GlobalNamespace::OVRDisplay::__cordl_internal_get_recenterRequested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recenterRequested;
}
constexpr bool const& GlobalNamespace::OVRDisplay::__cordl_internal_get_recenterRequested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recenterRequested;
}
constexpr void GlobalNamespace::OVRDisplay::__cordl_internal_set_recenterRequested(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recenterRequested = value;
}
constexpr int32_t& GlobalNamespace::OVRDisplay::__cordl_internal_get_recenterRequestedFrameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recenterRequestedFrameCount;
}
constexpr int32_t const& GlobalNamespace::OVRDisplay::__cordl_internal_get_recenterRequestedFrameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recenterRequestedFrameCount;
}
constexpr void GlobalNamespace::OVRDisplay::__cordl_internal_set_recenterRequestedFrameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recenterRequestedFrameCount = value;
}
constexpr int32_t& GlobalNamespace::OVRDisplay::__cordl_internal_get_localTrackingSpaceRecenterCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localTrackingSpaceRecenterCount;
}
constexpr int32_t const& GlobalNamespace::OVRDisplay::__cordl_internal_get_localTrackingSpaceRecenterCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localTrackingSpaceRecenterCount;
}
constexpr void GlobalNamespace::OVRDisplay::__cordl_internal_set_localTrackingSpaceRecenterCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localTrackingSpaceRecenterCount = value;
}
constexpr ::System::Action*& GlobalNamespace::OVRDisplay::__cordl_internal_get_RecenteredPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecenteredPose;
}
constexpr ::System::Action* const& GlobalNamespace::OVRDisplay::__cordl_internal_get_RecenteredPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecenteredPose;
}
constexpr void GlobalNamespace::OVRDisplay::__cordl_internal_set_RecenteredPose(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RecenteredPose = value;
}
inline void GlobalNamespace::OVRDisplay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRDisplay::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRDisplay::add_RecenteredPose(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "add_RecenteredPose", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRDisplay::remove_RecenteredPose(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "remove_RecenteredPose", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRDisplay::RecenterPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "RecenterPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRDisplay::get_acceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_acceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRDisplay::get_angularAcceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_angularAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRDisplay::get_velocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_velocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRDisplay::get_angularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_angularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRDisplay_EyeRenderDesc GlobalNamespace::OVRDisplay::GetEyeRenderDesc(::UnityEngine::XR::XRNode eye) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "GetEyeRenderDesc", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRDisplay_EyeRenderDesc>(this, ___internal_method, eye);
}
inline ::GlobalNamespace::OVRDisplay_LatencyData GlobalNamespace::OVRDisplay::get_latency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_latency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRDisplay_LatencyData>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRDisplay::get_appFramerate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_appFramerate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRDisplay::get_recommendedMSAALevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_recommendedMSAALevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<float_t> GlobalNamespace::OVRDisplay::get_displayFrequenciesAvailable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_displayFrequenciesAvailable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRDisplay::get_displayFrequency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "get_displayFrequency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRDisplay::set_displayFrequency(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "set_displayFrequency", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRDisplay::UpdateTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "UpdateTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRDisplay::ConfigureEyeDesc(::UnityEngine::XR::XRNode eye) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDisplay*>(), { "ConfigureEyeDesc", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eye);
}
inline ::GlobalNamespace::OVRDisplay* GlobalNamespace::OVRDisplay::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDisplay::OVRDisplay() {}
