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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::get_EyeTrackingEnabled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5df5fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "get_EyeTrackingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.get_Confidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::get_Confidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df6040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "get_Confidence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.set_Confidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)(float_t)>(&::GlobalNamespace::OVREyeGaze::set_Confidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df6048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "set_Confidence", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5df6050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df60cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::OnEnable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5df6388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.OnPermissionGranted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)(::StringW)>(&::GlobalNamespace::OVREyeGaze::OnPermissionGranted)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5df64ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "OnPermissionGranted", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.StartEyeTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::StartEyeTracking)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5df6404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "StartEyeTracking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5df6548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5df65d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::Update)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5df65e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.CalculateEyeRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::OVREyeGaze::*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::OVREyeGaze::CalculateEyeRotation)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5df67dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "CalculateEyeRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.PrepareHeadDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::PrepareHeadDirection)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5df60d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "PrepareHeadDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5df69c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { ".ctor", {}, {} })));
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
  this->___ReferenceFrame = value;
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
  this->____viewTransform = value;
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
  this->____onPermissionGranted = value;
}
inline void GlobalNamespace::OVREyeGaze::setStaticF__trackingInstanceCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_trackingInstanceCount", ::GlobalNamespace::OVREyeGaze*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVREyeGaze::getStaticF__trackingInstanceCount() {
  return ::cordl_internals::getStaticField<int32_t, "_trackingInstanceCount", ::GlobalNamespace::OVREyeGaze*>();
}
inline bool GlobalNamespace::OVREyeGaze::get_EyeTrackingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "get_EyeTrackingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVREyeGaze::get_Confidence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "get_Confidence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::set_Confidence(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "set_Confidence", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVREyeGaze::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::OnPermissionGranted(::StringW permissionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "OnPermissionGranted", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionId);
}
inline bool GlobalNamespace::OVREyeGaze::StartEyeTracking() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "StartEyeTracking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVREyeGaze::CalculateEyeRotation(::UnityEngine::Quaternion eyeRotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "CalculateEyeRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, eyeRotation);
}
inline void GlobalNamespace::OVREyeGaze::PrepareHeadDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { "PrepareHeadDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREyeGaze*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVREyeGaze* GlobalNamespace::OVREyeGaze::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVREyeGaze*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVREyeGaze::OVREyeGaze() {}
constexpr ::GlobalNamespace::OVRPermissionsRequester_Permission GlobalNamespace::OVREyeGaze::EyeTrackingPermission{ static_cast<int32_t>(0x2) };
