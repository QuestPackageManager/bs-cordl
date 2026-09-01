#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\MeshHandle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshHandle.get_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::ProBuilder::MeshHandle::*)()>(&::UnityEngine::ProBuilder::MeshHandle::get_mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c8578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshHandle*>(), { "get_mesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshHandle::*)(::UnityEngine::Transform*, ::UnityEngine::Mesh*)>(
    &::UnityEngine::ProBuilder::MeshHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c8580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshHandle*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshHandle.DrawMeshNow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshHandle::*)(int32_t)>(&::UnityEngine::ProBuilder::MeshHandle::DrawMeshNow)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x66c8588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshHandle*>(), { "DrawMeshNow", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::ProBuilder::MeshHandle::__cordl_internal_get_m_Transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::ProBuilder::MeshHandle::__cordl_internal_get_m_Transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Transform;
}
constexpr void UnityEngine::ProBuilder::MeshHandle::__cordl_internal_set_m_Transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Transform = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::ProBuilder::MeshHandle::__cordl_internal_get_m_Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::ProBuilder::MeshHandle::__cordl_internal_get_m_Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr void UnityEngine::ProBuilder::MeshHandle::__cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Mesh = value;
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::ProBuilder::MeshHandle::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshHandle*>(), { "get_mesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::MeshHandle::_ctor(::UnityEngine::Transform* transform, ::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshHandle*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, mesh);
}
inline void UnityEngine::ProBuilder::MeshHandle::DrawMeshNow(int32_t submeshIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshHandle*>(), { "DrawMeshNow", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submeshIndex);
}
inline ::UnityEngine::ProBuilder::MeshHandle* UnityEngine::ProBuilder::MeshHandle::New_ctor(::UnityEngine::Transform* transform, ::UnityEngine::Mesh* mesh) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshHandle*>(transform, mesh));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshHandle::MeshHandle() {}
