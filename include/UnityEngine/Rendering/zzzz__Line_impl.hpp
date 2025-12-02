#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Line.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Line_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Line.LineOfPlaneIntersectingPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Line (*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4)>(
    &::UnityEngine::Rendering::Line::LineOfPlaneIntersectingPlane)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65f0958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Line>::get(), "LineOfPlaneIntersectingPlane", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Line.PlaneContainingLineAndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (*)(::UnityEngine::Rendering::Line, ::Unity::Mathematics::float3)>(
    &::UnityEngine::Rendering::Line::PlaneContainingLineAndPoint)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65f09b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Line>::get(), "PlaneContainingLineAndPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Line>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Line.PlaneContainingLineWithNormalPerpendicularToVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (*)(::UnityEngine::Rendering::Line, ::Unity::Mathematics::float3)>(
    &::UnityEngine::Rendering::Line::PlaneContainingLineWithNormalPerpendicularToVector)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65f0a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Line>::get(), "PlaneContainingLineWithNormalPerpendicularToVector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Line>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Line UnityEngine::Rendering::Line::LineOfPlaneIntersectingPlane(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Line>::get(), "LineOfPlaneIntersectingPlane", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Line, false>(nullptr, ___internal_method, a, b);
}
inline ::Unity::Mathematics::float4 UnityEngine::Rendering::Line::PlaneContainingLineAndPoint(::UnityEngine::Rendering::Line a, ::Unity::Mathematics::float3 b) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Line>::get(), "PlaneContainingLineAndPoint", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Line>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(nullptr, ___internal_method, a, b);
}
inline ::Unity::Mathematics::float4 UnityEngine::Rendering::Line::PlaneContainingLineWithNormalPerpendicularToVector(::UnityEngine::Rendering::Line a, ::Unity::Mathematics::float3 b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Line>::get(), "PlaneContainingLineWithNormalPerpendicularToVector", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Line>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "m", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "t", ty: "::Unity::Mathematics::float3", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Line::Line(::Unity::Mathematics::float3 m, ::Unity::Mathematics::float3 t) noexcept {
  this->m = m;
  this->t = t;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Line::Line() {}
