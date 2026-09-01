#pragma once
// IWYU pragma private; include "UnityEngine\VFX\SDF\MeshToSDFBaker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__RenderTexture_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/VFX/SDF/zzzz__MeshToSDFBaker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/VFX/SDF/zzzz__MeshToSDFBaker_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXRuntimeResources_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_indicesBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "indicesBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_indicesBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "indicesBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_verticesBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "verticesBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_verticesBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "verticesBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_vertexPositionOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "vertexPositionOffset", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_vertexPositionOffset() {
  return ::cordl_internals::getStaticField<int32_t, "vertexPositionOffset", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_vertexStride(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "vertexStride", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_vertexStride() {
  return ::cordl_internals::getStaticField<int32_t, "vertexStride", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_indexStride(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "indexStride", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_indexStride() {
  return ::cordl_internals::getStaticField<int32_t, "indexStride", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_coordFlipBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "coordFlipBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_coordFlipBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "coordFlipBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_verticesOutBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "verticesOutBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_verticesOutBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "verticesOutBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_aabbBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "aabbBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_aabbBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "aabbBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_worldToClip(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "worldToClip", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_worldToClip() {
  return ::cordl_internals::getStaticField<int32_t, "worldToClip", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_currentAxis(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "currentAxis", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_currentAxis() {
  return ::cordl_internals::getStaticField<int32_t, "currentAxis", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_voxelsBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "voxelsBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_voxelsBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "voxelsBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_rw_trianglesUV(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rw_trianglesUV", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_rw_trianglesUV() {
  return ::cordl_internals::getStaticField<int32_t, "rw_trianglesUV", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_trianglesUV(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "trianglesUV", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_trianglesUV() {
  return ::cordl_internals::getStaticField<int32_t, "trianglesUV", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_voxelsTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "voxelsTexture", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_voxelsTexture() {
  return ::cordl_internals::getStaticField<int32_t, "voxelsTexture", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_voxelsTmpTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "voxelsTmpTexture", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_voxelsTmpTexture() {
  return ::cordl_internals::getStaticField<int32_t, "voxelsTmpTexture", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_rayMap(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rayMap", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_rayMap() {
  return ::cordl_internals::getStaticField<int32_t, "rayMap", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_rayMapTmp(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rayMapTmp", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_rayMapTmp() {
  return ::cordl_internals::getStaticField<int32_t, "rayMapTmp", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_rw_rayMapTmp(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rw_rayMapTmp", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_rw_rayMapTmp() {
  return ::cordl_internals::getStaticField<int32_t, "rw_rayMapTmp", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_nTriangles(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "nTriangles", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_nTriangles() {
  return ::cordl_internals::getStaticField<int32_t, "nTriangles", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_minBoundsExtended(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "minBoundsExtended", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_minBoundsExtended() {
  return ::cordl_internals::getStaticField<int32_t, "minBoundsExtended", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_maxBoundsExtended(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maxBoundsExtended", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_maxBoundsExtended() {
  return ::cordl_internals::getStaticField<int32_t, "maxBoundsExtended", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_maxExtent(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maxExtent", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_maxExtent() {
  return ::cordl_internals::getStaticField<int32_t, "maxExtent", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_upperBoundCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "upperBoundCount", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_upperBoundCount() {
  return ::cordl_internals::getStaticField<int32_t, "upperBoundCount", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_counter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "counter", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_counter() {
  return ::cordl_internals::getStaticField<int32_t, "counter", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_dimX(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "dimX", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_dimX() {
  return ::cordl_internals::getStaticField<int32_t, "dimX", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_dimY(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "dimY", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_dimY() {
  return ::cordl_internals::getStaticField<int32_t, "dimY", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_dimZ(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "dimZ", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_dimZ() {
  return ::cordl_internals::getStaticField<int32_t, "dimZ", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_size(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "size", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_size() {
  return ::cordl_internals::getStaticField<int32_t, "size", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_inputBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "inputBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_inputBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "inputBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_inputCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "inputCounter", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_inputCounter() {
  return ::cordl_internals::getStaticField<int32_t, "inputCounter", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_auxBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "auxBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_auxBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "auxBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_resultBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "resultBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_resultBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "resultBuffer", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_numElem(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "numElem", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_numElem() {
  return ::cordl_internals::getStaticField<int32_t, "numElem", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_exclusive(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "exclusive", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_exclusive() {
  return ::cordl_internals::getStaticField<int32_t, "exclusive", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_dispatchWidth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "dispatchWidth", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_dispatchWidth() {
  return ::cordl_internals::getStaticField<int32_t, "dispatchWidth", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_src(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "src", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_src() {
  return ::cordl_internals::getStaticField<int32_t, "src", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_dest(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "dest", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_dest() {
  return ::cordl_internals::getStaticField<int32_t, "dest", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_signMap(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "signMap", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_signMap() {
  return ::cordl_internals::getStaticField<int32_t, "signMap", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_threshold(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "threshold", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_threshold() {
  return ::cordl_internals::getStaticField<int32_t, "threshold", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_signMapTmp(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "signMapTmp", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_signMapTmp() {
  return ::cordl_internals::getStaticField<int32_t, "signMapTmp", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_normalizeFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "normalizeFactor", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_normalizeFactor() {
  return ::cordl_internals::getStaticField<int32_t, "normalizeFactor", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_numNeighbours(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "numNeighbours", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_numNeighbours() {
  return ::cordl_internals::getStaticField<int32_t, "numNeighbours", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_passId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "passId", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_passId() {
  return ::cordl_internals::getStaticField<int32_t, "passId", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_needNormalize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "needNormalize", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_needNormalize() {
  return ::cordl_internals::getStaticField<int32_t, "needNormalize", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_offset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "offset", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_offset() {
  return ::cordl_internals::getStaticField<int32_t, "offset", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_offsetRayMap(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "offsetRayMap", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_offsetRayMap() {
  return ::cordl_internals::getStaticField<int32_t, "offsetRayMap", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_triangleIDs(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "triangleIDs", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_triangleIDs() {
  return ::cordl_internals::getStaticField<int32_t, "triangleIDs", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_accumCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "accumCounter", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_accumCounter() {
  return ::cordl_internals::getStaticField<int32_t, "accumCounter", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_distanceTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "distanceTexture", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_distanceTexture() {
  return ::cordl_internals::getStaticField<int32_t, "distanceTexture", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::setStaticF_sdfOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "sdfOffset", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::getStaticF_sdfOffset() {
  return ::cordl_internals::getStaticField<int32_t, "sdfOffset", ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties::MeshToSDFBaker_ShaderProperties() {}
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::_ctor)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x69da240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_inBucketSum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inBucketSum;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_inBucketSum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inBucketSum;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_inBucketSum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inBucketSum = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_blockSums() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSums;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_blockSums() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSums;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_blockSums(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockSums = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_finalSum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalSum;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_finalSum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalSum;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_finalSum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finalSum = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_toTextureNormalized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toTextureNormalized;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_toTextureNormalized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toTextureNormalized;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_toTextureNormalized(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toTextureNormalized = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_copyTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyTextures;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_copyTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyTextures;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_copyTextures(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___copyTextures = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_jfa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jfa;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_jfa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jfa;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_jfa(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jfa = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_distanceTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceTransform;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_distanceTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceTransform;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_distanceTransform(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distanceTransform = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_copyBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyBuffers;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_copyBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyBuffers;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_copyBuffers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___copyBuffers = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_generateRayMapLocal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generateRayMapLocal;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_generateRayMapLocal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generateRayMapLocal;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_generateRayMapLocal(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generateRayMapLocal = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_rayMapScanX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayMapScanX;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_rayMapScanX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayMapScanX;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_rayMapScanX(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rayMapScanX = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_rayMapScanY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayMapScanY;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_rayMapScanY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayMapScanY;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_rayMapScanY(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rayMapScanY = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_rayMapScanZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayMapScanZ;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_rayMapScanZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayMapScanZ;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_rayMapScanZ(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rayMapScanZ = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_signPass6Rays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signPass6Rays;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_signPass6Rays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signPass6Rays;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_signPass6Rays(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signPass6Rays = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_signPassNeighbors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signPassNeighbors;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_signPassNeighbors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signPassNeighbors;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_signPassNeighbors(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signPassNeighbors = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_toBlockSumBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toBlockSumBuffer;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_toBlockSumBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toBlockSumBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_toBlockSumBuffer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toBlockSumBuffer = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_clearTexturesAndBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearTexturesAndBuffers;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_clearTexturesAndBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearTexturesAndBuffers;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_clearTexturesAndBuffers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearTexturesAndBuffers = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_copyToBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyToBuffer;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_copyToBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyToBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_copyToBuffer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___copyToBuffer = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_generateTrianglesUV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generateTrianglesUV;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_generateTrianglesUV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generateTrianglesUV;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_generateTrianglesUV(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generateTrianglesUV = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_conservativeRasterization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conservativeRasterization;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_conservativeRasterization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conservativeRasterization;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_conservativeRasterization(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___conservativeRasterization = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_chooseDirectionTriangleOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chooseDirectionTriangleOnly;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_chooseDirectionTriangleOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chooseDirectionTriangleOnly;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_chooseDirectionTriangleOnly(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chooseDirectionTriangleOnly = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_surfaceClosing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surfaceClosing;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_get_surfaceClosing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surfaceClosing;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::__cordl_internal_set_surfaceClosing(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___surfaceClosing = value;
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::_ctor(::UnityEngine::ComputeShader* computeShader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader);
}
inline ::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels* UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::New_ctor(::UnityEngine::ComputeShader* computeShader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels*>(computeShader));
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels::MeshToSDFBaker_Kernels() {}
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.get_SdfTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::get_SdfTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69d82bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "get_SdfTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.InitMeshFromList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityW<::UnityEngine::Mesh> (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(
        &::UnityEngine::VFX::SDF::MeshToSDFBaker::InitMeshFromList)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x69d82c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitMeshFromList",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(),
                                                                                                          ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.InitCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::InitCommandBuffer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x69d85e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitCommandBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.GetTotalVoxelCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::GetTotalVoxelCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x69d8694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetTotalVoxelCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.InitSizeBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::InitSizeBox)> {
  constexpr static std::size_t size = 0x818;
  constexpr static std::size_t addrs = 0x69d86d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitSizeBox", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.GetGridSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::GetGridSize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x69d8ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetGridSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.GetActualBoxSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::GetActualBoxSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69d8f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetActualBoxSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::UnityEngine::Mesh*, int32_t,
                                                                                                         float_t, float_t, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x69d8f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*,
    int32_t, float_t, float_t, ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x69d9768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::Finalize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x69d9868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { ::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.Reinit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::UnityEngine::Mesh*, int32_t,
                                                                                                         float_t, float_t)>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::Reinit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69d991c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                                                             { "Reinit",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.Reinit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*,
    int32_t, float_t, float_t)>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::Reinit)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x69d993c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                                                             { "Reinit",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.SetParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, int32_t, float_t, float_t)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::SetParameters)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69d91d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                                                             { "SetParameters",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.LoadRuntimeResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::LoadRuntimeResources)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x69d90a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "LoadRuntimeResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.InitTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::InitTextures)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x69d9a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::Init)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x69d925c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.UpdateCameras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::UpdateCameras)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x69da634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "UpdateCameras", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.ComputeOrthographicWorldToClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::ComputeOrthographicWorldToClip)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x69da9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                            { "ComputeOrthographicWorldToClip",
                              {},
                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.iDivUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(int32_t, int32_t)>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::iDivUp)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69dabb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "iDivUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.GetThreadGroupsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(int32_t, int32_t)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::GetThreadGroupsCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69dabcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetThreadGroupsCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.PrefixSumCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::PrefixSumCount)> {
  constexpr static std::size_t size = 0x920;
  constexpr static std::size_t addrs = 0x69dac4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "PrefixSumCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.SurfaceClosing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::SurfaceClosing)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x69db56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "SurfaceClosing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.GetTextureVoxelPrincipal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(int32_t)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::GetTextureVoxelPrincipal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69db81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetTextureVoxelPrincipal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.GetTextureVoxelBis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(int32_t)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::GetTextureVoxelBis)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69db834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetTextureVoxelBis", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.JFA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::JFA)> {
  constexpr static std::size_t size = 0xcdc;
  constexpr static std::size_t addrs = 0x69db84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "JFA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.GenerateRayMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::GenerateRayMap)> {
  constexpr static std::size_t size = 0xb84;
  constexpr static std::size_t addrs = 0x69dc528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GenerateRayMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.GetRayMapPrincipal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(int32_t)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::GetRayMapPrincipal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69dd0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetRayMapPrincipal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.GetRayMapBis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(int32_t)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::GetRayMapBis)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x69dd0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetRayMapBis", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.GetSignMapPrincipal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(int32_t)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::GetSignMapPrincipal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69db7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetSignMapPrincipal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.GetSignMapBis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(int32_t)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::GetSignMapBis)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x69dd128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetSignMapBis", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.SignPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::SignPass)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x69dd168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "SignPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.BakeSDF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::BakeSDF)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x69dd928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "BakeSDF", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.InitMeshBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::InitMeshBuffers)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x69ddbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitMeshBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.FirstDraw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::FirstDraw)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x69deae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "FirstDraw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.SecondDraw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::SecondDraw)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x69defec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "SecondDraw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.BuildGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::BuildGeometry)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x69de3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "BuildGeometry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.InitGeometryBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(int32_t)>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::InitGeometryBuffers)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69de374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitGeometryBuffers", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.InitPrefixSumBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::InitPrefixSumBuffers)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x69d9fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitPrefixSumBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.ClearRenderTexturesAndBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::ClearRenderTexturesAndBuffers)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x69ddd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "ClearRenderTexturesAndBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.PerformDistanceTransformWinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::PerformDistanceTransformWinding)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x69df338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "PerformDistanceTransformWinding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.ReleaseBuffersAndTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::ReleaseBuffersAndTextures)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x69df7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "ReleaseBuffersAndTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)()>(&::UnityEngine::VFX::SDF::MeshToSDFBaker::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69dfbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.CreateGraphicsBufferIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(::by_ref<::UnityEngine::GraphicsBuffer*>, int32_t, int32_t)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::CreateGraphicsBufferIfNeeded)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x69d9f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                            { "CreateGraphicsBufferIfNeeded", {}, { ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.ReleaseGraphicsBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(::by_ref<::UnityEngine::GraphicsBuffer*>)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::ReleaseGraphicsBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69dfba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                                                                                           { "ReleaseGraphicsBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.CreateRenderTextureIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(::by_ref<::UnityEngine::RenderTexture*>, ::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::CreateRenderTextureIfNeeded)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x69d9d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                            { "CreateRenderTextureIfNeeded", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SDF::MeshToSDFBaker.ReleaseRenderTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SDF::MeshToSDFBaker::*)(::by_ref<::UnityEngine::RenderTexture*>)>(
    &::UnityEngine::VFX::SDF::MeshToSDFBaker::ReleaseRenderTexture)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x69dfa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "ReleaseRenderTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_RayMaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RayMaps;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_RayMaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RayMaps;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_RayMaps(::ArrayW<::UnityW<::UnityEngine::RenderTexture>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RayMaps = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_SignMaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SignMaps;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_SignMaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SignMaps;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_SignMaps(::ArrayW<::UnityW<::UnityEngine::RenderTexture>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SignMaps = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_RenderTextureViews() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderTextureViews;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_RenderTextureViews() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderTextureViews;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_RenderTextureViews(::ArrayW<::UnityW<::UnityEngine::RenderTexture>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderTextureViews = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_CounterBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CounterBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_CounterBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CounterBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_CounterBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CounterBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_AccumCounterBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumCounterBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_AccumCounterBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumCounterBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_AccumCounterBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AccumCounterBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_TrianglesInVoxels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrianglesInVoxels;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_TrianglesInVoxels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrianglesInVoxels;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_TrianglesInVoxels(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrianglesInVoxels = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_TrianglesUV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrianglesUV;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_TrianglesUV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrianglesUV;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_TrianglesUV(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrianglesUV = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_TmpBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TmpBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_TmpBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TmpBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_TmpBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TmpBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_AccumSumBlocks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumSumBlocks;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_AccumSumBlocks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumSumBlocks;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_AccumSumBlocks(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AccumSumBlocks = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_SumBlocksBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SumBlocksBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_SumBlocksBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SumBlocksBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_SumBlocksBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SumBlocksBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_InSumBlocksBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InSumBlocksBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_InSumBlocksBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InSumBlocksBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_InSumBlocksBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InSumBlocksBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_SumBlocksAdditional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SumBlocksAdditional;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_SumBlocksAdditional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SumBlocksAdditional;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_SumBlocksAdditional(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SumBlocksAdditional = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_IndicesBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndicesBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_IndicesBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndicesBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_IndicesBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndicesBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_VerticesBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticesBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_VerticesBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticesBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_VerticesBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticesBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_VerticesOutBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticesOutBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_VerticesOutBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticesOutBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_VerticesOutBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticesOutBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_CoordFlipBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CoordFlipBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_CoordFlipBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CoordFlipBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_CoordFlipBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CoordFlipBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_AabbBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AabbBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_AabbBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AabbBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_AabbBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AabbBuffer = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_VertexBufferOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexBufferOffset;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_VertexBufferOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexBufferOffset;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_VertexBufferOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertexBufferOffset = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_ThreadGroupSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThreadGroupSize;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_ThreadGroupSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThreadGroupSize;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_ThreadGroupSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThreadGroupSize = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_SignPassesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SignPassesCount;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_SignPassesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SignPassesCount;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_SignPassesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SignPassesCount = value;
}
constexpr float_t& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_InOutThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InOutThreshold;
}
constexpr float_t const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_InOutThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InOutThreshold;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_InOutThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InOutThreshold = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_Material(::ArrayW<::UnityW<::UnityEngine::Material>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_WorldToClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldToClip;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_WorldToClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldToClip;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_WorldToClip(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorldToClip = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_ProjMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProjMat;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_ProjMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProjMat;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_ProjMat(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProjMat = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_ViewMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewMat;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_ViewMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewMat;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_ViewMat(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ViewMat = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_nStepsJFA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nStepsJFA;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_nStepsJFA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nStepsJFA;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_nStepsJFA(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_nStepsJFA = value;
}
constexpr ::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_Kernels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Kernels;
}
constexpr ::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_Kernels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Kernels;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_Kernels(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Kernels = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Mesh = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_textureVoxel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textureVoxel;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_textureVoxel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textureVoxel;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_textureVoxel(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_textureVoxel = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_textureVoxelBis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textureVoxelBis;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_textureVoxelBis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textureVoxelBis;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_textureVoxelBis(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_textureVoxelBis = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_DistanceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DistanceTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_DistanceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DistanceTexture;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_DistanceTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DistanceTexture = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_bufferVoxel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_bufferVoxel;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_bufferVoxel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_bufferVoxel;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_bufferVoxel(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_bufferVoxel = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_computeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_computeShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_computeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_computeShader;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_computeShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_computeShader = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_maxResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxResolution;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_maxResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxResolution;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_maxResolution(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_maxResolution = value;
}
constexpr float_t& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_MaxExtent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxExtent;
}
constexpr float_t const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_MaxExtent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxExtent;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_MaxExtent(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxExtent = value;
}
constexpr float_t& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_SdfOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SdfOffset;
}
constexpr float_t const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_SdfOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SdfOffset;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_SdfOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SdfOffset = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_nTriangles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nTriangles;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_nTriangles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nTriangles;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_nTriangles(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nTriangles = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_SizeBox() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SizeBox;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_SizeBox() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SizeBox;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_SizeBox(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SizeBox = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_Center() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Center;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_Center() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Center;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_Center(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Center = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_Cmd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cmd;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_Cmd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cmd;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_Cmd(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cmd = value;
}
constexpr bool& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_OwnsCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OwnsCommandBuffer;
}
constexpr bool const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_OwnsCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OwnsCommandBuffer;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_OwnsCommandBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OwnsCommandBuffer = value;
}
constexpr bool& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_IsDisposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDisposed;
}
constexpr bool const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_IsDisposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDisposed;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_IsDisposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsDisposed = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_Dimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dimensions;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_Dimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dimensions;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_Dimensions(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dimensions = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_OffsetRayMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OffsetRayMap;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_OffsetRayMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OffsetRayMap;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_OffsetRayMap(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OffsetRayMap = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_MinBoundsExtended() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinBoundsExtended;
}
constexpr ::ArrayW<float_t> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_MinBoundsExtended() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinBoundsExtended;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_MinBoundsExtended(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinBoundsExtended = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_MaxBoundsExtended() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxBoundsExtended;
}
constexpr ::ArrayW<float_t> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_MaxBoundsExtended() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxBoundsExtended;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_MaxBoundsExtended(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxBoundsExtended = value;
}
constexpr int32_t& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_RayMapUseCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RayMapUseCounter;
}
constexpr int32_t const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_RayMapUseCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RayMapUseCounter;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_RayMapUseCounter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RayMapUseCounter = value;
}
constexpr ::UnityW<::UnityEngine::VFX::VFXRuntimeResources>& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_RuntimeResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimeResources;
}
constexpr ::UnityW<::UnityEngine::VFX::VFXRuntimeResources> const& UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_get_m_RuntimeResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimeResources;
}
constexpr void UnityEngine::VFX::SDF::MeshToSDFBaker::__cordl_internal_set_m_RuntimeResources(::UnityW<::UnityEngine::VFX::VFXRuntimeResources> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RuntimeResources = value;
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::setStaticF_kMaxRecommandedGridSize(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "kMaxRecommandedGridSize", ::UnityEngine::VFX::SDF::MeshToSDFBaker*>(std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::VFX::SDF::MeshToSDFBaker::getStaticF_kMaxRecommandedGridSize() {
  return ::cordl_internals::getStaticField<uint32_t, "kMaxRecommandedGridSize", ::UnityEngine::VFX::SDF::MeshToSDFBaker*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::setStaticF_kMaxAbsoluteGridSize(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "kMaxAbsoluteGridSize", ::UnityEngine::VFX::SDF::MeshToSDFBaker*>(std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::VFX::SDF::MeshToSDFBaker::getStaticF_kMaxAbsoluteGridSize() {
  return ::cordl_internals::getStaticField<uint32_t, "kMaxAbsoluteGridSize", ::UnityEngine::VFX::SDF::MeshToSDFBaker*>();
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::setStaticF_kNbActualRT(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kNbActualRT", ::UnityEngine::VFX::SDF::MeshToSDFBaker*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker::getStaticF_kNbActualRT() {
  return ::cordl_internals::getStaticField<int32_t, "kNbActualRT", ::UnityEngine::VFX::SDF::MeshToSDFBaker*>();
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::VFX::SDF::MeshToSDFBaker::get_SdfTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "get_SdfTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::VFX::SDF::MeshToSDFBaker::InitMeshFromList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                                                             ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* transforms) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitMeshFromList",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(),
                                                                                                        ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, meshes, transforms);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::InitCommandBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitCommandBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker::GetTotalVoxelCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetTotalVoxelCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::InitSizeBox() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitSizeBox", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int UnityEngine::VFX::SDF::MeshToSDFBaker::GetGridSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetGridSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::VFX::SDF::MeshToSDFBaker::GetActualBoxSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetActualBoxSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::_ctor(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes, ::UnityEngine::Mesh* mesh, int32_t signPassesCount,
                                                         float_t threshold, float_t sdfOffset, ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sizeBox, center, maxRes, mesh, signPassesCount, threshold, sdfOffset, cmd);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::_ctor(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes,
                                                         ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                         ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* transforms, int32_t signPassesCount, float_t threshold, float_t sdfOffset,
                                                         ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sizeBox, center, maxRes, meshes, transforms, signPassesCount, threshold, sdfOffset, cmd);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::Reinit(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes, ::UnityEngine::Mesh* mesh, int32_t signPassesCount,
                                                          float_t threshold, float_t sdfOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                                                           { "Reinit",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sizeBox, center, maxRes, mesh, signPassesCount, threshold, sdfOffset);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::Reinit(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes,
                                                          ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                          ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* transforms, int32_t signPassesCount, float_t threshold, float_t sdfOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                                                           { "Reinit",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sizeBox, center, maxRes, meshes, transforms, signPassesCount, threshold, sdfOffset);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::SetParameters(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes, int32_t signPassesCount, float_t threshold,
                                                                 float_t sdfOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                                                           { "SetParameters",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sizeBox, center, maxRes, signPassesCount, threshold, sdfOffset);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::LoadRuntimeResources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "LoadRuntimeResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::InitTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::UpdateCameras() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "UpdateCameras", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::VFX::SDF::MeshToSDFBaker::ComputeOrthographicWorldToClip(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot, float_t width, float_t height,
                                                                                                      float_t near, float_t far, ::by_ref<::UnityEngine::Matrix4x4> proj,
                                                                                                      ::by_ref<::UnityEngine::Matrix4x4> view) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                          { "ComputeOrthographicWorldToClip",
                            {},
                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, pos, rot, width, height, near, far, proj, view);
}
inline int32_t UnityEngine::VFX::SDF::MeshToSDFBaker::iDivUp(int32_t a, int32_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "iDivUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2Int UnityEngine::VFX::SDF::MeshToSDFBaker::GetThreadGroupsCount(int32_t nbThreads, int32_t threadCountPerGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetThreadGroupsCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, nbThreads, threadCountPerGroup);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::PrefixSumCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "PrefixSumCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::SurfaceClosing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "SurfaceClosing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::VFX::SDF::MeshToSDFBaker::GetTextureVoxelPrincipal(int32_t step) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetTextureVoxelPrincipal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, step);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::VFX::SDF::MeshToSDFBaker::GetTextureVoxelBis(int32_t step) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetTextureVoxelBis", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, step);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::JFA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "JFA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::GenerateRayMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GenerateRayMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::VFX::SDF::MeshToSDFBaker::GetRayMapPrincipal(int32_t step) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetRayMapPrincipal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, step);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::VFX::SDF::MeshToSDFBaker::GetRayMapBis(int32_t step) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetRayMapBis", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, step);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::VFX::SDF::MeshToSDFBaker::GetSignMapPrincipal(int32_t step) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetSignMapPrincipal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, step);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::VFX::SDF::MeshToSDFBaker::GetSignMapBis(int32_t step) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "GetSignMapBis", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, step);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::SignPass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "SignPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::BakeSDF() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "BakeSDF", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::InitMeshBuffers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitMeshBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::FirstDraw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "FirstDraw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::SecondDraw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "SecondDraw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::BuildGeometry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "BuildGeometry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::InitGeometryBuffers(int32_t upperBoundCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitGeometryBuffers", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upperBoundCount);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::InitPrefixSumBuffers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "InitPrefixSumBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::ClearRenderTexturesAndBuffers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "ClearRenderTexturesAndBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::PerformDistanceTransformWinding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "PerformDistanceTransformWinding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::ReleaseBuffersAndTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "ReleaseBuffersAndTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::CreateGraphicsBufferIfNeeded(::by_ref<::UnityEngine::GraphicsBuffer*> gb, int32_t length, int32_t stride) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                                       { "CreateGraphicsBufferIfNeeded", {}, { ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gb, length, stride);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::ReleaseGraphicsBuffer(::by_ref<::UnityEngine::GraphicsBuffer*> gb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "ReleaseGraphicsBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gb);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::CreateRenderTextureIfNeeded(::by_ref<::UnityEngine::RenderTexture*> rt, ::UnityEngine::RenderTextureDescriptor rtDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(),
                          { "CreateRenderTextureIfNeeded", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt, rtDesc);
}
inline void UnityEngine::VFX::SDF::MeshToSDFBaker::ReleaseRenderTexture(::by_ref<::UnityEngine::RenderTexture*> rt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(), { "ReleaseRenderTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt);
}
inline ::UnityEngine::VFX::SDF::MeshToSDFBaker* UnityEngine::VFX::SDF::MeshToSDFBaker::New_ctor(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes,
                                                                                                ::UnityEngine::Mesh* mesh, int32_t signPassesCount, float_t threshold, float_t sdfOffset,
                                                                                                ::UnityEngine::Rendering::CommandBuffer* cmd) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(sizeBox, center, maxRes, mesh, signPassesCount, threshold, sdfOffset, cmd));
}
inline ::UnityEngine::VFX::SDF::MeshToSDFBaker* UnityEngine::VFX::SDF::MeshToSDFBaker::New_ctor(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes,
                                                                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                                                                ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* transforms, int32_t signPassesCount,
                                                                                                float_t threshold, float_t sdfOffset, ::UnityEngine::Rendering::CommandBuffer* cmd) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::SDF::MeshToSDFBaker*>(sizeBox, center, maxRes, meshes, transforms, signPassesCount, threshold, sdfOffset, cmd));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::VFX::SDF::MeshToSDFBaker::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::VFX::SDF::MeshToSDFBaker::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::SDF::MeshToSDFBaker::MeshToSDFBaker() {}
