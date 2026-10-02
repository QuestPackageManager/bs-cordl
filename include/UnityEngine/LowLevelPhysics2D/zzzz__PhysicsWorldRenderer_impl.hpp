#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsWorldRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorldRenderer_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorldRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsAABB_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorldRenderer_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer.GetMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::*)()>(
    &::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::GetMesh)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x6fdb428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*>(), { "GetMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::*)()>(
    &::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::Dispose)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6fdb30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>, float_t, float_t, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane,
    int32_t)>(&::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::Draw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::*)()>(
    &::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6fdb7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_Disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Disposed;
}
constexpr bool const& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_Disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Disposed;
}
constexpr void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_set_m_Disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Disposed = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Mesh = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_GraphicsBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicsBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_GraphicsBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicsBuffer;
}
constexpr void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_set_m_GraphicsBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GraphicsBuffer = value;
}
constexpr ::ArrayW<::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs>& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_CommandData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandData;
}
constexpr ::ArrayW<::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs> const&
UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_CommandData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandData;
}
constexpr void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_set_m_CommandData(::ArrayW<::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CommandData = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_ElementBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_ElementBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementBuffer;
}
constexpr void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_set_m_ElementBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElementBuffer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_ShaderMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_ShaderMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderMaterial;
}
constexpr void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_set_m_ShaderMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderMaterial = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_ShaderMaterialPropertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderMaterialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_ShaderMaterialPropertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderMaterialPropertyBlock;
}
constexpr void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_set_m_ShaderMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderMaterialPropertyBlock = value;
}
constexpr ::UnityEngine::Bounds& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_CullingBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingBounds;
}
constexpr ::UnityEngine::Bounds const& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_CullingBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingBounds;
}
constexpr void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_set_m_CullingBounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CullingBounds = value;
}
constexpr int32_t& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_ElementBufferShaderProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementBufferShaderProperty;
}
constexpr int32_t const& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_ElementBufferShaderProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementBufferShaderProperty;
}
constexpr void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_set_m_ElementBufferShaderProperty(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElementBufferShaderProperty = value;
}
constexpr int32_t& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_TransformPlaneShaderProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformPlaneShaderProperty;
}
constexpr int32_t const& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_TransformPlaneShaderProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformPlaneShaderProperty;
}
constexpr void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_set_m_TransformPlaneShaderProperty(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransformPlaneShaderProperty = value;
}
constexpr int32_t& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_ThicknessShaderProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThicknessShaderProperty;
}
constexpr int32_t const& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_ThicknessShaderProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThicknessShaderProperty;
}
constexpr void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_set_m_ThicknessShaderProperty(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThicknessShaderProperty = value;
}
constexpr int32_t& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_FillAlphaShaderProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillAlphaShaderProperty;
}
constexpr int32_t const& UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_get_m_FillAlphaShaderProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillAlphaShaderProperty;
}
constexpr void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::__cordl_internal_set_m_FillAlphaShaderProperty(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FillAlphaShaderProperty = value;
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::GetMesh() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*>(), { "GetMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer,
                                                                                              ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults, float_t thickness,
                                                                                              float_t fillAlpha, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane,
                                                                                              int32_t drawCapacity) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererCommandBuffer, drawResults, thickness, fillAlpha, transformPlane, drawCapacity);
}
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer* UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer::DrawerGroup_PhysicsWorldRenderer_BaseDrawer() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer::*)()>(
    &::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6fdaf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>, float_t, float_t, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane,
    int32_t)>(&::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer::Draw)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6fdb9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer*>(),
                                                            { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer*>(), 5 }));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer::Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer,
                                                                                                         ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults,
                                                                                                         float_t thickness, float_t fillAlpha,
                                                                                                         ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane,
                                                                                                         int32_t drawCapacity) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererCommandBuffer, drawResults, thickness, fillAlpha, transformPlane, drawCapacity);
}
inline ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer* UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer::*)()>(
    &::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6fdafec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>, float_t, float_t, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane,
    int32_t)>(&::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer::Draw)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6fdbbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer*>(),
                                                            { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer*>(), 5 }));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer::Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer,
                                                                                                        ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults,
                                                                                                        float_t thickness, float_t fillAlpha,
                                                                                                        ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane,
                                                                                                        int32_t drawCapacity) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererCommandBuffer, drawResults, thickness, fillAlpha, transformPlane, drawCapacity);
}
inline ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer* UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer::*)()>(
    &::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6fdb0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>, float_t, float_t, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane,
    int32_t)>(&::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer::Draw)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6fdbdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer*>(),
                                                            { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer*>(), 5 }));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer::Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer,
                                                                                                         ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults,
                                                                                                         float_t thickness, float_t fillAlpha,
                                                                                                         ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane,
                                                                                                         int32_t drawCapacity) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererCommandBuffer, drawResults, thickness, fillAlpha, transformPlane, drawCapacity);
}
inline ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer* UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer::*)()>(
    &::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6fdb17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>, float_t, float_t, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane,
    int32_t)>(&::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer::Draw)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6fdbfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer*>(), 5 }));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer::Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer,
                                                                                              ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults, float_t thickness,
                                                                                              float_t fillAlpha, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane,
                                                                                              int32_t drawCapacity) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererCommandBuffer, drawResults, thickness, fillAlpha, transformPlane, drawCapacity);
}
inline ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer* UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer::DrawerGroup_PhysicsWorldRenderer_LineDrawer() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer::*)()>(
    &::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6fdb244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>, float_t, float_t, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane,
    int32_t)>(&::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer::Draw)> {
  constexpr static std::size_t size = 0xa78;
  constexpr static std::size_t addrs = 0x6fdc1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer*>(), 5 }));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer::Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer,
                                                                                               ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults, float_t thickness,
                                                                                               float_t fillAlpha, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane,
                                                                                               int32_t drawCapacity) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererCommandBuffer, drawResults, thickness, fillAlpha, transformPlane, drawCapacity);
}
inline ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer* UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer::DrawerGroup_PhysicsWorldRenderer_PointDrawer() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup.get_isValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::get_isValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6fdaf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*>(), { "get_isValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6fdac6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>, float_t, float_t, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane,
    int32_t)>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::Draw)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6fdae74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*>(),
                            { "Draw",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6fda54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*>& UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::__cordl_internal_get_m_Drawers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Drawers;
}
constexpr ::ArrayW<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*> const&
UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::__cordl_internal_get_m_Drawers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Drawers;
}
constexpr void
UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::__cordl_internal_set_m_Drawers(::ArrayW<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Drawers = value;
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::get_isValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*>(), { "get_isValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer,
                                                                                   ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults, float_t thickness,
                                                                                   float_t fillAlpha, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane,
                                                                                   int32_t drawCapacity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*>(),
                          { "Draw",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererCommandBuffer, drawResults, thickness, fillAlpha, transformPlane, drawCapacity);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup* UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup::PhysicsWorldRenderer_DrawerGroup() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer.InitializeRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::InitializeRendering)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6fda120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(), { "InitializeRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer.ShutdownRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::ShutdownRendering)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6fda358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(), { "ShutdownRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer.GetCameraViewAABB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsAABB (*)(::UnityEngine::Camera*)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::GetCameraViewAABB)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fda5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(), { "GetCameraViewAABB", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer.IsCameraTypeValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::IsCameraTypeValid)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6fda650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(), { "IsCameraTypeValid", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer.BIRP_RenderAllWorlds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::BIRP_RenderAllWorlds)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6fda674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(), { "BIRP_RenderAllWorlds", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer.SRP_RenderAllWorlds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::SRP_RenderAllWorlds)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6fda8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(),
                            { "SRP_RenderAllWorlds",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer.SendDrawResultsToCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults,
                                                                ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane, float_t, float_t, int32_t)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::SendDrawResultsToCommandBuffer)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6fdaadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(),
                            { "SendDrawResultsToCommandBuffer",
                              {},
                              { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(),
                                ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::setStaticF_s_IsInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_IsInitialized", ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(std::forward<bool>(value));
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::getStaticF_s_IsInitialized() {
  return ::cordl_internals::getStaticField<bool, "s_IsInitialized", ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>();
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::setStaticF_s_UsingBIRP(bool value) {
  ::cordl_internals::setStaticField<bool, "s_UsingBIRP", ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(std::forward<bool>(value));
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::getStaticF_s_UsingBIRP() {
  return ::cordl_internals::getStaticField<bool, "s_UsingBIRP", ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>();
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::setStaticF_s_RendererCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::CommandBuffer*, "s_RendererCommandBuffer", ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(
      std::forward<::UnityEngine::Rendering::CommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::CommandBuffer* UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::getStaticF_s_RendererCommandBuffer() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::CommandBuffer*, "s_RendererCommandBuffer", ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>();
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::setStaticF_s_DrawerGroups(::ArrayW<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*>, "s_DrawerGroups", ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(
      std::forward<::ArrayW<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*>>(value));
}
inline ::ArrayW<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*> UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::getStaticF_s_DrawerGroups() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*>, "s_DrawerGroups", ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>();
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::InitializeRendering() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(), { "InitializeRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::ShutdownRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(), { "ShutdownRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsAABB UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::GetCameraViewAABB(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(), { "GetCameraViewAABB", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::IsCameraTypeValid(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(), { "IsCameraTypeValid", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::BIRP_RenderAllWorlds(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(), { "BIRP_RenderAllWorlds", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::SRP_RenderAllWorlds(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                      ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(),
                          { "SRP_RenderAllWorlds",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, cameras);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::SendDrawResultsToCommandBuffer(::UnityEngine::LowLevelPhysics2D::PhysicsWorld physicsWorld,
                                                                                                 ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults drawResults,
                                                                                                 ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane, float_t thickness,
                                                                                                 float_t fillAlpha, int32_t drawCapacity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*>(),
                          { "SendDrawResultsToCommandBuffer",
                            {},
                            { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(),
                              ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsWorld, drawResults, transformPlane, thickness, fillAlpha, drawCapacity);
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer::PhysicsWorldRenderer() {}
