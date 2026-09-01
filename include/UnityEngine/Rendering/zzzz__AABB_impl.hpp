#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\AABB.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AABB.get_min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Rendering::AABB::*)()>(&::UnityEngine::Rendering::AABB::get_min)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x680a040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABB>(), { "get_min", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AABB.get_max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Rendering::AABB::*)()>(&::UnityEngine::Rendering::AABB::get_max)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x680a060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABB>(), { "get_max", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AABB.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::AABB::*)()>(&::UnityEngine::Rendering::AABB::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x680a080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABB>(), { ::i2c::class_of<::UnityEngine::Rendering::AABB>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AABB.RotateExtents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3,
                                                                                        ::Unity::Mathematics::float3)>(&::UnityEngine::Rendering::AABB::RotateExtents)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x680a158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABB>(), { "RotateExtents",
                                                                                              {},
                                                                                              { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(),
                                                                                                ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AABB.Transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AABB (*)(::Unity::Mathematics::float4x4, ::UnityEngine::Rendering::AABB)>(
    &::UnityEngine::Rendering::AABB::Transform)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x680a1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABB>(),
                                                             { "Transform", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::UnityEngine::Rendering::AABB>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::float3 UnityEngine::Rendering::AABB::get_min() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABB>(), { "get_min", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 UnityEngine::Rendering::AABB::get_max() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABB>(), { "get_max", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::AABB::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::AABB>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 UnityEngine::Rendering::AABB::RotateExtents(::Unity::Mathematics::float3 extents, ::Unity::Mathematics::float3 m0, ::Unity::Mathematics::float3 m1,
                                                                                ::Unity::Mathematics::float3 m2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABB>(), { "RotateExtents",
                                                                                            {},
                                                                                            { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(),
                                                                                              ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, extents, m0, m1, m2);
}
inline ::UnityEngine::Rendering::AABB UnityEngine::Rendering::AABB::Transform(::Unity::Mathematics::float4x4 transform, ::UnityEngine::Rendering::AABB localBounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABB>(),
                                                           { "Transform", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::UnityEngine::Rendering::AABB>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AABB>(nullptr, ___internal_method, transform, localBounds);
}
// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "extents", ty: "::Unity::Mathematics::float3", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::AABB::AABB(::Unity::Mathematics::float3 center, ::Unity::Mathematics::float3 extents) noexcept {
  this->center = center;
  this->extents = extents;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AABB::AABB() {}
