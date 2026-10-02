#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRVisibleMesh.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRVisibleMesh_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRVisibleMesh._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRVisibleMesh::*)(::UnityEngine::Experimental::Rendering::XRPass*)>(
    &::UnityEngine::Experimental::Rendering::XRVisibleMesh::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b5e524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRVisibleMesh.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRVisibleMesh::*)()>(&::UnityEngine::Experimental::Rendering::XRVisibleMesh::Dispose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b5e8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRVisibleMesh.get_hasValidVisibleMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRVisibleMesh::*)()>(
    &::UnityEngine::Experimental::Rendering::XRVisibleMesh::get_hasValidVisibleMesh)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b5f254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(), { "get_hasValidVisibleMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRVisibleMesh.RenderVisibleMeshCustomMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRVisibleMesh::*)(::UnityEngine::Rendering::CommandBuffer*, float_t, ::UnityEngine::Material*,
                                                                                                                       ::UnityEngine::MaterialPropertyBlock*, int32_t, bool)>(
    &::UnityEngine::Experimental::Rendering::XRVisibleMesh::RenderVisibleMeshCustomMaterial)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6b5f3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(),
                                                             { "RenderVisibleMeshCustomMaterial",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                 ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRVisibleMesh.UpdateCombinedMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRVisibleMesh::*)()>(&::UnityEngine::Experimental::Rendering::XRVisibleMesh::UpdateCombinedMesh)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b5faa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(), { "UpdateCombinedMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRVisibleMesh.IsVisibleMeshSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRVisibleMesh::*)()>(
    &::UnityEngine::Experimental::Rendering::XRVisibleMesh::IsVisibleMeshSupported)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b61fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(), { "IsVisibleMeshSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRVisibleMesh.TryGetVisibleMeshCombinedHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRVisibleMesh::*)(::by_ref<int32_t>)>(
    &::UnityEngine::Experimental::Rendering::XRVisibleMesh::TryGetVisibleMeshCombinedHashCode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b62024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(),
                                                                                           { "TryGetVisibleMeshCombinedHashCode", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRVisibleMesh.CreateVisibleMeshCombined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRVisibleMesh::*)()>(
    &::UnityEngine::Experimental::Rendering::XRVisibleMesh::CreateVisibleMeshCombined)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x6b6211c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(), { "CreateVisibleMeshCombined", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& UnityEngine::Experimental::Rendering::XRVisibleMesh::__cordl_internal_get_m_Pass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pass;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& UnityEngine::Experimental::Rendering::XRVisibleMesh::__cordl_internal_get_m_Pass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pass;
}
constexpr void UnityEngine::Experimental::Rendering::XRVisibleMesh::__cordl_internal_set_m_Pass(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Pass = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Experimental::Rendering::XRVisibleMesh::__cordl_internal_get_m_CombinedMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinedMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Experimental::Rendering::XRVisibleMesh::__cordl_internal_get_m_CombinedMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinedMesh;
}
constexpr void UnityEngine::Experimental::Rendering::XRVisibleMesh::__cordl_internal_set_m_CombinedMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CombinedMesh = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::XRVisibleMesh::__cordl_internal_get_m_CombinedMeshHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinedMeshHashCode;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::XRVisibleMesh::__cordl_internal_get_m_CombinedMeshHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CombinedMeshHashCode;
}
constexpr void UnityEngine::Experimental::Rendering::XRVisibleMesh::__cordl_internal_set_m_CombinedMeshHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CombinedMeshHashCode = value;
}
inline void UnityEngine::Experimental::Rendering::XRVisibleMesh::setStaticF_k_VisibleMeshProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "k_VisibleMeshProfilingSampler", ::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Experimental::Rendering::XRVisibleMesh::getStaticF_k_VisibleMeshProfilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "k_VisibleMeshProfilingSampler", ::UnityEngine::Experimental::Rendering::XRVisibleMesh*>();
}
inline void UnityEngine::Experimental::Rendering::XRVisibleMesh::_ctor(::UnityEngine::Experimental::Rendering::XRPass* xrPass) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrPass);
}
inline void UnityEngine::Experimental::Rendering::XRVisibleMesh::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRVisibleMesh::get_hasValidVisibleMesh() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(), { "get_hasValidVisibleMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRVisibleMesh::RenderVisibleMeshCustomMaterial(::UnityEngine::Rendering::CommandBuffer* cmd, float_t occlusionMeshScale,
                                                                                                 ::UnityEngine::Material* material, ::UnityEngine::MaterialPropertyBlock* materialBlock,
                                                                                                 int32_t shaderPass, bool yFlip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(),
                                                           { "RenderVisibleMeshCustomMaterial",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                               ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, occlusionMeshScale, material, materialBlock, shaderPass, yFlip);
}
inline void UnityEngine::Experimental::Rendering::XRVisibleMesh::UpdateCombinedMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(), { "UpdateCombinedMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRVisibleMesh::IsVisibleMeshSupported() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(), { "IsVisibleMeshSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRVisibleMesh::TryGetVisibleMeshCombinedHashCode(::by_ref<int32_t> hashCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(),
                                                                                         { "TryGetVisibleMeshCombinedHashCode", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode);
}
inline void UnityEngine::Experimental::Rendering::XRVisibleMesh::CreateVisibleMeshCombined() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(), { "CreateVisibleMeshCombined", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRVisibleMesh* UnityEngine::Experimental::Rendering::XRVisibleMesh::New_ctor(::UnityEngine::Experimental::Rendering::XRPass* xrPass) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Experimental::Rendering::XRVisibleMesh*>(xrPass));
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRVisibleMesh::XRVisibleMesh() {}
