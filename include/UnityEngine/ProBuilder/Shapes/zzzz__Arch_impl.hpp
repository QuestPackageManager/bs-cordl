#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Shapes\Arch.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Arch_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Arch.CopyShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::Arch::*)(::UnityEngine::ProBuilder::Shapes::Shape*)>(
    &::UnityEngine::ProBuilder::Shapes::Arch::CopyShape)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6702298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::Arch*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Shapes::Arch*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Arch.GetFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::ProBuilder::Shapes::Arch::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(
    &::UnityEngine::ProBuilder::Shapes::Arch::GetFace)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6702338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::Arch*>(),
                                                             { "GetFace", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Arch.RebuildMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::ProBuilder::Shapes::Arch::*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::ProBuilder::Shapes::Arch::RebuildMesh)> {
  constexpr static std::size_t size = 0xc24;
  constexpr static std::size_t addrs = 0x6702400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::Arch*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Shapes::Arch*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Arch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::Arch::*)()>(&::UnityEngine::ProBuilder::Shapes::Arch::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6703024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::Arch*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_get_m_Thickness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Thickness;
}
constexpr float_t const& UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_get_m_Thickness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Thickness;
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_set_m_Thickness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Thickness = value;
}
constexpr int32_t& UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_get_m_NumberOfSides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumberOfSides;
}
constexpr int32_t const& UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_get_m_NumberOfSides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumberOfSides;
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_set_m_NumberOfSides(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NumberOfSides = value;
}
constexpr float_t& UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_get_m_ArchDegrees() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArchDegrees;
}
constexpr float_t const& UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_get_m_ArchDegrees() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArchDegrees;
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_set_m_ArchDegrees(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ArchDegrees = value;
}
constexpr bool& UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_get_m_EndCaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndCaps;
}
constexpr bool const& UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_get_m_EndCaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndCaps;
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_set_m_EndCaps(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EndCaps = value;
}
constexpr bool& UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_get_m_Smooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Smooth;
}
constexpr bool const& UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_get_m_Smooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Smooth;
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__cordl_internal_set_m_Smooth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Smooth = value;
}
inline void UnityEngine::ProBuilder::Shapes::Arch::CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Shapes::Arch*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shape);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::ProBuilder::Shapes::Arch::GetFace(::UnityEngine::Vector2 vertex1, ::UnityEngine::Vector2 vertex2, float_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::Arch*>(),
                                                           { "GetFace", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method, vertex1, vertex2, depth);
}
inline ::UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Arch::RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Shapes::Arch*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, mesh, size, rotation);
}
inline void UnityEngine::ProBuilder::Shapes::Arch::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::Arch*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Shapes::Arch* UnityEngine::ProBuilder::Shapes::Arch::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Shapes::Arch*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Shapes::Arch::Arch() {}
