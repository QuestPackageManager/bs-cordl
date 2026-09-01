#pragma once
// IWYU pragma private; include "GlobalNamespace\SliderMeshConstructorCrossedStrips.hpp"
#include "GlobalNamespace/zzzz__SliderMeshConstructor_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMeshConstructorCrossedStrips_def.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructorCrossedStrips.CreateSliderMeshInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(::GlobalNamespace::VertexPath*, float_t, ::by_ref<::UnityEngine::Bounds>)>(
    &::GlobalNamespace::SliderMeshConstructorCrossedStrips::CreateSliderMeshInternal)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x597be34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructorCrossedStrips.GetVertexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(::GlobalNamespace::VertexPath*)>(
    &::GlobalNamespace::SliderMeshConstructorCrossedStrips::GetVertexCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x597c264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructorCrossedStrips.GetTrianglesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(::GlobalNamespace::VertexPath*)>(
    &::GlobalNamespace::SliderMeshConstructorCrossedStrips::GetTrianglesCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x597c27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructorCrossedStrips._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderMeshConstructorCrossedStrips::*)()>(&::GlobalNamespace::SliderMeshConstructorCrossedStrips::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x597c29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& GlobalNamespace::SliderMeshConstructorCrossedStrips::__cordl_internal_get__triangleMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triangleMap;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SliderMeshConstructorCrossedStrips::__cordl_internal_get__triangleMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triangleMap;
}
constexpr void GlobalNamespace::SliderMeshConstructorCrossedStrips::__cordl_internal_set__triangleMap(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triangleMap = value;
}
inline void GlobalNamespace::SliderMeshConstructorCrossedStrips::CreateSliderMeshInternal(::GlobalNamespace::VertexPath* path, float_t zDistanceBetweenNotes, ::by_ref<::UnityEngine::Bounds> bounds) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, zDistanceBetweenNotes, bounds);
}
inline int32_t GlobalNamespace::SliderMeshConstructorCrossedStrips::GetVertexCount(::GlobalNamespace::VertexPath* path) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, path);
}
inline int32_t GlobalNamespace::SliderMeshConstructorCrossedStrips::GetTrianglesCount(::GlobalNamespace::VertexPath* path) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, path);
}
inline void GlobalNamespace::SliderMeshConstructorCrossedStrips::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderMeshConstructorCrossedStrips* GlobalNamespace::SliderMeshConstructorCrossedStrips::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderMeshConstructorCrossedStrips::SliderMeshConstructorCrossedStrips() {}
