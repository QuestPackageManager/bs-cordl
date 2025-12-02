#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadowSplitData.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ShadowSplitData::*)()>(
    &::UnityEngine::Rendering::ShadowSplitData::get_cullingPlaneCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f462c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(),
                                                                               "get_cullingPlaneCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.get_cullingSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::ShadowSplitData::*)()>(
    &::UnityEngine::Rendering::ShadowSplitData::get_cullingSphere)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68f4634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(),
                                                                               "get_cullingSphere", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.set_shadowCascadeBlendCullingFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ShadowSplitData::*)(float_t)>(
    &::UnityEngine::Rendering::ShadowSplitData::set_shadowCascadeBlendCullingFactor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x68f4078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(), "set_shadowCascadeBlendCullingFactor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.GetCullingPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Plane (::UnityEngine::Rendering::ShadowSplitData::*)(int32_t)>(
    &::UnityEngine::Rendering::ShadowSplitData::GetCullingPlane)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x68f4640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(), "GetCullingPlane",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ShadowSplitData::*)(::UnityEngine::Rendering::ShadowSplitData)>(
    &::UnityEngine::Rendering::ShadowSplitData::Equals)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x68f42bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShadowSplitData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ShadowSplitData::*)(::System::Object*)>(
    &::UnityEngine::Rendering::ShadowSplitData::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x68f4788;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowSplitData.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ShadowSplitData::*)()>(&::UnityEngine::Rendering::ShadowSplitData::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68f45b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(), 2));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ShadowSplitData::setStaticF_maximumCullingPlaneCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maximumCullingPlaneCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ShadowSplitData::getStaticF_maximumCullingPlaneCount() {
  return ::cordl_internals::getStaticField<int32_t, "maximumCullingPlaneCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get>();
}
inline int32_t UnityEngine::Rendering::ShadowSplitData::get_cullingPlaneCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(),
                                                                             "get_cullingPlaneCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::ShadowSplitData::get_cullingSphere() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(),
                                                                             "get_cullingSphere", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ShadowSplitData::set_shadowCascadeBlendCullingFactor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(), "set_shadowCascadeBlendCullingFactor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Plane UnityEngine::Rendering::ShadowSplitData::GetCullingPlane(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(), "GetCullingPlane",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane, false>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::ShadowSplitData::Equals(::UnityEngine::Rendering::ShadowSplitData other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShadowSplitData>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::ShadowSplitData::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::ShadowSplitData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShadowSplitData>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>"
constexpr UnityEngine::Rendering::ShadowSplitData::operator ::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>* UnityEngine::Rendering::ShadowSplitData::i___System__IEquatable_1___UnityEngine__Rendering__ShadowSplitData_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
