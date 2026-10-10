#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolHandle_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeoPoolMeshChunk_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolDesc_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolEntryDesc_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolEntryInfo_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolHandle_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolSubmeshData_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndexFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttribute_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputIBBaseOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputIBBaseOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputIBBaseOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_InputIBBaseOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__DispatchIndexOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DispatchIndexOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__DispatchIndexOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_DispatchIndexOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputIBCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputIBCount", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputIBCount() {
  return ::cordl_internals::getStaticField<int32_t, "_InputIBCount", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__OutputIBOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OutputIBOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__OutputIBOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_OutputIBOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputFirstVertex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputFirstVertex", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputFirstVertex() {
  return ::cordl_internals::getStaticField<int32_t, "_InputFirstVertex", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputIndexBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputIndexBuffer", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputIndexBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_InputIndexBuffer", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__OutputIndexBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OutputIndexBuffer", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__OutputIndexBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_OutputIndexBuffer", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputVBCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputVBCount", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputVBCount() {
  return ::cordl_internals::getStaticField<int32_t, "_InputVBCount", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputBaseVertexOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputBaseVertexOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputBaseVertexOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_InputBaseVertexOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__DispatchVertexOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DispatchVertexOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__DispatchVertexOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_DispatchVertexOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__OutputVBSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OutputVBSize", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__OutputVBSize() {
  return ::cordl_internals::getStaticField<int32_t, "_OutputVBSize", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__OutputVBOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OutputVBOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__OutputVBOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_OutputVBOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputPosBufferStride(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputPosBufferStride", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputPosBufferStride() {
  return ::cordl_internals::getStaticField<int32_t, "_InputPosBufferStride", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputPosBufferOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputPosBufferOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputPosBufferOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_InputPosBufferOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputUv0BufferStride(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputUv0BufferStride", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputUv0BufferStride() {
  return ::cordl_internals::getStaticField<int32_t, "_InputUv0BufferStride", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputUv0BufferOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputUv0BufferOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputUv0BufferOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_InputUv0BufferOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputUv1BufferStride(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputUv1BufferStride", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputUv1BufferStride() {
  return ::cordl_internals::getStaticField<int32_t, "_InputUv1BufferStride", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputUv1BufferOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputUv1BufferOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputUv1BufferOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_InputUv1BufferOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputNormalBufferStride(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputNormalBufferStride", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputNormalBufferStride() {
  return ::cordl_internals::getStaticField<int32_t, "_InputNormalBufferStride", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__InputNormalBufferOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InputNormalBufferOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__InputNormalBufferOffset() {
  return ::cordl_internals::getStaticField<int32_t, "_InputNormalBufferOffset", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__PosBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_PosBuffer", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__PosBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_PosBuffer", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__Uv0Buffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Uv0Buffer", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__Uv0Buffer() {
  return ::cordl_internals::getStaticField<int32_t, "_Uv0Buffer", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__Uv1Buffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Uv1Buffer", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__Uv1Buffer() {
  return ::cordl_internals::getStaticField<int32_t, "_Uv1Buffer", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__NormalBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_NormalBuffer", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__NormalBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_NormalBuffer", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__OutputVB(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OutputVB", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__OutputVB() {
  return ::cordl_internals::getStaticField<int32_t, "_OutputVB", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::setStaticF__AttributesMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AttributesMask", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::getStaticF__AttributesMask() {
  return ::cordl_internals::getStaticField<int32_t, "_AttributesMask", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs::GeometryPool_GeoPoolShaderIDs() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk.EncodeGPUEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk::EncodeGPUEntry)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e05b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk>(), { "EncodeGPUEntry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk.get_Invalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk (*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk::get_Invalid)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e04954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk>(), { "get_Invalid", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk::EncodeGPUEntry() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk>(), { "EncodeGPUEntry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk::get_Invalid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk>(), { "get_Invalid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "vertexAlloc", ty: "::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "indexAlloc", ty: "::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk::GeometryPool_MeshChunk(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation vertexAlloc,
                                                                                                      ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation indexAlloc) noexcept {
  this->vertexAlloc = vertexAlloc;
  this->indexAlloc = indexAlloc;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk::GeometryPool_MeshChunk() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot::get_valid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e034a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot::setStaticF_Invalid(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot, "Invalid", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>(
      std::forward<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>(value));
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot, "Invalid", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>();
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot::get_valid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "refCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hash", ty: "uint32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "meshChunkTableAlloc", ty: "::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "meshChunks", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk>", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "hasGPUData", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot::GeometryPool_GeometrySlot(
    uint32_t refCount, uint32_t hash, ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation meshChunkTableAlloc,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk> meshChunks, bool hasGPUData) noexcept {
  this->refCount = refCount;
  this->hash = hash;
  this->meshChunkTableAlloc = meshChunkTableAlloc;
  this->meshChunks = meshChunks;
  this->hasGPUData = hasGPUData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot::GeometryPool_GeometrySlot() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot::get_valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e04d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot::setStaticF_Invalid(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot, "Invalid", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot>(
      std::forward<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot>(value));
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot, "Invalid",
                                           ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot>();
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot::get_valid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "refCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hash", ty: "uint32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "geoSlotHandle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot::GeometryPool_GeoPoolEntrySlot(uint32_t refCount, uint32_t hash, int32_t geoSlotHandle) noexcept {
  this->refCount = refCount;
  this->hash = hash;
  this->geoSlotHandle = geoSlotHandle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot::GeometryPool_GeoPoolEntrySlot() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo::get_valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e063ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo::get_valid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "buffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stride", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byteCount", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo::GeometryPool_VertexBufferAttribInfo(::UnityEngine::GraphicsBuffer* buffer, int32_t stride, int32_t offset,
                                                                                                                                int32_t byteCount) noexcept {
  this->buffer = buffer;
  this->stride = stride;
  this->offset = offset;
  this->byteCount = byteCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo::GeometryPool_VertexBufferAttribInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.GetVertexByteSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetVertexByteSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e029cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "GetVertexByteSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.GetIndexByteSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetIndexByteSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e02e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "GetIndexByteSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.GetMeshChunkTableEntryByteSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetMeshChunkTableEntryByteSize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e02e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "GetMeshChunkTableEntryByteSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.GetFormatByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(::UnityEngine::Rendering::VertexAttributeFormat)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetFormatByteCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e02f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                                                           { "GetFormatByteCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.DivUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::DivUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e02f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "DivUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.get_globalIndexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_globalIndexBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e02f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_globalIndexBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.get_globalVertexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_globalVertexBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e02f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_globalVertexBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.get_globalVertexBufferStrideBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_globalVertexBufferStrideBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e02d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_globalVertexBufferStrideBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.get_globalMeshChunkTableEntryBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_globalMeshChunkTableEntryBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e02f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_globalMeshChunkTableEntryBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.get_indicesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_indicesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e02f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_indicesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.get_verticesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_verticesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e02f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_verticesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.get_meshChunkTablesEntryCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_meshChunkTablesEntryCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e02f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_meshChunkTablesEntryCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc const>, ::UnityEngine::ComputeShader*, ::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::_ctor)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x6dff5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc const>>(),
                                                                                               ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.DisposeInputBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::DisposeInputBuffers)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e03264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "DisposeInputBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)()>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::Dispose)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x6e020a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.LoadKernels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::LoadKernels)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6e02f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "LoadKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.CalcVertexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::CalcVertexCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e03040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "CalcVertexCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.CalcIndexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::CalcIndexCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e03058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "CalcIndexCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.CalcMeshChunkTablesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::CalcMeshChunkTablesCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e03070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "CalcMeshChunkTablesCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.DeallocateGeometrySlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>)>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::DeallocateGeometrySlot)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6e03500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                { "DeallocateGeometrySlot", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.DeallocateGeometrySlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::DeallocateGeometrySlot)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6e0381c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "DeallocateGeometrySlot", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.AllocateGeo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(::UnityEngine::Mesh*, ::by_ref<int32_t>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::AllocateGeo)> {
  constexpr static std::size_t size = 0x8c0;
  constexpr static std::size_t addrs = 0x6e03950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                                                           { "AllocateGeo", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.DeallocateGeoPoolEntrySlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::DeallocateGeoPoolEntrySlot)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6e049e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                             { "DeallocateGeoPoolEntrySlot", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.DeallocateGeoPoolEntrySlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot>)>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::DeallocateGeoPoolEntrySlot)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e04b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                { "DeallocateGeoPoolEntrySlot", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.GetEntryInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle)>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetEntryInfo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e04bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                             { "GetEntryInfo", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.GetEntryGeomAllocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle)>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetEntryGeomAllocation)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e028fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                             { "GetEntryGeomAllocation", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.GetInstanceGeometryIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(::UnityEngine::Mesh*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetInstanceGeometryIndex)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e04d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                                                           { "GetInstanceGeometryIndex", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.UpdateGeoGpuState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::UnityEngine::Mesh*, ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle)>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::UpdateGeoGpuState)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x6e04df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                         { "UpdateGeoGpuState", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.FNVHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::FNVHash)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e05b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                                                           { "FNVHash", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.CalculateClusterHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData>)>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::CalculateClusterHash)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6e05ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
            { "CalculateClusterHash", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::UnityEngine::Mesh*)>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetHandle)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e04d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "GetHandle", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.FindSubmeshEntryInDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::by_ref<::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData> const>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::FindSubmeshEntryInDesc)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e05ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
            { "FindSubmeshEntryInDesc", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData> const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::UnityEngine::Mesh*, ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>)>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::Register)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e0283c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                         { "Register", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryDesc const>, ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::Register)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x6e05d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                                                           { "Register",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryDesc const>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.Unregister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::Unregister)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e01fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                             { "Unregister", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.SendGpuCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::SendGpuCommands)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e0202c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "SendGpuCommands", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.LoadIndexBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(::UnityEngine::Mesh*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::LoadIndexBuffer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e051c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "LoadIndexBuffer", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.LoadVertexAttribInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::UnityEngine::Mesh*, ::UnityEngine::Rendering::VertexAttribute, ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::LoadVertexAttribInfo)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6e052c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                             { "LoadVertexAttribInfo",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.AllocateCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::AllocateCommandBuffer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e05188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "AllocateCommandBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.AddIndexUpdateCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::IndexFormat, ::by_ref<::UnityEngine::GraphicsBuffer* const>,
    ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const>, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::AddIndexUpdateCommand)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6e058d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                { "AddIndexUpdateCommand",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer* const>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const>>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool.AddVertexUpdateCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const>,
    ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const>, ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const>,
    ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const>, ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const>,
    ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::AddVertexUpdateCommand)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x6e0543c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                            { "AddVertexUpdateCommand",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const>>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GlobalIndexBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalIndexBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GlobalIndexBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalIndexBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_GlobalIndexBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlobalIndexBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GlobalVertexBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalVertexBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GlobalVertexBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalVertexBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_GlobalVertexBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlobalVertexBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GlobalMeshChunkTableEntryBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalMeshChunkTableEntryBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GlobalMeshChunkTableEntryBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalMeshChunkTableEntryBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_GlobalMeshChunkTableEntryBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlobalMeshChunkTableEntryBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_DummyBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DummyBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_DummyBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DummyBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_DummyBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DummyBuffer = value;
}
constexpr int32_t& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_MaxVertCounts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxVertCounts;
}
constexpr int32_t const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_MaxVertCounts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxVertCounts;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_MaxVertCounts(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxVertCounts = value;
}
constexpr int32_t& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_MaxIndexCounts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxIndexCounts;
}
constexpr int32_t const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_MaxIndexCounts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxIndexCounts;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_MaxIndexCounts(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxIndexCounts = value;
}
constexpr int32_t& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_MaxMeshChunkTableEntriesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxMeshChunkTableEntriesCount;
}
constexpr int32_t const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_MaxMeshChunkTableEntriesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxMeshChunkTableEntriesCount;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_MaxMeshChunkTableEntriesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxMeshChunkTableEntriesCount = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_VertexAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexAllocator;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_VertexAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexAllocator;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_VertexAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertexAllocator = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_IndexAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexAllocator;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_IndexAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexAllocator;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_IndexAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndexAllocator = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_MeshChunkTableAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshChunkTableAllocator;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_MeshChunkTableAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshChunkTableAllocator;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_MeshChunkTableAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MeshChunkTableAllocator = value;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<uint32_t, int32_t>& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_MeshHashToGeoSlot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshHashToGeoSlot;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<uint32_t, int32_t> const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_MeshHashToGeoSlot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshHashToGeoSlot;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_MeshHashToGeoSlot(::Unity::Collections::NativeParallelHashMap_2<uint32_t, int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MeshHashToGeoSlot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>*&
UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GeoSlots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeoSlots;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>* const&
UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GeoSlots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeoSlots;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_GeoSlots(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GeoSlots = value;
}
constexpr ::Unity::Collections::NativeList_1<int32_t>& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_FreeGeoSlots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeGeoSlots;
}
constexpr ::Unity::Collections::NativeList_1<int32_t> const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_FreeGeoSlots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeGeoSlots;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_FreeGeoSlots(::Unity::Collections::NativeList_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FreeGeoSlots = value;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>&
UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GeoPoolEntryHashToSlot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeoPoolEntryHashToSlot;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> const&
UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GeoPoolEntryHashToSlot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeoPoolEntryHashToSlot;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_GeoPoolEntryHashToSlot(
    ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GeoPoolEntryHashToSlot = value;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot>&
UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GeoPoolEntrySlots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeoPoolEntrySlots;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot> const&
UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GeoPoolEntrySlots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeoPoolEntrySlots;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_GeoPoolEntrySlots(
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GeoPoolEntrySlots = value;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>&
UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_FreeGeoPoolEntrySlots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeGeoPoolEntrySlots;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> const&
UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_FreeGeoPoolEntrySlots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeGeoPoolEntrySlots;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_FreeGeoPoolEntrySlots(
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FreeGeoPoolEntrySlots = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>*& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_InputBufferReferences() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputBufferReferences;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_InputBufferReferences() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputBufferReferences;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_InputBufferReferences(::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputBufferReferences = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_CopyShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_CopyShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyShader;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_CopyShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyShader = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GeometryPoolKernelsCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeometryPoolKernelsCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_GeometryPoolKernelsCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeometryPoolKernelsCS;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_GeometryPoolKernelsCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GeometryPoolKernelsCS = value;
}
constexpr int32_t& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_KernelMainUpdateIndexBuffer16() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KernelMainUpdateIndexBuffer16;
}
constexpr int32_t const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_KernelMainUpdateIndexBuffer16() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KernelMainUpdateIndexBuffer16;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_KernelMainUpdateIndexBuffer16(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KernelMainUpdateIndexBuffer16 = value;
}
constexpr int32_t& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_KernelMainUpdateIndexBuffer32() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KernelMainUpdateIndexBuffer32;
}
constexpr int32_t const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_KernelMainUpdateIndexBuffer32() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KernelMainUpdateIndexBuffer32;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_KernelMainUpdateIndexBuffer32(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KernelMainUpdateIndexBuffer32 = value;
}
constexpr int32_t& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_KernelMainUpdateVertexBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KernelMainUpdateVertexBuffer;
}
constexpr int32_t const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_KernelMainUpdateVertexBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KernelMainUpdateVertexBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_KernelMainUpdateVertexBuffer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KernelMainUpdateVertexBuffer = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_CmdBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CmdBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_CmdBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CmdBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_CmdBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CmdBuffer = value;
}
constexpr bool& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_MustClearCmdBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MustClearCmdBuffer;
}
constexpr bool const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_MustClearCmdBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MustClearCmdBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_MustClearCmdBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MustClearCmdBuffer = value;
}
constexpr int32_t& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_PendingCmds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingCmds;
}
constexpr int32_t const& UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_get_m_PendingCmds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingCmds;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::__cordl_internal_set_m_PendingCmds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PendingCmds = value;
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetVertexByteSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "GetVertexByteSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetIndexByteSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "GetIndexByteSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetMeshChunkTableEntryByteSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "GetMeshChunkTableEntryByteSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetFormatByteCount(::UnityEngine::Rendering::VertexAttributeFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                                                         { "GetFormatByteCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, format);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::DivUp(int32_t x, int32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "DivUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_globalIndexBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_globalIndexBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_globalVertexBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_globalVertexBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_globalVertexBufferStrideBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_globalVertexBufferStrideBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_globalMeshChunkTableEntryBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_globalMeshChunkTableEntryBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_indicesCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_indicesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_verticesCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_verticesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::get_meshChunkTablesEntryCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "get_meshChunkTablesEntryCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc const> desc,
                                                                           ::UnityEngine::ComputeShader* geometryPoolShader, ::UnityEngine::ComputeShader* copyShader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc const>>(),
                                                                                             ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc, geometryPoolShader, copyShader);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::DisposeInputBuffers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "DisposeInputBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::LoadKernels(::UnityEngine::ComputeShader* geometryPoolShader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "LoadKernels", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, geometryPoolShader);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::CalcVertexCount(int32_t bufferByteSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "CalcVertexCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bufferByteSize);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::CalcIndexCount(int32_t bufferByteSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "CalcIndexCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bufferByteSize);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::CalcMeshChunkTablesCount(int32_t bufferByteSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "CalcMeshChunkTablesCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bufferByteSize);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::DeallocateGeometrySlot(::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot> slot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                           { "DeallocateGeometrySlot", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::DeallocateGeometrySlot(int32_t geoSlotHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "DeallocateGeometrySlot", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, geoSlotHandle);
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::AllocateGeo(::UnityEngine::Mesh* mesh, ::by_ref<int32_t> allocationHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                                                         { "AllocateGeo", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mesh, allocationHandle);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::DeallocateGeoPoolEntrySlot(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                           { "DeallocateGeoPoolEntrySlot", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::DeallocateGeoPoolEntrySlot(::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot> geoPoolEntrySlot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                              { "DeallocateGeoPoolEntrySlot", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, geoPoolEntrySlot);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo
UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetEntryInfo(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                           { "GetEntryInfo", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo>(this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot
UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetEntryGeomAllocation(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                           { "GetEntryGeomAllocation", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>(this, ___internal_method, handle);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetInstanceGeometryIndex(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "GetInstanceGeometryIndex", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, mesh);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::UpdateGeoGpuState(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                       { "UpdateGeoGpuState", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, handle);
}
inline uint32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::FNVHash(uint32_t prevHash, uint32_t dword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "FNVHash", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, prevHash, dword);
}
inline uint32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::CalculateClusterHash(::UnityEngine::Mesh* mesh,
                                                                                              ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData> submeshData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                       { "CalculateClusterHash", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, mesh, submeshData);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GetHandle(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "GetHandle", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>(this, ___internal_method, mesh);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::FindSubmeshEntryInDesc(
    int32_t submeshIndex, /* [IsReadOnly] */ ::by_ref<::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData> const> submeshData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
          { "FindSubmeshEntryInDesc", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData> const>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, submeshIndex, submeshData);
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::Register(::UnityEngine::Mesh* mesh, ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> outHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                       { "Register", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mesh, outHandle);
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::Register(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryDesc const> entryDesc,
                                                                              ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> outHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                                                         { "Register",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryDesc const>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entryDesc, outHandle);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::Unregister(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                                                         { "Unregister", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::SendGpuCommands() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "SendGpuCommands", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::LoadIndexBuffer(::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "LoadIndexBuffer", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, mesh);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::LoadVertexAttribInfo(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::VertexAttribute attribute,
                                                                                          ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo> output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                           { "LoadVertexAttribInfo",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, attribute, output);
}
inline ::UnityEngine::Rendering::CommandBuffer* UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::AllocateCommandBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(), { "AllocateCommandBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::AddIndexUpdateCommand(
    ::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::UnityEngine::Rendering::IndexFormat inputFormat, /* [IsReadOnly] */ ::by_ref<::UnityEngine::GraphicsBuffer* const> inputBuffer,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const> location, int32_t firstVertex, int32_t inputOffset, int32_t indexCount,
    int32_t outputOffset, ::UnityEngine::GraphicsBuffer* outputIdxBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                                                           { "AddIndexUpdateCommand",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer* const>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmdBuffer, inputFormat, inputBuffer, location, firstVertex, inputOffset, indexCount, outputOffset, outputIdxBuffer);
}
inline void
UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::AddVertexUpdateCommand(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int32_t baseVertexOffset,
                                                                                /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const> pos,
                                                                                /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const> uv0,
                                                                                /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const> uv1,
                                                                                /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const> n,
                                                                                /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const> location,
                                                                                ::UnityEngine::GraphicsBuffer* outputVertexBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(),
                          { "AddVertexUpdateCommand",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo const>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const>>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmdBuffer, baseVertexOffset, pos, uv0, uv1, n, location, outputVertexBuffer);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*
UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::New_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc const> desc,
                                                                  ::UnityEngine::ComputeShader* geometryPoolShader, ::UnityEngine::ComputeShader* copyShader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*>(desc, geometryPoolShader, copyShader));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::GeometryPool() {}
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::VertexBufferTarget{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::Rendering::UnifiedRayTracing::GeometryPool::IndexBufferTarget{ static_cast<int32_t>(0x10) };
