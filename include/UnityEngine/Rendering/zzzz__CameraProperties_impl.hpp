#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\CameraProperties.hpp"
#include "UnityEngine/Rendering/zzzz__CoreCameraValues_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraProperties_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraProperties_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer::CameraProperties__layerCullDistances_e__FixedBuffer(float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer::CameraProperties__layerCullDistances_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer::CameraProperties__m_CameraCullPlanes_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer::CameraProperties__m_CameraCullPlanes_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CameraProperties.GetShadowCullingPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Plane (::UnityEngine::Rendering::CameraProperties::*)(int32_t)>(
    &::UnityEngine::Rendering::CameraProperties::GetShadowCullingPlane)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b1e3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraProperties>(), { "GetShadowCullingPlane", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraProperties.GetCameraCullingPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Plane (::UnityEngine::Rendering::CameraProperties::*)(int32_t)>(
    &::UnityEngine::Rendering::CameraProperties::GetCameraCullingPlane)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b1e478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraProperties>(), { "GetCameraCullingPlane", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraProperties.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CameraProperties::*)(::UnityEngine::Rendering::CameraProperties)>(
    &::UnityEngine::Rendering::CameraProperties::Equals)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x6b1e544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraProperties>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraProperties>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraProperties.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CameraProperties::*)(::System::Object*)>(&::UnityEngine::Rendering::CameraProperties::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b1ed0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraProperties>(), { ::i2c::class_of<::UnityEngine::Rendering::CameraProperties>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraProperties.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CameraProperties::*)()>(&::UnityEngine::Rendering::CameraProperties::GetHashCode)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x6b1edc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraProperties>(), { ::i2c::class_of<::UnityEngine::Rendering::CameraProperties>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Plane UnityEngine::Rendering::CameraProperties::GetShadowCullingPlane(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraProperties>(), { "GetShadowCullingPlane", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane>(*this, ___internal_method, index);
}
inline ::UnityEngine::Plane UnityEngine::Rendering::CameraProperties::GetCameraCullingPlane(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraProperties>(), { "GetCameraCullingPlane", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane>(*this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::CameraProperties::Equals(::UnityEngine::Rendering::CameraProperties other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraProperties>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraProperties>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::CameraProperties::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::CameraProperties>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::CameraProperties::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::CameraProperties>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>"
constexpr UnityEngine::Rendering::CameraProperties::operator ::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>* UnityEngine::Rendering::CameraProperties::i___System__IEquatable_1___UnityEngine__Rendering__CameraProperties_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "screenRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewDir", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "projectionNear", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "projectionFar", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cameraNear", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraFar", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "cameraAspect", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "actualWorldToClip", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraClipToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cameraWorldToClip", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "implicitProjection", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "stereoWorldToClipLeft", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "stereoWorldToClipRight",
// ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldToCamera", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "up", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "right", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "transformDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraEuler", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "farPlaneWorldSpaceLength", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "rendererCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ShadowCullPlanes", ty:
// "::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CameraCullPlanes", ty:
// "::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseFarDistance", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "shadowCullCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "layerCullDistances", ty:
// "::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "layerCullSpherical", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "coreCameraValues", ty: "::UnityEngine::Rendering::CoreCameraValues", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraType", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "projectionIsOblique", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isImplicitProjectionMatrix", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "useInteractiveLightBakingData", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CameraProperties::CameraProperties(
    ::UnityEngine::Rect screenRect, ::UnityEngine::Vector3 viewDir, float_t projectionNear, float_t projectionFar, float_t cameraNear, float_t cameraFar, float_t cameraAspect,
    ::UnityEngine::Matrix4x4 cameraToWorld, ::UnityEngine::Matrix4x4 actualWorldToClip, ::UnityEngine::Matrix4x4 cameraClipToWorld, ::UnityEngine::Matrix4x4 cameraWorldToClip,
    ::UnityEngine::Matrix4x4 implicitProjection, ::UnityEngine::Matrix4x4 stereoWorldToClipLeft, ::UnityEngine::Matrix4x4 stereoWorldToClipRight, ::UnityEngine::Matrix4x4 worldToCamera,
    ::UnityEngine::Vector3 up, ::UnityEngine::Vector3 right, ::UnityEngine::Vector3 transformDirection, ::UnityEngine::Vector3 cameraEuler, ::UnityEngine::Vector3 velocity,
    float_t farPlaneWorldSpaceLength, uint32_t rendererCount, ::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer m_ShadowCullPlanes,
    ::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer m_CameraCullPlanes, float_t baseFarDistance, ::UnityEngine::Vector3 shadowCullCenter,
    ::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer layerCullDistances, int32_t layerCullSpherical, ::UnityEngine::Rendering::CoreCameraValues coreCameraValues,
    uint32_t cameraType, int32_t projectionIsOblique, int32_t isImplicitProjectionMatrix, bool useInteractiveLightBakingData) noexcept {
  this->screenRect = screenRect;
  this->viewDir = viewDir;
  this->projectionNear = projectionNear;
  this->projectionFar = projectionFar;
  this->cameraNear = cameraNear;
  this->cameraFar = cameraFar;
  this->cameraAspect = cameraAspect;
  this->cameraToWorld = cameraToWorld;
  this->actualWorldToClip = actualWorldToClip;
  this->cameraClipToWorld = cameraClipToWorld;
  this->cameraWorldToClip = cameraWorldToClip;
  this->implicitProjection = implicitProjection;
  this->stereoWorldToClipLeft = stereoWorldToClipLeft;
  this->stereoWorldToClipRight = stereoWorldToClipRight;
  this->worldToCamera = worldToCamera;
  this->up = up;
  this->right = right;
  this->transformDirection = transformDirection;
  this->cameraEuler = cameraEuler;
  this->velocity = velocity;
  this->farPlaneWorldSpaceLength = farPlaneWorldSpaceLength;
  this->rendererCount = rendererCount;
  this->m_ShadowCullPlanes = m_ShadowCullPlanes;
  this->m_CameraCullPlanes = m_CameraCullPlanes;
  this->baseFarDistance = baseFarDistance;
  this->shadowCullCenter = shadowCullCenter;
  this->layerCullDistances = layerCullDistances;
  this->layerCullSpherical = layerCullSpherical;
  this->coreCameraValues = coreCameraValues;
  this->cameraType = cameraType;
  this->projectionIsOblique = projectionIsOblique;
  this->isImplicitProjectionMatrix = isImplicitProjectionMatrix;
  this->useInteractiveLightBakingData = useInteractiveLightBakingData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraProperties::CameraProperties() {}
