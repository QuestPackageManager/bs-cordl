#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ScriptableCullingParameters.hpp"
#include "UnityEngine/Rendering/zzzz__CameraProperties_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingOptions_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeSortingCriteria_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraProperties_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingOptions_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeSortingCriteria_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer(
    float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableCullingParameters.get_cullingPlaneCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ScriptableCullingParameters::*)()>(
    &::UnityEngine::Rendering::ScriptableCullingParameters::get_cullingPlaneCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34592c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(),
                                                                               "get_cullingPlaneCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableCullingParameters.GetLayerCullingDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ScriptableCullingParameters::*)(int32_t)>(
    &::UnityEngine::Rendering::ScriptableCullingParameters::GetLayerCullingDistance)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x34592c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(), "GetLayerCullingDistance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableCullingParameters.GetCullingPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Plane (::UnityEngine::Rendering::ScriptableCullingParameters::*)(int32_t)>(
    &::UnityEngine::Rendering::ScriptableCullingParameters::GetCullingPlane)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x34593a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(), "GetCullingPlane",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableCullingParameters.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ScriptableCullingParameters::*)(
    ::UnityEngine::Rendering::ScriptableCullingParameters)>(&::UnityEngine::Rendering::ScriptableCullingParameters::Equals)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x3459498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableCullingParameters>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableCullingParameters.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ScriptableCullingParameters::*)(::System::Object*)>(
    &::UnityEngine::Rendering::ScriptableCullingParameters::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3459bd8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableCullingParameters.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ScriptableCullingParameters::*)()>(
    &::UnityEngine::Rendering::ScriptableCullingParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x3459c90;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>"
constexpr UnityEngine::Rendering::ScriptableCullingParameters::operator ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>*
UnityEngine::Rendering::ScriptableCullingParameters::i___System__IEquatable_1___UnityEngine__Rendering__ScriptableCullingParameters_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Rendering::ScriptableCullingParameters::setStaticF_maximumCullingPlaneCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maximumCullingPlaneCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ScriptableCullingParameters::getStaticF_maximumCullingPlaneCount() {
  return ::cordl_internals::getStaticField<int32_t, "maximumCullingPlaneCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get>();
}
inline void UnityEngine::Rendering::ScriptableCullingParameters::setStaticF_layerCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "layerCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ScriptableCullingParameters::getStaticF_layerCount() {
  return ::cordl_internals::getStaticField<int32_t, "layerCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get>();
}
inline int32_t UnityEngine::Rendering::ScriptableCullingParameters::get_cullingPlaneCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(),
                                                                             "get_cullingPlaneCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ScriptableCullingParameters::GetLayerCullingDistance(int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(), "GetLayerCullingDistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, layerIndex);
}
inline ::UnityEngine::Plane UnityEngine::Rendering::ScriptableCullingParameters::GetCullingPlane(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(), "GetCullingPlane",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane, false>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::ScriptableCullingParameters::Equals(::UnityEngine::Rendering::ScriptableCullingParameters other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableCullingParameters>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::ScriptableCullingParameters::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::ScriptableCullingParameters::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ScriptableCullingParameters>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_IsOrthographic", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LODParameters", ty: "::UnityEngine::Rendering::LODParameters",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CullingPlanes", ty: "::UnityEngine::Rendering::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_CullingPlaneCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CullingMask", ty: "uint32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_SceneMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LayerFarCullDistances", ty:
// "::UnityEngine::Rendering::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LayerCull", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_CullingMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Origin", ty: "::UnityEngine::Vector3",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ShadowDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ShadowNearPlaneOffset", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CullingOptions", ty: "::UnityEngine::Rendering::CullingOptions", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ReflectionProbeSortingCriteria", ty: "::UnityEngine::Rendering::ReflectionProbeSortingCriteria", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CameraProperties", ty:
// "::UnityEngine::Rendering::CameraProperties", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccurateOcclusionThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_MaximumPortalCullingJobs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StereoViewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_StereoProjectionMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StereoSeparationDistance", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_maximumVisibleLights", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ConservativeEnclosingSphere", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NumIterationsEnclosingSphere", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ScriptableCullingParameters::ScriptableCullingParameters(
    int32_t m_IsOrthographic, ::UnityEngine::Rendering::LODParameters m_LODParameters, ::UnityEngine::Rendering::__ScriptableCullingParameters___m_CullingPlanes_e__FixedBuffer m_CullingPlanes,
    int32_t m_CullingPlaneCount, uint32_t m_CullingMask, uint64_t m_SceneMask, ::UnityEngine::Rendering::__ScriptableCullingParameters___m_LayerFarCullDistances_e__FixedBuffer m_LayerFarCullDistances,
    int32_t m_LayerCull, ::UnityEngine::Matrix4x4 m_CullingMatrix, ::UnityEngine::Vector3 m_Origin, float_t m_ShadowDistance, float_t m_ShadowNearPlaneOffset,
    ::UnityEngine::Rendering::CullingOptions m_CullingOptions, ::UnityEngine::Rendering::ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria,
    ::UnityEngine::Rendering::CameraProperties m_CameraProperties, float_t m_AccurateOcclusionThreshold, int32_t m_MaximumPortalCullingJobs, ::UnityEngine::Matrix4x4 m_StereoViewMatrix,
    ::UnityEngine::Matrix4x4 m_StereoProjectionMatrix, float_t m_StereoSeparationDistance, int32_t m_maximumVisibleLights, bool m_ConservativeEnclosingSphere,
    int32_t m_NumIterationsEnclosingSphere) noexcept {
  this->m_IsOrthographic = m_IsOrthographic;
  this->m_LODParameters = m_LODParameters;
  this->m_CullingPlanes = m_CullingPlanes;
  this->m_CullingPlaneCount = m_CullingPlaneCount;
  this->m_CullingMask = m_CullingMask;
  this->m_SceneMask = m_SceneMask;
  this->m_LayerFarCullDistances = m_LayerFarCullDistances;
  this->m_LayerCull = m_LayerCull;
  this->m_CullingMatrix = m_CullingMatrix;
  this->m_Origin = m_Origin;
  this->m_ShadowDistance = m_ShadowDistance;
  this->m_ShadowNearPlaneOffset = m_ShadowNearPlaneOffset;
  this->m_CullingOptions = m_CullingOptions;
  this->m_ReflectionProbeSortingCriteria = m_ReflectionProbeSortingCriteria;
  this->m_CameraProperties = m_CameraProperties;
  this->m_AccurateOcclusionThreshold = m_AccurateOcclusionThreshold;
  this->m_MaximumPortalCullingJobs = m_MaximumPortalCullingJobs;
  this->m_StereoViewMatrix = m_StereoViewMatrix;
  this->m_StereoProjectionMatrix = m_StereoProjectionMatrix;
  this->m_StereoSeparationDistance = m_StereoSeparationDistance;
  this->m_maximumVisibleLights = m_maximumVisibleLights;
  this->m_ConservativeEnclosingSphere = m_ConservativeEnclosingSphere;
  this->m_NumIterationsEnclosingSphere = m_NumIterationsEnclosingSphere;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ScriptableCullingParameters::ScriptableCullingParameters() {}
