#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedRendererData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceAllocators_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TransformUpdatePacket_impl.hpp"
#include "UnityEngine/zzzz__LightProbesQuery_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/Rendering/zzzz__TransformUpdatePacket_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__TransformUpdateQueueCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TransformUpdateQueueCount",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__TransformUpdateQueueCount() {
  return ::cordl_internals::getStaticField<int32_t, "_TransformUpdateQueueCount",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__TransformUpdateOutputL2WVec4Offset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TransformUpdateOutputL2WVec4Offset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__TransformUpdateOutputL2WVec4Offset() {
  return ::cordl_internals::getStaticField<int32_t, "_TransformUpdateOutputL2WVec4Offset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__TransformUpdateOutputW2LVec4Offset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TransformUpdateOutputW2LVec4Offset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__TransformUpdateOutputW2LVec4Offset() {
  return ::cordl_internals::getStaticField<int32_t, "_TransformUpdateOutputW2LVec4Offset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__TransformUpdateOutputPrevL2WVec4Offset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TransformUpdateOutputPrevL2WVec4Offset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__TransformUpdateOutputPrevL2WVec4Offset() {
  return ::cordl_internals::getStaticField<int32_t, "_TransformUpdateOutputPrevL2WVec4Offset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__TransformUpdateOutputPrevW2LVec4Offset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TransformUpdateOutputPrevW2LVec4Offset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__TransformUpdateOutputPrevW2LVec4Offset() {
  return ::cordl_internals::getStaticField<int32_t, "_TransformUpdateOutputPrevW2LVec4Offset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__BoundingSphereOutputVec4Offset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BoundingSphereOutputVec4Offset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__BoundingSphereOutputVec4Offset() {
  return ::cordl_internals::getStaticField<int32_t, "_BoundingSphereOutputVec4Offset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__TransformUpdateDataQueue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TransformUpdateDataQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__TransformUpdateDataQueue() {
  return ::cordl_internals::getStaticField<int32_t, "_TransformUpdateDataQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__TransformUpdateIndexQueue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TransformUpdateIndexQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__TransformUpdateIndexQueue() {
  return ::cordl_internals::getStaticField<int32_t, "_TransformUpdateIndexQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__BoundingSphereDataQueue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BoundingSphereDataQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__BoundingSphereDataQueue() {
  return ::cordl_internals::getStaticField<int32_t, "_BoundingSphereDataQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__OutputTransformBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OutputTransformBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__OutputTransformBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_OutputTransformBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__ProbeUpdateQueueCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ProbeUpdateQueueCount",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__ProbeUpdateQueueCount() {
  return ::cordl_internals::getStaticField<int32_t, "_ProbeUpdateQueueCount",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__SHUpdateVec4Offset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SHUpdateVec4Offset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__SHUpdateVec4Offset() {
  return ::cordl_internals::getStaticField<int32_t, "_SHUpdateVec4Offset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__ProbeUpdateDataQueue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ProbeUpdateDataQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__ProbeUpdateDataQueue() {
  return ::cordl_internals::getStaticField<int32_t, "_ProbeUpdateDataQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__ProbeOcclusionUpdateDataQueue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ProbeOcclusionUpdateDataQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__ProbeOcclusionUpdateDataQueue() {
  return ::cordl_internals::getStaticField<int32_t, "_ProbeOcclusionUpdateDataQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__ProbeUpdateIndexQueue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ProbeUpdateIndexQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__ProbeUpdateIndexQueue() {
  return ::cordl_internals::getStaticField<int32_t, "_ProbeUpdateIndexQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::setStaticF__OutputProbeBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OutputProbeBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::getStaticF__OutputProbeBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_OutputProbeBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs::InstanceDataSystem_InstanceTransformUpdateIDs() {}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs::setStaticF__WindDataQueueCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_WindDataQueueCount",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs::getStaticF__WindDataQueueCount() {
  return ::cordl_internals::getStaticField<int32_t, "_WindDataQueueCount",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs::setStaticF__WindDataUpdateIndexQueue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_WindDataUpdateIndexQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs::getStaticF__WindDataUpdateIndexQueue() {
  return ::cordl_internals::getStaticField<int32_t, "_WindDataUpdateIndexQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs::setStaticF__WindDataBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_WindDataBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs::getStaticF__WindDataBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_WindDataBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs::setStaticF__WindParamAddressArray(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_WindParamAddressArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs::getStaticF__WindParamAddressArray() {
  return ::cordl_internals::getStaticField<int32_t, "_WindParamAddressArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs::setStaticF__WindHistoryParamAddressArray(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_WindHistoryParamAddressArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs::getStaticF__WindHistoryParamAddressArray() {
  return ::cordl_internals::getStaticField<int32_t, "_WindHistoryParamAddressArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs::InstanceDataSystem_InstanceWindDataUpdateIDs() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob::Execute)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6674398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob>::get(), "Execute",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob>::get(), "Execute",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharedInstanceData", ty:
// "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererGroupInstanceMultiHash", ty:
// "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererGroupIDs", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instancesCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob::InstanceDataSystem_QueryRendererGroupInstancesCountJob(
    ::UnityEngine::Rendering::CPUInstanceData instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData,
    ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash, ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
    ::Unity::Collections::NativeArray_1<int32_t> instancesCount) noexcept {
  this->instanceData = instanceData;
  this->sharedInstanceData = sharedInstanceData;
  this->rendererGroupInstanceMultiHash = rendererGroupInstanceMultiHash;
  this->rendererGroupIDs = rendererGroupIDs;
  this->instancesCount = instancesCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob::InstanceDataSystem_QueryRendererGroupInstancesCountJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::*)()>(
    &::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::Execute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6674468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob>::get(),
                                    "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob>::get(),
                                  "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "instancesCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instancesOffset", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instances", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob(
    ::Unity::Collections::NativeArray_1<int32_t> instancesCount, ::Unity::Collections::NativeArray_1<int32_t> instancesOffset,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) noexcept {
  this->instancesCount = instancesCount;
  this->instancesOffset = instancesOffset;
  this->instances = instances;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x66744f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "rendererGroupInstanceMultiHash", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "rendererGroupIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instances", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "atomicNonFoundInstancesCount", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob::InstanceDataSystem_QueryRendererGroupInstancesJob(
    ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash, ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicNonFoundInstancesCount) noexcept {
  this->rendererGroupInstanceMultiHash = rendererGroupInstanceMultiHash;
  this->rendererGroupIDs = rendererGroupIDs;
  this->instances = instances;
  this->atomicNonFoundInstancesCount = atomicNonFoundInstancesCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob::InstanceDataSystem_QueryRendererGroupInstancesJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob::Execute)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6674628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob>::get(), "Execute",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob>::get(), "Execute",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "rendererGroupInstanceMultiHash", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "rendererGroupIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instancesOffsets", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instancesCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "atomicNonFoundSharedInstancesCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: Some("{}") }, CppParam { name: "atomicNonFoundInstancesCount",
// ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob::InstanceDataSystem_QueryRendererGroupInstancesMultiJob(
    ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash, ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
    ::Unity::Collections::NativeArray_1<int32_t> instancesOffsets, ::Unity::Collections::NativeArray_1<int32_t> instancesCounts,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicNonFoundSharedInstancesCount,
    ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicNonFoundInstancesCount) noexcept {
  this->rendererGroupInstanceMultiHash = rendererGroupInstanceMultiHash;
  this->rendererGroupIDs = rendererGroupIDs;
  this->instancesOffsets = instancesOffsets;
  this->instancesCounts = instancesCounts;
  this->instances = instances;
  this->atomicNonFoundSharedInstancesCount = atomicNonFoundSharedInstancesCount;
  this->atomicNonFoundInstancesCount = atomicNonFoundInstancesCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob::InstanceDataSystem_QueryRendererGroupInstancesMultiJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6674834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharedInstanceData", ty:
// "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name: "sortedMeshID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "instances", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob::InstanceDataSystem_QuerySortedMeshInstancesJob(
    ::UnityEngine::Rendering::CPUInstanceData instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData, ::Unity::Collections::NativeArray_1<int32_t> sortedMeshID,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) noexcept {
  this->instanceData = instanceData;
  this->sharedInstanceData = sharedInstanceData;
  this->sortedMeshID = sortedMeshID;
  this->instances = instances;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob::InstanceDataSystem_QuerySortedMeshInstancesJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::*)(int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::Execute)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6674a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob>::get(),
                                    "Execute", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::Execute(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob>::get(),
                                  "Execute", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "probesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightProbesQuery", ty: "::UnityEngine::LightProbesQuery", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "queryPostitions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "compactTetrahedronCache", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "probesSphericalHarmonics", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>", modifiers: "", def_value: Some("{}") }, CppParam { name: "probesOcclusion", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob(
    int32_t probesCount, ::UnityEngine::LightProbesQuery lightProbesQuery, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> queryPostitions,
    ::Unity::Collections::NativeArray_1<int32_t> compactTetrahedronCache, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2> probesSphericalHarmonics,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> probesOcclusion) noexcept {
  this->probesCount = probesCount;
  this->lightProbesQuery = lightProbesQuery;
  this->queryPostitions = queryPostitions;
  this->compactTetrahedronCache = compactTetrahedronCache;
  this->probesSphericalHarmonics = probesSphericalHarmonics;
  this->probesOcclusion = probesOcclusion;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::*)(int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::Execute)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6674b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "probeInstances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "compactTetrahedronCache", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceData", ty:
// "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> probeInstances, ::Unity::Collections::NativeArray_1<int32_t> compactTetrahedronCache,
    ::UnityEngine::Rendering::CPUInstanceData instanceData) noexcept {
  this->probeInstances = probeInstances;
  this->compactTetrahedronCache = compactTetrahedronCache;
  this->instanceData = instanceData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob::Execute)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x6674bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "initialize", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableBoundingSpheres", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorldMatrices",
// ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "prevLocalToWorldMatrices", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "atomicTransformQueueCount", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharedInstanceData", ty:
// "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "transformUpdateInstanceQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "transformUpdateDataQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "boundingSpheresDataQueue", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob::InstanceDataSystem_TransformUpdateJob(
    bool initialize, bool enableBoundingSpheres, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> prevLocalToWorldMatrices,
    ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicTransformQueueCount, ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData,
    ::UnityEngine::Rendering::CPUInstanceData instanceData, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> transformUpdateInstanceQueue,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket> transformUpdateDataQueue,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> boundingSpheresDataQueue) noexcept {
  this->initialize = initialize;
  this->enableBoundingSpheres = enableBoundingSpheres;
  this->instances = instances;
  this->localToWorldMatrices = localToWorldMatrices;
  this->prevLocalToWorldMatrices = prevLocalToWorldMatrices;
  this->atomicTransformQueueCount = atomicTransformQueueCount;
  this->sharedInstanceData = sharedInstanceData;
  this->instanceData = instanceData;
  this->transformUpdateInstanceQueue = transformUpdateInstanceQueue;
  this->transformUpdateDataQueue = transformUpdateDataQueue;
  this->boundingSpheresDataQueue = boundingSpheresDataQueue;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob::InstanceDataSystem_TransformUpdateJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob::Execute)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6675170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharedInstanceData", ty:
// "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name: "atomicProbesQueueCount", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: Some("{}") }, CppParam { name: "probeInstanceQueue", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "compactTetrahedronCache", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "probeQueryPosition", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob::InstanceDataSystem_ProbesUpdateJob(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::UnityEngine::Rendering::CPUInstanceData instanceData,
    ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicProbesQueueCount,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> probeInstanceQueue, ::Unity::Collections::NativeArray_1<int32_t> compactTetrahedronCache,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> probeQueryPosition) noexcept {
  this->instances = instances;
  this->instanceData = instanceData;
  this->sharedInstanceData = sharedInstanceData;
  this->atomicProbesQueueCount = atomicProbesQueueCount;
  this->probeInstanceQueue = probeInstanceQueue;
  this->compactTetrahedronCache = compactTetrahedronCache;
  this->probeQueryPosition = probeQueryPosition;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob::InstanceDataSystem_ProbesUpdateJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob::*)(int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob::Execute)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6675408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob::Execute(int32_t chunk_index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunk_index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "queueWriteBase", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "atomicUpdateQueueCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: Some("{}") },
// CppParam { name: "transformUpdateInstanceQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob::InstanceDataSystem_MotionUpdateJob(
    int32_t queueWriteBase, ::UnityEngine::Rendering::CPUInstanceData instanceData, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicUpdateQueueCount,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> transformUpdateInstanceQueue) noexcept {
  this->queueWriteBase = queueWriteBase;
  this->instanceData = instanceData;
  this->atomicUpdateQueueCount = atomicUpdateQueueCount;
  this->transformUpdateInstanceQueue = transformUpdateInstanceQueue;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob::InstanceDataSystem_MotionUpdateJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob::*)()>(
    &::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x667558c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "implicitInstanceIndices", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererGroupIDs", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedRendererData", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceOffsets", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "instanceAllocators", ty: "::UnityEngine::Rendering::InstanceAllocators", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceData", ty:
// "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "rendererGroupInstanceMultiHash", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob::InstanceDataSystem_ReallocateInstancesJob(
    bool implicitInstanceIndices, ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> packedRendererData, ::Unity::Collections::NativeArray_1<int32_t> instanceOffsets,
    ::Unity::Collections::NativeArray_1<int32_t> instanceCounts, ::UnityEngine::Rendering::InstanceAllocators instanceAllocators, ::UnityEngine::Rendering::CPUInstanceData instanceData,
    ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
    ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash) noexcept {
  this->implicitInstanceIndices = implicitInstanceIndices;
  this->rendererGroupIDs = rendererGroupIDs;
  this->packedRendererData = packedRendererData;
  this->instanceOffsets = instanceOffsets;
  this->instanceCounts = instanceCounts;
  this->instanceAllocators = instanceAllocators;
  this->instanceData = instanceData;
  this->sharedInstanceData = sharedInstanceData;
  this->instances = instances;
  this->rendererGroupInstanceMultiHash = rendererGroupInstanceMultiHash;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob::InstanceDataSystem_ReallocateInstancesJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob::*)()>(
    &::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6675918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "instanceAllocators", ty: "::UnityEngine::Rendering::InstanceAllocators", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "rendererGroupInstanceMultiHash", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob::InstanceDataSystem_FreeInstancesJob(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::UnityEngine::Rendering::InstanceAllocators instanceAllocators,
    ::UnityEngine::Rendering::CPUInstanceData instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData,
    ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash) noexcept {
  this->instances = instances;
  this->instanceAllocators = instanceAllocators;
  this->instanceData = instanceData;
  this->sharedInstanceData = sharedInstanceData;
  this->rendererGroupInstanceMultiHash = rendererGroupInstanceMultiHash;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob::InstanceDataSystem_FreeInstancesJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob::*)()>(
    &::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x6675c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "rendererGroupsID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceAllocators", ty:
// "::UnityEngine::Rendering::InstanceAllocators", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "rendererGroupInstanceMultiHash", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob::InstanceDataSystem_FreeRendererGroupInstancesJob(
    ::Unity::Collections::NativeArray_1<int32_t> rendererGroupsID, ::UnityEngine::Rendering::InstanceAllocators instanceAllocators, ::UnityEngine::Rendering::CPUInstanceData instanceData,
    ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData,
    ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash) noexcept {
  this->rendererGroupsID = rendererGroupsID;
  this->instanceAllocators = instanceAllocators;
  this->instanceData = instanceData;
  this->sharedInstanceData = sharedInstanceData;
  this->rendererGroupInstanceMultiHash = rendererGroupInstanceMultiHash;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob::InstanceDataSystem_FreeRendererGroupInstancesJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob::*)(int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x6675e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "implicitInstanceIndices", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererData", ty:
// "::UnityEngine::Rendering::GPUDrivenRendererGroupData", modifiers: "", def_value: Some("{}") }, CppParam { name: "instances", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodGroupDataMap", ty:
// "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceData", ty:
// "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob::InstanceDataSystem_UpdateRendererInstancesJob(
    bool implicitInstanceIndices, ::UnityEngine::Rendering::GPUDrivenRendererGroupData rendererData, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
    ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataMap, ::UnityEngine::Rendering::CPUInstanceData instanceData,
    ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData) noexcept {
  this->implicitInstanceIndices = implicitInstanceIndices;
  this->rendererData = rendererData;
  this->instances = instances;
  this->lodGroupDataMap = lodGroupDataMap;
  this->instanceData = instanceData;
  this->sharedInstanceData = sharedInstanceData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob::InstanceDataSystem_UpdateRendererInstancesJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::*)(int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::Execute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6676304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::Execute(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob>::get(), "Execute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData_ReadOnly", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharedInstanceData", ty:
// "::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodGroupAndMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData,
    ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly sharedInstanceData, ::Unity::Collections::NativeArray_1<uint32_t> lodGroupAndMasks) noexcept {
  this->instances = instances;
  this->instanceData = instanceData;
  this->sharedInstanceData = sharedInstanceData;
  this->lodGroupAndMasks = lodGroupAndMasks;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x667639c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob>::get(), "Execute",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob>::get(), "Execute",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharedInstanceData", ty:
// "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: Some("{}") }, CppParam { name: "compactedVisibilityMasks", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "becomeVisible", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "processedBits", ty:
// "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "atomicTreeInstancesCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob(
    ::UnityEngine::Rendering::CPUInstanceData instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData, ::UnityEngine::Rendering::ParallelBitArray compactedVisibilityMasks,
    bool becomeVisible, ::UnityEngine::Rendering::ParallelBitArray processedBits, ::Unity::Collections::NativeArray_1<int32_t> rendererIDs,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicTreeInstancesCount) noexcept {
  this->instanceData = instanceData;
  this->sharedInstanceData = sharedInstanceData;
  this->compactedVisibilityMasks = compactedVisibilityMasks;
  this->becomeVisible = becomeVisible;
  this->processedBits = processedBits;
  this->rendererIDs = rendererIDs;
  this->instances = instances;
  this->atomicTreeInstancesCount = atomicTreeInstancesCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::Execute)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x667669c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob>::get(), "Execute",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob>::get(), "Execute",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "compactedVisibilityMasks", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceData", ty:
// "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob(
    ::UnityEngine::Rendering::ParallelBitArray compactedVisibilityMasks, ::UnityEngine::Rendering::CPUInstanceData instanceData) noexcept {
  this->compactedVisibilityMasks = compactedVisibilityMasks;
  this->instanceData = instanceData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.get_hasBoundingSpheres
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::InstanceDataSystem::*)()>(
    &::UnityEngine::Rendering::InstanceDataSystem::get_hasBoundingSpheres)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6670b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(),
                                                                               "get_hasBoundingSpheres", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.get_instanceData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CPUInstanceData_ReadOnly (::UnityEngine::Rendering::InstanceDataSystem::*)()>(
    &::UnityEngine::Rendering::InstanceDataSystem::get_instanceData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6670b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(),
                                                                               "get_instanceData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.get_sharedInstanceData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly (::UnityEngine::Rendering::InstanceDataSystem::*)()>(
    &::UnityEngine::Rendering::InstanceDataSystem::get_sharedInstanceData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6670bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(),
                                                                               "get_sharedInstanceData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.get_aliveInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> (
    ::UnityEngine::Rendering::InstanceDataSystem::*)()>(&::UnityEngine::Rendering::InstanceDataSystem::get_aliveInstances)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6670c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(),
                                                                               "get_aliveInstances", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(int32_t, bool, ::UnityEngine::Rendering::GPUResidentDrawerResources*)>(&::UnityEngine::Rendering::InstanceDataSystem::_ctor)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6670c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)()>(&::UnityEngine::Rendering::InstanceDataSystem::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6670ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.GetMaxInstancesOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::InstanceDataSystem::*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceDataSystem::GetMaxInstancesOfType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6670f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "GetMaxInstancesOfType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.GetAliveInstancesOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::InstanceDataSystem::*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceDataSystem::GetAliveInstancesOfType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6670fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "GetAliveInstancesOfType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.EnsureIndexQueueBufferCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem::EnsureIndexQueueBufferCapacity)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6670fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "EnsureIndexQueueBufferCapacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.EnsureProbeBuffersCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem::EnsureProbeBuffersCapacity)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6671078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "EnsureProbeBuffersCapacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.EnsureTransformBuffersCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(int32_t)>(
    &::UnityEngine::Rendering::InstanceDataSystem::EnsureTransformBuffersCapacity)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x66711cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "EnsureTransformBuffersCapacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.ScheduleInterpolateProbesAndUpdateTetrahedronCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::InstanceDataSystem::*)(
    int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::InstanceDataSystem::ScheduleInterpolateProbesAndUpdateTetrahedronCache)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6671344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleInterpolateProbesAndUpdateTetrahedronCache",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.DispatchProbeUpdateCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>, ::UnityEngine::Rendering::RenderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(
    &::UnityEngine::Rendering::InstanceDataSystem::DispatchProbeUpdateCommand)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x66714c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "DispatchProbeUpdateCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.DispatchMotionUpdateCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::UnityEngine::Rendering::RenderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(
    &::UnityEngine::Rendering::InstanceDataSystem::DispatchMotionUpdateCommand)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x66717bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "DispatchMotionUpdateCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.DispatchTransformUpdateCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    bool, int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket>,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>, ::UnityEngine::Rendering::RenderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(
    &::UnityEngine::Rendering::InstanceDataSystem::DispatchTransformUpdateCommand)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x6671a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "DispatchTransformUpdateCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.DispatchWindDataCopyHistoryCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>, ::UnityEngine::Rendering::RenderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(
    &::UnityEngine::Rendering::InstanceDataSystem::DispatchWindDataCopyHistoryCommand)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x6671e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "DispatchWindDataCopyHistoryCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.UpdateInstanceMotionsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::ByRef<::UnityEngine::Rendering::RenderersParameters>, ::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(&::UnityEngine::Rendering::InstanceDataSystem::UpdateInstanceMotionsData)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6672068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateInstanceMotionsData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.UpdateInstanceTransformsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    bool, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>, ::ByRef<::UnityEngine::Rendering::RenderersParameters>, ::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(
    &::UnityEngine::Rendering::InstanceDataSystem::UpdateInstanceTransformsData)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x6672238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateInstanceTransformsData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.UpdateInstanceProbesData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::ByRef<::UnityEngine::Rendering::RenderersParameters>, ::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(
    &::UnityEngine::Rendering::InstanceDataSystem::UpdateInstanceProbesData)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x66727a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateInstanceProbesData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.UpdateInstanceWindDataHistory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>, ::UnityEngine::Rendering::RenderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(
    &::UnityEngine::Rendering::InstanceDataSystem::UpdateInstanceWindDataHistory)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6672b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateInstanceWindDataHistory", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.ReallocateAndGetInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>)>(
    &::UnityEngine::Rendering::InstanceDataSystem::ReallocateAndGetInstances)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x6672b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ReallocateAndGetInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.FreeRendererGroupInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::InstanceDataSystem::FreeRendererGroupInstances)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6672e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "FreeRendererGroupInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.FreeInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>)>(&::UnityEngine::Rendering::InstanceDataSystem::FreeInstances)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6672efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "FreeInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.ScheduleUpdateInstanceDataJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>,
    ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>)>(&::UnityEngine::Rendering::InstanceDataSystem::ScheduleUpdateInstanceDataJob)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6672fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleUpdateInstanceDataJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.UpdateAllInstanceProbes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::ByRef<::UnityEngine::Rendering::RenderersParameters>, ::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(&::UnityEngine::Rendering::InstanceDataSystem::UpdateAllInstanceProbes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66730e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateAllInstanceProbes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.InitializeInstanceTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>, ::ByRef<::UnityEngine::Rendering::RenderersParameters>, ::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(
    &::UnityEngine::Rendering::InstanceDataSystem::InitializeInstanceTransforms)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6673174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "InitializeInstanceTransforms", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.UpdateInstanceTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>,
    ::ByRef<::UnityEngine::Rendering::RenderersParameters>, ::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(&::UnityEngine::Rendering::InstanceDataSystem::UpdateInstanceTransforms)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66731bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateInstanceTransforms", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.UpdateInstanceMotions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::ByRef<::UnityEngine::Rendering::RenderersParameters>, ::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(&::UnityEngine::Rendering::InstanceDataSystem::UpdateInstanceMotions)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6673200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateInstanceMotions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.ScheduleQueryRendererGroupInstancesJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>)>(
    &::UnityEngine::Rendering::InstanceDataSystem::ScheduleQueryRendererGroupInstancesJob)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6673214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleQueryRendererGroupInstancesJob",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.ScheduleQueryRendererGroupInstancesJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>)>(
    &::UnityEngine::Rendering::InstanceDataSystem::ScheduleQueryRendererGroupInstancesJob)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x66732c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleQueryRendererGroupInstancesJob",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.ScheduleQueryRendererGroupInstancesJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>)>(&::UnityEngine::Rendering::InstanceDataSystem::ScheduleQueryRendererGroupInstancesJob)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x66733e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleQueryRendererGroupInstancesJob",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.ScheduleQuerySortedMeshInstancesJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>)>(
    &::UnityEngine::Rendering::InstanceDataSystem::ScheduleQuerySortedMeshInstancesJob)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x66735bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleQuerySortedMeshInstancesJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.ScheduleCollectInstancesLODGroupAndMasksJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<uint32_t>)>(
    &::UnityEngine::Rendering::InstanceDataSystem::ScheduleCollectInstancesLODGroupAndMasksJob)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x66736cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleCollectInstancesLODGroupAndMasksJob",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.InternalSanityCheckStates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::InstanceDataSystem::*)()>(
    &::UnityEngine::Rendering::InstanceDataSystem::InternalSanityCheckStates)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x66737c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(),
                                                                               "InternalSanityCheckStates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.GetVisibleTreeInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(
    ::ByRef<::UnityEngine::Rendering::ParallelBitArray>, ::ByRef<::UnityEngine::Rendering::ParallelBitArray>, ::Unity::Collections::NativeList_1<int32_t>,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>, bool, ::ByRef<int32_t>)>(&::UnityEngine::Rendering::InstanceDataSystem::GetVisibleTreeInstances)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x6673a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "GetVisibleTreeInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ParallelBitArray>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ParallelBitArray>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystem.UpdatePerFrameInstanceVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystem::*)(::ByRef<::UnityEngine::Rendering::ParallelBitArray>)>(
    &::UnityEngine::Rendering::InstanceDataSystem::UpdatePerFrameInstanceVisibility)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6673e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdatePerFrameInstanceVisibility", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ParallelBitArray>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::InstanceAllocators& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_InstanceAllocators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceAllocators;
}
constexpr ::UnityEngine::Rendering::InstanceAllocators const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_InstanceAllocators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceAllocators;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_InstanceAllocators(::UnityEngine::Rendering::InstanceAllocators value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InstanceAllocators = value;
}
constexpr ::UnityEngine::Rendering::CPUSharedInstanceData& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_SharedInstanceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedInstanceData;
}
constexpr ::UnityEngine::Rendering::CPUSharedInstanceData const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_SharedInstanceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedInstanceData;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_SharedInstanceData(::UnityEngine::Rendering::CPUSharedInstanceData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SharedInstanceData = value;
}
constexpr ::UnityEngine::Rendering::CPUInstanceData& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_InstanceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceData;
}
constexpr ::UnityEngine::Rendering::CPUInstanceData const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_InstanceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceData;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_InstanceData(::UnityEngine::Rendering::CPUInstanceData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InstanceData = value;
}
constexpr ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>&
UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_RendererGroupInstanceMultiHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererGroupInstanceMultiHash;
}
constexpr ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> const&
UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_RendererGroupInstanceMultiHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererGroupInstanceMultiHash;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_RendererGroupInstanceMultiHash(
    ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RendererGroupInstanceMultiHash = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_TransformUpdateCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformUpdateCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_TransformUpdateCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformUpdateCS;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_TransformUpdateCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransformUpdateCS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_WindDataUpdateCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WindDataUpdateCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_WindDataUpdateCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WindDataUpdateCS;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_WindDataUpdateCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WindDataUpdateCS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_TransformInitKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformInitKernel;
}
constexpr int32_t const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_TransformInitKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformInitKernel;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_TransformInitKernel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransformInitKernel = value;
}
constexpr int32_t& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_TransformUpdateKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformUpdateKernel;
}
constexpr int32_t const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_TransformUpdateKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformUpdateKernel;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_TransformUpdateKernel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransformUpdateKernel = value;
}
constexpr int32_t& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_MotionUpdateKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionUpdateKernel;
}
constexpr int32_t const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_MotionUpdateKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionUpdateKernel;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_MotionUpdateKernel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MotionUpdateKernel = value;
}
constexpr int32_t& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_ProbeUpdateKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeUpdateKernel;
}
constexpr int32_t const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_ProbeUpdateKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeUpdateKernel;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_ProbeUpdateKernel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProbeUpdateKernel = value;
}
constexpr int32_t& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_LODUpdateKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LODUpdateKernel;
}
constexpr int32_t const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_LODUpdateKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LODUpdateKernel;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_LODUpdateKernel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LODUpdateKernel = value;
}
constexpr int32_t& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_WindDataCopyHistoryKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WindDataCopyHistoryKernel;
}
constexpr int32_t const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_WindDataCopyHistoryKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WindDataCopyHistoryKernel;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_WindDataCopyHistoryKernel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WindDataCopyHistoryKernel = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_UpdateIndexQueueBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateIndexQueueBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_UpdateIndexQueueBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateIndexQueueBuffer;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_UpdateIndexQueueBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UpdateIndexQueueBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_ProbeUpdateDataQueueBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeUpdateDataQueueBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_ProbeUpdateDataQueueBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeUpdateDataQueueBuffer;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_ProbeUpdateDataQueueBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProbeUpdateDataQueueBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_ProbeOcclusionUpdateDataQueueBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeOcclusionUpdateDataQueueBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_ProbeOcclusionUpdateDataQueueBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeOcclusionUpdateDataQueueBuffer;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_ProbeOcclusionUpdateDataQueueBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProbeOcclusionUpdateDataQueueBuffer)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_TransformUpdateDataQueueBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformUpdateDataQueueBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_TransformUpdateDataQueueBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformUpdateDataQueueBuffer;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_TransformUpdateDataQueueBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransformUpdateDataQueueBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_BoundingSpheresUpdateDataQueueBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoundingSpheresUpdateDataQueueBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_BoundingSpheresUpdateDataQueueBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoundingSpheresUpdateDataQueueBuffer;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_BoundingSpheresUpdateDataQueueBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BoundingSpheresUpdateDataQueueBuffer)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_EnableBoundingSpheres() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableBoundingSpheres;
}
constexpr bool const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_EnableBoundingSpheres() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableBoundingSpheres;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_EnableBoundingSpheres(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableBoundingSpheres = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_ScratchWindParamAddressArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScratchWindParamAddressArray;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_get_m_ScratchWindParamAddressArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScratchWindParamAddressArray;
}
constexpr void UnityEngine::Rendering::InstanceDataSystem::__cordl_internal_set_m_ScratchWindParamAddressArray(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScratchWindParamAddressArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::InstanceDataSystem::get_hasBoundingSpheres() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(),
                                                                             "get_hasBoundingSpheres", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CPUInstanceData_ReadOnly UnityEngine::Rendering::InstanceDataSystem::get_instanceData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(),
                                                                             "get_instanceData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CPUInstanceData_ReadOnly, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly UnityEngine::Rendering::InstanceDataSystem::get_sharedInstanceData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(),
                                                                             "get_sharedInstanceData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> UnityEngine::Rendering::InstanceDataSystem::get_aliveInstances() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(),
                                                                             "get_aliveInstances", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceDataSystem::_ctor(int32_t maxInstances, bool enableBoundingSpheres, ::UnityEngine::Rendering::GPUResidentDrawerResources* resources) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxInstances, enableBoundingSpheres, resources);
}
inline void UnityEngine::Rendering::InstanceDataSystem::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem::GetMaxInstancesOfType(::UnityEngine::Rendering::InstanceType instanceType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "GetMaxInstancesOfType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instanceType);
}
inline int32_t UnityEngine::Rendering::InstanceDataSystem::GetAliveInstancesOfType(::UnityEngine::Rendering::InstanceType instanceType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "GetAliveInstancesOfType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instanceType);
}
inline void UnityEngine::Rendering::InstanceDataSystem::EnsureIndexQueueBufferCapacity(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "EnsureIndexQueueBufferCapacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline void UnityEngine::Rendering::InstanceDataSystem::EnsureProbeBuffersCapacity(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "EnsureProbeBuffersCapacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline void UnityEngine::Rendering::InstanceDataSystem::EnsureTransformBuffersCapacity(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "EnsureTransformBuffersCapacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::InstanceDataSystem::ScheduleInterpolateProbesAndUpdateTetrahedronCache(
    int32_t queueCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> probeUpdateInstanceQueue, ::Unity::Collections::NativeArray_1<int32_t> compactTetrahedronCache,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> probeQueryPosition, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2> probeUpdateDataQueue,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> probeOcclusionUpdateDataQueue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleInterpolateProbesAndUpdateTetrahedronCache",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, queueCount, probeUpdateInstanceQueue, compactTetrahedronCache, probeQueryPosition,
                                                                              probeUpdateDataQueue, probeOcclusionUpdateDataQueue);
}
inline void UnityEngine::Rendering::InstanceDataSystem::DispatchProbeUpdateCommand(int32_t queueCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> probeInstanceQueue,
                                                                                   ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2> probeUpdateDataQueue,
                                                                                   ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> probeOcclusionUpdateDataQueue,
                                                                                   ::UnityEngine::Rendering::RenderersParameters renderersParameters,
                                                                                   ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "DispatchProbeUpdateCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, queueCount, probeInstanceQueue, probeUpdateDataQueue, probeOcclusionUpdateDataQueue, renderersParameters,
                                                          outputBuffer);
}
inline void UnityEngine::Rendering::InstanceDataSystem::DispatchMotionUpdateCommand(int32_t motionQueueCount,
                                                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> transformInstanceQueue,
                                                                                    ::UnityEngine::Rendering::RenderersParameters renderersParameters,
                                                                                    ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "DispatchMotionUpdateCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, motionQueueCount, transformInstanceQueue, renderersParameters, outputBuffer);
}
inline void UnityEngine::Rendering::InstanceDataSystem::DispatchTransformUpdateCommand(bool initialize, int32_t transformQueueCount,
                                                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> transformInstanceQueue,
                                                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket> updateDataQueue,
                                                                                       ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> boundingSphereUpdateDataQueue,
                                                                                       ::UnityEngine::Rendering::RenderersParameters renderersParameters,
                                                                                       ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "DispatchTransformUpdateCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialize, transformQueueCount, transformInstanceQueue, updateDataQueue, boundingSphereUpdateDataQueue,
                                                          renderersParameters, outputBuffer);
}
inline void UnityEngine::Rendering::InstanceDataSystem::DispatchWindDataCopyHistoryCommand(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices,
                                                                                           ::UnityEngine::Rendering::RenderersParameters renderersParameters,
                                                                                           ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "DispatchWindDataCopyHistoryCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gpuInstanceIndices, renderersParameters, outputBuffer);
}
inline void UnityEngine::Rendering::InstanceDataSystem::UpdateInstanceMotionsData(::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters,
                                                                                  ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateInstanceMotionsData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderersParameters, outputBuffer);
}
inline void UnityEngine::Rendering::InstanceDataSystem::UpdateInstanceTransformsData(bool initialize, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                                     ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices,
                                                                                     ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> prevLocalToWorldMatrices,
                                                                                     ::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters,
                                                                                     ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateInstanceTransformsData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialize, instances, localToWorldMatrices, prevLocalToWorldMatrices, renderersParameters, outputBuffer);
}
inline void UnityEngine::Rendering::InstanceDataSystem::UpdateInstanceProbesData(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                                 ::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters,
                                                                                 ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateInstanceProbesData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances, renderersParameters, outputBuffer);
}
inline void UnityEngine::Rendering::InstanceDataSystem::UpdateInstanceWindDataHistory(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices,
                                                                                      ::UnityEngine::Rendering::RenderersParameters renderersParameters,
                                                                                      ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateInstanceWindDataHistory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gpuInstanceIndices, renderersParameters, outputBuffer);
}
inline void UnityEngine::Rendering::InstanceDataSystem::ReallocateAndGetInstances(::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData,
                                                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ReallocateAndGetInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererData, instances);
}
inline void UnityEngine::Rendering::InstanceDataSystem::FreeRendererGroupInstances(::Unity::Collections::NativeArray_1<int32_t> rendererGroupsID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "FreeRendererGroupInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererGroupsID);
}
inline void UnityEngine::Rendering::InstanceDataSystem::FreeInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "FreeInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::InstanceDataSystem::ScheduleUpdateInstanceDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                          ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData,
                                                                          ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleUpdateInstanceDataJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, instances, rendererData, lodGroupDataMap);
}
inline void UnityEngine::Rendering::InstanceDataSystem::UpdateAllInstanceProbes(::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters,
                                                                                ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateAllInstanceProbes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderersParameters, outputBuffer);
}
inline void UnityEngine::Rendering::InstanceDataSystem::InitializeInstanceTransforms(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                                     ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices,
                                                                                     ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> prevLocalToWorldMatrices,
                                                                                     ::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters,
                                                                                     ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "InitializeInstanceTransforms", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances, localToWorldMatrices, prevLocalToWorldMatrices, renderersParameters, outputBuffer);
}
inline void UnityEngine::Rendering::InstanceDataSystem::UpdateInstanceTransforms(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                                 ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices,
                                                                                 ::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters,
                                                                                 ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateInstanceTransforms", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances, localToWorldMatrices, renderersParameters, outputBuffer);
}
inline void UnityEngine::Rendering::InstanceDataSystem::UpdateInstanceMotions(::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters,
                                                                              ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdateInstanceMotions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUInstanceDataBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderersParameters, outputBuffer);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::InstanceDataSystem::ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                                   ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleQueryRendererGroupInstancesJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, rendererGroupIDs, instances);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::InstanceDataSystem::ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                                   ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleQueryRendererGroupInstancesJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, rendererGroupIDs, instances);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::InstanceDataSystem::ScheduleQueryRendererGroupInstancesJob(
    ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs, ::Unity::Collections::NativeArray_1<int32_t> instancesOffset, ::Unity::Collections::NativeArray_1<int32_t> instancesCount,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleQueryRendererGroupInstancesJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, rendererGroupIDs, instancesOffset, instancesCount, instances);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::InstanceDataSystem::ScheduleQuerySortedMeshInstancesJob(::Unity::Collections::NativeArray_1<int32_t> sortedMeshIDs,
                                                                                ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleQuerySortedMeshInstancesJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, sortedMeshIDs, instances);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::InstanceDataSystem::ScheduleCollectInstancesLODGroupAndMasksJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                                        ::Unity::Collections::NativeArray_1<uint32_t> lodGroupAndMasks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "ScheduleCollectInstancesLODGroupAndMasksJob",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, instances, lodGroupAndMasks);
}
inline bool UnityEngine::Rendering::InstanceDataSystem::InternalSanityCheckStates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(),
                                                                             "InternalSanityCheckStates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceDataSystem::GetVisibleTreeInstances(::ByRef<::UnityEngine::Rendering::ParallelBitArray> compactedVisibilityMasks,
                                                                                ::ByRef<::UnityEngine::Rendering::ParallelBitArray> processedBits,
                                                                                ::Unity::Collections::NativeList_1<int32_t> visibeTreeRendererIDs,
                                                                                ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> visibeTreeInstances,
                                                                                bool becomeVisibleOnly, ::ByRef<int32_t> becomeVisibeTreeInstancesCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "GetVisibleTreeInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ParallelBitArray>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ParallelBitArray>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compactedVisibilityMasks, processedBits, visibeTreeRendererIDs, visibeTreeInstances, becomeVisibleOnly,
                                                          becomeVisibeTreeInstancesCount);
}
inline void UnityEngine::Rendering::InstanceDataSystem::UpdatePerFrameInstanceVisibility(::ByRef<::UnityEngine::Rendering::ParallelBitArray> compactedVisibilityMasks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "UpdatePerFrameInstanceVisibility", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ParallelBitArray>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compactedVisibilityMasks);
}
template <typename T> inline int32_t UnityEngine::Rendering::InstanceDataSystem::AtomicAddLengthNoResize(::ByRef<::Unity::Collections::NativeList_1<T>> list, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceDataSystem*>::get(), "AtomicAddLengthNoResize",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeList_1<T>>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, list, count);
}
inline ::UnityEngine::Rendering::InstanceDataSystem* UnityEngine::Rendering::InstanceDataSystem::New_ctor(int32_t maxInstances, bool enableBoundingSpheres,
                                                                                                          ::UnityEngine::Rendering::GPUResidentDrawerResources* resources) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::InstanceDataSystem*>(maxInstances, enableBoundingSpheres, resources));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::InstanceDataSystem::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::InstanceDataSystem::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystem::InstanceDataSystem() {}
