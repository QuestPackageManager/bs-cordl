#pragma once
// IWYU pragma private; include "Unity/Mathematics/Geometry/Math.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/Geometry/zzzz__Math_def.hpp"
#include "Unity/Mathematics/Geometry/zzzz__MinMaxAABB_def.hpp"
#include "Unity/Mathematics/zzzz__RigidTransform_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Math.Transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::Geometry::MinMaxAABB (*)(::Unity::Mathematics::RigidTransform, ::Unity::Mathematics::Geometry::MinMaxAABB)>(
    &::Unity::Mathematics::Geometry::Math::Transform)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x6617da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Math*>(),
                                                { "Transform", {}, { ::i2c::type_of<::Unity::Mathematics::RigidTransform>(), ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Math.Transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::Geometry::MinMaxAABB (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::Geometry::MinMaxAABB)>(
    &::Unity::Mathematics::Geometry::Math::Transform)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x661807c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Math*>(),
                                                             { "Transform", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Math.Transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::Geometry::MinMaxAABB (*)(::Unity::Mathematics::float3x3, ::Unity::Mathematics::Geometry::MinMaxAABB)>(
    &::Unity::Mathematics::Geometry::Math::Transform)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6618220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Math*>(),
                                                             { "Transform", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::Geometry::MinMaxAABB Unity::Mathematics::Geometry::Math::Transform(::Unity::Mathematics::RigidTransform transform, ::Unity::Mathematics::Geometry::MinMaxAABB aabb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Math*>(),
                                              { "Transform", {}, { ::i2c::type_of<::Unity::Mathematics::RigidTransform>(), ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Geometry::MinMaxAABB>(nullptr, ___internal_method, transform, aabb);
}
inline ::Unity::Mathematics::Geometry::MinMaxAABB Unity::Mathematics::Geometry::Math::Transform(::Unity::Mathematics::float4x4 transform, ::Unity::Mathematics::Geometry::MinMaxAABB aabb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Math*>(),
                                                           { "Transform", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Geometry::MinMaxAABB>(nullptr, ___internal_method, transform, aabb);
}
inline ::Unity::Mathematics::Geometry::MinMaxAABB Unity::Mathematics::Geometry::Math::Transform(::Unity::Mathematics::float3x3 transform, ::Unity::Mathematics::Geometry::MinMaxAABB aabb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Math*>(),
                                                           { "Transform", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Geometry::MinMaxAABB>(nullptr, ___internal_method, transform, aabb);
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::Geometry::Math::Math() {}
