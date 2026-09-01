#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ShadowSplitData.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShadowSplitData__m_CullingPlanes_e__FixedBuffer::ShadowSplitData__m_CullingPlanes_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShadowSplitData__m_CullingPlanes_e__FixedBuffer::ShadowSplitData__m_CullingPlanes_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.get_cullingPlaneCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ShadowSplitData::*)()>(&::UnityEngine::Rendering::ShadowSplitData::get_cullingPlaneCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b287f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), { "get_cullingPlaneCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.get_cullingSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::ShadowSplitData::*)()>(&::UnityEngine::Rendering::ShadowSplitData::get_cullingSphere)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b287fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), { "get_cullingSphere", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.set_shadowCascadeBlendCullingFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShadowSplitData::*)(float_t)>(&::UnityEngine::Rendering::ShadowSplitData::set_shadowCascadeBlendCullingFactor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b28240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), { "set_shadowCascadeBlendCullingFactor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.GetCullingPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Plane (::UnityEngine::Rendering::ShadowSplitData::*)(int32_t)>(&::UnityEngine::Rendering::ShadowSplitData::GetCullingPlane)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b28808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), { "GetCullingPlane", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ShadowSplitData::*)(::UnityEngine::Rendering::ShadowSplitData)>(
    &::UnityEngine::Rendering::ShadowSplitData::Equals)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6b28484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadowSplitData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ShadowSplitData::*)(::System::Object*)>(&::UnityEngine::Rendering::ShadowSplitData::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6b28950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), { ::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ShadowSplitData::*)()>(&::UnityEngine::Rendering::ShadowSplitData::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b28778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), { ::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ShadowSplitData::setStaticF_maximumCullingPlaneCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maximumCullingPlaneCount", ::UnityEngine::Rendering::ShadowSplitData>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ShadowSplitData::getStaticF_maximumCullingPlaneCount() {
  return ::cordl_internals::getStaticField<int32_t, "maximumCullingPlaneCount", ::UnityEngine::Rendering::ShadowSplitData>();
}
inline int32_t UnityEngine::Rendering::ShadowSplitData::get_cullingPlaneCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), { "get_cullingPlaneCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::ShadowSplitData::get_cullingSphere() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), { "get_cullingSphere", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::ShadowSplitData::set_shadowCascadeBlendCullingFactor(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), { "set_shadowCascadeBlendCullingFactor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Plane UnityEngine::Rendering::ShadowSplitData::GetCullingPlane(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), { "GetCullingPlane", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane>(*this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::ShadowSplitData::Equals(::UnityEngine::Rendering::ShadowSplitData other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadowSplitData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::ShadowSplitData::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::ShadowSplitData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ShadowSplitData>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>"
constexpr UnityEngine::Rendering::ShadowSplitData::operator ::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>* UnityEngine::Rendering::ShadowSplitData::i___System__IEquatable_1___UnityEngine__Rendering__ShadowSplitData_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_CullingPlaneCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CullingPlanes", ty:
// "::UnityEngine::Rendering::ShadowSplitData__m_CullingPlanes_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CullingSphere", ty: "::UnityEngine::Vector4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_ShadowCascadeBlendCullingFactor", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CullingNearPlane", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CullingMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShadowSplitData::ShadowSplitData(int32_t m_CullingPlaneCount, ::UnityEngine::Rendering::ShadowSplitData__m_CullingPlanes_e__FixedBuffer m_CullingPlanes,
                                                                     ::UnityEngine::Vector4 m_CullingSphere, float_t m_ShadowCascadeBlendCullingFactor, float_t m_CullingNearPlane,
                                                                     ::UnityEngine::Matrix4x4 m_CullingMatrix) noexcept {
  this->m_CullingPlaneCount = m_CullingPlaneCount;
  this->m_CullingPlanes = m_CullingPlanes;
  this->m_CullingSphere = m_CullingSphere;
  this->m_ShadowCascadeBlendCullingFactor = m_ShadowCascadeBlendCullingFactor;
  this->m_CullingNearPlane = m_CullingNearPlane;
  this->m_CullingMatrix = m_CullingMatrix;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShadowSplitData::ShadowSplitData() {}
