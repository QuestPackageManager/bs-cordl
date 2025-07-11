#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREyeGaze.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__OVREyeGaze_def.hpp"
#include "GlobalNamespace/zzzz__OVREyeGaze_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVREyeGaze_EyeId::OVREyeGaze_EyeId(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVREyeGaze_EyeId::OVREyeGaze_EyeId() {}
constexpr ::GlobalNamespace::OVREyeGaze_EyeId GlobalNamespace::OVREyeGaze_EyeId::Left{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVREyeGaze_EyeId GlobalNamespace::OVREyeGaze_EyeId::Right{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVREyeGaze_EyeTrackingMode::OVREyeGaze_EyeTrackingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVREyeGaze_EyeTrackingMode::OVREyeGaze_EyeTrackingMode() {}
constexpr ::GlobalNamespace::OVREyeGaze_EyeTrackingMode GlobalNamespace::OVREyeGaze_EyeTrackingMode::HeadSpace{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVREyeGaze_EyeTrackingMode GlobalNamespace::OVREyeGaze_EyeTrackingMode::WorldSpace{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVREyeGaze_EyeTrackingMode GlobalNamespace::OVREyeGaze_EyeTrackingMode::TrackingSpace{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.get_EyeTrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::get_EyeTrackingEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fa8f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "get_EyeTrackingEnabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.get_Confidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::get_Confidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fa8f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "get_Confidence",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.set_Confidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)(float_t)>(&::GlobalNamespace::OVREyeGaze::set_Confidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fa8f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "set_Confidence", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3fa8f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3fa9010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3fa9298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.OnPermissionGranted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)(::StringW)>(&::GlobalNamespace::OVREyeGaze::OnPermissionGranted)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3fa93e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "OnPermissionGranted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.StartEyeTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::StartEyeTracking)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3fa9310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "StartEyeTracking",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3fa9448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fa94d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::Update)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x3fa94dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.CalculateEyeRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::OVREyeGaze::*)(::UnityEngine::Quaternion)>(
    &::GlobalNamespace::OVREyeGaze::CalculateEyeRotation)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3fa96d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "CalculateEyeRotation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.PrepareHeadDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::PrepareHeadDirection)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x3fa9014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "PrepareHeadDirection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3fa9894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVREyeGaze_EyeId& GlobalNamespace::OVREyeGaze::__cordl_internal_get_Eye() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Eye;
}
constexpr ::GlobalNamespace::OVREyeGaze_EyeId const& GlobalNamespace::OVREyeGaze::__cordl_internal_get_Eye() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Eye;
}
constexpr void GlobalNamespace::OVREyeGaze::__cordl_internal_set_Eye(::GlobalNamespace::OVREyeGaze_EyeId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Eye = value;
}
constexpr float_t& GlobalNamespace::OVREyeGaze::__cordl_internal_get__Confidence_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Confidence_k__BackingField;
}
constexpr float_t const& GlobalNamespace::OVREyeGaze::__cordl_internal_get__Confidence_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Confidence_k__BackingField;
}
constexpr void GlobalNamespace::OVREyeGaze::__cordl_internal_set__Confidence_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Confidence_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::OVREyeGaze::__cordl_internal_get_ConfidenceThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConfidenceThreshold;
}
constexpr float_t const& GlobalNamespace::OVREyeGaze::__cordl_internal_get_ConfidenceThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConfidenceThreshold;
}
constexpr void GlobalNamespace::OVREyeGaze::__cordl_internal_set_ConfidenceThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConfidenceThreshold = value;
}
constexpr bool& GlobalNamespace::OVREyeGaze::__cordl_internal_get_ApplyPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApplyPosition;
}
constexpr bool const& GlobalNamespace::OVREyeGaze::__cordl_internal_get_ApplyPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApplyPosition;
}
constexpr void GlobalNamespace::OVREyeGaze::__cordl_internal_set_ApplyPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ApplyPosition = value;
}
constexpr bool& GlobalNamespace::OVREyeGaze::__cordl_internal_get_ApplyRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApplyRotation;
}
constexpr bool const& GlobalNamespace::OVREyeGaze::__cordl_internal_get_ApplyRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApplyRotation;
}
constexpr void GlobalNamespace::OVREyeGaze::__cordl_internal_set_ApplyRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ApplyRotation = value;
}
constexpr ::GlobalNamespace::OVRPlugin_EyeGazesState& GlobalNamespace::OVREyeGaze::__cordl_internal_get__currentEyeGazesState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentEyeGazesState;
}
constexpr ::GlobalNamespace::OVRPlugin_EyeGazesState const& GlobalNamespace::OVREyeGaze::__cordl_internal_get__currentEyeGazesState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentEyeGazesState;
}
constexpr void GlobalNamespace::OVREyeGaze::__cordl_internal_set__currentEyeGazesState(::GlobalNamespace::OVRPlugin_EyeGazesState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentEyeGazesState = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVREyeGaze::__cordl_internal_get_ReferenceFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReferenceFrame;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVREyeGaze::__cordl_internal_get_ReferenceFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReferenceFrame;
}
constexpr void GlobalNamespace::OVREyeGaze::__cordl_internal_set_ReferenceFrame(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ReferenceFrame)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVREyeGaze_EyeTrackingMode& GlobalNamespace::OVREyeGaze::__cordl_internal_get_TrackingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackingMode;
}
constexpr ::GlobalNamespace::OVREyeGaze_EyeTrackingMode const& GlobalNamespace::OVREyeGaze::__cordl_internal_get_TrackingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackingMode;
}
constexpr void GlobalNamespace::OVREyeGaze::__cordl_internal_set_TrackingMode(::GlobalNamespace::OVREyeGaze_EyeTrackingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TrackingMode = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OVREyeGaze::__cordl_internal_get__initialRotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialRotationOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OVREyeGaze::__cordl_internal_get__initialRotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialRotationOffset;
}
constexpr void GlobalNamespace::OVREyeGaze::__cordl_internal_set__initialRotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialRotationOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVREyeGaze::__cordl_internal_get__viewTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVREyeGaze::__cordl_internal_get__viewTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewTransform;
}
constexpr void GlobalNamespace::OVREyeGaze::__cordl_internal_set__viewTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::OVREyeGaze::__cordl_internal_get__onPermissionGranted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPermissionGranted;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::OVREyeGaze::__cordl_internal_get__onPermissionGranted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPermissionGranted;
}
constexpr void GlobalNamespace::OVREyeGaze::__cordl_internal_set__onPermissionGranted(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onPermissionGranted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVREyeGaze::setStaticF__trackingInstanceCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_trackingInstanceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVREyeGaze::getStaticF__trackingInstanceCount() {
  return ::cordl_internals::getStaticField<int32_t, "_trackingInstanceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get>();
}
inline bool GlobalNamespace::OVREyeGaze::get_EyeTrackingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "get_EyeTrackingEnabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVREyeGaze::get_Confidence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "get_Confidence",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::set_Confidence(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "set_Confidence",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVREyeGaze::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::OnPermissionGranted(::StringW permissionId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "OnPermissionGranted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permissionId);
}
inline bool GlobalNamespace::OVREyeGaze::StartEyeTracking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "StartEyeTracking",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVREyeGaze::CalculateEyeRotation(::UnityEngine::Quaternion eyeRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "CalculateEyeRotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, eyeRotation);
}
inline void GlobalNamespace::OVREyeGaze::PrepareHeadDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), "PrepareHeadDirection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVREyeGaze* GlobalNamespace::OVREyeGaze::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVREyeGaze*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVREyeGaze::OVREyeGaze() {}
constexpr ::GlobalNamespace::OVRPermissionsRequester_Permission GlobalNamespace::OVREyeGaze::EyeTrackingPermission{ static_cast<int32_t>(0x2) };
