#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRBody.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRBody_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeletonRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRBody.get_ProvidedSkeletonType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_BodyJointSet (::GlobalNamespace::OVRBody::*)()>(&::GlobalNamespace::OVRBody::get_ProvidedSkeletonType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df74c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "get_ProvidedSkeletonType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.set_ProvidedSkeletonType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBody::*)(::GlobalNamespace::OVRPlugin_BodyJointSet)>(&::GlobalNamespace::OVRBody::set_ProvidedSkeletonType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df74cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "set_ProvidedSkeletonType", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyJointSet>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.get_BodyState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::OVRPlugin_BodyState> (::GlobalNamespace::OVRBody::*)()>(&::GlobalNamespace::OVRBody::get_BodyState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5df74d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "get_BodyState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBody::*)()>(&::GlobalNamespace::OVRBody::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5df7558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBody::*)()>(&::GlobalNamespace::OVRBody::OnEnable)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5df75d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.OnPermissionGranted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBody::*)(::StringW)>(&::GlobalNamespace::OVRBody::OnPermissionGranted)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5df7a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OnPermissionGranted", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.StartBodyTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRBody::StartBodyTracking)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5df77f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "StartBodyTracking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBody::*)()>(&::GlobalNamespace::OVRBody::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5df7abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBody::*)()>(&::GlobalNamespace::OVRBody::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5df7b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBody::*)()>(&::GlobalNamespace::OVRBody::Update)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df7b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.SetRequestedJointSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRPlugin_BodyJointSet)>(&::GlobalNamespace::OVRBody::SetRequestedJointSet)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5df7b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "SetRequestedJointSet", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyJointSet>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.SuggestBodyTrackingCalibrationOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::GlobalNamespace::OVRBody::SuggestBodyTrackingCalibrationOverride)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5df7c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "SuggestBodyTrackingCalibrationOverride", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.ResetBodyTrackingCalibration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRBody::ResetBodyTrackingCalibration)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5df7c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "ResetBodyTrackingCalibration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.GetBodyTrackingCalibrationStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState (::GlobalNamespace::OVRBody::*)()>(
    &::GlobalNamespace::OVRBody::GetBodyTrackingCalibrationStatus)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5df7cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "GetBodyTrackingCalibrationStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.GetBodyTrackingFidelityStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 (::GlobalNamespace::OVRBody::*)()>(
    &::GlobalNamespace::OVRBody::GetBodyTrackingFidelityStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df7cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "GetBodyTrackingFidelityStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.GetBodyState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBody::*)(::GlobalNamespace::OVRPlugin_Step)>(&::GlobalNamespace::OVRBody::GetBodyState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5df79d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "GetBodyState", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Step>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonType (::GlobalNamespace::OVRBody::*)()>(
    &::GlobalNamespace::OVRBody::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5df7cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonPoseData (::GlobalNamespace::OVRBody::*)()>(
    &::GlobalNamespace::OVRBody::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5df7d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData (::GlobalNamespace::OVRBody::*)()>(
    &::GlobalNamespace::OVRBody::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5df7f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.get_Fidelity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 (*)()>(&::GlobalNamespace::OVRBody::get_Fidelity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5df7f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "get_Fidelity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.set_Fidelity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2)>(&::GlobalNamespace::OVRBody::set_Fidelity)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5df7f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "set_Fidelity", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBody::*)()>(&::GlobalNamespace::OVRBody::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df7ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBody.OVRSkeleton_IOVRSkeletonDataProvider_get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRBody::*)()>(&::GlobalNamespace::OVRBody::OVRSkeleton_IOVRSkeletonDataProvider_get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df7ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OVRSkeleton.IOVRSkeletonDataProvider.get_enabled", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRPlugin_BodyState& GlobalNamespace::OVRBody::__cordl_internal_get__bodyState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyState;
}
constexpr ::GlobalNamespace::OVRPlugin_BodyState const& GlobalNamespace::OVRBody::__cordl_internal_get__bodyState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyState;
}
constexpr void GlobalNamespace::OVRBody::__cordl_internal_set__bodyState(::GlobalNamespace::OVRPlugin_BodyState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bodyState = value;
}
constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>& GlobalNamespace::OVRBody::__cordl_internal_get__boneRotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boneRotations;
}
constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf> const& GlobalNamespace::OVRBody::__cordl_internal_get__boneRotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boneRotations;
}
constexpr void GlobalNamespace::OVRBody::__cordl_internal_set__boneRotations(::ArrayW<::GlobalNamespace::OVRPlugin_Quatf> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boneRotations = value;
}
constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>& GlobalNamespace::OVRBody::__cordl_internal_get__boneTranslations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boneTranslations;
}
constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> const& GlobalNamespace::OVRBody::__cordl_internal_get__boneTranslations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boneTranslations;
}
constexpr void GlobalNamespace::OVRBody::__cordl_internal_set__boneTranslations(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boneTranslations = value;
}
constexpr bool& GlobalNamespace::OVRBody::__cordl_internal_get__dataChangedSinceLastQuery() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataChangedSinceLastQuery;
}
constexpr bool const& GlobalNamespace::OVRBody::__cordl_internal_get__dataChangedSinceLastQuery() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataChangedSinceLastQuery;
}
constexpr void GlobalNamespace::OVRBody::__cordl_internal_set__dataChangedSinceLastQuery(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataChangedSinceLastQuery = value;
}
constexpr bool& GlobalNamespace::OVRBody::__cordl_internal_get__hasData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasData;
}
constexpr bool const& GlobalNamespace::OVRBody::__cordl_internal_get__hasData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasData;
}
constexpr void GlobalNamespace::OVRBody::__cordl_internal_set__hasData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasData = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::OVRBody::__cordl_internal_get__onPermissionGranted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPermissionGranted;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::OVRBody::__cordl_internal_get__onPermissionGranted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPermissionGranted;
}
constexpr void GlobalNamespace::OVRBody::__cordl_internal_set__onPermissionGranted(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onPermissionGranted = value;
}
constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet& GlobalNamespace::OVRBody::__cordl_internal_get__providedSkeletonType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedSkeletonType;
}
constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet const& GlobalNamespace::OVRBody::__cordl_internal_get__providedSkeletonType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedSkeletonType;
}
constexpr void GlobalNamespace::OVRBody::__cordl_internal_set__providedSkeletonType(::GlobalNamespace::OVRPlugin_BodyJointSet value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____providedSkeletonType = value;
}
inline void GlobalNamespace::OVRBody::setStaticF__trackingInstanceCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_trackingInstanceCount", ::GlobalNamespace::OVRBody*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRBody::getStaticF__trackingInstanceCount() {
  return ::cordl_internals::getStaticField<int32_t, "_trackingInstanceCount", ::GlobalNamespace::OVRBody*>();
}
inline ::GlobalNamespace::OVRPlugin_BodyJointSet GlobalNamespace::OVRBody::get_ProvidedSkeletonType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "get_ProvidedSkeletonType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_BodyJointSet>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBody::set_ProvidedSkeletonType(::GlobalNamespace::OVRPlugin_BodyJointSet value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "set_ProvidedSkeletonType", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyJointSet>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRPlugin_BodyState> GlobalNamespace::OVRBody::get_BodyState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "get_BodyState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRPlugin_BodyState>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBody::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBody::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBody::OnPermissionGranted(::StringW permissionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OnPermissionGranted", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionId);
}
inline bool GlobalNamespace::OVRBody::StartBodyTracking() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "StartBodyTracking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRBody::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBody::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBody::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRBody::SetRequestedJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet jointSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "SetRequestedJointSet", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyJointSet>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, jointSet);
}
inline bool GlobalNamespace::OVRBody::SuggestBodyTrackingCalibrationOverride(float_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "SuggestBodyTrackingCalibrationOverride", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, height);
}
inline bool GlobalNamespace::OVRBody::ResetBodyTrackingCalibration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "ResetBodyTrackingCalibration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState GlobalNamespace::OVRBody::GetBodyTrackingCalibrationStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "GetBodyTrackingCalibrationStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 GlobalNamespace::OVRBody::GetBodyTrackingFidelityStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "GetBodyTrackingFidelityStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBody::GetBodyState(::GlobalNamespace::OVRPlugin_Step step) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "GetBodyState", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Step>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, step);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRBody::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonType>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData GlobalNamespace::OVRBody::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData GlobalNamespace::OVRBody::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 GlobalNamespace::OVRBody::get_Fidelity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "get_Fidelity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRBody::set_Fidelity(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "set_Fidelity", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRBody::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRBody::OVRSkeleton_IOVRSkeletonDataProvider_get_enabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBody*>(), { "OVRSkeleton.IOVRSkeletonDataProvider.get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRBody* GlobalNamespace::OVRBody::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRBody*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr GlobalNamespace::OVRBody::operator ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* GlobalNamespace::OVRBody::i___GlobalNamespace__OVRSkeleton_IOVRSkeletonDataProvider() noexcept {
  return static_cast<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider"
constexpr GlobalNamespace::OVRBody::operator ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider"
constexpr ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider* GlobalNamespace::OVRBody::i___GlobalNamespace__OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider() noexcept {
  return static_cast<::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRBody::OVRBody() {}
constexpr ::GlobalNamespace::OVRPermissionsRequester_Permission GlobalNamespace::OVRBody::BodyTrackingPermission{ static_cast<int32_t>(0x1) };
