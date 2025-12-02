#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommandArray_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommand_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickPool_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBlendingTextureMemoryBudget_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
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
#include "UnityEngine/zzzz__GUIContent_def.hpp"
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
  ::cordl_internals::setStaticField<int32_t, "_APVResIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResCellIndices(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResCellIndices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResCellIndices() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResCellIndices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL0_L1Rx(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL0_L1Rx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL0_L1Rx() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL0_L1Rx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL1G_L1Ry(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL1G_L1Ry", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL1G_L1Ry() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL1G_L1Ry", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL1B_L1Rz(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL1B_L1Rz", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL1B_L1Rz() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL1B_L1Rz", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL2_0(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL2_0() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL2_1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL2_1() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL2_2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL2_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL2_2() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL2_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResL2_3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResL2_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResL2_3() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResL2_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVProbeOcclusion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVProbeOcclusion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVProbeOcclusion() {
  return ::cordl_internals::getStaticField<int32_t, "_APVProbeOcclusion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__APVResValidity(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_APVResValidity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__APVResValidity() {
  return ::cordl_internals::getStaticField<int32_t, "_APVResValidity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__SkyOcclusionTexL0L1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SkyOcclusionTexL0L1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__SkyOcclusionTexL0L1() {
  return ::cordl_internals::getStaticField<int32_t, "_SkyOcclusionTexL0L1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__SkyShadingDirectionIndicesTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SkyShadingDirectionIndicesTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__SkyShadingDirectionIndicesTex() {
  return ::cordl_internals::getStaticField<int32_t, "_SkyShadingDirectionIndicesTex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__SkyPrecomputedDirections(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SkyPrecomputedDirections", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__SkyPrecomputedDirections() {
  return ::cordl_internals::getStaticField<int32_t, "_SkyPrecomputedDirections",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::setStaticF__AntiLeakData(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AntiLeakData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs::getStaticF__AntiLeakData() {
  return ::cordl_internals::getStaticField<int32_t, "_AntiLeakData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*>::get>();
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::ToString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6570130;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6570204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
constexpr ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*>&
UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_indirectionEntryInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indirectionEntryInfo;
}
constexpr ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*> const&
UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_get_indirectionEntryInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indirectionEntryInfo;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::__cordl_internal_set_indirectionEntryInfo(
    ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___indirectionEntryInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* UnityEngine::Rendering::ProbeReferenceVolume_CellDesc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>());
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint16_t> (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_skyOcclusionDataL0L1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6570208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                               "get_skyOcclusionDataL0L1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_skyOcclusionDataL0L1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(::Unity::Collections::NativeArray_1<uint16_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_skyOcclusionDataL0L1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6570214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_skyOcclusionDataL0L1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_skyShadingDirectionIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_skyShadingDirectionIndices)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x657021c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                               "get_skyShadingDirectionIndices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_skyShadingDirectionIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_skyShadingDirectionIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6570228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_skyShadingDirectionIndices",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_bricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> (
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_bricks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6570230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                               "get_bricks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_bricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_bricks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657023c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_bricks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_probePositions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> (
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_probePositions)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6570244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                               "get_probePositions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_probePositions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_probePositions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6570250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_probePositions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_touchupVolumeInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<float_t> (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_touchupVolumeInteraction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6570258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                               "get_touchupVolumeInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_touchupVolumeInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(::Unity::Collections::NativeArray_1<float_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_touchupVolumeInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6570264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_touchupVolumeInteraction",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_offsetVectors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> (
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_offsetVectors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x657026c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                               "get_offsetVectors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_offsetVectors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_offsetVectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6570278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_offsetVectors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_validity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<float_t> (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_validity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6570280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                               "get_validity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_validity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(::Unity::Collections::NativeArray_1<float_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_validity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657028c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_validity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.get_layer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_layer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6570294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                               "get_layer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.set_layer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65702a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_layer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.CleanupPerScenarioData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(
    ::ByRef<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellData::CleanupPerScenarioData)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x65702a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "CleanupPerScenarioData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::Cleanup)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x65703ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "Cleanup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellData::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x65707bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenarios)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                             "get_skyOcclusionDataL0L1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint16_t>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_skyOcclusionDataL0L1(::Unity::Collections::NativeArray_1<uint16_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_skyOcclusionDataL0L1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_skyShadingDirectionIndices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                             "get_skyShadingDirectionIndices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_skyShadingDirectionIndices(::Unity::Collections::NativeArray_1<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_skyShadingDirectionIndices",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_bricks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                             "get_bricks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_bricks(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_bricks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_probePositions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                             "get_probePositions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_probePositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_probePositions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<float_t> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_touchupVolumeInteraction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                             "get_touchupVolumeInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<float_t>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_touchupVolumeInteraction(::Unity::Collections::NativeArray_1<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_touchupVolumeInteraction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_offsetVectors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                             "get_offsetVectors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_offsetVectors(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_offsetVectors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<float_t> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_validity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                             "get_validity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<float_t>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_validity(::Unity::Collections::NativeArray_1<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_validity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Rendering::ProbeReferenceVolume_CellData::get_layer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                             "get_layer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::set_layer(::Unity::Collections::NativeArray_1<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "set_layer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::CleanupPerScenarioData(::ByRef<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "CleanupPerScenarioData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::Cleanup(bool cleanScenarioList) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(), "Cleanup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cleanScenarioList);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellData* UnityEngine::Rendering::ProbeReferenceVolume_CellData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellData::ProbeReferenceVolume_CellData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::Clear)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6570854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65708ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chunkList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo* UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo::ProbeReferenceVolume_CellPoolInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6570920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6570930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_flatIndicesInGlobalIndirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flatIndicesInGlobalIndirection;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_flatIndicesInGlobalIndirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flatIndicesInGlobalIndirection;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_set_flatIndicesInGlobalIndirection(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___flatIndicesInGlobalIndirection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*>&
UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_indirectionEntryInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indirectionEntryInfo;
}
constexpr ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*> const&
UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_get_indirectionEntryInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indirectionEntryInfo;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::__cordl_internal_set_indirectionEntryInfo(
    ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___indirectionEntryInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo::ProbeReferenceVolume_CellIndexInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.MarkUpToDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::MarkUpToDate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6570934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "MarkUpToDate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.IsUpToDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::IsUpToDate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6570940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "IsUpToDate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.ForceReupload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ForceReupload)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6570958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "ForceReupload",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.ShouldReupload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ShouldReupload)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6570964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "ShouldReupload",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.Prioritize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::Prioritize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6570978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "Prioritize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.ShouldPrioritize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ShouldPrioritize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6570984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "ShouldPrioritize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::Clear)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6570998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65709f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chunkList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "MarkUpToDate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::IsUpToDate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "IsUpToDate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ForceReupload() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "ForceReupload",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ShouldReupload() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "ShouldReupload",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::Prioritize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "Prioritize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ShouldPrioritize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "ShouldPrioritize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo* UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo::ProbeReferenceVolume_CellBlendingInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo.IsStreaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::IsStreaming)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6570a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>::get(), "IsStreaming",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo.IsBlendingStreaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::IsBlendingStreaming)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6570a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>::get(),
                                                 "IsBlendingStreaming", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6570ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6570ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blendingRequest0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blendingRequest1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>::get(), "IsStreaming",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::IsBlendingStreaming() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>::get(), "IsBlendingStreaming",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo* UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo::ProbeReferenceVolume_CellStreamingInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Cell.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume_Cell::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(&::UnityEngine::Rendering::ProbeReferenceVolume_Cell::CompareTo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6570aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Cell.UpdateCellScenarioData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_Cell::*)(::StringW, ::StringW)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Cell::UpdateCellScenarioData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6570b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(), "UpdateCellScenarioData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Cell.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Cell::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Cell::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6570bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Cell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Cell::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Cell::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6570c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___desc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___poolInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___indexInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blendingInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___streamingInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___debugProbes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_Cell::CompareTo(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_Cell::UpdateCellScenarioData(::StringW scenario0, ::StringW scenario1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(), "UpdateCellScenarioData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scenario0, scenario1);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Cell::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Cell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* UnityEngine::Rendering::ProbeReferenceVolume_Cell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>());
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(::UnityEngine::Matrix4x4, float_t, float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6570d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6570db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Volume)>(&::UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6570df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(::UnityEngine::Bounds)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6570e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume.CalculateAABB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Volume::CalculateAABB)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6570eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(),
                                                                               "CalculateAABB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume.CalculateCenterAndSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(
    ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::Rendering::ProbeReferenceVolume_Volume::CalculateCenterAndSize)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6570ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), "CalculateCenterAndSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume.Transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Volume::Transform)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x65711bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), "Transform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_Volume::ToString)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6571254;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_Volume.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_Volume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Volume)>(&::UnityEngine::Rendering::ProbeReferenceVolume_Volume::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x657146c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor(::UnityEngine::Matrix4x4 trs, float_t maxSubdivision, float_t minSubdivision) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trs, maxSubdivision, minSubdivision);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor(::UnityEngine::Vector3 corner, ::UnityEngine::Vector3 X, ::UnityEngine::Vector3 Y, ::UnityEngine::Vector3 Z,
                                                                       float_t maxSubdivision, float_t minSubdivision) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, corner, X, Y, Z, maxSubdivision, minSubdivision);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor(::UnityEngine::Rendering::ProbeReferenceVolume_Volume copy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, copy);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Volume::_ctor(::UnityEngine::Bounds bounds) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), ".ctor",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bounds);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::ProbeReferenceVolume_Volume::CalculateAABB() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(),
                                                                             "CalculateAABB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Volume::CalculateCenterAndSize(::ByRef<::UnityEngine::Vector3> center, ::ByRef<::UnityEngine::Vector3> size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), "CalculateCenterAndSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, center, size);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_Volume::Transform(::UnityEngine::Matrix4x4 trs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), "Transform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trs);
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume_Volume::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_Volume::Equals(::UnityEngine::Rendering::ProbeReferenceVolume_Volume other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>"
constexpr UnityEngine::Rendering::ProbeReferenceVolume_Volume::operator ::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>*
UnityEngine::Rendering::ProbeReferenceVolume_Volume::i___System__IEquatable_1___UnityEngine__Rendering__ProbeReferenceVolume_Volume_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6571560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>*&
UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_get_probeBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeBuffers;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_get_probeBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___probeBuffers;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_set_probeBuffers(
    ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___probeBuffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>*&
UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_get_offsetBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetBuffers;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* const&
UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_get_offsetBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetBuffers;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::__cordl_internal_set_offsetBuffers(
    ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___offsetBuffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___props)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes* UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes::ProbeReferenceVolume_CellInstancedDebugProbes() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6571564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___debugFragmentationMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___debugOverlay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___debugFragmentationData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData* UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData::ProbeReferenceVolume_RenderFragmentationOverlayPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6571568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.AddReadCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)(int32_t, int32_t, uint8_t*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::AddReadCommand)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65715e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "AddReadCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.RunCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)(
    ::Unity::IO::LowLevel::Unsafe::FileHandle)>(&::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::RunCommands)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6571620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "RunCommands", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::FileHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Clear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x657168c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Cancel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6571704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "Cancel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.Wait
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Wait)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6571734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "Wait",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6571798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest.GetStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadStatus (::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::GetStatus)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65717e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "GetStatus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxRequestCount);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::AddReadCommand(int32_t offset, int32_t size, uint8_t* dest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "AddReadCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset, size, dest);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::RunCommands(::Unity::IO::LowLevel::Unsafe::FileHandle file) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "RunCommands", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::FileHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, file);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Cancel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "Cancel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Wait() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "Wait",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadStatus UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::GetStatus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(), "GetStatus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadStatus, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest::New_ctor(int32_t maxRequestCount) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>(maxRequestCount));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::*)(int32_t, int32_t, bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6571818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer.Swap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::Swap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6571968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(), "Swap",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6571984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer.get_buffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::get_buffer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x656d2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(),
                                                 "get_buffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer.get_chunkCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::get_chunkCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(),
                                                 "get_chunkCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer.get_chunkSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::get_chunkSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(),
                                                 "get_chunkSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
constexpr ::ArrayW<::UnityEngine::GraphicsBuffer*, ::Array<::UnityEngine::GraphicsBuffer*>*>&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_get_m_GraphicsBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicsBuffers;
}
constexpr ::ArrayW<::UnityEngine::GraphicsBuffer*, ::Array<::UnityEngine::GraphicsBuffer*>*> const&
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_get_m_GraphicsBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicsBuffers;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::__cordl_internal_set_m_GraphicsBuffers(
    ::ArrayW<::UnityEngine::GraphicsBuffer*, ::Array<::UnityEngine::GraphicsBuffer*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GraphicsBuffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::_ctor(int32_t chunkCount, int32_t chunkSize, bool allocateGraphicsBuffers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunkCount, chunkSize, allocateGraphicsBuffers);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::Swap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(), "Swap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::get_buffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(), "get_buffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::get_chunkCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(),
                                               "get_chunkCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::get_chunkSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(),
                                               "get_chunkSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*
UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer::New_ctor(int32_t chunkCount, int32_t chunkSize, bool allocateGraphicsBuffers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(chunkCount, chunkSize, allocateGraphicsBuffers));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6571ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x657203c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::*)(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*,
                                                                                                        ::UnityEngine::Rendering::CommandBuffer*, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6572050;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6572078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::Invoke(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request,
                                                                                                                  ::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, cmd);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::BeginInvoke(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, request, cmd, callback, object);
}
inline void UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*
UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_cell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_Cell* (
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_cell)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "get_cell",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_cell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_cell)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_cell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_state
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State (
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "get_state",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_state
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(
    ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_state", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_scratchBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* (
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_scratchBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(),
                                                 "get_scratchBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_scratchBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_scratchBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_scratchBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_scratchBufferLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout (
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_scratchBufferLayout)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6571a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(),
                                                 "get_scratchBufferLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_scratchBufferLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_scratchBufferLayout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6571a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_scratchBufferLayout",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_scenarioData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* (
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_scenarioData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(),
                                                 "get_scenarioData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_scenarioData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(
    ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_scenarioData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_scenarioData",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_poolIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_poolIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "get_poolIndex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_poolIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_poolIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_poolIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.get_streamSharedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_streamSharedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(),
                                                 "get_streamSharedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.set_streamSharedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_streamSharedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_streamSharedData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.IsStreaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::IsStreaming)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6570a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "IsStreaming",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Cancel)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6571aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "Cancel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.WaitAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::WaitAll)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6571bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "WaitAll",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.UpdateRequestState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*, ::ByRef<bool>)>(&::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::UpdateRequestState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6571c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "UpdateRequestState",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.UpdateState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::UpdateState)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6571c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "UpdateState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6571d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6571d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6571dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6571e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cell_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scratchBuffer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scenarioData_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onStreamingComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellDataStreamingRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellOptionalDataStreamingRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellSharedDataStreamingRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellProbeOcclusionDataStreamingRequest)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___brickStreamingRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___supportStreamingRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "get_cell",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_cell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_cell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_state() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "get_state",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_state(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_state", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_scratchBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "get_scratchBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_scratchBuffer(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_scratchBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_scratchBufferLayout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(),
                                               "get_scratchBufferLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_scratchBufferLayout(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_scratchBufferLayout",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_scenarioData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "get_scenarioData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_scenarioData(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_scenarioData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_poolIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "get_poolIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_poolIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_poolIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::get_streamSharedData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(),
                                               "get_streamSharedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::set_streamSharedData(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "set_streamSharedData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::IsStreaming() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "IsStreaming",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Cancel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "Cancel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::WaitAll() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "WaitAll",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::UpdateRequestState(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* request,
                                                                                                  ::ByRef<bool> isComplete) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "UpdateRequestState",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, request, isComplete);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::UpdateState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "UpdateState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest::ProbeReferenceVolume_CellStreamingRequest() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65720d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c.__ctor_b__148_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::__ctor_b__148_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65720dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<.ctor>b__148_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c.__ctor_b__148_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*)>(&::UnityEngine::Rendering::ProbeReferenceVolume___c::__ctor_b__148_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65720f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<.ctor>b__148_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6572108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_8)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6572110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_8", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_18
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_18)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6572118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_18", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_19
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_19)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6572124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_19", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_25
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_25)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657212c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_25", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_29
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_29)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6572134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_29", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_36
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_36)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x657213c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_36", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_37
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_37)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6572148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_37", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_45
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_45)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6572150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_45", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_46
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_46)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x657215c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_46", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_50
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_50)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6572168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_50", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_60
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_60)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6572170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_60", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_61
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_61)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6572210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<RegisterDebug>b__219_61",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_62
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_62)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x65722c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_62", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_63
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_63)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6572360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_63", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_64)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6572400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<RegisterDebug>b__219_64",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_65
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_65)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65724c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_65", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_66
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_66)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65724c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_66", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_70
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_70)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x65724d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_70", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_76
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_76)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x65725a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_76", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_77
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_77)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6572644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<RegisterDebug>b__219_77",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_78
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_78)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65726f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_78", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_79
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_79)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6572700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_79", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_80
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_80)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x65727a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<RegisterDebug>b__219_80",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_81
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_81)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6572864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_81", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_82
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_82)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657286c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_82", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_87
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_87)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6572874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_87", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_88
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_88)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6572914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<RegisterDebug>b__219_88",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_89
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_89)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65729c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_89", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RegisterDebug_b__219_90
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_90)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65729cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                               "<RegisterDebug>b__219_90", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._RenderFragmentationOverlay_b__222_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c::_RenderFragmentationOverlay_b__222_0)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x65729d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<RenderFragmentationOverlay>b__222_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c._CleanupStreaming_b__283_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*)>(&::UnityEngine::Rendering::ProbeReferenceVolume___c::_CleanupStreaming_b__283_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6572b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<CleanupStreaming>b__283_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9(::UnityEngine::Rendering::ProbeReferenceVolume___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProbeReferenceVolume___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::UnityEngine::Rendering::ProbeReferenceVolume___c*>(value));
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume___c* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProbeReferenceVolume___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__148_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, "<>9__148_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__148_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, "<>9__148_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__148_1(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*, "<>9__148_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__148_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*, "<>9__148_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_1(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__219_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__219_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_8(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_8() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_8",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_18(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_18", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_18() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_18",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_19(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_19", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_19() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_19",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_25(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_25", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_25() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_25",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_29(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_29", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_29() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_29",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_36(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_36", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_36() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_36",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_37(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_37", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_37() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_37",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_45(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_45", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_45() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_45",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_46(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_46", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_46() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_46",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_50(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_50", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_50() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_50",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_60(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__219_60", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_60() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__219_60", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_61(::System::Action_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__219_61", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_61() {
  return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__219_61",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_62(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__219_62", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_62() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__219_62", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_63(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_63", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_63() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_63",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_64(::System::Action_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__219_64", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_64() {
  return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__219_64",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_65(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_65", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_65() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_65",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_66(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_66", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_66() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_66",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_70(::System::Func_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Object*>*, "<>9__219_70",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<::System::Object*>*>(value));
}
inline ::System::Func_1<::System::Object*>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_70() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Object*>*, "<>9__219_70",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_76(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_76", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_76() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_76",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_77(::System::Action_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__219_77", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_77() {
  return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__219_77",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_78(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__219_78", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_78() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__219_78",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_79(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_79", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_79() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_79",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_80(::System::Action_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<float_t>*, "<>9__219_80", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_80() {
  return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "<>9__219_80",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_81(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_81", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_81() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_81",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_82(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_82", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_82() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_82",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_87(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_87", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_87() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_87",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_88(::System::Action_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<float_t>*, "<>9__219_88", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_88() {
  return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "<>9__219_88",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_89(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_89", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_89() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_89",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__219_90(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__219_90", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__219_90() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__219_90",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__222_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*,
                                    "<>9__222_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*
UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__222_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*,
                                           "<>9__222_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::setStaticF___9__283_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*, "<>9__283_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>(
      std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* UnityEngine::Rendering::ProbeReferenceVolume___c::getStaticF___9__283_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*, "<>9__283_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::__ctor_b__148_0(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<.ctor>b__148_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::__ctor_b__148_1(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<.ctor>b__148_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_8() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_8", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_18() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_18", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_19() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_19", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_25() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_25", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_29() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_29", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_36() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_36", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_37() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_37", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_45() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_45", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_46() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_46", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_50() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_50", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_60() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_60", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_61(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<RegisterDebug>b__219_61",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_62() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_62", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_63() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_63", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_64(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<RegisterDebug>b__219_64",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_65() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_65", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_66() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_66", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_70() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_70", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_76() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_76", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_77(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<RegisterDebug>b__219_77",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_78() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_78", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_79() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_79", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_80(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<RegisterDebug>b__219_80",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_81() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_81", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_82() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_82", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_87() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_87", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_88(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<RegisterDebug>b__219_88",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_89() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_89", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume___c::_RegisterDebug_b__219_90() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(),
                                                                             "<RegisterDebug>b__219_90", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_RenderFragmentationOverlay_b__222_0(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<RenderFragmentationOverlay>b__222_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, ctx);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c::_CleanupStreaming_b__283_0(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c*>::get(), "<CleanupStreaming>b__283_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume___c* UnityEngine::Rendering::ProbeReferenceVolume___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume___c::ProbeReferenceVolume___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6572b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0._HasActiveStreamingRequest_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*)>(&::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::_HasActiveStreamingRequest_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6572b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0*>::get(), "<HasActiveStreamingRequest>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cell)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::_HasActiveStreamingRequest_b__0(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0*>::get(), "<HasActiveStreamingRequest>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0* UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0::ProbeReferenceVolume___c__DisplayClass314_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.BindAPVRuntimeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::CommandBuffer*, bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::BindAPVRuntimeResources)> {
  constexpr static std::size_t size = 0xc3c;
  constexpr static std::size_t addrs = 0x6554720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "BindAPVRuntimeResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateShaderVariablesProbeVolumes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProbeVolumesOptions*, int32_t, bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::UpdateShaderVariablesProbeVolumes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x65554a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateShaderVariablesProbeVolumes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumesOptions*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_globalBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_globalBounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6555b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_globalBounds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_globalBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Bounds)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::set_globalBounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6555b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_globalBounds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6555b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_enabledBySRP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_enabledBySRP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6555b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_enabledBySRP", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_vertexSampling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_vertexSampling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6555b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_vertexSampling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_hasUnloadedCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_hasUnloadedCells)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6555b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_hasUnloadedCells", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_supportLightingScenarios
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_supportLightingScenarios)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6555bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_supportLightingScenarios", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_supportScenarioBlending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_supportScenarioBlending)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6555bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_supportScenarioBlending", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_gpuStreamingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_gpuStreamingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6555c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_gpuStreamingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_diskStreamingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_diskStreamingEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6555c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_diskStreamingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_probeOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_probeOcclusion)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6555c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_probeOcclusion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_skyOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_skyOcclusion)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x655575c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_skyOcclusion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_skyOcclusionShadingDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_skyOcclusionShadingDirection)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x65557e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "get_skyOcclusionShadingDirection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_useRenderingLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_useRenderingLayers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6555cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_useRenderingLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_shBands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeVolumeSHBands (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_shBands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6555cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_shBands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_currentBakingSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_currentBakingSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6555cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_currentBakingSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_lightingScenario
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_lightingScenario)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6555ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_lightingScenario", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_lightingScenario
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::set_lightingScenario)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6555d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_lightingScenario",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_otherScenario
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_otherScenario)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6555e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_otherScenario", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_scenarioBlendingFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_scenarioBlendingFactor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6555e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_scenarioBlendingFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_scenarioBlendingFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::set_scenarioBlendingFactor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6555f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_scenarioBlendingFactor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetSceneGUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::SceneManagement::Scene)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetSceneGUID)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6555fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetSceneGUID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetActiveScenario
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW, bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetActiveScenario)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6555d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetActiveScenario", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.BlendLightingScenario
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW, float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::BlendLightingScenario)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6556004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "BlendLightingScenario", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_memoryBudget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_memoryBudget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65560b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_memoryBudget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_perSceneDataList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* (
    ::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::get_perSceneDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65560bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_perSceneDataList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_perSceneDataList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::set_perSceneDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65560c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_perSceneDataList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RegisterPerSceneData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeVolumePerSceneData*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::RegisterPerSceneData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x65560cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RegisterPerSceneData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumePerSceneData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetActiveScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::SceneManagement::Scene)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetActiveScene)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x65561cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetActiveScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetActiveBakingSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeVolumeBakingSet*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetActiveBakingSet)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6556414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetActiveBakingSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetBakingSetAsCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeVolumeBakingSet*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetBakingSetAsCurrent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x65566b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetBakingSetAsCurrent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RegisterBakingSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeVolumePerSceneData*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::RegisterBakingSet)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6556cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RegisterBakingSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumePerSceneData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnloadBakingSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UnloadBakingSet)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x655660c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "UnloadBakingSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnregisterPerSceneData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeVolumePerSceneData*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UnregisterPerSceneData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6556da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UnregisterPerSceneData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumePerSceneData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.TryGetPerSceneData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::StringW, ::ByRef<::UnityEngine::Rendering::ProbeVolumePerSceneData*>)>(&::UnityEngine::Rendering::ProbeReferenceVolume::TryGetPerSceneData)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6556270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "TryGetPerSceneData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeVolumePerSceneData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_indexFragmentationRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_indexFragmentationRate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6556e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_indexFragmentationRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume* (*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6556e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::ByRef<::UnityEngine::Rendering::ProbeVolumeSystemParameters>)>(&::UnityEngine::Rendering::ProbeReferenceVolume::Initialize)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x6556ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeVolumeSystemParameters>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetEnableStateFromSRP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetEnableStateFromSRP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6557440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetEnableStateFromSRP",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetVertexSamplingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetVertexSamplingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6557448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetVertexSamplingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ForceSHBand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeVolumeSHBands)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ForceSHBand)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6557450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ForceSHBand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ForceNoDiskStreaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ForceNoDiskStreaming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6557784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ForceNoDiskStreaming",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::Cleanup)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x655778c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetVideoMemoryCost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetVideoMemoryCost)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6557be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "GetVideoMemoryCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RemoveCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::RemoveCell)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6557c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RemoveCell",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnloadCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UnloadCell)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6557dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UnloadCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnloadBlendingCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UnloadBlendingCell)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6557f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UnloadBlendingCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnloadAllCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UnloadAllCells)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x655825c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "UnloadAllCells", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnloadAllBlendingCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UnloadAllBlendingCells)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6558348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "UnloadAllBlendingCells", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.AddCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::AddCell)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6558434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "AddCell", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.LoadCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::LoadCell)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x6558638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "LoadCell", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.LoadAllCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::LoadAllCells)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x65594ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "LoadAllCells", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeCellGlobalInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ComputeCellGlobalInfo)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6559644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "ComputeCellGlobalInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.AddPendingSceneLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW, ::UnityEngine::Rendering::ProbeVolumeBakingSet*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::AddPendingSceneLoading)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x6559820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "AddPendingSceneLoading", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.AddPendingSceneRemoval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::AddPendingSceneRemoval)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6559c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "AddPendingSceneRemoval",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RemovePendingScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::StringW, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::RemovePendingScene)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6559dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RemovePendingScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.PerformPendingIndexChangeAndInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingIndexChangeAndInit)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6559f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "PerformPendingIndexChangeAndInit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetSubdivisionDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t, int32_t, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetSubdivisionDimensions)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6556cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetSubdivisionDimensions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.LoadCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::LoadCells)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x655a284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "LoadCells", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.PerformPendingLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingLoading)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x655a354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "PerformPendingLoading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.PerformPendingDeletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingDeletion)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x655a774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "PerformPendingDeletion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeEntryMinMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ComputeEntryMinMax)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x6558c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ComputeEntryMinMax", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetNumberOfBricksAtSubdiv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetNumberOfBricksAtSubdiv)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6559028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetNumberOfBricksAtSubdiv", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.PerformPendingOperations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingOperations)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6556d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "PerformPendingOperations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.InitializeGlobalIndirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::InitializeGlobalIndirection)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6559f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "InitializeGlobalIndirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.InitProbeReferenceVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::InitProbeReferenceVolume)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x65567b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "InitProbeReferenceVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::_ctor)> {
  constexpr static std::size_t size = 0x858;
  constexpr static std::size_t addrs = 0x655e138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources (
    ::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::GetRuntimeResources)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x655535c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetMaxSubdivision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetMaxSubdivision)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x655a1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetMaxSubdivision",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::CellSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6558ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "CellSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.BrickSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::BrickSize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x655e990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "BrickSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.MinBrickSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::MinBrickSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x655ea28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "MinBrickSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.MaxBrickSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::MaxBrickSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x655ea30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "MaxBrickSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ProbeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ProbeOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x655ea3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "ProbeOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetMaxSubdivision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetMaxSubdivision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x655ea48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "GetMaxSubdivision", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetMaxSubdivision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetMaxSubdivision)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x655ea50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetMaxSubdivision",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetDistanceBetweenProbes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetDistanceBetweenProbes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x655ead4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetDistanceBetweenProbes",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.MinDistanceBetweenProbes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::MinDistanceBetweenProbes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x655eaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "MinDistanceBetweenProbes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetGlobalIndirectionEntryMaxSubdiv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetGlobalIndirectionEntryMaxSubdiv)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x655eb08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetGlobalIndirectionEntryMaxSubdiv",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetEntrySubdivLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetEntrySubdivLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6558fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "GetEntrySubdivLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetEntrySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetEntrySize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x655eb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "GetEntrySize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.DataHasBeenLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::DataHasBeenLoaded)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6555704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "DataHasBeenLoaded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(&::UnityEngine::Rendering::ProbeReferenceVolume::Clear)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x655eb28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetSourceLocations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* (
    ::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t, int32_t, ::UnityEngine::Rendering::ProbeBrickPool_DataLocation)>(&::UnityEngine::Rendering::ProbeReferenceVolume::GetSourceLocations)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x655ec60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetSourceLocations", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateValidityTextureWithoutMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Texture*, ::Unity::Collections::NativeArray_1<uint8_t>)>(&::UnityEngine::Rendering::ProbeReferenceVolume::UpdateValidityTextureWithoutMask)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x655edf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateValidityTextureWithoutMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdatePool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData,
    ::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<uint16_t>, ::Unity::Collections::NativeArray_1<uint8_t>, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdatePool)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x655ef9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdatePool", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdatePool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*,
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdatePool)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x655f4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdatePool", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateSharedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, ::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<uint16_t>,
    ::Unity::Collections::NativeArray_1<uint8_t>, int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::UpdateSharedData)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x655f69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateSharedData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.AddBlendingBricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::AddBlendingBricks)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x655f964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "AddBlendingBricks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ReservePoolChunks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, bool)>(&::UnityEngine::Rendering::ProbeReferenceVolume::ReservePoolChunks)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6558bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ReservePoolChunks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ReleasePoolChunks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::ReleasePoolChunks)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6559380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ReleasePoolChunks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdatePoolAndIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*,
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, int32_t, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdatePoolAndIndex)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x6560110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdatePoolAndIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.AddBricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::AddBricks)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x65590f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "AddBricks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateCellIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateCellIndex)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x656002c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateCellIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ReleaseBricks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ReleaseBricks)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x655808c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ReleaseBricks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateConstantBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProbeVolumeShadingParameters)>(&::UnityEngine::Rendering::ProbeReferenceVolume::UpdateConstantBuffer)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x655586c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateConstantBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeShadingParameters>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.DeinitProbeReferenceVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::DeinitProbeReferenceVolume)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6557574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "DeinitProbeReferenceVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CleanupLoadedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::CleanupLoadedData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65578a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "CleanupLoadedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_probeVolumeDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeVolumeDebug* (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_probeVolumeDebug)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65605b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_probeVolumeDebug", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_subdivisionDebugColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_subdivisionDebugColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65605b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_subdivisionDebugColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_debugMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_debugMesh)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x65605c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_debugMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RenderDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Camera*, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::RenderDebug)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6560738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RenderDebug", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RenderDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::ProbeVolumesOptions*, ::UnityEngine::Texture*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::RenderDebug)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6560744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RenderDebug", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumesOptions*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.IsProbeSamplingDebugEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::IsProbeSamplingDebugEnabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65619e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "IsProbeSamplingDebugEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetProbeSamplingDebugResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Camera*, ::ByRef<::UnityEngine::GraphicsBuffer*>, ::ByRef<::UnityEngine::Vector2>)>(&::UnityEngine::Rendering::ProbeReferenceVolume::GetProbeSamplingDebugResources)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6561a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetProbeSamplingDebugResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::GraphicsBuffer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.TryCreateDebugRenderData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::TryCreateDebugRenderData)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x6561b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "TryCreateDebugRenderData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.InitializeDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::InitializeDebug)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6557368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "InitializeDebug", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CleanupDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::CleanupDebug)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x65578a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "CleanupDebug", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RegisterDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::RegisterDebug)> {
  constexpr static std::size_t size = 0x3724;
  constexpr static std::size_t addrs = 0x655aa14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "RegisterDebug", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnregisterDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UnregisterDebug)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x655a8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UnregisterDebug",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.RenderFragmentationOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::DebugOverlay*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::RenderFragmentationOverlay)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x656213c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RenderFragmentationOverlay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugOverlay*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ShouldCullCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>)>(&::UnityEngine::Rendering::ProbeReferenceVolume::ShouldCullCell)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x65623ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ShouldCullCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateDebugFromSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>, ::ByRef<int32_t>)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateDebugFromSelection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65626f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateDebugFromSelection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.GetCellBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::GetCellBounds)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x656259c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetCellBounds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ShouldCullCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, int32_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::ShouldCullCell)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x6562730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ShouldCullCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.DrawProbeDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Camera*, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::DrawProbeDebug)> {
  constexpr static std::size_t size = 0x118c;
  constexpr static std::size_t addrs = 0x656085c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "DrawProbeDebug", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ResetDebugViewToMaxSubdiv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ResetDebugViewToMaxSubdiv)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6563818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "ResetDebugViewToMaxSubdiv", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ClearDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ClearDebugData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x65581bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "ClearDebugData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CreateInstancedProbes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes* (
    ::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::CreateInstancedProbes)> {
  constexpr static std::size_t size = 0xde8;
  constexpr static std::size_t addrs = 0x6562a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "CreateInstancedProbes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.OnClearLightingdata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::OnClearLightingdata)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6563944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "OnClearLightingdata", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.EnableMaxCellStreaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::EnableMaxCellStreaming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6563948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "EnableMaxCellStreaming",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.SetNumberOfCellsLoadedPerFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::SetNumberOfCellsLoadedPerFrame)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6563950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetNumberOfCellsLoadedPerFrame",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_loadMaxCellsPerFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_loadMaxCellsPerFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656396c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_loadMaxCellsPerFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_loadMaxCellsPerFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::set_loadMaxCellsPerFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6563974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_loadMaxCellsPerFrame",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_numberOfCellsLoadedPerFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_numberOfCellsLoadedPerFrame)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x656397c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "get_numberOfCellsLoadedPerFrame",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_numberOfCellsBlendedPerFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_numberOfCellsBlendedPerFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65639e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "get_numberOfCellsBlendedPerFrame",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_numberOfCellsBlendedPerFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::set_numberOfCellsBlendedPerFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65639ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_numberOfCellsBlendedPerFrame",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.get_turnoverRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::get_turnoverRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65639fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "get_turnoverRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.set_turnoverRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::set_turnoverRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6563a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_turnoverRate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.InitStreaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::InitStreaming)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x655738c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "InitStreaming", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CleanupStreaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::CleanupStreaming)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x65579b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "CleanupStreaming", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ScenarioBlendingChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ScenarioBlendingChanged)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6563df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ScenarioBlendingChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeCellStreamingScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ComputeCellStreamingScore)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6563eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ComputeCellStreamingScore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeStreamingScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ComputeStreamingScore)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x65640d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ComputeStreamingScore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeBestToBeLoadedCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ComputeBestToBeLoadedCells)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x65641ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ComputeBestToBeLoadedCells", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeStreamingScoreAndWorseLoadedCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ComputeStreamingScoreAndWorseLoadedCells)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x6564558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                 "ComputeStreamingScoreAndWorseLoadedCells", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeBlendingScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, float_t)>(&::UnityEngine::Rendering::ProbeReferenceVolume::ComputeBlendingScore)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6564900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ComputeBlendingScore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.TryLoadCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::ByRef<int32_t>, ::ByRef<int32_t>, ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::TryLoadCell)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x65649f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "TryLoadCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UnloadBlendingCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UnloadBlendingCell)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6564b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UnloadBlendingCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.TryLoadBlendingCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::TryLoadBlendingCell)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6564b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "TryLoadBlendingCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ComputeMinMaxStreamingScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ComputeMinMaxStreamingScore)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6564c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "ComputeMinMaxStreamingScore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateCellStreaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::UpdateCellStreaming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6564dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateCellStreaming", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateCellStreaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::UnityEngine::Rendering::ProbeVolumesOptions*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::UpdateCellStreaming)> {
  constexpr static std::size_t size = 0xb64;
  constexpr static std::size_t addrs = 0x6564db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateCellStreaming", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumesOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.FindWorstBlendingCellToBeLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::FindWorstBlendingCellToBeLoaded)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6566758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "FindWorstBlendingCellToBeLoaded",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.BlendingComparer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::BlendingComparer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6566858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "BlendingComparer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateBlendingCellStreaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateBlendingCellStreaming)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x65660ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateBlendingCellStreaming", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.DefragComparer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::DefragComparer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x65668a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "DefragComparer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.StartIndexDefragmentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::StartIndexDefragmentation)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x65593f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "StartIndexDefragmentation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateIndexDefragmentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateIndexDefragmentation)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x6565918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "UpdateIndexDefragmentation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.OnStreamingComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*, ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::OnStreamingComplete)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6566940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "OnStreamingComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.OnBlendingStreamingComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*, ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::OnBlendingStreamingComplete)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x65669bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "OnBlendingStreamingComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.PushDiskStreamingRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, ::StringW, int32_t, ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::PushDiskStreamingRequest)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x655fed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "PushDiskStreamingRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CancelStreamingRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::CancelStreamingRequest)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6558018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "CancelStreamingRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.CancelBlendingStreamingRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::CancelBlendingStreamingRequest)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6558210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "CancelBlendingStreamingRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ProcessDiskStreamingRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*)>(&::UnityEngine::Rendering::ProbeReferenceVolume::ProcessDiskStreamingRequest)> {
  constexpr static std::size_t size = 0xc1c;
  constexpr static std::size_t addrs = 0x6566aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ProcessDiskStreamingRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.AllocateScratchBufferPoolIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::AllocateScratchBufferPoolIfNeeded)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x65676c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "AllocateScratchBufferPoolIfNeeded",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateActiveRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateActiveRequests)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6563b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateActiveRequests", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.ProcessNewRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::ProcessNewRequests)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6563a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "ProcessNewRequests", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.UpdateDiskStreaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::UpdateDiskStreaming)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x6565cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateDiskStreaming", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.HasActiveStreamingRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::HasActiveStreamingRequest)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6563840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "HasActiveStreamingRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume.LogStreaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::LogStreaming)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65677c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "LogStreaming",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65679c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65679d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_3",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_4)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65679f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_5)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6567a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_5",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_6)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_7)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_7",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_9
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_9)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_9", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_10
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_10)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6567a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_10",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_11
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_11)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6567a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_11", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_12
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_12)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_12", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_13
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_13)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_13",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_14
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_14)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_14", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_15
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_15)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_15",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_16)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_16", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_17
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_17)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_17",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_20
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_20)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_20", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_21
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_21)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_21",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_22
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_22)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6567b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_22", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_23
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_23)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_23", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_24
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_24)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6567bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_24",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_26
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_26)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6567be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_26", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_27
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_27)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_27", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_28
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_28)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6567c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_28",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_30
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_30)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6567c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_30", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_31
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_31)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_31", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_32)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6567c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_32",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_33
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_33)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6567cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_33", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_34
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_34)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_34", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_35
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_35)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_35",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_38
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_38)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_38", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_39
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_39)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6567d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_39",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_40
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_40)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_40", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_41
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_41)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6567d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_41",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_42
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_42)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6567e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_42", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_43
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_43)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_43", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_44
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_44)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_44",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_47
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_47)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6567edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_47", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_48
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_48)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_48", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_49
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(float_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_49)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_49",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_51
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_51)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_51", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_52
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_52)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6567f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_52",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_53
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_53)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_53", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_54
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_54)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6567f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_54",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_55
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_55)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6567f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_55", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_56
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_56)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_56", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_57
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_57)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6567fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_57",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_58
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_58)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6567ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_58", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_59
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_59)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6568010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_59",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_67
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_67)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x656802c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_67", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_68
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_68)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6568044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_68",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_69
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_69)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6568060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_69", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_71
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_71)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6568080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_71", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_72
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_72)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6568098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_72",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_73
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_73)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65680b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_73", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_74
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(bool)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_74)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65680cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_74",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_g__RefreshScenarioNames_219_75
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(::StringW)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_g__RefreshScenarioNames_219_75)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x65680e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>g__RefreshScenarioNames|219_75",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_83
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_83)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6568834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_83", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_84
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_84)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65689ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_84",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_85
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeReferenceVolume::*)()>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_85)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6568a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                               "<RegisterDebug>b__219_85", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeReferenceVolume._RegisterDebug_b__219_86
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeReferenceVolume::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_86)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6568a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_86",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EmptyIndexBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Index)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CellIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BlendingPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TmpSrcChunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PositionOffsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionOffsets;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_PositionOffsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionOffsets;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_PositionOffsets(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PositionOffsets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CellPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___retrieveExtraDataAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___checksDuringBakeAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PendingScenesToBeLoaded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PendingScenesToBeUnloaded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActiveScenes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentBakingSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____perSceneDataList_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____probeVolumeDebug_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get__subdivisionDebugColors_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subdivisionDebugColors_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get__subdivisionDebugColors_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subdivisionDebugColors_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set__subdivisionDebugColors_k__BackingField(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subdivisionDebugColors_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugItems;
}
constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugItems;
}
constexpr void
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugItems(::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugProbeSamplingMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProbeSamplingDebugMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProbeSamplingDebugMaterial02)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DisplayNumbersTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugOffsetMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugOffsetMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugFragmentationMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugFrustumPlanes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFrustumPlanes;
}
constexpr ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugFrustumPlanes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFrustumPlanes;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugFrustumPlanes(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugFrustumPlanes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugScenarioNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScenarioNames;
}
constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugScenarioNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScenarioNames;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugScenarioNames(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugScenarioNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugScenarioValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScenarioValues;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_m_DebugScenarioValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScenarioValues;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_m_DebugScenarioValues(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugScenarioValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugActiveSceneGUID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugActiveScenario)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugScenarioField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Bounds, ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_Brick, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*>>*&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_realtimeSubdivisionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realtimeSubdivisionInfo;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Bounds,
                                                       ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_Brick, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*>>* const&
UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_get_realtimeSubdivisionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realtimeSubdivisionInfo;
}
constexpr void UnityEngine::Rendering::ProbeReferenceVolume::__cordl_internal_set_realtimeSubdivisionInfo(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Bounds, ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_Brick, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___realtimeSubdivisionInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LoadedCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ToBeLoadedCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WorseLoadedCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BestToBeLoadedCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TempCellToLoadList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TempCellToUnloadList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LoadedBlendingCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ToBeLoadedBlendingCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TempBlendingCellToLoadList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TempBlendingCellToUnloadList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefragIndex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefragCellIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IndexDefragCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TempIndexDefragCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StreamingQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActiveStreamingRequests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StreamingRequestsPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScratchBufferPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnStreamingComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnBlendingStreamingComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::setStaticF_defaultLightingScenario(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "defaultLightingScenario", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume::getStaticF_defaultLightingScenario() {
  return ::cordl_internals::getStaticField<::StringW, "defaultLightingScenario", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::setStaticF__instance(::UnityEngine::Rendering::ProbeReferenceVolume* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProbeReferenceVolume*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>(
      std::forward<::UnityEngine::Rendering::ProbeReferenceVolume*>(value));
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume* UnityEngine::Rendering::ProbeReferenceVolume::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProbeReferenceVolume*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::setStaticF_k_DebugPanelName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DebugPanelName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume::getStaticF_k_DebugPanelName() {
  return ::cordl_internals::getStaticField<::StringW, "k_DebugPanelName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::setStaticF_probeSamplingDebugData(::UnityEngine::Rendering::ProbeSamplingDebugData* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProbeSamplingDebugData*, "probeSamplingDebugData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>(
      std::forward<::UnityEngine::Rendering::ProbeSamplingDebugData*>(value));
}
inline ::UnityEngine::Rendering::ProbeSamplingDebugData* UnityEngine::Rendering::ProbeReferenceVolume::getStaticF_probeSamplingDebugData() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProbeSamplingDebugData*, "probeSamplingDebugData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::setStaticF_s_BoundsArray(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, "s_BoundsArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> UnityEngine::Rendering::ProbeReferenceVolume::getStaticF_s_BoundsArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, "s_BoundsArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>();
}
inline void
UnityEngine::Rendering::ProbeReferenceVolume::setStaticF_s_BlendingComparer(::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, "s_BlendingComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>(
      std::forward<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>(value));
}
inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* UnityEngine::Rendering::ProbeReferenceVolume::getStaticF_s_BlendingComparer() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, "s_BlendingComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>();
}
inline void
UnityEngine::Rendering::ProbeReferenceVolume::setStaticF_s_DefragComparer(::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, "s_DefragComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>(
      std::forward<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>(value));
}
inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* UnityEngine::Rendering::ProbeReferenceVolume::getStaticF_s_DefragComparer() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*, "s_DefragComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get>();
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::BindAPVRuntimeResources(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, bool isProbeVolumeEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "BindAPVRuntimeResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmdBuffer, isProbeVolumeEnabled);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::UpdateShaderVariablesProbeVolumes(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                            ::UnityEngine::Rendering::ProbeVolumesOptions* probeVolumeOptions, int32_t taaFrameIndex,
                                                                                            bool supportRenderingLayers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateShaderVariablesProbeVolumes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumesOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cmd, probeVolumeOptions, taaFrameIndex, supportRenderingLayers);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::ProbeReferenceVolume::get_globalBounds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_globalBounds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_globalBounds(::UnityEngine::Bounds value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_globalBounds",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_enabledBySRP() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_enabledBySRP", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_vertexSampling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_vertexSampling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_hasUnloadedCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_hasUnloadedCells", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_supportLightingScenarios() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_supportLightingScenarios", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_supportScenarioBlending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_supportScenarioBlending", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_gpuStreamingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_gpuStreamingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_diskStreamingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_diskStreamingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_probeOcclusion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_probeOcclusion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_skyOcclusion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_skyOcclusion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_skyOcclusionShadingDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_skyOcclusionShadingDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_useRenderingLayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_useRenderingLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeSHBands UnityEngine::Rendering::ProbeReferenceVolume::get_shBands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_shBands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeSHBands, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> UnityEngine::Rendering::ProbeReferenceVolume::get_currentBakingSet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_currentBakingSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume::get_lightingScenario() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_lightingScenario", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_lightingScenario(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_lightingScenario",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume::get_otherScenario() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_otherScenario", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::get_scenarioBlendingFactor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_scenarioBlendingFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_scenarioBlendingFactor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_scenarioBlendingFactor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::ProbeReferenceVolume::GetSceneGUID(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetSceneGUID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, scene);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetActiveScenario(::StringW scenario, bool verbose) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetActiveScenario", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenario, verbose);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::BlendLightingScenario(::StringW otherScenario, float_t blendingFactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "BlendLightingScenario", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, otherScenario, blendingFactor);
}
inline ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget UnityEngine::Rendering::ProbeReferenceVolume::get_memoryBudget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_memoryBudget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* UnityEngine::Rendering::ProbeReferenceVolume::get_perSceneDataList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_perSceneDataList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_perSceneDataList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_perSceneDataList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RegisterPerSceneData(::UnityEngine::Rendering::ProbeVolumePerSceneData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RegisterPerSceneData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumePerSceneData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetActiveScene(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetActiveScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scene);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetActiveBakingSet(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetActiveBakingSet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bakingSet);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetBakingSetAsCurrent(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetBakingSetAsCurrent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bakingSet);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RegisterBakingSet(::UnityEngine::Rendering::ProbeVolumePerSceneData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RegisterBakingSet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumePerSceneData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnloadBakingSet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "UnloadBakingSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnregisterPerSceneData(::UnityEngine::Rendering::ProbeVolumePerSceneData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UnregisterPerSceneData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumePerSceneData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::TryGetPerSceneData(::StringW sceneGUID, ::ByRef<::UnityEngine::Rendering::ProbeVolumePerSceneData*> perSceneData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "TryGetPerSceneData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeVolumePerSceneData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sceneGUID, perSceneData);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::get_indexFragmentationRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_indexFragmentationRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume* UnityEngine::Rendering::ProbeReferenceVolume::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::Initialize(::ByRef<::UnityEngine::Rendering::ProbeVolumeSystemParameters> parameters) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeVolumeSystemParameters>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetEnableStateFromSRP(bool srpEnablesPV) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetEnableStateFromSRP",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, srpEnablesPV);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetVertexSamplingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetVertexSamplingEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ForceSHBand(::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ForceSHBand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shBands);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ForceNoDiskStreaming(bool state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ForceNoDiskStreaming",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "Cleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::GetVideoMemoryCost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "GetVideoMemoryCost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RemoveCell(int32_t cellIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RemoveCell",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellIndex);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnloadCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UnloadCell", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnloadBlendingCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UnloadBlendingCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnloadAllCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "UnloadAllCells", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnloadAllBlendingCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "UnloadAllBlendingCells", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::AddCell(int32_t cellIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "AddCell",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellIndex);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::LoadCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, bool ignoreErrorLog) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "LoadCell", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cell, ignoreErrorLog);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::LoadAllCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "LoadAllCells", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeCellGlobalInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "ComputeCellGlobalInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::AddPendingSceneLoading(::StringW sceneGUID, ::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "AddPendingSceneLoading", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneGUID, bakingSet);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::AddPendingSceneRemoval(::StringW sceneGUID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "AddPendingSceneRemoval",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneGUID);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RemovePendingScene(::StringW sceneGUID, ::System::Collections::Generic::List_1<int32_t>* cellList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RemovePendingScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneGUID, cellList);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingIndexChangeAndInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "PerformPendingIndexChangeAndInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetSubdivisionDimensions(float_t minBrickSize, int32_t maxSubdiv, ::UnityEngine::Vector3 offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetSubdivisionDimensions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minBrickSize, maxSubdiv, offset);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::LoadCells(::System::Collections::Generic::List_1<int32_t>* cellIndices) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "LoadCells", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cellIndices);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingLoading() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "PerformPendingLoading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingDeletion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "PerformPendingDeletion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeEntryMinMax(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo> entryInfo,
                                                                             ::System::ReadOnlySpan_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> bricks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ComputeEntryMinMax", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entryInfo, bricks);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::GetNumberOfBricksAtSubdiv(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo entryInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetNumberOfBricksAtSubdiv", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, entryInfo);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::PerformPendingOperations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "PerformPendingOperations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::InitializeGlobalIndirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "InitializeGlobalIndirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::InitProbeReferenceVolume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "InitProbeReferenceVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources UnityEngine::Rendering::ProbeReferenceVolume::GetRuntimeResources() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetMaxSubdivision(int32_t maxSubdivision) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetMaxSubdivision",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxSubdivision);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::CellSize(int32_t subdivisionLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "CellSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, subdivisionLevel);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::BrickSize(int32_t subdivisionLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "BrickSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, subdivisionLevel);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::MinBrickSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "MinBrickSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::MaxBrickSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "MaxBrickSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::ProbeReferenceVolume::ProbeOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "ProbeOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::GetMaxSubdivision() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "GetMaxSubdivision", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::GetMaxSubdivision(float_t multiplier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetMaxSubdivision",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, multiplier);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::GetDistanceBetweenProbes(int32_t subdivisionLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetDistanceBetweenProbes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, subdivisionLevel);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::MinDistanceBetweenProbes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "MinDistanceBetweenProbes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::GetGlobalIndirectionEntryMaxSubdiv() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetGlobalIndirectionEntryMaxSubdiv",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::GetEntrySubdivLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "GetEntrySubdivLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::GetEntrySize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "GetEntrySize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::DataHasBeenLoaded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "DataHasBeenLoaded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*
UnityEngine::Rendering::ProbeReferenceVolume::GetSourceLocations(int32_t count, int32_t chunkSize, ::UnityEngine::Rendering::ProbeBrickPool_DataLocation dataLoc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetSourceLocations", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeBrickPool_DataLocation>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*, false>(this, ___internal_method, count, chunkSize,
                                                                                                                                                       dataLoc);
}
template <typename T> inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateDataLocationTexture(::UnityEngine::Texture* output, ::Unity::Collections::NativeArray_1<T> input) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateDataLocationTexture",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, input);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateValidityTextureWithoutMask(::UnityEngine::Texture* output, ::Unity::Collections::NativeArray_1<uint8_t> input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateValidityTextureWithoutMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, input);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdatePool(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList,
                                                                     ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData data,
                                                                     ::Unity::Collections::NativeArray_1<uint8_t> validityNeighMaskData,
                                                                     ::Unity::Collections::NativeArray_1<uint16_t> skyOcclusionL0L1Data,
                                                                     ::Unity::Collections::NativeArray_1<uint8_t> skyShadingDirectionIndices, int32_t chunkIndex, int32_t poolIndex) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdatePool", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 7>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint16_t>>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunkList, data, validityNeighMaskData, skyOcclusionL0L1Data, skyShadingDirectionIndices, chunkIndex, poolIndex);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdatePool(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                     ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList,
                                                                     ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* dataBuffer,
                                                                     ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout layout, int32_t poolIndex) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdatePool", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 5>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, chunkList, dataBuffer, layout, poolIndex);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateSharedData(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList,
                                                                           ::Unity::Collections::NativeArray_1<uint8_t> validityNeighMaskData,
                                                                           ::Unity::Collections::NativeArray_1<uint16_t> skyOcclusionData,
                                                                           ::Unity::Collections::NativeArray_1<uint8_t> skyShadingDirectionIndices, int32_t chunkIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateSharedData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunkList, validityNeighMaskData, skyOcclusionData, skyShadingDirectionIndices, chunkIndex);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::AddBlendingBricks(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "AddBlendingBricks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cell);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::ReservePoolChunks(int32_t brickCount,
                                                                            ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList,
                                                                            bool ignoreErrorLog) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ReservePoolChunks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, brickCount, chunkList, ignoreErrorLog);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ReleasePoolChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ReleasePoolChunks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunkList);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdatePoolAndIndex(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell,
                                                                             ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* dataBuffer,
                                                                             ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout layout, int32_t poolIndex,
                                                                             ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdatePoolAndIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell, dataBuffer, layout, poolIndex, cmd);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::AddBricks(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "AddBricks", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateCellIndex(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateCellIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ReleaseBricks(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ReleaseBricks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateConstantBuffer(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProbeVolumeShadingParameters parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateConstantBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeShadingParameters>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, parameters);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::DeinitProbeReferenceVolume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "DeinitProbeReferenceVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::CleanupLoadedData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "CleanupLoadedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeDebug* UnityEngine::Rendering::ProbeReferenceVolume::get_probeVolumeDebug() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_probeVolumeDebug", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeDebug*, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> UnityEngine::Rendering::ProbeReferenceVolume::get_subdivisionDebugColors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_subdivisionDebugColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::ProbeReferenceVolume::get_debugMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_debugMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RenderDebug(::UnityEngine::Camera* camera, ::UnityEngine::Texture* exposureTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RenderDebug", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, exposureTexture);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RenderDebug(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::ProbeVolumesOptions* options, ::UnityEngine::Texture* exposureTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RenderDebug", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumesOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, options, exposureTexture);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::IsProbeSamplingDebugEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "IsProbeSamplingDebugEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::GetProbeSamplingDebugResources(::UnityEngine::Camera* camera, ::ByRef<::UnityEngine::GraphicsBuffer*> resultBuffer,
                                                                                         ::ByRef<::UnityEngine::Vector2> coords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetProbeSamplingDebugResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::GraphicsBuffer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, camera, resultBuffer, coords);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::TryCreateDebugRenderData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "TryCreateDebugRenderData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::InitializeDebug() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "InitializeDebug", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::CleanupDebug() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "CleanupDebug", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::ProbeReferenceVolume::DebugCellIndexChanged(::UnityEngine::Rendering::DebugUI_Field_1<T>* field, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "DebugCellIndexChanged",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugUI_Field_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, field, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RegisterDebug() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "RegisterDebug", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnregisterDebug(bool destroyPanel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UnregisterDebug",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destroyPanel);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::RenderFragmentationOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorBuffer,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthBuffer,
                                                                                     ::UnityEngine::Rendering::DebugOverlay* debugOverlay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "RenderFragmentationOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugOverlay*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, colorBuffer, depthBuffer, debugOverlay);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::ShouldCullCell(::UnityEngine::Vector3 cellPosition, ::UnityEngine::Transform* cameraTransform,
                                                                         ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> frustumPlanes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ShouldCullCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cellPosition, cameraTransform, frustumPlanes);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateDebugFromSelection(::ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> _AdjustmentVolumeBounds,
                                                                                   ::ByRef<int32_t> _AdjustmentVolumeCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateDebugFromSelection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _AdjustmentVolumeBounds, _AdjustmentVolumeCount);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::ProbeReferenceVolume::GetCellBounds(::UnityEngine::Vector3 cellPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "GetCellBounds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(this, ___internal_method, cellPosition);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::ShouldCullCell(::UnityEngine::Vector3 cellPosition, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> adjustmentVolumeBounds,
                                                                         int32_t adjustmentVolumeCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ShouldCullCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cellPosition, adjustmentVolumeBounds, adjustmentVolumeCount);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::DrawProbeDebug(::UnityEngine::Camera* camera, ::UnityEngine::Texture* exposureTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "DrawProbeDebug", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, exposureTexture);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ResetDebugViewToMaxSubdiv() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "ResetDebugViewToMaxSubdiv", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ClearDebugData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "ClearDebugData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*
UnityEngine::Rendering::ProbeReferenceVolume::CreateInstancedProbes(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "CreateInstancedProbes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*, false>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::OnClearLightingdata() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "OnClearLightingdata", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::EnableMaxCellStreaming(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "EnableMaxCellStreaming",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::SetNumberOfCellsLoadedPerFrame(int32_t numberOfCells) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "SetNumberOfCellsLoadedPerFrame",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfCells);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::get_loadMaxCellsPerFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_loadMaxCellsPerFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_loadMaxCellsPerFrame(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_loadMaxCellsPerFrame",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::get_numberOfCellsLoadedPerFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_numberOfCellsLoadedPerFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::get_numberOfCellsBlendedPerFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_numberOfCellsBlendedPerFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_numberOfCellsBlendedPerFrame(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_numberOfCellsBlendedPerFrame",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::get_turnoverRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "get_turnoverRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::set_turnoverRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "set_turnoverRate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::InitStreaming() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "InitStreaming", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::CleanupStreaming() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "CleanupStreaming", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ScenarioBlendingChanged(bool scenarioChanged) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ScenarioBlendingChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenarioChanged);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeCellStreamingScore(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, ::UnityEngine::Vector3 cameraPosition,
                                                                                    ::UnityEngine::Vector3 cameraDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ComputeCellStreamingScore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cell, cameraPosition, cameraDirection);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeStreamingScore(::UnityEngine::Vector3 cameraPosition, ::UnityEngine::Vector3 cameraDirection,
                                                                                ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* cells) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ComputeStreamingScore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraPosition, cameraDirection, cells);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeBestToBeLoadedCells(::UnityEngine::Vector3 cameraPosition, ::UnityEngine::Vector3 cameraDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ComputeBestToBeLoadedCells", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraPosition, cameraDirection);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeStreamingScoreAndWorseLoadedCells(::UnityEngine::Vector3 cameraPosition, ::UnityEngine::Vector3 cameraDirection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                               "ComputeStreamingScoreAndWorseLoadedCells", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraPosition, cameraDirection);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeBlendingScore(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* cells,
                                                                               float_t worstScore) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ComputeBlendingScore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cells, worstScore);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::TryLoadCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, ::ByRef<int32_t> shBudget, ::ByRef<int32_t> indexBudget,
                                                                      ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* loadedCells) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "TryLoadCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cell, shBudget, indexBudget, loadedCells);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UnloadBlendingCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell,
                                                                             ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* unloadedCells) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UnloadBlendingCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell, unloadedCells);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::TryLoadBlendingCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell,
                                                                              ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* loadedCells) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "TryLoadBlendingCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cell, loadedCells);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ComputeMinMaxStreamingScore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "ComputeMinMaxStreamingScore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateCellStreaming(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateCellStreaming", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, camera);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateCellStreaming(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera,
                                                                              ::UnityEngine::Rendering::ProbeVolumesOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateCellStreaming", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumesOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, camera, options);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::FindWorstBlendingCellToBeLoaded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "FindWorstBlendingCellToBeLoaded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::BlendingComparer(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* a, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "BlendingComparer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateBlendingCellStreaming(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateBlendingCellStreaming", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::DefragComparer(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* a, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "DefragComparer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::StartIndexDefragmentation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "StartIndexDefragmentation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateIndexDefragmentation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "UpdateIndexDefragmentation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::OnStreamingComplete(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request,
                                                                              ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "OnStreamingComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, cmd);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::OnBlendingStreamingComplete(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request,
                                                                                      ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "OnBlendingStreamingComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, cmd);
}
inline void
UnityEngine::Rendering::ProbeReferenceVolume::PushDiskStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, ::StringW scenario, int32_t poolIndex,
                                                                       ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* onStreamingComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "PushDiskStreamingRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell, scenario, poolIndex, onStreamingComplete);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::CancelStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "CancelStreamingRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::CancelBlendingStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "CancelBlendingStreamingRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::ProcessDiskStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "ProcessDiskStreamingRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, request);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::AllocateScratchBufferPoolIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "AllocateScratchBufferPoolIfNeeded",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateActiveRequests(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateActiveRequests", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::ProcessNewRequests() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "ProcessNewRequests", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::UpdateDiskStreaming(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "UpdateDiskStreaming", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::HasActiveStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "HasActiveStreamingRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cell);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::LogStreaming(::StringW log) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "LogStreaming",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, log);
}
template <typename T> inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_g__RefreshDebug_219_0(::UnityEngine::Rendering::DebugUI_Field_1<T>* field, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>g__RefreshDebug|219_0",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugUI_Field_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, field, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_3(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_3",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_5(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_5",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_6() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_7(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_7",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_9() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_9", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_10(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_10",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_11() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_11", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_12() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_12", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_13(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_13",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_14() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_14", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_15(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_15",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_16() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_16", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_17(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_17",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_20() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_20", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_21(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_21",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_22() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_22", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_23() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_23", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_24(int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_24",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_26() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_26", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_27() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_27", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_28(int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_28",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_30() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_30", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_31() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_31", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_32(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_32",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_33() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_33", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_34() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_34", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_35(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_35",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_38() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_38", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_39(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_39",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_40() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_40", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_41(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_41",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_42() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_42", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_43() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_43", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_44(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_44",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_47() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_47", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_48() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_48", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_49(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_49",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_51() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_51", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_52(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_52",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_53() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_53", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_54(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_54",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_55() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_55", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_56() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_56", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_57(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_57",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_58() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_58", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_59(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_59",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_67() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_67", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_68(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_68",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_69() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_69", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_71() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_71", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_72(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_72",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_73() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_73", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_74(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_74",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_g__RefreshScenarioNames_219_75(::StringW guid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>g__RefreshScenarioNames|219_75",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, guid);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_83() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_83", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_84(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_84",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_85() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(),
                                                                             "<RegisterDebug>b__219_85", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeReferenceVolume::_RegisterDebug_b__219_86(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeReferenceVolume*>::get(), "<RegisterDebug>b__219_86",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume* UnityEngine::Rendering::ProbeReferenceVolume::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeReferenceVolume*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeReferenceVolume::ProbeReferenceVolume() {}
