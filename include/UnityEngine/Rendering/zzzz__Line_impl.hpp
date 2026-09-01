#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Line.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Line_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Line.LineOfPlaneIntersectingPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Line (*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4)>(
    &::UnityEngine::Rendering::Line::LineOfPlaneIntersectingPlane)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x680f64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Line>(),
                                                { "LineOfPlaneIntersectingPlane", {}, { ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Line.PlaneContainingLineAndPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::UnityEngine::Rendering::Line, ::Unity::Mathematics::float3)>(
    &::UnityEngine::Rendering::Line::PlaneContainingLineAndPoint)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x680f6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Line>(),
                                                { "PlaneContainingLineAndPoint", {}, { ::i2c::type_of<::UnityEngine::Rendering::Line>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Line.PlaneContainingLineWithNormalPerpendicularToVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::UnityEngine::Rendering::Line, ::Unity::Mathematics::float3)>(
    &::UnityEngine::Rendering::Line::PlaneContainingLineWithNormalPerpendicularToVector)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x680f708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Line>(),
                            { "PlaneContainingLineWithNormalPerpendicularToVector", {}, { ::i2c::type_of<::UnityEngine::Rendering::Line>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Line UnityEngine::Rendering::Line::LineOfPlaneIntersectingPlane(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Line>(),
                                              { "LineOfPlaneIntersectingPlane", {}, { ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Line>(nullptr, ___internal_method, a, b);
}
inline ::Unity::Mathematics::float4 UnityEngine::Rendering::Line::PlaneContainingLineAndPoint(::UnityEngine::Rendering::Line a, ::Unity::Mathematics::float3 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Line>(),
                                              { "PlaneContainingLineAndPoint", {}, { ::i2c::type_of<::UnityEngine::Rendering::Line>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, a, b);
}
inline ::Unity::Mathematics::float4 UnityEngine::Rendering::Line::PlaneContainingLineWithNormalPerpendicularToVector(::UnityEngine::Rendering::Line a, ::Unity::Mathematics::float3 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Line>(),
                          { "PlaneContainingLineWithNormalPerpendicularToVector", {}, { ::i2c::type_of<::UnityEngine::Rendering::Line>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "m", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "t", ty: "::Unity::Mathematics::float3", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Line::Line(::Unity::Mathematics::float3 m, ::Unity::Mathematics::float3 t) noexcept {
  this->m = m;
  this->t = t;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Line::Line() {}
