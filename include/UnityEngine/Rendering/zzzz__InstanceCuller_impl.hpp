#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCuller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContextHandles_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContextStorage_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullerSplitDebugArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionCullerShaderVariables_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionTestSubviewSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderHandles_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTestComputeShader_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCuller_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ComputeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BinningConfig_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUDrawInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ComputeCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugRendererBatcherStats_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContextHandles_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCuller_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionTestSubviewSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderHandles_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommon_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverPlanes_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersBatchersContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubviewOcclusionTest_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
inline void UnityEngine::Rendering::InstanceCuller_ShaderIDs::setStaticF_InstanceOcclusionCullerShaderVariables(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "InstanceOcclusionCullerShaderVariables",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceCuller_ShaderIDs::getStaticF_InstanceOcclusionCullerShaderVariables() {
  return ::cordl_internals::getStaticField<int32_t, "InstanceOcclusionCullerShaderVariables",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceCuller_ShaderIDs::setStaticF__DrawInfo(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DrawInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceCuller_ShaderIDs::getStaticF__DrawInfo() {
  return ::cordl_internals::getStaticField<int32_t, "_DrawInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceCuller_ShaderIDs::setStaticF__InstanceInfo(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InstanceInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceCuller_ShaderIDs::getStaticF__InstanceInfo() {
  return ::cordl_internals::getStaticField<int32_t, "_InstanceInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceCuller_ShaderIDs::setStaticF__DrawArgs(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DrawArgs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceCuller_ShaderIDs::getStaticF__DrawArgs() {
  return ::cordl_internals::getStaticField<int32_t, "_DrawArgs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceCuller_ShaderIDs::setStaticF__InstanceIndices(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InstanceIndices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceCuller_ShaderIDs::getStaticF__InstanceIndices() {
  return ::cordl_internals::getStaticField<int32_t, "_InstanceIndices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceCuller_ShaderIDs::setStaticF__InstanceDataBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InstanceDataBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceCuller_ShaderIDs::getStaticF__InstanceDataBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "_InstanceDataBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceCuller_ShaderIDs::setStaticF__OccluderDepthPyramid(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OccluderDepthPyramid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceCuller_ShaderIDs::getStaticF__OccluderDepthPyramid() {
  return ::cordl_internals::getStaticField<int32_t, "_OccluderDepthPyramid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>();
}
inline void UnityEngine::Rendering::InstanceCuller_ShaderIDs::setStaticF__OcclusionDebugCounters(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_OcclusionDebugCounters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::InstanceCuller_ShaderIDs::getStaticF__OcclusionDebugCounters() {
  return ::cordl_internals::getStaticField<int32_t, "_OcclusionDebugCounters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_ShaderIDs*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCuller_ShaderIDs::InstanceCuller_ShaderIDs() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput::*)()>(
    &::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput::Execute)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x65fcd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "lodBias", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "context", ty: "::UnityEngine::Rendering::BatchCullingContext*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "receiverPlanes", ty: "::UnityEngine::Rendering::ReceiverPlanes*", modifiers: "", def_value: Some("{}") }, CppParam { name: "receiverSphereCuller", ty:
// "::UnityEngine::Rendering::ReceiverSphereCuller*", modifiers: "", def_value: Some("{}") }, CppParam { name: "frustumPlaneCuller", ty: "::UnityEngine::Rendering::FrustumPlaneCuller*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "screenRelativeMetric", ty: "float_t*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput::InstanceCuller_SetupCullingJobInput(float_t lodBias, ::UnityEngine::Rendering::BatchCullingContext* context,
                                                                                                             ::UnityEngine::Rendering::ReceiverPlanes* receiverPlanes,
                                                                                                             ::UnityEngine::Rendering::ReceiverSphereCuller* receiverSphereCuller,
                                                                                                             ::UnityEngine::Rendering::FrustumPlaneCuller* frustumPlaneCuller,
                                                                                                             float_t* screenRelativeMetric) noexcept {
  this->lodBias = lodBias;
  this->context = context;
  this->receiverPlanes = receiverPlanes;
  this->receiverSphereCuller = receiverSphereCuller;
  this->frustumPlaneCuller = frustumPlaneCuller;
  this->screenRelativeMetric = screenRelativeMetric;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput::InstanceCuller_SetupCullingJobInput() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::*)()>(
    &::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65fce64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::OcclusionCullingSettings& UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::UnityEngine::Rendering::OcclusionCullingSettings const& UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::__cordl_internal_set_settings(::UnityEngine::Rendering::OcclusionCullingSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
constexpr ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings& UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::__cordl_internal_get_subviewSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subviewSettings;
}
constexpr ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings const& UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::__cordl_internal_get_subviewSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subviewSettings;
}
constexpr void UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::__cordl_internal_set_subviewSettings(::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subviewSettings = value;
}
constexpr ::UnityEngine::Rendering::OccluderHandles& UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::__cordl_internal_get_occluderHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occluderHandles;
}
constexpr ::UnityEngine::Rendering::OccluderHandles const& UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::__cordl_internal_get_occluderHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occluderHandles;
}
constexpr void UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::__cordl_internal_set_occluderHandles(::UnityEngine::Rendering::OccluderHandles value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occluderHandles = value;
}
constexpr ::UnityEngine::Rendering::IndirectBufferContextHandles& UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::__cordl_internal_get_bufferHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferHandles;
}
constexpr ::UnityEngine::Rendering::IndirectBufferContextHandles const& UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::__cordl_internal_get_bufferHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferHandles;
}
constexpr void UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::__cordl_internal_set_bufferHandles(::UnityEngine::Rendering::IndirectBufferContextHandles value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferHandles = value;
}
inline void UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData* UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData::InstanceCuller_InstanceOcclusionTestPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller___c::*)()>(&::UnityEngine::Rendering::InstanceCuller___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65fcebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller___c._InstanceOcclusionTest_b__26_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller___c::*)(
    ::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*)>(
    &::UnityEngine::Rendering::InstanceCuller___c::_InstanceOcclusionTest_b__26_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65fcec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller___c*>::get(), "<InstanceOcclusionTest>b__26_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceCuller___c::setStaticF___9(::UnityEngine::Rendering::InstanceCuller___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::InstanceCuller___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller___c*>::get>(
      std::forward<::UnityEngine::Rendering::InstanceCuller___c*>(value));
}
inline ::UnityEngine::Rendering::InstanceCuller___c* UnityEngine::Rendering::InstanceCuller___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::InstanceCuller___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller___c*>::get>();
}
inline void UnityEngine::Rendering::InstanceCuller___c::setStaticF___9__26_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*,
                                    "<>9__26_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
UnityEngine::Rendering::InstanceCuller___c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*,
                                           "<>9__26_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller___c*>::get>();
}
inline void UnityEngine::Rendering::InstanceCuller___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCuller___c::_InstanceOcclusionTest_b__26_0(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData* data,
                                                                                       ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller___c*>::get(), "<InstanceOcclusionTest>b__26_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::InstanceCuller___c* UnityEngine::Rendering::InstanceCuller___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::InstanceCuller___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCuller___c::InstanceCuller___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)(
    ::UnityEngine::Rendering::GPUResidentDrawerResources*, ::UnityEngine::Rendering::DebugRendererBatcherStats*)>(&::UnityEngine::Rendering::InstanceCuller::Init)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x65faa18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugRendererBatcherStats*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.CreateFrustumCullingJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::InstanceCuller::*)(
    ::ByRef<::UnityEngine::Rendering::BatchCullingContext>, ::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>, ::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>, ::ByRef<::UnityEngine::Rendering::BinningConfig>, float_t, ::UnityEngine::Rendering::OcclusionCullingCommon*,
    ::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<uint8_t>)>(&::UnityEngine::Rendering::InstanceCuller::CreateFrustumCullingJob)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x65fac9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "CreateFrustumCullingJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchCullingContext>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BinningConfig>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.ComputeWorstCaseDrawCommandCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::InstanceCuller::*)(
    ::ByRef<::UnityEngine::Rendering::BatchCullingContext>, ::UnityEngine::Rendering::BinningConfig, ::UnityEngine::Rendering::CPUDrawInstanceData*, int32_t)>(
    &::UnityEngine::Rendering::InstanceCuller::ComputeWorstCaseDrawCommandCount)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x65fb0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "ComputeWorstCaseDrawCommandCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchCullingContext>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BinningConfig>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CPUDrawInstanceData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.CreateCullJobTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::InstanceCuller::*)(
    ::ByRef<::UnityEngine::Rendering::BatchCullingContext>, ::UnityEngine::Rendering::BatchCullingOutput, ::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>,
    ::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>, ::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly>,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>, ::UnityEngine::Rendering::CPUDrawInstanceData*,
    ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID>, int32_t, float_t, ::UnityEngine::Rendering::OcclusionCullingCommon*)>(
    &::UnityEngine::Rendering::InstanceCuller::CreateCullJobTree)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0x65fb1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "CreateCullJobTree", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchCullingContext>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchCullingOutput>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CPUDrawInstanceData*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionCullingCommon*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.CreateCompactedVisibilityMaskJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::InstanceCuller::*)(
    ::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>, ::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Jobs::JobHandle)>(
    &::UnityEngine::Rendering::InstanceCuller::CreateCompactedVisibilityMaskJob)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x65fba14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "CreateCompactedVisibilityMaskJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.InstanceOccludersUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)(
    int32_t, int32_t, ::UnityEngine::Rendering::RenderersBatchersContext*)>(&::UnityEngine::Rendering::InstanceCuller::InstanceOccludersUpdated)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x65fbb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "InstanceOccludersUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersBatchersContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.DisposeCompactVisibilityMasks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)()>(
    &::UnityEngine::Rendering::InstanceCuller::DisposeCompactVisibilityMasks)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65fbbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(),
                                                                               "DisposeCompactVisibilityMasks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.DisposeSceneViewHiddenBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)()>(
    &::UnityEngine::Rendering::InstanceCuller::DisposeSceneViewHiddenBits)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65fbc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(),
                                                                               "DisposeSceneViewHiddenBits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.GetCompactedVisibilityMasks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ParallelBitArray (::UnityEngine::Rendering::InstanceCuller::*)(bool)>(
    &::UnityEngine::Rendering::InstanceCuller::GetCompactedVisibilityMasks)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65fbc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "GetCompactedVisibilityMasks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.InstanceOcclusionTest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>,
    ::UnityEngine::Rendering::RenderersBatchersContext*)>(&::UnityEngine::Rendering::InstanceCuller::InstanceOcclusionTest)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x65f286c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "InstanceOcclusionTest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersBatchersContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.EnsureValidOcclusionTestResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)(int32_t)>(
    &::UnityEngine::Rendering::InstanceCuller::EnsureValidOcclusionTestResults)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x65fbcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "EnsureValidOcclusionTestResults",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.AddOcclusionCullingDispatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)(
    ::UnityEngine::Rendering::ComputeCommandBuffer*, ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>, ::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>,
    ::ByRef<::UnityEngine::Rendering::IndirectBufferContextHandles>, ::ByRef<::UnityEngine::Rendering::OccluderHandles>, ::UnityEngine::Rendering::RenderersBatchersContext*)>(
    &::UnityEngine::Rendering::InstanceCuller::AddOcclusionCullingDispatch)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x65fbf68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "AddOcclusionCullingDispatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::IndirectBufferContextHandles>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderHandles>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersBatchersContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.FlushDebugCounters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)()>(
    &::UnityEngine::Rendering::InstanceCuller::FlushDebugCounters)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65fc994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(),
                                                                               "FlushDebugCounters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.OnBeginSceneViewCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)()>(
    &::UnityEngine::Rendering::InstanceCuller::OnBeginSceneViewCameraRendering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65fc9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "OnBeginSceneViewCameraRendering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.OnEndSceneViewCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)()>(
    &::UnityEngine::Rendering::InstanceCuller::OnEndSceneViewCameraRendering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65fc9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(),
                                                                               "OnEndSceneViewCameraRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.UpdateFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)()>(&::UnityEngine::Rendering::InstanceCuller::UpdateFrame)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65fc9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "UpdateFrame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.OnBeginCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::InstanceCuller::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65fca34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "OnBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.OnEndCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::InstanceCuller::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65fca4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "OnEndCameraRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCuller.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceCuller::*)()>(&::UnityEngine::Rendering::InstanceCuller::Dispose)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x65fca64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceCuller::Init(::UnityEngine::Rendering::GPUResidentDrawerResources* resources, ::UnityEngine::Rendering::DebugRendererBatcherStats* debugStats) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugRendererBatcherStats*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resources, debugStats);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::InstanceCuller::CreateFrustumCullingJob(
    ::ByRef<::UnityEngine::Rendering::BatchCullingContext> cc, ::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly> instanceData,
    ::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly> sharedInstanceData, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData,
    ::ByRef<::UnityEngine::Rendering::BinningConfig> binningConfig, float_t smallMeshScreenPercentage, ::UnityEngine::Rendering::OcclusionCullingCommon* occlusionCullingCommon,
    ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks, ::Unity::Collections::NativeArray_1<uint8_t> rendererCrossFadeValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "CreateFrustumCullingJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchCullingContext>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BinningConfig>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionCullingCommon*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, cc, instanceData, sharedInstanceData, lodGroupCullingData, binningConfig,
                                                                              smallMeshScreenPercentage, occlusionCullingCommon, rendererVisibilityMasks, rendererCrossFadeValues);
}
inline int32_t UnityEngine::Rendering::InstanceCuller::ComputeWorstCaseDrawCommandCount(::ByRef<::UnityEngine::Rendering::BatchCullingContext> cc,
                                                                                        ::UnityEngine::Rendering::BinningConfig binningConfig,
                                                                                        ::UnityEngine::Rendering::CPUDrawInstanceData* drawInstanceData, int32_t crossFadedRendererCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "ComputeWorstCaseDrawCommandCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchCullingContext>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BinningConfig>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CPUDrawInstanceData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cc, binningConfig, drawInstanceData, crossFadedRendererCount);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::InstanceCuller::CreateCullJobTree(
    ::ByRef<::UnityEngine::Rendering::BatchCullingContext> cc, ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly> instanceData,
    ::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly> sharedInstanceData, ::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly> instanceDataBuffer,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData, ::UnityEngine::Rendering::CPUDrawInstanceData* drawInstanceData,
    ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID> batchIDs, int32_t crossFadedRendererCount, float_t smallMeshScreenPercentage,
    ::UnityEngine::Rendering::OcclusionCullingCommon* occlusionCullingCommon) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "CreateCullJobTree", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchCullingContext>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchCullingOutput>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CPUDrawInstanceData*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::OcclusionCullingCommon*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, cc, cullingOutput, instanceData, sharedInstanceData, instanceDataBuffer, lodGroupCullingData,
                                                                              drawInstanceData, batchIDs, crossFadedRendererCount, smallMeshScreenPercentage, occlusionCullingCommon);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::InstanceCuller::CreateCompactedVisibilityMaskJob(::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly> instanceData,
                                                                                                         ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks,
                                                                                                         ::Unity::Jobs::JobHandle cullingJobHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "CreateCompactedVisibilityMaskJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, instanceData, rendererVisibilityMasks, cullingJobHandle);
}
inline void UnityEngine::Rendering::InstanceCuller::InstanceOccludersUpdated(int32_t viewInstanceID, int32_t subviewMask, ::UnityEngine::Rendering::RenderersBatchersContext* batchersContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "InstanceOccludersUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersBatchersContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewInstanceID, subviewMask, batchersContext);
}
inline void UnityEngine::Rendering::InstanceCuller::DisposeCompactVisibilityMasks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(),
                                                                             "DisposeCompactVisibilityMasks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCuller::DisposeSceneViewHiddenBits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(),
                                                                             "DisposeSceneViewHiddenBits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ParallelBitArray UnityEngine::Rendering::InstanceCuller::GetCompactedVisibilityMasks(bool syncCullingJobs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "GetCompactedVisibilityMasks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ParallelBitArray, false>(this, ___internal_method, syncCullingJobs);
}
inline void UnityEngine::Rendering::InstanceCuller::InstanceOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                          ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings> settings,
                                                                          ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest> subviewOcclusionTests,
                                                                          ::UnityEngine::Rendering::RenderersBatchersContext* batchersContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "InstanceOcclusionTest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersBatchersContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, settings, subviewOcclusionTests, batchersContext);
}
inline void UnityEngine::Rendering::InstanceCuller::EnsureValidOcclusionTestResults(int32_t viewInstanceID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "EnsureValidOcclusionTestResults",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewInstanceID);
}
inline void UnityEngine::Rendering::InstanceCuller::AddOcclusionCullingDispatch(::UnityEngine::Rendering::ComputeCommandBuffer* cmd,
                                                                                ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings> settings,
                                                                                ::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings> subviewSettings,
                                                                                ::ByRef<::UnityEngine::Rendering::IndirectBufferContextHandles> bufferHandles,
                                                                                ::ByRef<::UnityEngine::Rendering::OccluderHandles> occluderHandles,
                                                                                ::UnityEngine::Rendering::RenderersBatchersContext* batchersContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "AddOcclusionCullingDispatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ComputeCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::IndirectBufferContextHandles>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderHandles>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersBatchersContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, settings, subviewSettings, bufferHandles, occluderHandles, batchersContext);
}
inline void UnityEngine::Rendering::InstanceCuller::FlushDebugCounters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(),
                                                                             "FlushDebugCounters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCuller::OnBeginSceneViewCameraRendering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(),
                                                                             "OnBeginSceneViewCameraRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCuller::OnEndSceneViewCameraRendering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(),
                                                                             "OnEndSceneViewCameraRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCuller::UpdateFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "UpdateFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCuller::OnBeginCameraRendering(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "OnBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
inline void UnityEngine::Rendering::InstanceCuller::OnEndCameraRendering(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "OnEndCameraRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
inline void UnityEngine::Rendering::InstanceCuller::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceCuller>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::InstanceCuller::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::InstanceCuller::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_CompactedVisibilityMasks", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_CompactedVisibilityMasksJobsHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IndirectStorage", ty:
// "::UnityEngine::Rendering::IndirectBufferContextStorage", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OcclusionTestShader", ty:
// "::UnityEngine::Rendering::OcclusionTestComputeShader", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ResetDrawArgsKernel", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_CopyInstancesKernel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CullInstancesKernel", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_DebugStats", ty: "::UnityEngine::Rendering::DebugRendererBatcherStats*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SplitDebugArray", ty:
// "::UnityEngine::Rendering::InstanceCullerSplitDebugArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OcclusionEventDebugArray", ty:
// "::UnityEngine::Rendering::InstanceOcclusionEventDebugArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProfilingSampleInstanceOcclusionTest", ty:
// "::UnityEngine::Rendering::ProfilingSampler*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ShaderVariables", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ConstantBuffer", ty:
// "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CommandBuffer", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceCuller::InstanceCuller(::UnityEngine::Rendering::ParallelBitArray m_CompactedVisibilityMasks, ::Unity::Jobs::JobHandle m_CompactedVisibilityMasksJobsHandle,
                                                                   ::UnityEngine::Rendering::IndirectBufferContextStorage m_IndirectStorage,
                                                                   ::UnityEngine::Rendering::OcclusionTestComputeShader m_OcclusionTestShader, int32_t m_ResetDrawArgsKernel,
                                                                   int32_t m_CopyInstancesKernel, int32_t m_CullInstancesKernel, ::UnityEngine::Rendering::DebugRendererBatcherStats* m_DebugStats,
                                                                   ::UnityEngine::Rendering::InstanceCullerSplitDebugArray m_SplitDebugArray,
                                                                   ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray m_OcclusionEventDebugArray,
                                                                   ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampleInstanceOcclusionTest,
                                                                   ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables> m_ShaderVariables,
                                                                   ::UnityEngine::ComputeBuffer* m_ConstantBuffer, ::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer) noexcept {
  this->m_CompactedVisibilityMasks = m_CompactedVisibilityMasks;
  this->m_CompactedVisibilityMasksJobsHandle = m_CompactedVisibilityMasksJobsHandle;
  this->m_IndirectStorage = m_IndirectStorage;
  this->m_OcclusionTestShader = m_OcclusionTestShader;
  this->m_ResetDrawArgsKernel = m_ResetDrawArgsKernel;
  this->m_CopyInstancesKernel = m_CopyInstancesKernel;
  this->m_CullInstancesKernel = m_CullInstancesKernel;
  this->m_DebugStats = m_DebugStats;
  this->m_SplitDebugArray = m_SplitDebugArray;
  this->m_OcclusionEventDebugArray = m_OcclusionEventDebugArray;
  this->m_ProfilingSampleInstanceOcclusionTest = m_ProfilingSampleInstanceOcclusionTest;
  this->m_ShaderVariables = m_ShaderVariables;
  this->m_ConstantBuffer = m_ConstantBuffer;
  this->m_CommandBuffer = m_CommandBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCuller::InstanceCuller() {}
