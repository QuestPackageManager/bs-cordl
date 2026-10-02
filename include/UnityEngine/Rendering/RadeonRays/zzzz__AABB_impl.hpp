#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/AABB.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__AABB_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::AABB._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::AABB::*)()>(&::UnityEngine::Rendering::RadeonRays::AABB::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6dfaa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::AABB*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::AABB._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::AABB::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::UnityEngine::Rendering::RadeonRays::AABB::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6dfaa7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::AABB*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::AABB.Encapsulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::AABB::*)(::UnityEngine::Rendering::RadeonRays::AABB*)>(
    &::UnityEngine::Rendering::RadeonRays::AABB::Encapsulate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6dfaa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::AABB*>(), { "Encapsulate", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::AABB*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::AABB.Encapsulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::AABB::*)(::Unity::Mathematics::float3)>(&::UnityEngine::Rendering::RadeonRays::AABB::Encapsulate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6dfab24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::AABB*>(), { "Encapsulate", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::AABB.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RadeonRays::AABB::*)(::UnityEngine::Rendering::RadeonRays::AABB*)>(
    &::UnityEngine::Rendering::RadeonRays::AABB::Contains)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6dfaba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::AABB*>(), { "Contains", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::AABB*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::AABB.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RadeonRays::AABB::*)()>(&::UnityEngine::Rendering::RadeonRays::AABB::IsValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6dfac1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::AABB*>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Unity::Mathematics::float3& UnityEngine::Rendering::RadeonRays::AABB::__cordl_internal_get_Min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Min;
}
constexpr ::Unity::Mathematics::float3 const& UnityEngine::Rendering::RadeonRays::AABB::__cordl_internal_get_Min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Min;
}
constexpr void UnityEngine::Rendering::RadeonRays::AABB::__cordl_internal_set_Min(::Unity::Mathematics::float3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Min = value;
}
constexpr ::Unity::Mathematics::float3& UnityEngine::Rendering::RadeonRays::AABB::__cordl_internal_get_Max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Max;
}
constexpr ::Unity::Mathematics::float3 const& UnityEngine::Rendering::RadeonRays::AABB::__cordl_internal_get_Max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Max;
}
constexpr void UnityEngine::Rendering::RadeonRays::AABB::__cordl_internal_set_Max(::Unity::Mathematics::float3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Max = value;
}
inline void UnityEngine::Rendering::RadeonRays::AABB::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::AABB*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RadeonRays::AABB::_ctor(::Unity::Mathematics::float3 min, ::Unity::Mathematics::float3 max) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::AABB*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max);
}
inline void UnityEngine::Rendering::RadeonRays::AABB::Encapsulate(::UnityEngine::Rendering::RadeonRays::AABB* aabb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::AABB*>(), { "Encapsulate", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::AABB*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aabb);
}
inline void UnityEngine::Rendering::RadeonRays::AABB::Encapsulate(::Unity::Mathematics::float3 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::AABB*>(), { "Encapsulate", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point);
}
inline bool UnityEngine::Rendering::RadeonRays::AABB::Contains(::UnityEngine::Rendering::RadeonRays::AABB* rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::AABB*>(), { "Contains", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::AABB*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rhs);
}
inline bool UnityEngine::Rendering::RadeonRays::AABB::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::AABB*>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RadeonRays::AABB* UnityEngine::Rendering::RadeonRays::AABB::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::AABB*>());
}
inline ::UnityEngine::Rendering::RadeonRays::AABB* UnityEngine::Rendering::RadeonRays::AABB::New_ctor(::Unity::Mathematics::float3 min, ::Unity::Mathematics::float3 max) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::AABB*>(min, max));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::AABB::AABB() {}
