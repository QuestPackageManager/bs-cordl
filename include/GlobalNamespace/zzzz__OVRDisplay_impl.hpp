#pragma once
#include "GlobalNamespace/zzzz__OVRDisplay_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDisplay_def.hpp"
#include "GlobalNamespace/zzzz__OVRDisplay_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "UpFov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DownFov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "LeftFov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RightFov", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRDisplay__EyeFov::__OVRDisplay__EyeFov(float_t UpFov, float_t DownFov, float_t LeftFov, float_t RightFov) noexcept {
  this->UpFov = UpFov;
  this->DownFov = DownFov;
  this->LeftFov = LeftFov;
  this->RightFov = RightFov;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDisplay__EyeFov::__OVRDisplay__EyeFov() {}
// Ctor Parameters [CppParam { name: "resolution", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "fov", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "fullFov", ty: "::GlobalNamespace::__OVRDisplay__EyeFov", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRDisplay__EyeRenderDesc::__OVRDisplay__EyeRenderDesc(::UnityEngine::Vector2 resolution, ::UnityEngine::Vector2 fov,
                                                                                      ::GlobalNamespace::__OVRDisplay__EyeFov fullFov) noexcept {
  this->resolution = resolution;
  this->fov = fov;
  this->fullFov = fullFov;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDisplay__EyeRenderDesc::__OVRDisplay__EyeRenderDesc() {}
// Ctor Parameters [CppParam { name: "render", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeWarp", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "postPresent", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderError", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeWarpError",
// ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRDisplay__LatencyData::__OVRDisplay__LatencyData(float_t render, float_t timeWarp, float_t postPresent, float_t renderError, float_t timeWarpError) noexcept {
  this->render = render;
  this->timeWarp = timeWarp;
  this->postPresent = postPresent;
  this->renderError = renderError;
  this->timeWarpError = timeWarpError;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDisplay__LatencyData::__OVRDisplay__LatencyData() {}
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x280debc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::Update)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x280df54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.add_RecenteredPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDisplay::*)(::System::Action*)>(&::GlobalNamespace::OVRDisplay::add_RecenteredPose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x280e0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "add_RecenteredPose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.remove_RecenteredPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDisplay::*)(::System::Action*)>(&::GlobalNamespace::OVRDisplay::remove_RecenteredPose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x280e174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "remove_RecenteredPose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.RecenterPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::RecenterPose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x280e210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "RecenterPose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_acceleration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_acceleration)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x280e288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_acceleration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_angularAcceleration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRDisplay::*)()>(
    &::GlobalNamespace::OVRDisplay::get_angularAcceleration)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x280e3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_angularAcceleration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_velocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_velocity)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x280e4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_velocity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_angularVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_angularVelocity)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x280e5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_angularVelocity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.GetEyeRenderDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRDisplay__EyeRenderDesc (::GlobalNamespace::OVRDisplay::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::OVRDisplay::GetEyeRenderDesc)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x280e718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "GetEyeRenderDesc", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_latency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRDisplay__LatencyData (::GlobalNamespace::OVRDisplay::*)()>(
    &::GlobalNamespace::OVRDisplay::get_latency)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x280e750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_latency",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_appFramerate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_appFramerate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x280e920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_appFramerate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_recommendedMSAALevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_recommendedMSAALevel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x280e9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(),
                                                                               "get_recommendedMSAALevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_displayFrequenciesAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::GlobalNamespace::OVRDisplay::*)()>(
    &::GlobalNamespace::OVRDisplay::get_displayFrequenciesAvailable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x280ea0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_displayFrequenciesAvailable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.get_displayFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::get_displayFrequency)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2800dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_displayFrequency",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.set_displayFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDisplay::*)(float_t)>(&::GlobalNamespace::OVRDisplay::set_displayFrequency)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x280ea5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "set_displayFrequency", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.UpdateTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDisplay::*)()>(&::GlobalNamespace::OVRDisplay::UpdateTextures)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x280df34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "UpdateTextures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDisplay.ConfigureEyeDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDisplay::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::OVRDisplay::ConfigureEyeDesc)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x280eabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "ConfigureEyeDesc", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
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
constexpr ::ArrayW<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, ::Array<::GlobalNamespace::__OVRDisplay__EyeRenderDesc>*>& GlobalNamespace::OVRDisplay::__cordl_internal_get_eyeDescs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyeDescs;
}
constexpr ::ArrayW<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, ::Array<::GlobalNamespace::__OVRDisplay__EyeRenderDesc>*> const& GlobalNamespace::OVRDisplay::__cordl_internal_get_eyeDescs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyeDescs;
}
constexpr void GlobalNamespace::OVRDisplay::__cordl_internal_set_eyeDescs(::ArrayW<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, ::Array<::GlobalNamespace::__OVRDisplay__EyeRenderDesc>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eyeDescs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::OVRDisplay::__cordl_internal_get_RecenteredPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecenteredPose;
}
constexpr void GlobalNamespace::OVRDisplay::__cordl_internal_set_RecenteredPose(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RecenteredPose)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::OVRDisplay* GlobalNamespace::OVRDisplay::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRDisplay*>());
}
inline void GlobalNamespace::OVRDisplay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRDisplay::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRDisplay::add_RecenteredPose(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "add_RecenteredPose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRDisplay::remove_RecenteredPose(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "remove_RecenteredPose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRDisplay::RecenterPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "RecenterPose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRDisplay::get_acceleration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_acceleration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRDisplay::get_angularAcceleration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_angularAcceleration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRDisplay::get_velocity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_velocity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRDisplay::get_angularVelocity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_angularVelocity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRDisplay__EyeRenderDesc GlobalNamespace::OVRDisplay::GetEyeRenderDesc(::UnityEngine::XR::XRNode eye) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "GetEyeRenderDesc", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, false>(this, ___internal_method, eye);
}
inline ::GlobalNamespace::__OVRDisplay__LatencyData GlobalNamespace::OVRDisplay::get_latency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_latency",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRDisplay__LatencyData, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRDisplay::get_appFramerate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_appFramerate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRDisplay::get_recommendedMSAALevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_recommendedMSAALevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<float_t, ::Array<float_t>*> GlobalNamespace::OVRDisplay::get_displayFrequenciesAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(),
                                                                             "get_displayFrequenciesAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRDisplay::get_displayFrequency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "get_displayFrequency",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRDisplay::set_displayFrequency(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "set_displayFrequency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRDisplay::UpdateTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "UpdateTextures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRDisplay::ConfigureEyeDesc(::UnityEngine::XR::XRNode eye) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDisplay*>::get(), "ConfigureEyeDesc", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eye);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDisplay::OVRDisplay() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
