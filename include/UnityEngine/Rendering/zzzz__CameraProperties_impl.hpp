#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CameraProperties.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CoreCameraValues_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraProperties_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Plane (::UnityEngine::Rendering::CameraProperties::*)(int32_t)>(
    &::UnityEngine::Rendering::CameraProperties::GetShadowCullingPlane)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x48c0fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraProperties>::get(), "GetShadowCullingPlane",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraProperties.GetCameraCullingPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Plane (::UnityEngine::Rendering::CameraProperties::*)(int32_t)>(
    &::UnityEngine::Rendering::CameraProperties::GetCameraCullingPlane)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x48c10c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraProperties>::get(), "GetCameraCullingPlane",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraProperties.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CameraProperties::*)(::UnityEngine::Rendering::CameraProperties)>(
    &::UnityEngine::Rendering::CameraProperties::Equals)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x48c11a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraProperties>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraProperties>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraProperties.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CameraProperties::*)(::System::Object*)>(
    &::UnityEngine::Rendering::CameraProperties::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x48c180c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraProperties>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraProperties>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraProperties.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CameraProperties::*)()>(
    &::UnityEngine::Rendering::CameraProperties::GetHashCode)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x48c18c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraProperties>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraProperties>::get(), 2));
    return ___internal_method;
  }
};
inline ::UnityEngine::Plane UnityEngine::Rendering::CameraProperties::GetShadowCullingPlane(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraProperties>::get(), "GetShadowCullingPlane",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane, false>(this, ___internal_method, index);
}
inline ::UnityEngine::Plane UnityEngine::Rendering::CameraProperties::GetCameraCullingPlane(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraProperties>::get(), "GetCameraCullingPlane",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane, false>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::CameraProperties::Equals(::UnityEngine::Rendering::CameraProperties other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraProperties>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraProperties>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::CameraProperties::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraProperties>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::CameraProperties::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraProperties>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>"
constexpr UnityEngine::Rendering::CameraProperties::operator ::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>* UnityEngine::Rendering::CameraProperties::i___System__IEquatable_1___UnityEngine__Rendering__CameraProperties_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::CameraProperties>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CameraProperties::CameraProperties(
    ::UnityEngine::Rect screenRect, ::UnityEngine::Vector3 viewDir, float_t projectionNear, float_t projectionFar, float_t cameraNear, float_t cameraFar, float_t cameraAspect,
    ::UnityEngine::Matrix4x4 cameraToWorld, ::UnityEngine::Matrix4x4 actualWorldToClip, ::UnityEngine::Matrix4x4 cameraClipToWorld, ::UnityEngine::Matrix4x4 cameraWorldToClip,
    ::UnityEngine::Matrix4x4 implicitProjection, ::UnityEngine::Matrix4x4 stereoWorldToClipLeft, ::UnityEngine::Matrix4x4 stereoWorldToClipRight, ::UnityEngine::Matrix4x4 worldToCamera,
    ::UnityEngine::Vector3 up, ::UnityEngine::Vector3 right, ::UnityEngine::Vector3 transformDirection, ::UnityEngine::Vector3 cameraEuler, ::UnityEngine::Vector3 velocity,
    float_t farPlaneWorldSpaceLength, uint32_t rendererCount, ::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer m_ShadowCullPlanes,
    ::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer m_CameraCullPlanes, float_t baseFarDistance, ::UnityEngine::Vector3 shadowCullCenter,
    ::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer layerCullDistances, int32_t layerCullSpherical, ::UnityEngine::Rendering::CoreCameraValues coreCameraValues,
    uint32_t cameraType, int32_t projectionIsOblique, int32_t isImplicitProjectionMatrix) noexcept {
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
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraProperties::CameraProperties() {}
