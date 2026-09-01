#pragma once
// IWYU pragma private; include "GlobalNamespace\SliderMeshConstructor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMeshConstructor_def.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructor.get_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::GlobalNamespace::SliderMeshConstructor::*)()>(&::GlobalNamespace::SliderMeshConstructor::get_mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597bb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), { "get_mesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructor.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderMeshConstructor::*)()>(&::GlobalNamespace::SliderMeshConstructor::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x597bb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructor.CreateMeshIfNonExisting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderMeshConstructor::*)()>(&::GlobalNamespace::SliderMeshConstructor::CreateMeshIfNonExisting)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x597bb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), { "CreateMeshIfNonExisting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructor.CreateSliderMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderMeshConstructor::*)(::GlobalNamespace::VertexPath*, float_t)>(
    &::GlobalNamespace::SliderMeshConstructor::CreateSliderMesh)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x597bc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(),
                                                             { "CreateSliderMesh", {}, { ::i2c::type_of<::GlobalNamespace::VertexPath*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructor.CreateSliderMeshInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderMeshConstructor::*)(::GlobalNamespace::VertexPath*, float_t, ::by_ref<::UnityEngine::Bounds>)>(
    &::GlobalNamespace::SliderMeshConstructor::CreateSliderMeshInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), { ::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructor.GetVertexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SliderMeshConstructor::*)(::GlobalNamespace::VertexPath*)>(
    &::GlobalNamespace::SliderMeshConstructor::GetVertexCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), { ::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructor.GetTrianglesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SliderMeshConstructor::*)(::GlobalNamespace::VertexPath*)>(
    &::GlobalNamespace::SliderMeshConstructor::GetTrianglesCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), { ::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderMeshConstructor::*)()>(&::GlobalNamespace::SliderMeshConstructor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597be30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::SliderMeshConstructor::__cordl_internal_get__meshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::SliderMeshConstructor::__cordl_internal_get__meshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshFilter;
}
constexpr void GlobalNamespace::SliderMeshConstructor::__cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshFilter = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::SliderMeshConstructor::__cordl_internal_get_reusableVerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reusableVerts;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::SliderMeshConstructor::__cordl_internal_get_reusableVerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reusableVerts;
}
constexpr void GlobalNamespace::SliderMeshConstructor::__cordl_internal_set_reusableVerts(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reusableVerts = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::SliderMeshConstructor::__cordl_internal_get_reusableUvs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reusableUvs;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::SliderMeshConstructor::__cordl_internal_get_reusableUvs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reusableUvs;
}
constexpr void GlobalNamespace::SliderMeshConstructor::__cordl_internal_set_reusableUvs(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reusableUvs = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::SliderMeshConstructor::__cordl_internal_get_reusableNormals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reusableNormals;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::SliderMeshConstructor::__cordl_internal_get_reusableNormals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reusableNormals;
}
constexpr void GlobalNamespace::SliderMeshConstructor::__cordl_internal_set_reusableNormals(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reusableNormals = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SliderMeshConstructor::__cordl_internal_get_reusableTriangles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reusableTriangles;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SliderMeshConstructor::__cordl_internal_get_reusableTriangles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reusableTriangles;
}
constexpr void GlobalNamespace::SliderMeshConstructor::__cordl_internal_set_reusableTriangles(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reusableTriangles = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::SliderMeshConstructor::__cordl_internal_get__mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::SliderMeshConstructor::__cordl_internal_get__mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr void GlobalNamespace::SliderMeshConstructor::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mesh = value;
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::SliderMeshConstructor::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), { "get_mesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void GlobalNamespace::SliderMeshConstructor::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderMeshConstructor::CreateMeshIfNonExisting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), { "CreateMeshIfNonExisting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderMeshConstructor::CreateSliderMesh(::GlobalNamespace::VertexPath* path, float_t zDistanceBetweenNotes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(),
                                                                                         { "CreateSliderMesh", {}, { ::i2c::type_of<::GlobalNamespace::VertexPath*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, zDistanceBetweenNotes);
}
inline void GlobalNamespace::SliderMeshConstructor::CreateSliderMeshInternal(::GlobalNamespace::VertexPath* path, float_t zDistanceBetweenNotes, ::by_ref<::UnityEngine::Bounds> bounds) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, zDistanceBetweenNotes, bounds);
}
inline int32_t GlobalNamespace::SliderMeshConstructor::GetVertexCount(::GlobalNamespace::VertexPath* path) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, path);
}
inline int32_t GlobalNamespace::SliderMeshConstructor::GetTrianglesCount(::GlobalNamespace::VertexPath* path) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, path);
}
inline void GlobalNamespace::SliderMeshConstructor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshConstructor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderMeshConstructor* GlobalNamespace::SliderMeshConstructor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderMeshConstructor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderMeshConstructor::SliderMeshConstructor() {}
