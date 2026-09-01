#pragma once
// IWYU pragma private; include "UnityEngine\Experimental\Rendering\XROcclusionMesh.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XROcclusionMesh_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XROcclusionMesh._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XROcclusionMesh::*)(::UnityEngine::Experimental::Rendering::XRPass*)>(
    &::UnityEngine::Experimental::Rendering::XROcclusionMesh::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67489e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XROcclusionMesh.SetMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XROcclusionMesh::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Experimental::Rendering::XROcclusionMesh::SetMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67489ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(), { "SetMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XROcclusionMesh.get_hasValidOcclusionMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XROcclusionMesh::*)()>(
    &::UnityEngine::Experimental::Rendering::XROcclusionMesh::get_hasValidOcclusionMesh)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x67489f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(), { "get_hasValidOcclusionMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XROcclusionMesh.RenderOcclusionMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XROcclusionMesh::*)(::UnityEngine::Rendering::CommandBuffer*, float_t, bool)>(
    &::UnityEngine::Experimental::Rendering::XROcclusionMesh::RenderOcclusionMesh)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x6748bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(),
                                                { "RenderOcclusionMesh", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XROcclusionMesh.UpdateCombinedMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XROcclusionMesh::*)()>(
    &::UnityEngine::Experimental::Rendering::XROcclusionMesh::UpdateCombinedMesh)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6749278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(), { "UpdateCombinedMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XROcclusionMesh.IsOcclusionMeshSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XROcclusionMesh::*)()>(
    &::UnityEngine::Experimental::Rendering::XROcclusionMesh::IsOcclusionMeshSupported)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6748aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(), { "IsOcclusionMeshSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XROcclusionMesh.TryGetOcclusionMeshCombinedHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XROcclusionMesh::*)(::by_ref<int32_t>)>(
    &::UnityEngine::Experimental::Rendering::XROcclusionMesh::TryGetOcclusionMeshCombinedHashCode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x674934c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(),
                                                                                           { "TryGetOcclusionMeshCombinedHashCode", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XROcclusionMesh.CreateOcclusionMeshCombined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XROcclusionMesh::*)()>(
    &::UnityEngine::Experimental::Rendering::XROcclusionMesh::CreateOcclusionMeshCombined)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x6749444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(), { "CreateOcclusionMeshCombined", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& UnityEngine::Experimental::Rendering::XROcclusionMesh::__cordl_internal_get_m_Pass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pass;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& UnityEngine::Experimental::Rendering::XROcclusionMesh::__cordl_internal_get_m_Pass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pass;
}
constexpr void UnityEngine::Experimental::Rendering::XROcclusionMesh::__cordl_internal_set_m_Pass(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Pass = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Experimental::Rendering::XROcclusionMesh::__cordl_internal_get_m_CombinedMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinedMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Experimental::Rendering::XROcclusionMesh::__cordl_internal_get_m_CombinedMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinedMesh;
}
constexpr void UnityEngine::Experimental::Rendering::XROcclusionMesh::__cordl_internal_set_m_CombinedMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CombinedMesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Experimental::Rendering::XROcclusionMesh::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Experimental::Rendering::XROcclusionMesh::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::Experimental::Rendering::XROcclusionMesh::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::XROcclusionMesh::__cordl_internal_get_m_CombinedMeshHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinedMeshHashCode;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::XROcclusionMesh::__cordl_internal_get_m_CombinedMeshHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinedMeshHashCode;
}
constexpr void UnityEngine::Experimental::Rendering::XROcclusionMesh::__cordl_internal_set_m_CombinedMeshHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CombinedMeshHashCode = value;
}
inline void UnityEngine::Experimental::Rendering::XROcclusionMesh::setStaticF_k_OcclusionMeshProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "k_OcclusionMeshProfilingSampler", ::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Experimental::Rendering::XROcclusionMesh::getStaticF_k_OcclusionMeshProfilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "k_OcclusionMeshProfilingSampler", ::UnityEngine::Experimental::Rendering::XROcclusionMesh*>();
}
inline void UnityEngine::Experimental::Rendering::XROcclusionMesh::_ctor(::UnityEngine::Experimental::Rendering::XRPass* xrPass) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrPass);
}
inline void UnityEngine::Experimental::Rendering::XROcclusionMesh::SetMaterial(::UnityEngine::Material* mat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(), { "SetMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat);
}
inline bool UnityEngine::Experimental::Rendering::XROcclusionMesh::get_hasValidOcclusionMesh() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(), { "get_hasValidOcclusionMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XROcclusionMesh::RenderOcclusionMesh(::UnityEngine::Rendering::CommandBuffer* cmd, float_t occlusionMeshScale, bool yFlip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(),
                                              { "RenderOcclusionMesh", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, occlusionMeshScale, yFlip);
}
inline void UnityEngine::Experimental::Rendering::XROcclusionMesh::UpdateCombinedMesh() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(), { "UpdateCombinedMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XROcclusionMesh::IsOcclusionMeshSupported() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(), { "IsOcclusionMeshSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XROcclusionMesh::TryGetOcclusionMeshCombinedHashCode(::by_ref<int32_t> hashCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(),
                                                                                         { "TryGetOcclusionMeshCombinedHashCode", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode);
}
inline void UnityEngine::Experimental::Rendering::XROcclusionMesh::CreateOcclusionMeshCombined() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(), { "CreateOcclusionMeshCombined", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XROcclusionMesh* UnityEngine::Experimental::Rendering::XROcclusionMesh::New_ctor(::UnityEngine::Experimental::Rendering::XRPass* xrPass) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Experimental::Rendering::XROcclusionMesh*>(xrPass));
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XROcclusionMesh::XROcclusionMesh() {}
