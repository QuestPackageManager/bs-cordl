#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommandArray_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommand_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickPool_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBlendingTextureMemoryBudget_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GUIContent_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileHandle_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadStatus_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugOverlay_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickBlendingPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeGlobalIndirection_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeSamplingDebugData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingSet_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeDebug_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumePerSceneData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSceneData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeScratchBufferPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeShadingParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSystemParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumesOptions_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResIndex", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResIndex", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResCellIndices(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResCellIndices", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResCellIndices() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResCellIndices", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL0_L1Rx(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL0_L1Rx", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL0_L1Rx() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL0_L1Rx", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL1G_L1Ry(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL1G_L1Ry", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL1G_L1Ry() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL1G_L1Ry", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL1B_L1Rz(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL1B_L1Rz", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL1B_L1Rz() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL1B_L1Rz", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL2_0(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL2_0", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL2_0() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL2_0", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL2_1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL2_1", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL2_1() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL2_1", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL2_2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL2_2", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL2_2() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL2_2", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL2_3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL2_3", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL2_3() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL2_3", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVProbeOcclusion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVProbeOcclusion", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVProbeOcclusion() {
  return ::cordl_internals::getStaticField<int32_t, "_APVProbeOcclusion", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResValidity(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResValidity", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResValidity() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResValidity", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__SkyOcclusionTexL0L1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SkyOcclusionTexL0L1", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__SkyOcclusionTexL0L1() {
  return ::cordl_internals::getStaticField<int32_t, "_SkyOcclusionTexL0L1", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__SkyShadingDirectionIndicesTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SkyShadingDirectionIndicesTex", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__SkyShadingDirectionIndicesTex() {
  return ::cordl_internals::getStaticField<int32_t, "_SkyShadingDirectionIndicesTex", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__SkyPrecomputedDirections(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SkyPrecomputedDirections", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__SkyPrecomputedDirections() {
  return ::cordl_internals::getStaticField<int32_t, "_SkyPrecomputedDirections", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__AntiLeakData(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AntiLeakData", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__AntiLeakData() {
  return ::cordl_internals::getStaticField<int32_t, "_AntiLeakData", ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::ProbeReferenceVolume_ShaderIDs() {}
// Ctor Parameters [CppParam { name: "positionInBricks", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "minSubdiv", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "minBrickPos", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxBrickPosPlusOne", ty: "::UnityEngine::Vector3Int",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "hasMinMax", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasOnlyBiggerBricks", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo::ProbeReferenceVolume_IndirectionEntryInfo(::UnityEngine::Vector3Int positionInBricks, int32_t minSubdiv,
                                                                                                                         ::UnityEngine::Vector3Int minBrickPos,
                                                                                                                         ::UnityEngine::Vector3Int maxBrickPosPlusOne, bool hasMinMax,
                                                                                                                         bool hasOnlyBiggerBricks) noexcept {
  this->positionInBricks = positionInBricks;
  this->minSubdiv = minSubdiv;
  this->minBrickPos = minBrickPos;
  this->maxBrickPosPlusOne = maxBrickPosPlusOne;
  this->hasMinMax = hasMinMax;
  this->hasOnlyBiggerBricks = hasOnlyBiggerBricks;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo::ProbeReferenceVolume_IndirectionEntryInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::ToString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x678960c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67896e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3Int& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_set_position(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_probeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_probeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeCount;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_set_probeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeCount = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_minSubdiv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minSubdiv;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_minSubdiv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minSubdiv;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_set_minSubdiv(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minSubdiv = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_indexChunkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexChunkCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_indexChunkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexChunkCount;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_set_indexChunkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexChunkCount = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_shChunkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shChunkCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_shChunkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shChunkCount;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_set_shChunkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shChunkCount = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_bricksCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bricksCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_bricksCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bricksCount;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_set_bricksCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bricksCount = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>& UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_indirectionEntryInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indirectionEntryInfo;
}
constexpr ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo> const&
UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_indirectionEntryInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indirectionEntryInfo;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_set_indirectionEntryInfo(::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indirectionEntryInfo = value;
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::ProbeReferenceVolume_CellDesc() {}
// Ctor Parameters [CppParam { name: "shL0L1RxData", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "shL1GL1RyData", ty:
// "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "shL1BL1RzData", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "shL2Data_0", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "shL2Data_1", ty:
// "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "shL2Data_2", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "shL2Data_3", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "probeOcclusion", ty:
// "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData::CellData_ProbeReferenceVolume_PerScenarioData(
    ::Unity::Collections::NativeArray_1<uint16_t> shL0L1RxData, ::Unity::Collections::NativeArray_1<uint8_t> shL1GL1RyData, ::Unity::Collections::NativeArray_1<uint8_t> shL1BL1RzData,
    ::Unity::Collections::NativeArray_1<uint8_t> shL2Data_0, ::Unity::Collections::NativeArray_1<uint8_t> shL2Data_1, ::Unity::Collections::NativeArray_1<uint8_t> shL2Data_2,
    ::Unity::Collections::NativeArray_1<uint8_t> shL2Data_3, ::Unity::Collections::NativeArray_1<uint8_t> probeOcclusion) noexcept {
  this->shL0L1RxData = shL0L1RxData;
  this->shL1GL1RyData = shL1GL1RyData;
  this->shL1BL1RzData = shL1BL1RzData;
  this->shL2Data_0 = shL2Data_0;
  this->shL2Data_1 = shL2Data_1;
  this->shL2Data_2 = shL2Data_2;
  this->shL2Data_3 = shL2Data_3;
  this->probeOcclusion = probeOcclusion;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData::CellData_ProbeReferenceVolume_PerScenarioData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_skyOcclusionDataL0L1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint16_t> (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_skyOcclusionDataL0L1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67896e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_skyOcclusionDataL0L1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_skyOcclusionDataL0L1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(::Unity::Collections::NativeArray_1<uint16_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_skyOcclusionDataL0L1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67896f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                                                           { "set_skyOcclusionDataL0L1", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_skyShadingDirectionIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_skyShadingDirectionIndices)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67896f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_skyShadingDirectionIndices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_skyShadingDirectionIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_skyShadingDirectionIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6789704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                             { "set_skyShadingDirectionIndices", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_bricks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> (
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_bricks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x678970c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_bricks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_bricks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_bricks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6789718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                             { "set_bricks", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_probePositions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_probePositions)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6789720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_probePositions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_probePositions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_probePositions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678972c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                             { "set_probePositions", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_touchupVolumeInteraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<float_t> (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_touchupVolumeInteraction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6789734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_touchupVolumeInteraction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_touchupVolumeInteraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(::Unity::Collections::NativeArray_1<float_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_touchupVolumeInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6789740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                             { "set_touchupVolumeInteraction", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_offsetVectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_offsetVectors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6789748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_offsetVectors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_offsetVectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_offsetVectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6789754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                             { "set_offsetVectors", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_validity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<float_t> (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_validity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x678975c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_validity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_validity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(::Unity::Collections::NativeArray_1<float_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_validity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6789768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                                                           { "set_validity", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_layer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_layer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6789770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_layer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_layer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678977c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                                                           { "set_layer", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.CleanupPerScenarioData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(
    ::by_ref<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellData::CleanupPerScenarioData)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6789784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                { "CleanupPerScenarioData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellData::Cleanup)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x67898c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "Cleanup", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellData::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6789c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get_validityNeighMaskData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validityNeighMaskData;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get_validityNeighMaskData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validityNeighMaskData;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_set_validityNeighMaskData(::Unity::Collections::NativeArray_1<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validityNeighMaskData = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t>& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__skyOcclusionDataL0L1_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skyOcclusionDataL0L1_k__BackingField;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__skyOcclusionDataL0L1_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skyOcclusionDataL0L1_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_set__skyOcclusionDataL0L1_k__BackingField(::Unity::Collections::NativeArray_1<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skyOcclusionDataL0L1_k__BackingField = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__skyShadingDirectionIndices_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skyShadingDirectionIndices_k__BackingField;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__skyShadingDirectionIndices_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skyShadingDirectionIndices_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_set__skyShadingDirectionIndices_k__BackingField(::Unity::Collections::NativeArray_1<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skyShadingDirectionIndices_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>*&
UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get_scenarios() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenarios;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get_scenarios() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenarios;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_set_scenarios(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenarios = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__bricks_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bricks_k__BackingField;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> const&
UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__bricks_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bricks_k__BackingField;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_set__bricks_k__BackingField(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bricks_k__BackingField = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__probePositions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probePositions_k__BackingField;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__probePositions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probePositions_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_set__probePositions_k__BackingField(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____probePositions_k__BackingField = value;
}
constexpr ::Unity::Collections::NativeArray_1<float_t>& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__touchupVolumeInteraction_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchupVolumeInteraction_k__BackingField;
}
constexpr ::Unity::Collections::NativeArray_1<float_t> const& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__touchupVolumeInteraction_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchupVolumeInteraction_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_set__touchupVolumeInteraction_k__BackingField(::Unity::Collections::NativeArray_1<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____touchupVolumeInteraction_k__BackingField = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__offsetVectors_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offsetVectors_k__BackingField;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__offsetVectors_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offsetVectors_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_set__offsetVectors_k__BackingField(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offsetVectors_k__BackingField = value;
}
constexpr ::Unity::Collections::NativeArray_1<float_t>& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__validity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validity_k__BackingField;
}
constexpr ::Unity::Collections::NativeArray_1<float_t> const& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__validity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validity_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_set__validity_k__BackingField(::Unity::Collections::NativeArray_1<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validity_k__BackingField = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__layer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layer_k__BackingField;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_get__layer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layer_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellData::__cordl_internal_set__layer_k__BackingField(::Unity::Collections::NativeArray_1<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layer_k__BackingField = value;
}
inline ::Unity::Collections::NativeArray_1<uint16_t> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_skyOcclusionDataL0L1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_skyOcclusionDataL0L1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint16_t>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_skyOcclusionDataL0L1(::Unity::Collections::NativeArray_1<uint16_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                                                         { "set_skyOcclusionDataL0L1", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_skyShadingDirectionIndices() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_skyShadingDirectionIndices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_skyShadingDirectionIndices(::Unity::Collections::NativeArray_1<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                           { "set_skyShadingDirectionIndices", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_bricks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_bricks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_bricks(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                           { "set_bricks", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_probePositions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_probePositions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_probePositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                           { "set_probePositions", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<float_t> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_touchupVolumeInteraction() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_touchupVolumeInteraction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<float_t>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_touchupVolumeInteraction(::Unity::Collections::NativeArray_1<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                                                         { "set_touchupVolumeInteraction", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_offsetVectors() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_offsetVectors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_offsetVectors(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                           { "set_offsetVectors", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<float_t> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_validity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_validity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<float_t>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_validity(::Unity::Collections::NativeArray_1<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                                                         { "set_validity", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_layer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "get_layer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_layer(::Unity::Collections::NativeArray_1<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                                                         { "set_layer", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::CleanupPerScenarioData(::by_ref<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(),
                                                           { "CleanupPerScenarioData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::Cleanup(bool cleanScenarioList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { "Cleanup", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cleanScenarioList);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellData* UnityEngine::Rendering::ProbeReferenceVolume_CellData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellData::ProbeReferenceVolume_CellData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::Clear)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6789d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6789d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*&
UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::__cordl_internal_get_chunkList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::__cordl_internal_get_chunkList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkList;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::__cordl_internal_set_chunkList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkList = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::__cordl_internal_get_shChunkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shChunkCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::__cordl_internal_get_shChunkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shChunkCount;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::__cordl_internal_set_shChunkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shChunkCount = value;
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo* UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::ProbeReferenceVolume_CellPoolInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6789dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6789e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_flatIndicesInGlobalIndirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flatIndicesInGlobalIndirection;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_flatIndicesInGlobalIndirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flatIndicesInGlobalIndirection;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_set_flatIndicesInGlobalIndirection(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flatIndicesInGlobalIndirection = value;
}
constexpr ::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo& UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_updateInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateInfo;
}
constexpr ::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo const& UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_updateInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateInfo;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_set_updateInfo(::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___updateInfo = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_indexUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexUpdated;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_indexUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexUpdated;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_set_indexUpdated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexUpdated = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>& UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_indirectionEntryInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indirectionEntryInfo;
}
constexpr ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo> const&
UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_indirectionEntryInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indirectionEntryInfo;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_set_indirectionEntryInfo(::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indirectionEntryInfo = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_indexChunkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexChunkCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_indexChunkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexChunkCount;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_set_indexChunkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexChunkCount = value;
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::ProbeReferenceVolume_CellIndexInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.MarkUpToDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::MarkUpToDate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6789e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "MarkUpToDate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.IsUpToDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::IsUpToDate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6789e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "IsUpToDate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.ForceReupload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ForceReupload)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6789e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "ForceReupload", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.ShouldReupload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ShouldReupload)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6789e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "ShouldReupload", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.Prioritize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::Prioritize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6789e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "Prioritize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.ShouldPrioritize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ShouldPrioritize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6789e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "ShouldPrioritize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::Clear)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6789e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6789ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*&
UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::__cordl_internal_get_chunkList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::__cordl_internal_get_chunkList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkList;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::__cordl_internal_set_chunkList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkList = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::__cordl_internal_get_blendingScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendingScore;
}
constexpr float_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::__cordl_internal_get_blendingScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendingScore;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::__cordl_internal_set_blendingScore(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blendingScore = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::__cordl_internal_get_blendingFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendingFactor;
}
constexpr float_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::__cordl_internal_get_blendingFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendingFactor;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::__cordl_internal_set_blendingFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blendingFactor = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::__cordl_internal_get_blending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blending;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::__cordl_internal_get_blending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blending;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::__cordl_internal_set_blending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blending = value;
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::MarkUpToDate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "MarkUpToDate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::IsUpToDate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "IsUpToDate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ForceReupload() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "ForceReupload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ShouldReupload() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "ShouldReupload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::Prioritize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "Prioritize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ShouldPrioritize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "ShouldPrioritize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo* UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ProbeReferenceVolume_CellBlendingInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo.IsStreaming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::IsStreaming)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6789f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>(), { "IsStreaming", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo.IsBlendingStreaming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::IsBlendingStreaming)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6789f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>(), { "IsBlendingStreaming", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6789fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6789fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::__cordl_internal_set_request(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___request = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::__cordl_internal_get_blendingRequest0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendingRequest0;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::__cordl_internal_get_blendingRequest0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendingRequest0;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::__cordl_internal_set_blendingRequest0(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blendingRequest0 = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::__cordl_internal_get_blendingRequest1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendingRequest1;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::__cordl_internal_get_blendingRequest1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendingRequest1;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::__cordl_internal_set_blendingRequest1(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blendingRequest1 = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::__cordl_internal_get_streamingScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamingScore;
}
constexpr float_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::__cordl_internal_get_streamingScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamingScore;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::__cordl_internal_set_streamingScore(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streamingScore = value;
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::IsStreaming() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>(), { "IsStreaming", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::IsBlendingStreaming() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>(), { "IsBlendingStreaming", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo* UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::ProbeReferenceVolume_CellStreamingInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Cell.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume_Cell::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Cell::CompareTo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6789fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(),
                                                                                           { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Cell.UpdateCellScenarioData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_Cell::*)(::StringW, ::StringW)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Cell::UpdateCellScenarioData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x678a014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(),
                                                                                           { "UpdateCellScenarioData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Cell.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Cell::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_Cell::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x678a0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Cell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Cell::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_Cell::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x678a144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_desc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desc;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* const& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_desc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desc;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_set_desc(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___desc = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellData*& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellData* const& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_set_data(::UnityEngine::Rendering::ProbeReferenceVolume_CellData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_poolInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolInfo;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo* const& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_poolInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolInfo;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_set_poolInfo(::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___poolInfo = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_indexInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexInfo;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* const& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_indexInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexInfo;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_set_indexInfo(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexInfo = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_blendingInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendingInfo;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo* const& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_blendingInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendingInfo;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_set_blendingInfo(::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blendingInfo = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_streamingInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamingInfo;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo* const& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_streamingInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamingInfo;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_set_streamingInfo(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streamingInfo = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_referenceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referenceCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_referenceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referenceCount;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_set_referenceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___referenceCount = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_loaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loaded;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_loaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loaded;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_set_loaded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loaded = value;
}
constexpr ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_scenario0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenario0;
}
constexpr ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData const& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_scenario0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenario0;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_set_scenario0(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenario0 = value;
}
constexpr ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_scenario1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenario1;
}
constexpr ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData const& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_scenario1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenario1;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_set_scenario1(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenario1 = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_hasTwoScenarios() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTwoScenarios;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_hasTwoScenarios() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTwoScenarios;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_set_hasTwoScenarios(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasTwoScenarios = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_debugProbes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugProbes;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes* const& UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_get_debugProbes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugProbes;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_Cell::__cordl_internal_set_debugProbes(::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugProbes = value;
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_Cell::CompareTo(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(),
                                                                                         { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_Cell::UpdateCellScenarioData(::StringW scenario0, ::StringW scenario1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(),
                                                                                         { "UpdateCellScenarioData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scenario0, scenario1);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Cell::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Cell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* UnityEngine::Rendering::ProbeReferenceVolume_Cell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>());
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>"
constexpr UnityEngine::Rendering::ProbeReferenceVolume_Cell::operator ::System::IComparable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*() noexcept {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>"
constexpr ::System::IComparable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*
UnityEngine::Rendering::ProbeReferenceVolume_Cell::i___System__IComparable_1___UnityEngine__Rendering__ProbeReferenceVolume_Cell__() noexcept {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_Cell::ProbeReferenceVolume_Cell() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(::UnityEngine::Matrix4x4, float_t, float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x678a214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x678a294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Volume)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x678a2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(::UnityEngine::Bounds)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x678a368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume.CalculateAABB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Volume::CalculateAABB)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x678a3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(), { "CalculateAABB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume.CalculateCenterAndSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Volume::CalculateCenterAndSize)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x678a4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(),
                                                { "CalculateCenterAndSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume.Transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Volume::Transform)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x678a698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(), { "Transform", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_Volume::ToString)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x678a730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Volume)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Volume::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x678a948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor(::UnityEngine::Matrix4x4 trs, float_t maxSubdivision, float_t minSubdivision) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, trs, maxSubdivision, minSubdivision);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor(::UnityEngine::Vector3 corner, ::UnityEngine::Vector3 X, ::UnityEngine::Vector3 Y, ::UnityEngine::Vector3 Z,
                                                                       float_t maxSubdivision, float_t minSubdivision) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, corner, X, Y, Z, maxSubdivision, minSubdivision);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor(::UnityEngine::Rendering::ProbeReferenceVolume_Volume copy) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, copy);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor(::UnityEngine::Bounds bounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bounds);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::ProbeReferenceVolume_Volume::CalculateAABB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(), { "CalculateAABB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Volume::CalculateCenterAndSize(::by_ref<::UnityEngine::Vector3> center, ::by_ref<::UnityEngine::Vector3> size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(),
                                              { "CalculateCenterAndSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, size);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Volume::Transform(::UnityEngine::Matrix4x4 trs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(), { "Transform", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, trs);
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume_Volume::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_Volume::Equals(::UnityEngine::Rendering::ProbeReferenceVolume_Volume other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>"
constexpr UnityEngine::Rendering::ProbeReferenceVolume_Volume::operator ::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>*
UnityEngine::Rendering::ProbeReferenceVolume_Volume::i___System__IEquatable_1___UnityEngine__Rendering__ProbeReferenceVolume_Volume_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "corner", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "X", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "Y", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Z", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "maxSubdivisionMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minSubdivisionMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_Volume::ProbeReferenceVolume_Volume(::UnityEngine::Vector3 corner, ::UnityEngine::Vector3 X, ::UnityEngine::Vector3 Y,
                                                                                             ::UnityEngine::Vector3 Z, float_t maxSubdivisionMultiplier, float_t minSubdivisionMultiplier) noexcept {
  this->corner = corner;
  this->X = X;
  this->Y = Y;
  this->Z = Z;
  this->maxSubdivisionMultiplier = maxSubdivisionMultiplier;
  this->minSubdivisionMultiplier = minSubdivisionMultiplier;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_Volume::ProbeReferenceVolume_Volume() {}
// Ctor Parameters [CppParam { name: "posWS", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_RefVolTransform::ProbeReferenceVolume_RefVolTransform(::UnityEngine::Vector3 posWS, ::UnityEngine::Quaternion rot, float_t scale) noexcept {
  this->posWS = posWS;
  this->rot = rot;
  this->scale = scale;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_RefVolTransform::ProbeReferenceVolume_RefVolTransform() {}
// Ctor Parameters [CppParam { name: "index", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cellIndices", ty: "::UnityEngine::ComputeBuffer*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "L0_L1rx", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "L1_G_ry", ty:
// "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "L1_B_rz", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "L2_0", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "L2_1", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "L2_2", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "L2_3", ty:
// "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ProbeOcclusion", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "Validity", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "SkyOcclusionL0L1", ty:
// "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "SkyShadingDirectionIndices", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "SkyPrecomputedDirections", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "QualityLeakReductionData", ty:
// "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources::ProbeReferenceVolume_RuntimeResources(
    ::UnityEngine::ComputeBuffer* index, ::UnityEngine::ComputeBuffer* cellIndices, ::UnityW<::UnityEngine::RenderTexture> L0_L1rx, ::UnityW<::UnityEngine::RenderTexture> L1_G_ry,
    ::UnityW<::UnityEngine::RenderTexture> L1_B_rz, ::UnityW<::UnityEngine::RenderTexture> L2_0, ::UnityW<::UnityEngine::RenderTexture> L2_1, ::UnityW<::UnityEngine::RenderTexture> L2_2,
    ::UnityW<::UnityEngine::RenderTexture> L2_3, ::UnityW<::UnityEngine::RenderTexture> ProbeOcclusion, ::UnityW<::UnityEngine::RenderTexture> Validity,
    ::UnityW<::UnityEngine::RenderTexture> SkyOcclusionL0L1, ::UnityW<::UnityEngine::RenderTexture> SkyShadingDirectionIndices, ::UnityEngine::ComputeBuffer* SkyPrecomputedDirections,
    ::UnityEngine::ComputeBuffer* QualityLeakReductionData) noexcept {
  this->index = index;
  this->cellIndices = cellIndices;
  this->L0_L1rx = L0_L1rx;
  this->L1_G_ry = L1_G_ry;
  this->L1_B_rz = L1_B_rz;
  this->L2_0 = L2_0;
  this->L2_1 = L2_1;
  this->L2_2 = L2_2;
  this->L2_3 = L2_3;
  this->ProbeOcclusion = ProbeOcclusion;
  this->Validity = Validity;
  this->SkyOcclusionL0L1 = SkyOcclusionL0L1;
  this->SkyShadingDirectionIndices = SkyShadingDirectionIndices;
  this->SkyPrecomputedDirections = SkyPrecomputedDirections;
  this->QualityLeakReductionData = QualityLeakReductionData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources::ProbeReferenceVolume_RuntimeResources() {}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput::ProbeReferenceVolume_ExtraDataActionInput() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x678aa3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4>>*& UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_get_probeBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeBuffers;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4>>* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_get_probeBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeBuffers;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_set_probeBuffers(::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___probeBuffers = value;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4>>*& UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_get_offsetBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetBuffers;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4>>* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_get_offsetBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetBuffers;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_set_offsetBuffers(::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsetBuffers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*& UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_get_props() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___props;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_get_props() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___props;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_set_props(::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___props = value;
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes* UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::ProbeReferenceVolume_CellInstancedDebugProbes() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x678aa40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_get_debugFragmentationMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugFragmentationMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_get_debugFragmentationMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugFragmentationMaterial;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_set_debugFragmentationMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugFragmentationMaterial = value;
}
constexpr ::UnityEngine::Rendering::DebugOverlay*& UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_get_debugOverlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugOverlay;
}
constexpr ::UnityEngine::Rendering::DebugOverlay* const& UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_get_debugOverlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugOverlay;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_set_debugOverlay(::UnityEngine::Rendering::DebugOverlay* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugOverlay = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_get_chunkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_get_chunkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkCount;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_set_chunkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkCount = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_get_debugFragmentationData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugFragmentationData;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_get_debugFragmentationData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugFragmentationData;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_set_debugFragmentationData(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugFragmentationData = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_get_colorBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBuffer;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_get_colorBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorBuffer;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_set_colorBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorBuffer = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_get_depthBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthBuffer;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_get_depthBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthBuffer;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::__cordl_internal_set_depthBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthBuffer = value;
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData* UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::ProbeReferenceVolume_RenderFragmentationOverlayPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x678aa44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.AddReadCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)(int32_t, int32_t, uint8_t*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::AddReadCommand)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x678aac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(),
                                                             { "AddReadCommand", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.RunCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)(::Unity::IO::LowLevel::Unsafe::FileHandle)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::RunCommands)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x678aafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(),
                                                                                           { "RunCommands", {}, { ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::FileHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Clear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x678ab68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.Cancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Cancel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x678abe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), { "Cancel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.Wait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Wait)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x678ac10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), { "Wait", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x678ac74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.GetStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadStatus (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::GetStatus)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x678acc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), { "GetStatus", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Unity::IO::LowLevel::Unsafe::ReadHandle& UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::__cordl_internal_get_m_ReadHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadHandle;
}
constexpr ::Unity::IO::LowLevel::Unsafe::ReadHandle const& UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::__cordl_internal_get_m_ReadHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadHandle;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::__cordl_internal_set_m_ReadHandle(::Unity::IO::LowLevel::Unsafe::ReadHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadHandle = value;
}
constexpr ::Unity::IO::LowLevel::Unsafe::ReadCommandArray& UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::__cordl_internal_get_m_ReadCommandArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadCommandArray;
}
constexpr ::Unity::IO::LowLevel::Unsafe::ReadCommandArray const& UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::__cordl_internal_get_m_ReadCommandArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadCommandArray;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::__cordl_internal_set_m_ReadCommandArray(::Unity::IO::LowLevel::Unsafe::ReadCommandArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadCommandArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand>&
UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::__cordl_internal_get_m_ReadCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadCommandBuffer;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand> const&
UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::__cordl_internal_get_m_ReadCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadCommandBuffer;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::__cordl_internal_set_m_ReadCommandBuffer(::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadCommandBuffer = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::__cordl_internal_get_m_BytesWritten() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BytesWritten;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::__cordl_internal_get_m_BytesWritten() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BytesWritten;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::__cordl_internal_set_m_BytesWritten(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BytesWritten = value;
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::_ctor(int32_t maxRequestCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxRequestCount);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::AddReadCommand(int32_t offset, int32_t size, uint8_t* dest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(),
                                                           { "AddReadCommand", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset, size, dest);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::RunCommands(::Unity::IO::LowLevel::Unsafe::FileHandle file) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(),
                                                                                         { "RunCommands", {}, { ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::FileHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, file);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Cancel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), { "Cancel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Wait() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), { "Wait", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadStatus UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::GetStatus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), { "GetStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadStatus>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::New_ctor(int32_t maxRequestCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(maxRequestCount));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::ProbeReferenceVolume_DiskStreamingRequest() {}
// Ctor Parameters [CppParam { name: "_SharedDestChunksOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_L0L1rxOffset", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_L1GryOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_L1BrzOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_ValidityOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ProbeOcclusionOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "_SkyOcclusionOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SkyShadingDirectionOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "_L2_0Offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_L2_1Offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_L2_2Offset",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_L2_3Offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_L0Size", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_L0ProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_L1Size", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_L1ProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ValiditySize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_ValidityProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ProbeOcclusionSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_ProbeOcclusionProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SkyOcclusionSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_SkyOcclusionProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SkyShadingDirectionSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_SkyShadingDirectionProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_L2Size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_L2ProbeSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ProbeCountInChunkLine", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_ProbeCountInChunkSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout::ProbeReferenceVolume_CellStreamingScratchBufferLayout(
    int32_t _SharedDestChunksOffset, int32_t _L0L1rxOffset, int32_t _L1GryOffset, int32_t _L1BrzOffset, int32_t _ValidityOffset, int32_t _ProbeOcclusionOffset, int32_t _SkyOcclusionOffset,
    int32_t _SkyShadingDirectionOffset, int32_t _L2_0Offset, int32_t _L2_1Offset, int32_t _L2_2Offset, int32_t _L2_3Offset, int32_t _L0Size, int32_t _L0ProbeSize, int32_t _L1Size,
    int32_t _L1ProbeSize, int32_t _ValiditySize, int32_t _ValidityProbeSize, int32_t _ProbeOcclusionSize, int32_t _ProbeOcclusionProbeSize, int32_t _SkyOcclusionSize, int32_t _SkyOcclusionProbeSize,
    int32_t _SkyShadingDirectionSize, int32_t _SkyShadingDirectionProbeSize, int32_t _L2Size, int32_t _L2ProbeSize, int32_t _ProbeCountInChunkLine, int32_t _ProbeCountInChunkSlice) noexcept {
  this->_SharedDestChunksOffset = _SharedDestChunksOffset;
  this->_L0L1rxOffset = _L0L1rxOffset;
  this->_L1GryOffset = _L1GryOffset;
  this->_L1BrzOffset = _L1BrzOffset;
  this->_ValidityOffset = _ValidityOffset;
  this->_ProbeOcclusionOffset = _ProbeOcclusionOffset;
  this->_SkyOcclusionOffset = _SkyOcclusionOffset;
  this->_SkyShadingDirectionOffset = _SkyShadingDirectionOffset;
  this->_L2_0Offset = _L2_0Offset;
  this->_L2_1Offset = _L2_1Offset;
  this->_L2_2Offset = _L2_2Offset;
  this->_L2_3Offset = _L2_3Offset;
  this->_L0Size = _L0Size;
  this->_L0ProbeSize = _L0ProbeSize;
  this->_L1Size = _L1Size;
  this->_L1ProbeSize = _L1ProbeSize;
  this->_ValiditySize = _ValiditySize;
  this->_ValidityProbeSize = _ValidityProbeSize;
  this->_ProbeOcclusionSize = _ProbeOcclusionSize;
  this->_ProbeOcclusionProbeSize = _ProbeOcclusionProbeSize;
  this->_SkyOcclusionSize = _SkyOcclusionSize;
  this->_SkyOcclusionProbeSize = _SkyOcclusionProbeSize;
  this->_SkyShadingDirectionSize = _SkyShadingDirectionSize;
  this->_SkyShadingDirectionProbeSize = _SkyShadingDirectionProbeSize;
  this->_L2Size = _L2Size;
  this->_L2ProbeSize = _L2ProbeSize;
  this->_ProbeCountInChunkLine = _ProbeCountInChunkLine;
  this->_ProbeCountInChunkSlice = _ProbeCountInChunkSlice;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout::ProbeReferenceVolume_CellStreamingScratchBufferLayout() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::*)(int32_t, int32_t, bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x678acf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer.Swap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::Swap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x678ae44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(), { "Swap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x678ae60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer.get_buffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::get_buffer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x67867d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(), { "get_buffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer.get_chunkCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::get_chunkCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678aef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(), { "get_chunkCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer.get_chunkSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::get_chunkSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678aefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(), { "get_chunkSize", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_get_stagingBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stagingBuffer;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_get_stagingBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stagingBuffer;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_set_stagingBuffer(::Unity::Collections::NativeArray_1<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stagingBuffer = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_get__chunkCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chunkCount_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_get__chunkCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chunkCount_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_set__chunkCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____chunkCount_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_get__chunkSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chunkSize_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_get__chunkSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chunkSize_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_set__chunkSize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____chunkSize_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_get_m_CurrentBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentBuffer;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_get_m_CurrentBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentBuffer;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_set_m_CurrentBuffer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentBuffer = value;
}
constexpr ::ArrayW<::UnityEngine::GraphicsBuffer*>& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_get_m_GraphicsBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicsBuffers;
}
constexpr ::ArrayW<::UnityEngine::GraphicsBuffer*> const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_get_m_GraphicsBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicsBuffers;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_set_m_GraphicsBuffers(::ArrayW<::UnityEngine::GraphicsBuffer*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GraphicsBuffers = value;
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::_ctor(int32_t chunkCount, int32_t chunkSize, bool allocateGraphicsBuffers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkCount, chunkSize, allocateGraphicsBuffers);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::Swap() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(), { "Swap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::get_buffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(), { "get_buffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::get_chunkCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(), { "get_chunkCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::get_chunkSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(), { "get_chunkSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::New_ctor(int32_t chunkCount, int32_t chunkSize, bool allocateGraphicsBuffers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(chunkCount, chunkSize, allocateGraphicsBuffers));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::ProbeReferenceVolume_CellStreamingScratchBuffer() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State::CellStreamingRequest_ProbeReferenceVolume_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State::CellStreamingRequest_ProbeReferenceVolume_State() {}
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State::Pending{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State::Active{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State::Canceled{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State::Invalid{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State::Complete{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x678b3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x678b518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::*)(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*,
                                                                                                        ::UnityEngine::Rendering::CommandBuffer*, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x678b52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x678b554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::Invoke(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request,
                                                                                                                  ::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, cmd);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::BeginInvoke(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, request, cmd, callback, object);
}
inline void UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*
UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_cell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_Cell* (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_cell)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678af04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_cell", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_cell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_cell)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678af0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(),
                                                                                           { "set_cell", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State (
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678af14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_state", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(
    ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678af1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(),
                                                             { "set_state", {}, { ::i2c::type_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_scratchBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* (
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_scratchBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678af24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_scratchBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_scratchBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_scratchBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678af2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(),
                                                             { "set_scratchBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_scratchBufferLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout (
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_scratchBufferLayout)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x678af34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_scratchBufferLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_scratchBufferLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_scratchBufferLayout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x678af44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(),
                                                { "set_scratchBufferLayout", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_scenarioData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_scenarioData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678af50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_scenarioData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_scenarioData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(
    ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_scenarioData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678af58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(),
                                                             { "set_scenarioData", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_poolIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_poolIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678af60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_poolIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_poolIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_poolIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678af68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "set_poolIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_streamSharedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_streamSharedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678af70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_streamSharedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_streamSharedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_streamSharedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678af78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "set_streamSharedData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.IsStreaming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::IsStreaming)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6789f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "IsStreaming", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.Cancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Cancel)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x678af80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "Cancel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.WaitAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::WaitAll)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x678b088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "WaitAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.UpdateRequestState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*, ::by_ref<bool>)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::UpdateRequestState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x678b0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(),
                                         { "UpdateRequestState", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.UpdateState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::UpdateState)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x678b168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "UpdateState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678b234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x678b23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x678b2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x678b2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__cell_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cell_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__cell_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cell_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set__cell_k__BackingField(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cell_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__state_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state_k__BackingField;
}
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State const&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__state_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state_k__BackingField;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set__state_k__BackingField(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__scratchBuffer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scratchBuffer_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__scratchBuffer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scratchBuffer_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set__scratchBuffer_k__BackingField(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scratchBuffer_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__scratchBufferLayout_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scratchBufferLayout_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout const&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__scratchBufferLayout_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scratchBufferLayout_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set__scratchBufferLayout_k__BackingField(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scratchBufferLayout_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__scenarioData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenarioData_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__scenarioData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenarioData_k__BackingField;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set__scenarioData_k__BackingField(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scenarioData_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__poolIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__poolIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set__poolIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____poolIndex_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__streamSharedData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamSharedData_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get__streamSharedData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamSharedData_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set__streamSharedData_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____streamSharedData_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_onStreamingComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onStreamingComplete;
}
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_onStreamingComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onStreamingComplete;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set_onStreamingComplete(
    ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onStreamingComplete = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_cellDataStreamingRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellDataStreamingRequest;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_cellDataStreamingRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellDataStreamingRequest;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set_cellDataStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellDataStreamingRequest = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_cellOptionalDataStreamingRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellOptionalDataStreamingRequest;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_cellOptionalDataStreamingRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellOptionalDataStreamingRequest;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set_cellOptionalDataStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellOptionalDataStreamingRequest = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_cellSharedDataStreamingRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellSharedDataStreamingRequest;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_cellSharedDataStreamingRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellSharedDataStreamingRequest;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set_cellSharedDataStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellSharedDataStreamingRequest = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_cellProbeOcclusionDataStreamingRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellProbeOcclusionDataStreamingRequest;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_cellProbeOcclusionDataStreamingRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellProbeOcclusionDataStreamingRequest;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set_cellProbeOcclusionDataStreamingRequest(
    ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellProbeOcclusionDataStreamingRequest = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_brickStreamingRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___brickStreamingRequest;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_brickStreamingRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___brickStreamingRequest;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set_brickStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___brickStreamingRequest = value;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_supportStreamingRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportStreamingRequest;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_supportStreamingRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportStreamingRequest;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set_supportStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportStreamingRequest = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_bytesWritten() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytesWritten;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_get_bytesWritten() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytesWritten;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::__cordl_internal_set_bytesWritten(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bytesWritten = value;
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_cell() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_cell", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_cell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(),
                                                                                         { "set_cell", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_state() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_state", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_state(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(),
                                                           { "set_state", {}, { ::i2c::type_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_scratchBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_scratchBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_scratchBuffer(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(),
                                                           { "set_scratchBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_scratchBufferLayout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_scratchBufferLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_scratchBufferLayout(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(),
                                                           { "set_scratchBufferLayout", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_scenarioData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_scenarioData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_scenarioData(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(),
                                                           { "set_scenarioData", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_poolIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_poolIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_poolIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "set_poolIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_streamSharedData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "get_streamSharedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_streamSharedData(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "set_streamSharedData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::IsStreaming() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "IsStreaming", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Cancel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "Cancel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::WaitAll() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "WaitAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::UpdateRequestState(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* request,
                                                                                                  ::by_ref<bool> isComplete) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(),
                                       { "UpdateRequestState", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request, isComplete);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::UpdateState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "UpdateState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::ProbeReferenceVolume_CellStreamingRequest() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x678b5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c.__ctor_b__148_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::__ctor_b__148_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x678b5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(),
                                                                                           { "<.ctor>b__148_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c.__ctor_b__148_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::__ctor_b__148_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x678b5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(),
                                                             { "<.ctor>b__148_1", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678b5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_8)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678b5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_8", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_18
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_18)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x678b5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_18", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_19
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_19)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678b600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_19", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_25
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_25)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678b608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_25", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_29
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_29)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678b610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_29", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_36
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_36)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x678b618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_36", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_37
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_37)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678b624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_37", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_45
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_45)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x678b62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_45", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_46
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_46)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x678b638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_46", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_50
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_50)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678b644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_50", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_60
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_60)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x678b64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_60", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_61
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_61)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x678b6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_61", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_62
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_62)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x678b79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_62", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_63
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_63)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x678b83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_63", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_64)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x678b8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_64", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_65
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_65)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678b99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_65", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_66
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_66)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678b9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_66", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_70
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_70)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x678b9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_70", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_76
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_76)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x678ba80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_76", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_77
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_77)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x678bb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_77", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_78
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_78)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678bbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_78", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_79
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_79)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x678bbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_79", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_80
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_80)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x678bc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_80", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_81
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_81)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678bd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_81", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_82
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_82)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678bd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_82", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_87
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_87)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x678bd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_87", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_88
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_88)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x678bdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_88", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_89
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_89)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678bea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_89", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_90
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_90)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678bea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_90", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RenderFragmentationOverlay_b__222_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                                                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RenderFragmentationOverlay_b__222_0)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x678beb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(),
                                                                                           { "<RenderFragmentationOverlay>b__222_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._CleanupStreaming_b__283_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_CleanupStreaming_b__283_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x678c01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(),
                                                             { "<CleanupStreaming>b__283_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9(::UnityEngine::Rendering::ProbeReferenceVolume___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProbeReferenceVolume___c*, "<>9", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(
      std::forward<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(value));
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume___c* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProbeReferenceVolume___c*, "<>9", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__148_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, "<>9__148_0", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(
      std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__148_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, "<>9__148_0",
                                           ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__148_1(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*, "<>9__148_1",
                                    ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(
      std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__148_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*, "<>9__148_1",
                                           ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_1(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__219_1", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__219_1", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_8(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_8", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_8() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_8", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_18(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_18", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_18() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_18", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_19(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_19", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_19() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_19", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_25(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_25", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_25() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_25", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_29(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_29", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_29() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_29", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_36(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_36", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_36() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_36", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_37(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_37", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_37() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_37", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_45(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_45", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_45() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_45", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_46(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_46", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_46() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_46", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_50(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_50", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_50() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_50", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_60(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__219_60", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_60() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__219_60", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_61(::System::Action_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__219_61", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_61() {
  return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__219_61", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_62(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__219_62", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_62() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__219_62", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_63(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_63", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_63() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_63", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_64(::System::Action_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__219_64", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_64() {
  return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__219_64", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_65(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_65", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_65() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_65", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_66(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_66", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_66() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_66", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_70(::System::Func_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Object*>*, "<>9__219_70", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(
      std::forward<::System::Func_1<::System::Object*>*>(value));
}
inline ::System::Func_1<::System::Object*>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_70() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Object*>*, "<>9__219_70", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_76(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_76", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_76() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_76", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_77(::System::Action_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__219_77", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_77() {
  return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__219_77", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_78(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_78", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_78() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_78", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_79(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_79", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_79() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_79", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_80(::System::Action_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<float_t>*, "<>9__219_80", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_80() {
  return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "<>9__219_80", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_81(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_81", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_81() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_81", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_82(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_82", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_82() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_82", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_87(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_87", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_87() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_87", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_88(::System::Action_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<float_t>*, "<>9__219_88", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_88() {
  return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "<>9__219_88", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_89(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_89", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_89() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_89", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_90(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_90", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_90() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_90", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__222_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*,
                                    "<>9__222_0", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*
UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__222_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*,
                                           "<>9__222_0", ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__283_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*, "<>9__283_0",
                                    ::UnityEngine::Rendering::ProbeReferenceVolume___c*>(
      std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__283_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*, "<>9__283_0",
                                           ::UnityEngine::Rendering::ProbeReferenceVolume___c*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::__ctor_b__148_0(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(),
                                                                                         { "<.ctor>b__148_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::__ctor_b__148_1(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(),
                                                           { "<.ctor>b__148_1", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_8() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_8", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_18() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_18", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_19() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_19", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_25() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_25", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_29() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_29", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_36() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_36", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_37() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_37", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_45() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_45", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_46() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_46", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_50() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_50", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_60() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_60", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_61(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_61", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_62() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_62", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_63() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_63", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_64(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_64", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_65() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_65", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_66() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_66", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_70() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_70", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_76() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_76", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_77(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_77", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_78() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_78", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_79() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_79", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_80(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_80", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_81() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_81", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_82() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_82", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_87() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_87", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_88(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_88", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_89() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_89", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_90() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(), { "<RegisterDebug>b__219_90", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_RenderFragmentationOverlay_b__222_0(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(),
                                                                                         { "<RenderFragmentationOverlay>b__222_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_CleanupStreaming_b__283_0(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(),
                                                           { "<CleanupStreaming>b__283_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume___c* UnityEngine::Rendering::ProbeReferenceVolume___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume___c::ProbeReferenceVolume___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x678c034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0._HasActiveStreamingRequest_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*)>(&::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::_HasActiveStreamingRequest_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x678c038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0*>(),
                                                             { "<HasActiveStreamingRequest>b__0", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*& UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::__cordl_internal_get_cell() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cell;
}
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* const& UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::__cordl_internal_get_cell() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cell;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::__cordl_internal_set_cell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cell = value;
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::_HasActiveStreamingRequest_b__0(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0*>(),
                                                           { "<HasActiveStreamingRequest>b__0", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0* UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::ProbeReferenceVolume___c__DisplayClass314_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.BindAPVRuntimeResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::CommandBuffer*, bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::BindAPVRuntimeResources)> {
  constexpr static std::size_t size = 0xc3c;
  constexpr static std::size_t addrs = 0x676dbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "BindAPVRuntimeResources", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateShaderVariablesProbeVolumes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProbeVolumesOptions*, int32_t, bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::UpdateShaderVariablesProbeVolumes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x676e980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "UpdateShaderVariablesProbeVolumes",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumesOptions*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_globalBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_globalBounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x676f034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_globalBounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_globalBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Bounds)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::set_globalBounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x676f048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "set_globalBounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_isInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_isInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_enabledBySRP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_enabledBySRP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_enabledBySRP", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_vertexSampling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_vertexSampling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_vertexSampling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_hasUnloadedCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_hasUnloadedCells)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x676f074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_hasUnloadedCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_supportLightingScenarios
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_supportLightingScenarios)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_supportLightingScenarios", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_supportScenarioBlending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_supportScenarioBlending)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_supportScenarioBlending", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_gpuStreamingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_gpuStreamingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_gpuStreamingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_diskStreamingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_diskStreamingEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x676f0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_diskStreamingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_probeOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_probeOcclusion)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x676f104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_probeOcclusion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_skyOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_skyOcclusion)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x676ec38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_skyOcclusion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_skyOcclusionShadingDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_skyOcclusionShadingDirection)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x676ecc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_skyOcclusionShadingDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_useRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_useRenderingLayers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x676f18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_useRenderingLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_shBands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeVolumeSHBands (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_shBands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_shBands", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_currentBakingSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_currentBakingSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_currentBakingSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_lightingScenario
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_lightingScenario)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x676f1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_lightingScenario", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_lightingScenario
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW)>(&::UnityEngine::Rendering::ProbeReferenceVolume::set_lightingScenario)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "set_lightingScenario", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_otherScenario
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_otherScenario)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x676f2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_otherScenario", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_scenarioBlendingFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_scenarioBlendingFactor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x676f368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_scenarioBlendingFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_scenarioBlendingFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::set_scenarioBlendingFactor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x676f3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "set_scenarioBlendingFactor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetSceneGUID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::Rendering::ProbeReferenceVolume::GetSceneGUID)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x676f484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetSceneGUID", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetActiveScenario
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW, bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::SetActiveScenario)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x676f244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "SetActiveScenario", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.BlendLightingScenario
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW, float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::BlendLightingScenario)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x676f4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "BlendLightingScenario", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_memoryBudget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_memoryBudget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_memoryBudget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_perSceneDataList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* (
    ::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_perSceneDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_perSceneDataList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_perSceneDataList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::set_perSceneDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                         { "set_perSceneDataList", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RegisterPerSceneData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeVolumePerSceneData*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::RegisterPerSceneData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x676f5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "RegisterPerSceneData", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetActiveScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::SceneManagement::Scene)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetActiveScene)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x676f6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "SetActiveScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetActiveBakingSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeVolumeBakingSet*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetActiveBakingSet)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x676f8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "SetActiveBakingSet", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetBakingSetAsCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeVolumeBakingSet*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetBakingSetAsCurrent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x676fb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "SetBakingSetAsCurrent", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RegisterBakingSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeVolumePerSceneData*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::RegisterBakingSet)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67701c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "RegisterBakingSet", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnloadBakingSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::UnloadBakingSet)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x676fae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "UnloadBakingSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnregisterPerSceneData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeVolumePerSceneData*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UnregisterPerSceneData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6770280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "UnregisterPerSceneData", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.TryGetPerSceneData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW, ::by_ref<::UnityEngine::Rendering::ProbeVolumePerSceneData*>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::TryGetPerSceneData)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x676f74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                { "TryGetPerSceneData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeVolumePerSceneData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_indexFragmentationRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_indexFragmentationRate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6770320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_indexFragmentationRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume* (*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6770348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::by_ref<::UnityEngine::Rendering::ProbeVolumeSystemParameters>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::Initialize)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x67703a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "Initialize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeVolumeSystemParameters>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetEnableStateFromSRP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::SetEnableStateFromSRP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x677091c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "SetEnableStateFromSRP", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetVertexSamplingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::SetVertexSamplingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6770924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "SetVertexSamplingEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ForceSHBand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ForceSHBand)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x677092c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "ForceSHBand", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ForceNoDiskStreaming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::ForceNoDiskStreaming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6770c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ForceNoDiskStreaming", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::Cleanup)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6770c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetVideoMemoryCost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::GetVideoMemoryCost)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67710c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetVideoMemoryCost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RemoveCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::RemoveCell)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x677113c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "RemoveCell", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnloadCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UnloadCell)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x67712a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "UnloadCell", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnloadBlendingCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UnloadBlendingCell)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x677140c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "UnloadBlendingCell", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnloadAllCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::UnloadAllCells)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6771738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "UnloadAllCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnloadAllBlendingCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::UnloadAllBlendingCells)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6771824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "UnloadAllBlendingCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.AddCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::AddCell)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6771910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "AddCell", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.LoadCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::LoadCell)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x6771b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "LoadCell", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.LoadAllCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::LoadAllCells)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x67729c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "LoadAllCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeCellGlobalInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::ComputeCellGlobalInfo)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6772b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ComputeCellGlobalInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.AddPendingSceneLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW, ::UnityEngine::Rendering::ProbeVolumeBakingSet*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::AddPendingSceneLoading)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x6772cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "AddPendingSceneLoading", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.AddPendingSceneRemoval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW)>(&::UnityEngine::Rendering::ProbeReferenceVolume::AddPendingSceneRemoval)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6773134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "AddPendingSceneRemoval", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RemovePendingScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::RemovePendingScene)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x67732ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "RemovePendingScene", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.PerformPendingIndexChangeAndInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingIndexChangeAndInit)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x677341c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "PerformPendingIndexChangeAndInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetSubdivisionDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t, int32_t, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetSubdivisionDimensions)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x677018c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "SetSubdivisionDimensions", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.LoadCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::LoadCells)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6773760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "LoadCells", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.PerformPendingLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingLoading)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x6773830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "PerformPendingLoading", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.PerformPendingDeletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingDeletion)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6773c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "PerformPendingDeletion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeEntryMinMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>,
                                                                                                                ::System::ReadOnlySpan_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ComputeEntryMinMax)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x677216c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "ComputeEntryMinMax",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>>(),
                                                                                               ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetNumberOfBricksAtSubdiv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetNumberOfBricksAtSubdiv)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6772504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "GetNumberOfBricksAtSubdiv", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.PerformPendingOperations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingOperations)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6770260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "PerformPendingOperations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.InitializeGlobalIndirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::InitializeGlobalIndirection)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6773450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "InitializeGlobalIndirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.InitProbeReferenceVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::InitProbeReferenceVolume)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x676fc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "InitProbeReferenceVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_ctor)> {
  constexpr static std::size_t size = 0x858;
  constexpr static std::size_t addrs = 0x6777614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetRuntimeResources)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x676e838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetRuntimeResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetMaxSubdivision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::SetMaxSubdivision)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6773698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "SetMaxSubdivision", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::CellSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x67724d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.BrickSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::BrickSize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6777e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "BrickSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.MinBrickSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::MinBrickSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6777f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "MinBrickSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.MaxBrickSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::MaxBrickSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6777f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "MaxBrickSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ProbeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::ProbeOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6777f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ProbeOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetMaxSubdivision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::GetMaxSubdivision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6777f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetMaxSubdivision", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetMaxSubdivision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::GetMaxSubdivision)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6777f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetMaxSubdivision", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetDistanceBetweenProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetDistanceBetweenProbes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6777fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetDistanceBetweenProbes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.MinDistanceBetweenProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::MinDistanceBetweenProbes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6777fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "MinDistanceBetweenProbes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetGlobalIndirectionEntryMaxSubdiv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetGlobalIndirectionEntryMaxSubdiv)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6777fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetGlobalIndirectionEntryMaxSubdiv", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetEntrySubdivLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::GetEntrySubdivLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67724bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetEntrySubdivLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetEntrySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::GetEntrySize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6777fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetEntrySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.DataHasBeenLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::DataHasBeenLoaded)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x676ebe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "DataHasBeenLoaded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::Clear)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6778004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetSourceLocations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* (
    ::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t, int32_t, ::UnityEngine::Rendering::ProbeBrickPool_DataLocation)>(&::UnityEngine::Rendering::ProbeReferenceVolume::GetSourceLocations)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x677813c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                            { "GetSourceLocations", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateValidityTextureWithoutMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Texture*, ::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateValidityTextureWithoutMask)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x67782cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                         { "UpdateValidityTextureWithoutMask", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdatePool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData,
    ::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<uint16_t>, ::Unity::Collections::NativeArray_1<uint8_t>, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdatePool)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x6778478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "UpdatePool",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdatePool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*,
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdatePool)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x67789a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "UpdatePool",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateSharedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, ::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<uint16_t>,
    ::Unity::Collections::NativeArray_1<uint8_t>, int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::UpdateSharedData)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6778b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "UpdateSharedData",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.AddBlendingBricks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::AddBlendingBricks)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x6778e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "AddBlendingBricks", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ReservePoolChunks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::ReservePoolChunks)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67720ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                { "ReservePoolChunks",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                    ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ReleasePoolChunks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::ReleasePoolChunks)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x677285c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                { "ReleasePoolChunks", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdatePoolAndIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*,
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, int32_t, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdatePoolAndIndex)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x67795ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "UpdatePoolAndIndex",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.AddBricks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::AddBricks)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x67725d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "AddBricks", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateCellIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateCellIndex)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6779508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "UpdateCellIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ReleaseBricks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ReleaseBricks)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6771568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "ReleaseBricks", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateConstantBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProbeVolumeShadingParameters)>(&::UnityEngine::Rendering::ProbeReferenceVolume::UpdateConstantBuffer)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x676ed48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                            { "UpdateConstantBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeShadingParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.DeinitProbeReferenceVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::DeinitProbeReferenceVolume)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6770a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "DeinitProbeReferenceVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CleanupLoadedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::CleanupLoadedData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6770d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "CleanupLoadedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_probeVolumeDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeVolumeDebug* (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_probeVolumeDebug)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6779a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_probeVolumeDebug", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_subdivisionDebugColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_subdivisionDebugColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6779a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_subdivisionDebugColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_debugMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_debugMesh)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6779a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_debugMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RenderDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Camera*, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::RenderDebug)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6779c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "RenderDebug", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RenderDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::ProbeVolumesOptions*, ::UnityEngine::Texture*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::RenderDebug)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6779c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
            { "RenderDebug", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumesOptions*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.IsProbeSamplingDebugEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::IsProbeSamplingDebugEnabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x677aec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "IsProbeSamplingDebugEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetProbeSamplingDebugResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Camera*, ::by_ref<::UnityEngine::GraphicsBuffer*>, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Rendering::ProbeReferenceVolume::GetProbeSamplingDebugResources)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x677af34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                            { "GetProbeSamplingDebugResources",
                              {},
                              { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.TryCreateDebugRenderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::TryCreateDebugRenderData)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x677b064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "TryCreateDebugRenderData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.InitializeDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::InitializeDebug)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6770844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "InitializeDebug", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CleanupDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::CleanupDebug)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6770d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "CleanupDebug", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RegisterDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::RegisterDebug)> {
  constexpr static std::size_t size = 0x3724;
  constexpr static std::size_t addrs = 0x6773ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "RegisterDebug", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnregisterDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::UnregisterDebug)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6773da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "UnregisterDebug", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RenderFragmentationOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::DebugOverlay*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::RenderFragmentationOverlay)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x677b618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                         { "RenderFragmentationOverlay",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::DebugOverlay*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ShouldCullCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Plane>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ShouldCullCell)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x677b8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                            { "ShouldCullCell", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateDebugFromSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<::UnityEngine::Vector4>>, ::by_ref<int32_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateDebugFromSelection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x677bbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                { "UpdateDebugFromSelection", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetCellBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetCellBounds)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x677ba78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetCellBounds", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ShouldCullCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector4>, int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ShouldCullCell)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x677bc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                         { "ShouldCullCell", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.DrawProbeDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Camera*, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::DrawProbeDebug)> {
  constexpr static std::size_t size = 0x118c;
  constexpr static std::size_t addrs = 0x6779d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "DrawProbeDebug", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ResetDebugViewToMaxSubdiv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::ResetDebugViewToMaxSubdiv)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x677ccf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ResetDebugViewToMaxSubdiv", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ClearDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::ClearDebugData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6771698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ClearDebugData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CreateInstancedProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes* (
    ::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::CreateInstancedProbes)> {
  constexpr static std::size_t size = 0xde8;
  constexpr static std::size_t addrs = 0x677bf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "CreateInstancedProbes", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.OnClearLightingdata
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::OnClearLightingdata)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x677ce20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "OnClearLightingdata", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.EnableMaxCellStreaming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::EnableMaxCellStreaming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x677ce24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "EnableMaxCellStreaming", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetNumberOfCellsLoadedPerFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetNumberOfCellsLoadedPerFrame)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x677ce2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "SetNumberOfCellsLoadedPerFrame", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_loadMaxCellsPerFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_loadMaxCellsPerFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x677ce48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_loadMaxCellsPerFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_loadMaxCellsPerFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::set_loadMaxCellsPerFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x677ce50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "set_loadMaxCellsPerFrame", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_numberOfCellsLoadedPerFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_numberOfCellsLoadedPerFrame)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x677ce58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_numberOfCellsLoadedPerFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_numberOfCellsBlendedPerFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_numberOfCellsBlendedPerFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x677cec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_numberOfCellsBlendedPerFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_numberOfCellsBlendedPerFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::set_numberOfCellsBlendedPerFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x677cec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "set_numberOfCellsBlendedPerFrame", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_turnoverRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_turnoverRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x677ced8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_turnoverRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_turnoverRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::set_turnoverRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x677cee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "set_turnoverRate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.InitStreaming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::InitStreaming)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6770868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "InitStreaming", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CleanupStreaming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::CleanupStreaming)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6770e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "CleanupStreaming", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ScenarioBlendingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::ScenarioBlendingChanged)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x677d2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ScenarioBlendingChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeCellStreamingScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ComputeCellStreamingScore)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x677d394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                            { "ComputeCellStreamingScore",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeStreamingScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ComputeStreamingScore)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x677d5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "ComputeStreamingScore",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeBestToBeLoadedCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ComputeBestToBeLoadedCells)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x677d6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "ComputeBestToBeLoadedCells", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeStreamingScoreAndWorseLoadedCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ComputeStreamingScoreAndWorseLoadedCells)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x677da34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                { "ComputeStreamingScoreAndWorseLoadedCells", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeBlendingScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, float_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::ComputeBlendingScore)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x677dddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
            { "ComputeBlendingScore", {}, { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.TryLoadCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::by_ref<int32_t>, ::by_ref<int32_t>, ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::TryLoadCell)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x677decc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                { "TryLoadCell",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnloadBlendingCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UnloadBlendingCell)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x677dfe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "UnloadBlendingCell",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.TryLoadBlendingCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::TryLoadBlendingCell)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x677e064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "TryLoadBlendingCell",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeMinMaxStreamingScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::ComputeMinMaxStreamingScore)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x677e124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ComputeMinMaxStreamingScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateCellStreaming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateCellStreaming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x677e288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "UpdateCellStreaming", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateCellStreaming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::UnityEngine::Rendering::ProbeVolumesOptions*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::UpdateCellStreaming)> {
  constexpr static std::size_t size = 0xb64;
  constexpr static std::size_t addrs = 0x677e290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "UpdateCellStreaming",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumesOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.FindWorstBlendingCellToBeLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::FindWorstBlendingCellToBeLoaded)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x677fc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "FindWorstBlendingCellToBeLoaded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.BlendingComparer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::BlendingComparer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x677fd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
            { "BlendingComparer", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateBlendingCellStreaming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateBlendingCellStreaming)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x677f588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "UpdateBlendingCellStreaming", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.DefragComparer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::DefragComparer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x677fd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
            { "DefragComparer", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.StartIndexDefragmentation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::StartIndexDefragmentation)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x67728d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "StartIndexDefragmentation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateIndexDefragmentation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::UpdateIndexDefragmentation)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x677edf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "UpdateIndexDefragmentation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.OnStreamingComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*, ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::OnStreamingComplete)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x677fe1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
            { "OnStreamingComplete", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.OnBlendingStreamingComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*, ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::OnBlendingStreamingComplete)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x677fe98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                         { "OnBlendingStreamingComplete",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.PushDiskStreamingRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::StringW, int32_t, ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::PushDiskStreamingRequest)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x67793ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "PushDiskStreamingRequest",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CancelStreamingRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::CancelStreamingRequest)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x67714f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "CancelStreamingRequest", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CancelBlendingStreamingRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::CancelBlendingStreamingRequest)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x67716ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "CancelBlendingStreamingRequest", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ProcessDiskStreamingRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ProcessDiskStreamingRequest)> {
  constexpr static std::size_t size = 0xc1c;
  constexpr static std::size_t addrs = 0x677ff80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "ProcessDiskStreamingRequest", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.AllocateScratchBufferPoolIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::AllocateScratchBufferPoolIfNeeded)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6780b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "AllocateScratchBufferPoolIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateActiveRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateActiveRequests)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x677cff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "UpdateActiveRequests", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ProcessNewRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::ProcessNewRequests)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x677cf00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ProcessNewRequests", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateDiskStreaming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateDiskStreaming)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x677f1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "UpdateDiskStreaming", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.HasActiveStreamingRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::HasActiveStreamingRequest)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x677cd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                             { "HasActiveStreamingRequest", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.LogStreaming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW)>(&::UnityEngine::Rendering::ProbeReferenceVolume::LogStreaming)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6780c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "LogStreaming", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6780e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6780eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_3", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_4)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6780ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_5)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6780ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_5", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_6)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6780f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_6", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_7)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6780f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_7", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_9)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6780f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_9", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_10)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6780f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_10", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_11)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6780f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_11", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_12)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6780f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_12", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_13
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_13)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6780fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_13", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_14
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_14)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6780fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_14", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_15
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_15)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6780fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_15", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_16)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6780fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_16", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_17
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_17)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6781000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_17", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_20
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_20)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6781018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_20", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_21
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_21)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6781030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_21", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_22
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_22)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6781048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_22", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_23
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_23)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6781078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_23", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_24)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6781090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_24", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_26
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_26)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67810bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_26", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_27
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_27)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67810cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_27", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_28
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_28)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67810e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_28", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_30
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_30)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6781100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_30", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_31
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_31)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6781110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_31", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_32)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6781128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_32", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_33
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_33)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67811b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_33", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_34
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_34)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67811d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_34", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_35
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_35)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67811f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_35", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_38
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_38)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6781208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_38", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_39
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_39)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6781220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_39", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_40
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_40)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x678123c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_40", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_41
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_41)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6781254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_41", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_42
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_42)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6781368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_42", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_43
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_43)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6781388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_43", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_44
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_44)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67813a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_44", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_47
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_47)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67813b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_47", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_48
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_48)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67813d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_48", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_49
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_49)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67813f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_49", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_51
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_51)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6781408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_51", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_52
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_52)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6781420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_52", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_53
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_53)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x678143c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_53", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_54
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_54)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6781454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_54", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_55
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_55)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6781470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_55", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_56
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_56)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67814a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_56", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_57
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_57)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67814b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_57", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_58
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_58)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67814d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_58", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_59
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_59)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67814ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_59", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_67
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_67)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6781508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_67", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_68
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_68)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6781520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_68", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_69
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_69)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x678153c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_69", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_71
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_71)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x678155c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_71", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_72
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_72)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6781574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_72", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_73
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_73)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6781590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_73", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_74
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_74)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67815a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_74", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_g__RefreshScenarioNames_219_75
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_g__RefreshScenarioNames_219_75)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x67815c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                           { "<RegisterDebug>g__RefreshScenarioNames|219_75", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_83
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_83)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6781d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_83", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_84
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_84)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6781e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_84", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_85
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_85)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6781efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_85", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_86
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_86)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6781f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_86", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_EmptyIndexBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyIndexBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_EmptyIndexBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyIndexBuffer;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_EmptyIndexBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EmptyIndexBuffer = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_IsInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsInitialized;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_IsInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsInitialized;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_IsInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsInitialized = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_SupportScenarios() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportScenarios;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_SupportScenarios() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportScenarios;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_SupportScenarios(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportScenarios = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_SupportScenarioBlending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportScenarioBlending;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_SupportScenarioBlending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportScenarioBlending;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_SupportScenarioBlending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportScenarioBlending = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ForceNoDiskStreaming() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceNoDiskStreaming;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ForceNoDiskStreaming() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceNoDiskStreaming;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ForceNoDiskStreaming(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForceNoDiskStreaming = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_SupportDiskStreaming() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportDiskStreaming;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_SupportDiskStreaming() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportDiskStreaming;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_SupportDiskStreaming(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportDiskStreaming = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_SupportGPUStreaming() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportGPUStreaming;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_SupportGPUStreaming() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportGPUStreaming;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_SupportGPUStreaming(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportGPUStreaming = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_UseStreamingAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseStreamingAssets;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_UseStreamingAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseStreamingAssets;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_UseStreamingAssets(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseStreamingAssets = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_MinBrickSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinBrickSize;
}
constexpr float_t const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_MinBrickSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinBrickSize;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_MinBrickSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinBrickSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_MaxSubdivision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSubdivision;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_MaxSubdivision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSubdivision;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_MaxSubdivision(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxSubdivision = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ProbeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeOffset;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ProbeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeOffset;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ProbeOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProbeOffset = value;
}
constexpr ::UnityEngine::Rendering::ProbeBrickPool*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_Pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
constexpr ::UnityEngine::Rendering::ProbeBrickPool* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_Pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_Pool(::UnityEngine::Rendering::ProbeBrickPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Pool = value;
}
constexpr ::UnityEngine::Rendering::ProbeBrickIndex*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr ::UnityEngine::Rendering::ProbeBrickIndex* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_Index(::UnityEngine::Rendering::ProbeBrickIndex* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
constexpr ::UnityEngine::Rendering::ProbeGlobalIndirection*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellIndices;
}
constexpr ::UnityEngine::Rendering::ProbeGlobalIndirection* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellIndices;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_CellIndices(::UnityEngine::Rendering::ProbeGlobalIndirection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CellIndices = value;
}
constexpr ::UnityEngine::Rendering::ProbeBrickBlendingPool*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_BlendingPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendingPool;
}
constexpr ::UnityEngine::Rendering::ProbeBrickBlendingPool* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_BlendingPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendingPool;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_BlendingPool(::UnityEngine::Rendering::ProbeBrickBlendingPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlendingPool = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TmpSrcChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TmpSrcChunks;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TmpSrcChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TmpSrcChunks;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_TmpSrcChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TmpSrcChunks = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PositionOffsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionOffsets;
}
constexpr ::ArrayW<float_t> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PositionOffsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionOffsets;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_PositionOffsets(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PositionOffsets = value;
}
constexpr ::UnityEngine::Bounds& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CurrGlobalBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrGlobalBounds;
}
constexpr ::UnityEngine::Bounds const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CurrGlobalBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrGlobalBounds;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_CurrGlobalBounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrGlobalBounds = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_cells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cells;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_cells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cells;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_cells(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cells = value;
}
constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellPool;
}
constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CellPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellPool;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_CellPool(::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CellPool = value;
}
constexpr ::UnityEngine::Rendering::ProbeBrickPool_DataLocation& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TemporaryDataLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemporaryDataLocation;
}
constexpr ::UnityEngine::Rendering::ProbeBrickPool_DataLocation const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TemporaryDataLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemporaryDataLocation;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_TemporaryDataLocation(::UnityEngine::Rendering::ProbeBrickPool_DataLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TemporaryDataLocation = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TemporaryDataLocationMemCost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemporaryDataLocationMemCost;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TemporaryDataLocationMemCost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemporaryDataLocationMemCost;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_TemporaryDataLocationMemCost(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TemporaryDataLocationMemCost = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeSceneData*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_sceneData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneData;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeSceneData* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_sceneData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneData;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_sceneData(::UnityEngine::Rendering::ProbeVolumeSceneData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneData = value;
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_minLoadedCellPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minLoadedCellPos;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_minLoadedCellPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minLoadedCellPos;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_minLoadedCellPos(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minLoadedCellPos = value;
}
constexpr ::UnityEngine::Vector3Int& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_maxLoadedCellPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxLoadedCellPos;
}
constexpr ::UnityEngine::Vector3Int const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_maxLoadedCellPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxLoadedCellPos;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_maxLoadedCellPos(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxLoadedCellPos = value;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_retrieveExtraDataAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retrieveExtraDataAction;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_retrieveExtraDataAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retrieveExtraDataAction;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_retrieveExtraDataAction(::System::Action_1<::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___retrieveExtraDataAction = value;
}
constexpr ::System::Action*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_checksDuringBakeAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checksDuringBakeAction;
}
constexpr ::System::Action* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_checksDuringBakeAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checksDuringBakeAction;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_checksDuringBakeAction(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checksDuringBakeAction = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>, ::System::Collections::Generic::List_1<int32_t>*>>*&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PendingScenesToBeLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingScenesToBeLoaded;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,
                                                       ::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>, ::System::Collections::Generic::List_1<int32_t>*>>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PendingScenesToBeLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingScenesToBeLoaded;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_PendingScenesToBeLoaded(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>, ::System::Collections::Generic::List_1<int32_t>*>>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PendingScenesToBeLoaded = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PendingScenesToBeUnloaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingScenesToBeUnloaded;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PendingScenesToBeUnloaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PendingScenesToBeUnloaded;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_PendingScenesToBeUnloaded(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PendingScenesToBeUnloaded = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ActiveScenes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveScenes;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ActiveScenes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveScenes;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ActiveScenes(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveScenes = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CurrentBakingSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentBakingSet;
}
constexpr ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CurrentBakingSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentBakingSet;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_CurrentBakingSet(::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentBakingSet = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NeedLoadAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedLoadAsset;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NeedLoadAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedLoadAsset;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_NeedLoadAsset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedLoadAsset = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ProbeReferenceVolumeInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeReferenceVolumeInit;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ProbeReferenceVolumeInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeReferenceVolumeInit;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ProbeReferenceVolumeInit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProbeReferenceVolumeInit = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_EnabledBySRP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnabledBySRP;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_EnabledBySRP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnabledBySRP;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_EnabledBySRP(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnabledBySRP = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_VertexSampling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexSampling;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_VertexSampling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexSampling;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_VertexSampling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertexSampling = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NeedsIndexRebuild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedsIndexRebuild;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NeedsIndexRebuild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedsIndexRebuild;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_NeedsIndexRebuild(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedsIndexRebuild = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_HasChangedIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasChangedIndex;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_HasChangedIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasChangedIndex;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_HasChangedIndex(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasChangedIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CBShaderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CBShaderID;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_CBShaderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CBShaderID;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_CBShaderID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CBShaderID = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_MemoryBudget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MemoryBudget;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_MemoryBudget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MemoryBudget;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_MemoryBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MemoryBudget = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_BlendingMemoryBudget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendingMemoryBudget;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_BlendingMemoryBudget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendingMemoryBudget;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_BlendingMemoryBudget(::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlendingMemoryBudget = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_SHBands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SHBands;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_SHBands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SHBands;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_SHBands(::UnityEngine::Rendering::ProbeVolumeSHBands value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SHBands = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_clearAssetsOnVolumeClear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearAssetsOnVolumeClear;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_clearAssetsOnVolumeClear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearAssetsOnVolumeClear;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_clearAssetsOnVolumeClear(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearAssetsOnVolumeClear = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>*&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get__perSceneDataList_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perSceneDataList_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get__perSceneDataList_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perSceneDataList_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set__perSceneDataList_k__BackingField(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____perSceneDataList_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeDebug*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get__probeVolumeDebug_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeVolumeDebug_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeDebug* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get__probeVolumeDebug_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeVolumeDebug_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set__probeVolumeDebug_k__BackingField(::UnityEngine::Rendering::ProbeVolumeDebug* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____probeVolumeDebug_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get__subdivisionDebugColors_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subdivisionDebugColors_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Color> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get__subdivisionDebugColors_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subdivisionDebugColors_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set__subdivisionDebugColors_k__BackingField(::ArrayW<::UnityEngine::Color> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subdivisionDebugColors_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugMesh;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugMesh = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugItems;
}
constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugItems;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugItems(::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugItems = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugMaterial;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugProbeSamplingMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugProbeSamplingMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugProbeSamplingMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugProbeSamplingMesh;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugProbeSamplingMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugProbeSamplingMesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ProbeSamplingDebugMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeSamplingDebugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ProbeSamplingDebugMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeSamplingDebugMaterial;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ProbeSamplingDebugMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProbeSamplingDebugMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ProbeSamplingDebugMaterial02() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeSamplingDebugMaterial02;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ProbeSamplingDebugMaterial02() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeSamplingDebugMaterial02;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ProbeSamplingDebugMaterial02(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProbeSamplingDebugMaterial02 = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DisplayNumbersTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayNumbersTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DisplayNumbersTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayNumbersTexture;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DisplayNumbersTexture(::UnityW<::UnityEngine::Texture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisplayNumbersTexture = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugOffsetMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugOffsetMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugOffsetMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugOffsetMesh;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugOffsetMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugOffsetMesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugOffsetMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugOffsetMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugOffsetMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugOffsetMaterial;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugOffsetMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugOffsetMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugFragmentationMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFragmentationMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugFragmentationMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFragmentationMaterial;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugFragmentationMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugFragmentationMaterial = value;
}
constexpr ::ArrayW<::UnityEngine::Plane>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugFrustumPlanes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFrustumPlanes;
}
constexpr ::ArrayW<::UnityEngine::Plane> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugFrustumPlanes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFrustumPlanes;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugFrustumPlanes(::ArrayW<::UnityEngine::Plane> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugFrustumPlanes = value;
}
constexpr ::ArrayW<::UnityEngine::GUIContent*>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugScenarioNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScenarioNames;
}
constexpr ::ArrayW<::UnityEngine::GUIContent*> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugScenarioNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScenarioNames;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugScenarioNames(::ArrayW<::UnityEngine::GUIContent*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugScenarioNames = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugScenarioValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScenarioValues;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugScenarioValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScenarioValues;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugScenarioValues(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugScenarioValues = value;
}
constexpr ::StringW& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugActiveSceneGUID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugActiveSceneGUID;
}
constexpr ::StringW const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugActiveSceneGUID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugActiveSceneGUID;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugActiveSceneGUID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugActiveSceneGUID = value;
}
constexpr ::StringW& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugActiveScenario() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugActiveScenario;
}
constexpr ::StringW const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugActiveScenario() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugActiveScenario;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugActiveScenario(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugActiveScenario = value;
}
constexpr ::UnityEngine::Rendering::DebugUI_EnumField*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugScenarioField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScenarioField;
}
constexpr ::UnityEngine::Rendering::DebugUI_EnumField* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugScenarioField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScenarioField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugScenarioField(::UnityEngine::Rendering::DebugUI_EnumField* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugScenarioField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Bounds, ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>*&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_realtimeSubdivisionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realtimeSubdivisionInfo;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Bounds, ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_realtimeSubdivisionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realtimeSubdivisionInfo;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_realtimeSubdivisionInfo(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Bounds, ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___realtimeSubdivisionInfo = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_MaxSubdivVisualizedIsMaxAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSubdivVisualizedIsMaxAvailable;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_MaxSubdivVisualizedIsMaxAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSubdivVisualizedIsMaxAvailable;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_MaxSubdivVisualizedIsMaxAvailable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxSubdivVisualizedIsMaxAvailable = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_LoadMaxCellsPerFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadMaxCellsPerFrame;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_LoadMaxCellsPerFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadMaxCellsPerFrame;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_LoadMaxCellsPerFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LoadMaxCellsPerFrame = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NumberOfCellsLoadedPerFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumberOfCellsLoadedPerFrame;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NumberOfCellsLoadedPerFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumberOfCellsLoadedPerFrame;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_NumberOfCellsLoadedPerFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NumberOfCellsLoadedPerFrame = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NumberOfCellsBlendedPerFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumberOfCellsBlendedPerFrame;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_NumberOfCellsBlendedPerFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumberOfCellsBlendedPerFrame;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_NumberOfCellsBlendedPerFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NumberOfCellsBlendedPerFrame = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TurnoverRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TurnoverRate;
}
constexpr float_t const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TurnoverRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TurnoverRate;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_TurnoverRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TurnoverRate = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_LoadedCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadedCells;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_LoadedCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadedCells;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_LoadedCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LoadedCells = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ToBeLoadedCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToBeLoadedCells;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ToBeLoadedCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToBeLoadedCells;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ToBeLoadedCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ToBeLoadedCells = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_WorseLoadedCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorseLoadedCells;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_WorseLoadedCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorseLoadedCells;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_WorseLoadedCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorseLoadedCells = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_BestToBeLoadedCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BestToBeLoadedCells;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_BestToBeLoadedCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BestToBeLoadedCells;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_BestToBeLoadedCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BestToBeLoadedCells = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TempCellToLoadList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempCellToLoadList;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TempCellToLoadList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempCellToLoadList;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_TempCellToLoadList(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TempCellToLoadList = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TempCellToUnloadList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempCellToUnloadList;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TempCellToUnloadList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempCellToUnloadList;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_TempCellToUnloadList(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TempCellToUnloadList = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_LoadedBlendingCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadedBlendingCells;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_LoadedBlendingCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadedBlendingCells;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_LoadedBlendingCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LoadedBlendingCells = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ToBeLoadedBlendingCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToBeLoadedBlendingCells;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ToBeLoadedBlendingCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToBeLoadedBlendingCells;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ToBeLoadedBlendingCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ToBeLoadedBlendingCells = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TempBlendingCellToLoadList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempBlendingCellToLoadList;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TempBlendingCellToLoadList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempBlendingCellToLoadList;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_TempBlendingCellToLoadList(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TempBlendingCellToLoadList = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TempBlendingCellToUnloadList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempBlendingCellToUnloadList;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TempBlendingCellToUnloadList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempBlendingCellToUnloadList;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_TempBlendingCellToUnloadList(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TempBlendingCellToUnloadList = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_FrozenCameraPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrozenCameraPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_FrozenCameraPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrozenCameraPosition;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_FrozenCameraPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FrozenCameraPosition = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_FrozenCameraDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrozenCameraDirection;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_FrozenCameraDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrozenCameraDirection;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_FrozenCameraDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FrozenCameraDirection = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_IndexDefragmentationInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexDefragmentationInProgress;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_IndexDefragmentationInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexDefragmentationInProgress;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_IndexDefragmentationInProgress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndexDefragmentationInProgress = value;
}
constexpr ::UnityEngine::Rendering::ProbeBrickIndex*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DefragIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefragIndex;
}
constexpr ::UnityEngine::Rendering::ProbeBrickIndex* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DefragIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefragIndex;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DefragIndex(::UnityEngine::Rendering::ProbeBrickIndex* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefragIndex = value;
}
constexpr ::UnityEngine::Rendering::ProbeGlobalIndirection*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DefragCellIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefragCellIndices;
}
constexpr ::UnityEngine::Rendering::ProbeGlobalIndirection* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DefragCellIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefragCellIndices;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DefragCellIndices(::UnityEngine::Rendering::ProbeGlobalIndirection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefragCellIndices = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_IndexDefragCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexDefragCells;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_IndexDefragCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexDefragCells;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_IndexDefragCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndexDefragCells = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TempIndexDefragCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempIndexDefragCells;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_TempIndexDefragCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempIndexDefragCells;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_TempIndexDefragCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TempIndexDefragCells = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_minStreamingScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minStreamingScore;
}
constexpr float_t const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_minStreamingScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minStreamingScore;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_minStreamingScore(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minStreamingScore = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_maxStreamingScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxStreamingScore;
}
constexpr float_t const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_maxStreamingScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxStreamingScore;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_maxStreamingScore(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxStreamingScore = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_StreamingQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreamingQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_StreamingQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreamingQueue;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_StreamingQueue(
    ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StreamingQueue = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ActiveStreamingRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveStreamingRequests;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ActiveStreamingRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveStreamingRequests;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ActiveStreamingRequests(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveStreamingRequests = value;
}
constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_StreamingRequestsPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreamingRequestsPool;
}
constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_StreamingRequestsPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreamingRequestsPool;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_StreamingRequestsPool(
    ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StreamingRequestsPool = value;
}
constexpr bool& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DiskStreamingUseCompute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DiskStreamingUseCompute;
}
constexpr bool const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DiskStreamingUseCompute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DiskStreamingUseCompute;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DiskStreamingUseCompute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DiskStreamingUseCompute = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ScratchBufferPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScratchBufferPool;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool* const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_ScratchBufferPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScratchBufferPool;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_ScratchBufferPool(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScratchBufferPool = value;
}
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_OnStreamingComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnStreamingComplete;
}
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_OnStreamingComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnStreamingComplete;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_OnStreamingComplete(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnStreamingComplete = value;
}
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_OnBlendingStreamingComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnBlendingStreamingComplete;
}
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_OnBlendingStreamingComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnBlendingStreamingComplete;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_OnBlendingStreamingComplete(
    ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnBlendingStreamingComplete = value;
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::setStaticF_defaultLightingScenario(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "defaultLightingScenario", ::UnityEngine::Rendering::ProbeReferenceVolume*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume::getStaticF_defaultLightingScenario() {
  return ::cordl_internals::getStaticField<::StringW, "defaultLightingScenario", ::UnityEngine::Rendering::ProbeReferenceVolume*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::setStaticF__instance(::UnityEngine::Rendering::ProbeReferenceVolume* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProbeReferenceVolume*, "_instance", ::UnityEngine::Rendering::ProbeReferenceVolume*>(
      std::forward<::UnityEngine::Rendering::ProbeReferenceVolume*>(value));
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume* UnityEngine::Rendering::ProbeReferenceVolume::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProbeReferenceVolume*, "_instance", ::UnityEngine::Rendering::ProbeReferenceVolume*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::setStaticF_k_DebugPanelName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DebugPanelName", ::UnityEngine::Rendering::ProbeReferenceVolume*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume::getStaticF_k_DebugPanelName() {
  return ::cordl_internals::getStaticField<::StringW, "k_DebugPanelName", ::UnityEngine::Rendering::ProbeReferenceVolume*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::setStaticF_probeSamplingDebugData(::UnityEngine::Rendering::ProbeSamplingDebugData* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProbeSamplingDebugData*, "probeSamplingDebugData", ::UnityEngine::Rendering::ProbeReferenceVolume*>(
      std::forward<::UnityEngine::Rendering::ProbeSamplingDebugData*>(value));
}
inline ::UnityEngine::Rendering::ProbeSamplingDebugData* UnityEngine::Rendering::ProbeReferenceVolume::getStaticF_probeSamplingDebugData() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProbeSamplingDebugData*, "probeSamplingDebugData", ::UnityEngine::Rendering::ProbeReferenceVolume*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::setStaticF_s_BoundsArray(::ArrayW<::UnityEngine::Vector4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector4>, "s_BoundsArray", ::UnityEngine::Rendering::ProbeReferenceVolume*>(std::forward<::ArrayW<::UnityEngine::Vector4>>(value));
}
inline ::ArrayW<::UnityEngine::Vector4> UnityEngine::Rendering::ProbeReferenceVolume::getStaticF_s_BoundsArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector4>, "s_BoundsArray", ::UnityEngine::Rendering::ProbeReferenceVolume*>();
}
inline void
UnityEngine::Rendering::ProbeReferenceVolume::setStaticF_s_BlendingComparer(::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, "s_BlendingComparer",
                                    ::UnityEngine::Rendering::ProbeReferenceVolume*>(
      std::forward<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>(value));
}
inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* UnityEngine::Rendering::ProbeReferenceVolume::getStaticF_s_BlendingComparer() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, "s_BlendingComparer",
                                           ::UnityEngine::Rendering::ProbeReferenceVolume*>();
}
inline void
UnityEngine::Rendering::ProbeReferenceVolume::setStaticF_s_DefragComparer(::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, "s_DefragComparer",
                                    ::UnityEngine::Rendering::ProbeReferenceVolume*>(
      std::forward<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>(value));
}
inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* UnityEngine::Rendering::ProbeReferenceVolume::getStaticF_s_DefragComparer() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, "s_DefragComparer",
                                           ::UnityEngine::Rendering::ProbeReferenceVolume*>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::BindAPVRuntimeResources(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, bool isProbeVolumeEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "BindAPVRuntimeResources", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmdBuffer, isProbeVolumeEnabled);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::UpdateShaderVariablesProbeVolumes(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                            ::UnityEngine::Rendering::ProbeVolumesOptions* probeVolumeOptions, int32_t taaFrameIndex,
                                                                                            bool supportRenderingLayers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "UpdateShaderVariablesProbeVolumes",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumesOptions*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmd, probeVolumeOptions, taaFrameIndex, supportRenderingLayers);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::ProbeReferenceVolume::get_globalBounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_globalBounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_globalBounds(::UnityEngine::Bounds value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "set_globalBounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_isInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_enabledBySRP() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_enabledBySRP", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_vertexSampling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_vertexSampling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_hasUnloadedCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_hasUnloadedCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_supportLightingScenarios() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_supportLightingScenarios", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_supportScenarioBlending() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_supportScenarioBlending", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_gpuStreamingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_gpuStreamingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_diskStreamingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_diskStreamingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_probeOcclusion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_probeOcclusion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_skyOcclusion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_skyOcclusion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_skyOcclusionShadingDirection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_skyOcclusionShadingDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_useRenderingLayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_useRenderingLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeSHBands UnityEngine::Rendering::ProbeReferenceVolume::get_shBands() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_shBands", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeSHBands>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> UnityEngine::Rendering::ProbeReferenceVolume::get_currentBakingSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_currentBakingSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume::get_lightingScenario() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_lightingScenario", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_lightingScenario(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "set_lightingScenario", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume::get_otherScenario() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_otherScenario", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::get_scenarioBlendingFactor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_scenarioBlendingFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_scenarioBlendingFactor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "set_scenarioBlendingFactor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume::GetSceneGUID(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetSceneGUID", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, scene);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetActiveScenario(::StringW scenario, bool verbose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "SetActiveScenario", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenario, verbose);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::BlendLightingScenario(::StringW otherScenario, float_t blendingFactor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "BlendLightingScenario", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherScenario, blendingFactor);
}
inline ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget UnityEngine::Rendering::ProbeReferenceVolume::get_memoryBudget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_memoryBudget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* UnityEngine::Rendering::ProbeReferenceVolume::get_perSceneDataList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_perSceneDataList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_perSceneDataList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                       { "set_perSceneDataList", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RegisterPerSceneData(::UnityEngine::Rendering::ProbeVolumePerSceneData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "RegisterPerSceneData", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetActiveScene(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "SetActiveScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetActiveBakingSet(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "SetActiveBakingSet", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bakingSet);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetBakingSetAsCurrent(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "SetBakingSetAsCurrent", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bakingSet);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RegisterBakingSet(::UnityEngine::Rendering::ProbeVolumePerSceneData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "RegisterBakingSet", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnloadBakingSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "UnloadBakingSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnregisterPerSceneData(::UnityEngine::Rendering::ProbeVolumePerSceneData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "UnregisterPerSceneData", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumePerSceneData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::TryGetPerSceneData(::StringW sceneGUID, ::by_ref<::UnityEngine::Rendering::ProbeVolumePerSceneData*> perSceneData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                              { "TryGetPerSceneData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeVolumePerSceneData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneGUID, perSceneData);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::get_indexFragmentationRate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_indexFragmentationRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume* UnityEngine::Rendering::ProbeReferenceVolume::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::Initialize(::by_ref<::UnityEngine::Rendering::ProbeVolumeSystemParameters> parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeVolumeSystemParameters>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetEnableStateFromSRP(bool srpEnablesPV) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "SetEnableStateFromSRP", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srpEnablesPV);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetVertexSamplingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "SetVertexSamplingEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ForceSHBand(::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ForceSHBand", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shBands);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ForceNoDiskStreaming(bool state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ForceNoDiskStreaming", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::GetVideoMemoryCost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetVideoMemoryCost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RemoveCell(int32_t cellIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "RemoveCell", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cellIndex);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnloadCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "UnloadCell", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnloadBlendingCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "UnloadBlendingCell", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnloadAllCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "UnloadAllCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnloadAllBlendingCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "UnloadAllBlendingCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::AddCell(int32_t cellIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "AddCell", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cellIndex);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::LoadCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, bool ignoreErrorLog) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "LoadCell", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cell, ignoreErrorLog);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::LoadAllCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "LoadAllCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeCellGlobalInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ComputeCellGlobalInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::AddPendingSceneLoading(::StringW sceneGUID, ::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "AddPendingSceneLoading", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneGUID, bakingSet);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::AddPendingSceneRemoval(::StringW sceneGUID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "AddPendingSceneRemoval", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneGUID);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RemovePendingScene(::StringW sceneGUID, ::System::Collections::Generic::List_1<int32_t>* cellList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "RemovePendingScene", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneGUID, cellList);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingIndexChangeAndInit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "PerformPendingIndexChangeAndInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetSubdivisionDimensions(float_t minBrickSize, int32_t maxSubdiv, ::UnityEngine::Vector3 offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "SetSubdivisionDimensions", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minBrickSize, maxSubdiv, offset);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::LoadCells(::System::Collections::Generic::List_1<int32_t>* cellIndices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "LoadCells", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cellIndices);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingLoading() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "PerformPendingLoading", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingDeletion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "PerformPendingDeletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeEntryMinMax(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo> entryInfo,
                                                                             ::System::ReadOnlySpan_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> bricks) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "ComputeEntryMinMax",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>>(),
                                                                                             ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entryInfo, bricks);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::GetNumberOfBricksAtSubdiv(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo entryInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "GetNumberOfBricksAtSubdiv", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, entryInfo);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingOperations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "PerformPendingOperations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::InitializeGlobalIndirection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "InitializeGlobalIndirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::InitProbeReferenceVolume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "InitProbeReferenceVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources UnityEngine::Rendering::ProbeReferenceVolume::GetRuntimeResources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetRuntimeResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetMaxSubdivision(int32_t maxSubdivision) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "SetMaxSubdivision", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxSubdivision);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::CellSize(int32_t subdivisionLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, subdivisionLevel);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::BrickSize(int32_t subdivisionLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "BrickSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, subdivisionLevel);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::MinBrickSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "MinBrickSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::MaxBrickSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "MaxBrickSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::ProbeReferenceVolume::ProbeOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ProbeOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::GetMaxSubdivision() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetMaxSubdivision", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::GetMaxSubdivision(float_t multiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetMaxSubdivision", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, multiplier);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::GetDistanceBetweenProbes(int32_t subdivisionLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetDistanceBetweenProbes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, subdivisionLevel);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::MinDistanceBetweenProbes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "MinDistanceBetweenProbes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::GetGlobalIndirectionEntryMaxSubdiv() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetGlobalIndirectionEntryMaxSubdiv", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::GetEntrySubdivLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetEntrySubdivLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::GetEntrySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetEntrySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::DataHasBeenLoaded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "DataHasBeenLoaded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*
UnityEngine::Rendering::ProbeReferenceVolume::GetSourceLocations(int32_t count, int32_t chunkSize, ::UnityEngine::Rendering::ProbeBrickPool_DataLocation dataLoc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                          { "GetSourceLocations", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(this, ___internal_method, count, chunkSize, dataLoc);
}
template <typename T> inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateDataLocationTexture(::UnityEngine::Texture* output, ::Unity::Collections::NativeArray_1<T> input) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                          { "UpdateDataLocationTexture", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, input);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateValidityTextureWithoutMask(::UnityEngine::Texture* output, ::Unity::Collections::NativeArray_1<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                       { "UpdateValidityTextureWithoutMask", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, input);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdatePool(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList,
                                                                     ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData data,
                                                                     ::Unity::Collections::NativeArray_1<uint8_t> validityNeighMaskData,
                                                                     ::Unity::Collections::NativeArray_1<uint16_t> skyOcclusionL0L1Data,
                                                                     ::Unity::Collections::NativeArray_1<uint8_t> skyShadingDirectionIndices, int32_t chunkIndex, int32_t poolIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "UpdatePool",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkList, data, validityNeighMaskData, skyOcclusionL0L1Data, skyShadingDirectionIndices, chunkIndex, poolIndex);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdatePool(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                     ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList,
                                                                     ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* dataBuffer,
                                                                     ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout layout, int32_t poolIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "UpdatePool",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, chunkList, dataBuffer, layout, poolIndex);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateSharedData(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList,
                                                                           ::Unity::Collections::NativeArray_1<uint8_t> validityNeighMaskData,
                                                                           ::Unity::Collections::NativeArray_1<uint16_t> skyOcclusionData,
                                                                           ::Unity::Collections::NativeArray_1<uint8_t> skyShadingDirectionIndices, int32_t chunkIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "UpdateSharedData",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkList, validityNeighMaskData, skyOcclusionData, skyShadingDirectionIndices, chunkIndex);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::AddBlendingBricks(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "AddBlendingBricks", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cell);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::ReservePoolChunks(int32_t brickCount,
                                                                            ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList,
                                                                            bool ignoreErrorLog) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                              { "ReservePoolChunks",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>(),
                                                  ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, brickCount, chunkList, ignoreErrorLog);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ReleasePoolChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                              { "ReleasePoolChunks", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkList);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdatePoolAndIndex(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell,
                                                                             ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* dataBuffer,
                                                                             ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout layout, int32_t poolIndex,
                                                                             ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "UpdatePoolAndIndex",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell, dataBuffer, layout, poolIndex, cmd);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::AddBricks(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "AddBricks", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateCellIndex(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "UpdateCellIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ReleaseBricks(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "ReleaseBricks", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateConstantBuffer(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProbeVolumeShadingParameters parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                          { "UpdateConstantBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeShadingParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, parameters);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::DeinitProbeReferenceVolume() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "DeinitProbeReferenceVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::CleanupLoadedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "CleanupLoadedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeDebug* UnityEngine::Rendering::ProbeReferenceVolume::get_probeVolumeDebug() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_probeVolumeDebug", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeDebug*>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Rendering::ProbeReferenceVolume::get_subdivisionDebugColors() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_subdivisionDebugColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::ProbeReferenceVolume::get_debugMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_debugMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RenderDebug(::UnityEngine::Camera* camera, ::UnityEngine::Texture* exposureTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "RenderDebug", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, exposureTexture);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RenderDebug(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::ProbeVolumesOptions* options, ::UnityEngine::Texture* exposureTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
          { "RenderDebug", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumesOptions*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, options, exposureTexture);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::IsProbeSamplingDebugEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "IsProbeSamplingDebugEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::GetProbeSamplingDebugResources(::UnityEngine::Camera* camera, ::by_ref<::UnityEngine::GraphicsBuffer*> resultBuffer,
                                                                                         ::by_ref<::UnityEngine::Vector2> coords) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                          { "GetProbeSamplingDebugResources",
                            {},
                            { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera, resultBuffer, coords);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::TryCreateDebugRenderData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "TryCreateDebugRenderData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::InitializeDebug() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "InitializeDebug", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::CleanupDebug() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "CleanupDebug", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::ProbeReferenceVolume::DebugCellIndexChanged(::UnityEngine::Rendering::DebugUI_Field_1<T>* field, T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                              { "DebugCellIndexChanged", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RegisterDebug() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "RegisterDebug", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnregisterDebug(bool destroyPanel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "UnregisterDebug", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destroyPanel);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RenderFragmentationOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorBuffer,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthBuffer,
                                                                                     ::UnityEngine::Rendering::DebugOverlay* debugOverlay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                       { "RenderFragmentationOverlay",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::DebugOverlay*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, colorBuffer, depthBuffer, debugOverlay);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::ShouldCullCell(::UnityEngine::Vector3 cellPosition, ::UnityEngine::Transform* cameraTransform, ::ArrayW<::UnityEngine::Plane> frustumPlanes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                          { "ShouldCullCell", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cellPosition, cameraTransform, frustumPlanes);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateDebugFromSelection(::by_ref<::ArrayW<::UnityEngine::Vector4>> _AdjustmentVolumeBounds, ::by_ref<int32_t> _AdjustmentVolumeCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "UpdateDebugFromSelection", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _AdjustmentVolumeBounds, _AdjustmentVolumeCount);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::ProbeReferenceVolume::GetCellBounds(::UnityEngine::Vector3 cellPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "GetCellBounds", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, cellPosition);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::ShouldCullCell(::UnityEngine::Vector3 cellPosition, ::ArrayW<::UnityEngine::Vector4> adjustmentVolumeBounds, int32_t adjustmentVolumeCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                              { "ShouldCullCell", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cellPosition, adjustmentVolumeBounds, adjustmentVolumeCount);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::DrawProbeDebug(::UnityEngine::Camera* camera, ::UnityEngine::Texture* exposureTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "DrawProbeDebug", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, exposureTexture);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ResetDebugViewToMaxSubdiv() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ResetDebugViewToMaxSubdiv", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ClearDebugData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ClearDebugData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*
UnityEngine::Rendering::ProbeReferenceVolume::CreateInstancedProbes(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "CreateInstancedProbes", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::OnClearLightingdata() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "OnClearLightingdata", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::EnableMaxCellStreaming(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "EnableMaxCellStreaming", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetNumberOfCellsLoadedPerFrame(int32_t numberOfCells) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "SetNumberOfCellsLoadedPerFrame", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfCells);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_loadMaxCellsPerFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_loadMaxCellsPerFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_loadMaxCellsPerFrame(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "set_loadMaxCellsPerFrame", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::get_numberOfCellsLoadedPerFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_numberOfCellsLoadedPerFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::get_numberOfCellsBlendedPerFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_numberOfCellsBlendedPerFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_numberOfCellsBlendedPerFrame(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "set_numberOfCellsBlendedPerFrame", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::get_turnoverRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "get_turnoverRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_turnoverRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "set_turnoverRate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::InitStreaming() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "InitStreaming", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::CleanupStreaming() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "CleanupStreaming", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ScenarioBlendingChanged(bool scenarioChanged) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ScenarioBlendingChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenarioChanged);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeCellStreamingScore(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, ::UnityEngine::Vector3 cameraPosition,
                                                                                    ::UnityEngine::Vector3 cameraDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                          { "ComputeCellStreamingScore",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cell, cameraPosition, cameraDirection);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeStreamingScore(::UnityEngine::Vector3 cameraPosition, ::UnityEngine::Vector3 cameraDirection,
                                                                                ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* cells) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "ComputeStreamingScore",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraPosition, cameraDirection, cells);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeBestToBeLoadedCells(::UnityEngine::Vector3 cameraPosition, ::UnityEngine::Vector3 cameraDirection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "ComputeBestToBeLoadedCells", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraPosition, cameraDirection);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeStreamingScoreAndWorseLoadedCells(::UnityEngine::Vector3 cameraPosition, ::UnityEngine::Vector3 cameraDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                              { "ComputeStreamingScoreAndWorseLoadedCells", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraPosition, cameraDirection);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeBlendingScore(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* cells,
                                                                               float_t worstScore) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
          { "ComputeBlendingScore", {}, { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cells, worstScore);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::TryLoadCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, ::by_ref<int32_t> shBudget, ::by_ref<int32_t> indexBudget,
                                                                      ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* loadedCells) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                              { "TryLoadCell",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cell, shBudget, indexBudget, loadedCells);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnloadBlendingCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell,
                                                                             ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* unloadedCells) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "UnloadBlendingCell",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell, unloadedCells);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::TryLoadBlendingCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell,
                                                                              ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* loadedCells) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "TryLoadBlendingCell",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cell, loadedCells);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeMinMaxStreamingScore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ComputeMinMaxStreamingScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateCellStreaming(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "UpdateCellStreaming", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, camera);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateCellStreaming(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera,
                                                                              ::UnityEngine::Rendering::ProbeVolumesOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "UpdateCellStreaming",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumesOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, camera, options);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::FindWorstBlendingCellToBeLoaded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "FindWorstBlendingCellToBeLoaded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::BlendingComparer(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* a, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
          { "BlendingComparer", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateBlendingCellStreaming(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "UpdateBlendingCellStreaming", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::DefragComparer(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* a, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                       { "DefragComparer", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::StartIndexDefragmentation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "StartIndexDefragmentation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateIndexDefragmentation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "UpdateIndexDefragmentation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::OnStreamingComplete(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request,
                                                                              ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
          { "OnStreamingComplete", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, cmd);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::OnBlendingStreamingComplete(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request,
                                                                                      ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                       { "OnBlendingStreamingComplete",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, cmd);
}
inline void
UnityEngine::Rendering::ProbeReferenceVolume::PushDiskStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, ::StringW scenario, int32_t poolIndex,
                                                                       ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* onStreamingComplete) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "PushDiskStreamingRequest",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell, scenario, poolIndex, onStreamingComplete);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::CancelStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "CancelStreamingRequest", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::CancelBlendingStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "CancelBlendingStreamingRequest", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::ProcessDiskStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "ProcessDiskStreamingRequest", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::AllocateScratchBufferPoolIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "AllocateScratchBufferPoolIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateActiveRequests(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "UpdateActiveRequests", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ProcessNewRequests() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "ProcessNewRequests", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateDiskStreaming(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                                                         { "UpdateDiskStreaming", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::HasActiveStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                                                           { "HasActiveStreamingRequest", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::LogStreaming(::StringW log) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "LogStreaming", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log);
}
template <typename T> inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_g__RefreshDebug_219_0(::UnityEngine::Rendering::DebugUI_Field_1<T>* field, T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(),
                          { "<RegisterDebug>g__RefreshDebug|219_0", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_3(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_3", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_5(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_5", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_6() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_6", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_7(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_7", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_9() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_9", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_10(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_10", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_11() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_11", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_12() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_12", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_13(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_13", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_14() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_14", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_15(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_15", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_16() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_16", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_17(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_17", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_20() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_20", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_21(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_21", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_22() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_22", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_23() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_23", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_24(int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_24", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_26() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_26", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_27() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_27", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_28(int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_28", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_30() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_30", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_31() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_31", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_32(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_32", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_33() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_33", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_34() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_34", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_35(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_35", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_38() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_38", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_39(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_39", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_40() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_40", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_41(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_41", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_42() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_42", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_43() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_43", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_44(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_44", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_47() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_47", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_48() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_48", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_49(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_49", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_51() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_51", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_52(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_52", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_53() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_53", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_54(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_54", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_55() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_55", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_56() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_56", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_57(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_57", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_58() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_58", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_59(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_59", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_67() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_67", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_68(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_68", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_69() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_69", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_71() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_71", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_72(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_72", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_73() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_73", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_74(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_74", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_g__RefreshScenarioNames_219_75(::StringW guid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>g__RefreshScenarioNames|219_75", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guid);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_83() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_83", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_84(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_84", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_85() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_85", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_86(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeReferenceVolume*>(), { "<RegisterDebug>b__219_86", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume* UnityEngine::Rendering::ProbeReferenceVolume::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeReferenceVolume*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume::ProbeReferenceVolume() {}
