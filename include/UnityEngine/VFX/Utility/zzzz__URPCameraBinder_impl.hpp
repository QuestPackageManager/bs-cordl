#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/URPCameraBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__URPCameraBinder_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPerFrameHistoryAccessTracker_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::URPCameraBinder.SetCameraProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::URPCameraBinder::*)(::StringW)>(&::UnityEngine::VFX::Utility::URPCameraBinder::SetCameraProperty)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6835f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { "SetCameraProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::URPCameraBinder.UpdateSubProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::URPCameraBinder::*)()>(&::UnityEngine::VFX::Utility::URPCameraBinder::UpdateSubProperties)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x6835fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { "UpdateSubProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::URPCameraBinder.RequestHistoryAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*)>(&::UnityEngine::VFX::Utility::URPCameraBinder::RequestHistoryAccess)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x68363b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(),
                                                             { "RequestHistoryAccess", {}, { ::i2c::type_of<::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::URPCameraBinder.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::URPCameraBinder::*)()>(&::UnityEngine::VFX::Utility::URPCameraBinder::OnEnable)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6836500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::URPCameraBinder.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::URPCameraBinder::*)()>(&::UnityEngine::VFX::Utility::URPCameraBinder::OnDisable)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6836654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::URPCameraBinder.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::URPCameraBinder::*)()>(&::UnityEngine::VFX::Utility::URPCameraBinder::OnValidate)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x68367ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::URPCameraBinder.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::Utility::URPCameraBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::URPCameraBinder::IsValid)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6836900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::URPCameraBinder.UpdateBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::URPCameraBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::URPCameraBinder::UpdateBinding)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x6836b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::URPCameraBinder.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::URPCameraBinder::*)()>(&::UnityEngine::VFX::Utility::URPCameraBinder::ToString)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6837208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::URPCameraBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::URPCameraBinder::*)()>(&::UnityEngine::VFX::Utility::URPCameraBinder::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6837384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_AdditionalData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AdditionalData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_AdditionalData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AdditionalData;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_AdditionalData(::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AdditionalData = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_Camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_Camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Camera = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_CameraProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CameraProperty;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_CameraProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CameraProperty;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_CameraProperty(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CameraProperty = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_Position(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Position = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_Angles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Angles;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_Angles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Angles;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_Angles(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Angles = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_Scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_Scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_Scale(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Scale = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_FieldOfView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FieldOfView;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_FieldOfView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FieldOfView;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_FieldOfView(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FieldOfView = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_NearPlane() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NearPlane;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_NearPlane() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NearPlane;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_NearPlane(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NearPlane = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_FarPlane() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FarPlane;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_FarPlane() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FarPlane;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_FarPlane(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FarPlane = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_AspectRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AspectRatio;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_AspectRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AspectRatio;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_AspectRatio(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AspectRatio = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_Dimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dimensions;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_Dimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dimensions;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_Dimensions(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dimensions = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_ScaledDimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaledDimensions;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_ScaledDimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaledDimensions;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_ScaledDimensions(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScaledDimensions = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_DepthBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthBuffer;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_DepthBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthBuffer;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_DepthBuffer(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthBuffer = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_ColorBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorBuffer;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_ColorBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorBuffer;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_ColorBuffer(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorBuffer = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_Orthographic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Orthographic;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_Orthographic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Orthographic;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_Orthographic(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Orthographic = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_OrthographicSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OrthographicSize;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_OrthographicSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OrthographicSize;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_OrthographicSize(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OrthographicSize = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_LensShift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensShift;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_get_m_LensShift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensShift;
}
constexpr void UnityEngine::VFX::Utility::URPCameraBinder::__cordl_internal_set_m_LensShift(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LensShift = value;
}
inline void UnityEngine::VFX::Utility::URPCameraBinder::SetCameraProperty(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { "SetCameraProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::VFX::Utility::URPCameraBinder::UpdateSubProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { "UpdateSubProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::URPCameraBinder::RequestHistoryAccess(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker* access) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(),
                                                           { "RequestHistoryAccess", {}, { ::i2c::type_of<::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access);
}
inline void UnityEngine::VFX::Utility::URPCameraBinder::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::URPCameraBinder::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::URPCameraBinder::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::VFX::Utility::URPCameraBinder::IsValid(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void UnityEngine::VFX::Utility::URPCameraBinder::UpdateBinding(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline ::StringW UnityEngine::VFX::Utility::URPCameraBinder::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::URPCameraBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::URPCameraBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::URPCameraBinder* UnityEngine::VFX::Utility::URPCameraBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::URPCameraBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::URPCameraBinder::URPCameraBinder() {}
