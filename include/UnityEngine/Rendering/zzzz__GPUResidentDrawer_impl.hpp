#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplayGPUResidentDrawer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugRendererBatcherStats_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenProcessor_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentBatcher_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawer_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderSubviewUpdate_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderRequestBatcherContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersBatchersContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubviewOcclusionTest_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__ObjectDispatcher_def.hpp"
#include "UnityEngine/zzzz__TypeDispatchData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob::Execute)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x665e288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "batchMaterialHash", ty: "::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "materialIDs", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportedMaterialIDs", ty:
// "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "unsupportedMaterialIDs", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "supportedPackedMaterialDatas", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob::GPUResidentDrawer_ClassifyMaterialsJob(
    ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::BatchMaterialID> batchMaterialHash, ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> materialIDs,
    ::Unity::Collections::NativeList_1<int32_t> supportedMaterialIDs, ::Unity::Collections::NativeList_1<int32_t> unsupportedMaterialIDs,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> supportedPackedMaterialDatas) noexcept {
  this->batchMaterialHash = batchMaterialHash;
  this->materialIDs = materialIDs;
  this->supportedMaterialIDs = supportedMaterialIDs;
  this->unsupportedMaterialIDs = unsupportedMaterialIDs;
  this->supportedPackedMaterialDatas = supportedPackedMaterialDatas;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob::GPUResidentDrawer_ClassifyMaterialsJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob::Execute)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x665e6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "unsupportedMaterials", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialIDArrays",
// ty: "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererGroups", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "unsupportedRenderers", ty: "::Unity::Collections::NativeList_1<int32_t>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob::GPUResidentDrawer_FindUnsupportedRenderersJob(
    ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> unsupportedMaterials, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray> materialIDArrays,
    ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> rendererGroups, ::Unity::Collections::NativeList_1<int32_t> unsupportedRenderers) noexcept {
  this->unsupportedMaterials = unsupportedMaterials;
  this->materialIDArrays = materialIDArrays;
  this->rendererGroups = rendererGroups;
  this->unsupportedRenderers = unsupportedRenderers;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob::GPUResidentDrawer_FindUnsupportedRenderersJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob::Execute)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x665e8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob::Execute(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob::operator ::Unity::Jobs::IJobParallelForBatch*() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob::i___Unity__Jobs__IJobParallelForBatch() {
  return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "materialIDs", ty: "::Unity::Collections::NativeHashSet_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialIDArrays", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererGroupIDs", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sortedExcludeRendererIDs", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "selectedRenderGroups", ty:
// "::Unity::Collections::NativeList_1_ParallelWriter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob::GPUResidentDrawer_FindRenderersFromMaterialJob(
    ::Unity::Collections::NativeHashSet_1_ReadOnly<int32_t> materialIDs, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray> materialIDArrays,
    ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> rendererGroupIDs, ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> sortedExcludeRendererIDs,
    ::Unity::Collections::NativeList_1_ParallelWriter<int32_t> selectedRenderGroups) noexcept {
  this->materialIDs = materialIDs;
  this->materialIDArrays = materialIDArrays;
  this->rendererGroupIDs = rendererGroupIDs;
  this->sortedExcludeRendererIDs = sortedExcludeRendererIDs;
  this->selectedRenderGroups = selectedRenderGroups;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob::GPUResidentDrawer_FindRenderersFromMaterialJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob::Execute)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x665eb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob>::get(),
                                                 "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob>::get(),
                                               "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "materialIDs", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedMaterialDatas", ty:
// "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedMaterialHash", ty:
// "::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "filteredMaterials", ty: "::Unity::Collections::NativeHashSet_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob(
    ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> materialIDs, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas,
    ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialHash,
    ::Unity::Collections::NativeHashSet_1<int32_t> filteredMaterials) noexcept {
  this->materialIDs = materialIDs;
  this->packedMaterialDatas = packedMaterialDatas;
  this->packedMaterialHash = packedMaterialHash;
  this->filteredMaterials = filteredMaterials;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob() {}
inline void UnityEngine::Rendering::GPUResidentDrawer_Strings::setStaticF_drawerModeDisabled(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "drawerModeDisabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_Strings*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::GPUResidentDrawer_Strings::getStaticF_drawerModeDisabled() {
  return ::cordl_internals::getStaticField<::StringW, "drawerModeDisabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_Strings*>::get>();
}
inline void UnityEngine::Rendering::GPUResidentDrawer_Strings::setStaticF_allowInEditModeDisabled(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "allowInEditModeDisabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_Strings*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::GPUResidentDrawer_Strings::getStaticF_allowInEditModeDisabled() {
  return ::cordl_internals::getStaticField<::StringW, "allowInEditModeDisabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_Strings*>::get>();
}
inline void UnityEngine::Rendering::GPUResidentDrawer_Strings::setStaticF_notGPUResidentRenderPipeline(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "notGPUResidentRenderPipeline", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_Strings*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::GPUResidentDrawer_Strings::getStaticF_notGPUResidentRenderPipeline() {
  return ::cordl_internals::getStaticField<::StringW, "notGPUResidentRenderPipeline",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_Strings*>::get>();
}
inline void UnityEngine::Rendering::GPUResidentDrawer_Strings::setStaticF_rawBufferNotSupportedByPlatform(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rawBufferNotSupportedByPlatform", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_Strings*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::GPUResidentDrawer_Strings::getStaticF_rawBufferNotSupportedByPlatform() {
  return ::cordl_internals::getStaticField<::StringW, "rawBufferNotSupportedByPlatform",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_Strings*>::get>();
}
inline void UnityEngine::Rendering::GPUResidentDrawer_Strings::setStaticF_kernelNotPresent(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kernelNotPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_Strings*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::GPUResidentDrawer_Strings::getStaticF_kernelNotPresent() {
  return ::cordl_internals::getStaticField<::StringW, "kernelNotPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_Strings*>::get>();
}
inline void UnityEngine::Rendering::GPUResidentDrawer_Strings::setStaticF_batchRendererGroupShaderStrippingModeInvalid(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "batchRendererGroupShaderStrippingModeInvalid",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_Strings*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::GPUResidentDrawer_Strings::getStaticF_batchRendererGroupShaderStrippingModeInvalid() {
  return ::cordl_internals::getStaticField<::StringW, "batchRendererGroupShaderStrippingModeInvalid",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer_Strings*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawer_Strings::GPUResidentDrawer_Strings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUResidentDrawer* (*)()>(&::UnityEngine::Rendering::GPUResidentDrawer::get_instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x665b484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.IsInstanceOcclusionCullingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::GPUResidentDrawer::IsInstanceOcclusionCullingEnabled)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x665b4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "IsInstanceOcclusionCullingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.PostCullBeginCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RenderRequestBatcherContext)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::PostCullBeginCameraRendering)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x665b53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "PostCullBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderRequestBatcherContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.OnSetupAmbientProbe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::GPUResidentDrawer::OnSetupAmbientProbe)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x665b5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "OnSetupAmbientProbe", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.InstanceOcclusionTest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::InstanceOcclusionTest)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x665b608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "InstanceOcclusionTest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.UpdateInstanceOccluders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::ByRef<::UnityEngine::Rendering::OccluderParameters>, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::UpdateInstanceOccluders)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x665b6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "UpdateInstanceOccluders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.ReinitializeIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::GPUResidentDrawer::ReinitializeIfNeeded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x665b748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "ReinitializeIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.RenderDebugOcclusionTestOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::RenderDebugOcclusionTestOverlay)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x665b74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "RenderDebugOcclusionTestOverlay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.RenderDebugOccluderOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*, ::UnityEngine::Vector2, float_t,
                         ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::GPUResidentDrawer::RenderDebugOccluderOverlay)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x665b808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "RenderDebugOccluderOverlay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.GetDebugStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DebugRendererBatcherStats* (*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawer::GetDebugStats)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6653af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "GetDebugStats", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.InsertIntoPlayerLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawer::InsertIntoPlayerLoop)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x665b8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "InsertIntoPlayerLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.RemoveFromPlayerLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawer::RemoveFromPlayerLoop)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x665bd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "RemoveFromPlayerLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::GPUResidentDrawer::IsEnabled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6657a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "IsEnabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.GetGlobalSettingsFromRPAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUResidentDrawerSettings (*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawer::GetGlobalSettingsFromRPAsset)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6657714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "GetGlobalSettingsFromRPAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.IsForcedOnViaCommandLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::GPUResidentDrawer::IsForcedOnViaCommandLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665bfec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "IsForcedOnViaCommandLine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.IsOcclusionForcedOnViaCommandLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::GPUResidentDrawer::IsOcclusionForcedOnViaCommandLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665bff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "IsOcclusionForcedOnViaCommandLine",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.Reinitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::GPUResidentDrawer::Reinitialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x665bffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "Reinitialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.CleanUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::GPUResidentDrawer::CleanUp)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x665c0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "CleanUp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.Recreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::GPUResidentDrawerSettings)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::Recreate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x665c020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "Recreate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.get_batcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUResidentBatcher* (::UnityEngine::Rendering::GPUResidentDrawer::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawer::get_batcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665ca70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "get_batcher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.get_settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUResidentDrawerSettings (::UnityEngine::Rendering::GPUResidentDrawer::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawer::get_settings)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x665ca78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "get_settings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(::UnityEngine::Rendering::GPUResidentDrawerSettings, int32_t, int32_t)>(&::UnityEngine::Rendering::GPUResidentDrawer::_ctor)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x665c3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerSettings>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)()>(&::UnityEngine::Rendering::GPUResidentDrawer::Dispose)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x665c144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.OnSceneLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::UnityEngine::Rendering::GPUResidentDrawer::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x665ca8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "OnSceneLoaded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.PostPostLateUpdateStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::GPUResidentDrawer::PostPostLateUpdateStatic)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x665cab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "PostPostLateUpdateStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.OnBeginContextRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(
        &::UnityEngine::Rendering::GPUResidentDrawer::OnBeginContextRendering)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x665cea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "OnBeginContextRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.OnEndContextRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(
        &::UnityEngine::Rendering::GPUResidentDrawer::OnEndContextRendering)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x665cf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "OnEndContextRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.OnBeginCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::GPUResidentDrawer::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x665d04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "OnBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.OnEndCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::GPUResidentDrawer::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x665d080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "OnEndCameraRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.PostPostLateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)()>(
    &::UnityEngine::Rendering::GPUResidentDrawer::PostPostLateUpdate)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x665cb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "PostPostLateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.ProcessMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>)>(&::UnityEngine::Rendering::GPUResidentDrawer::ProcessMaterials)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x665d39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ProcessMaterials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.ProcessMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::ProcessMeshes)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x665d410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ProcessMeshes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.ProcessLODGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::ProcessLODGroups)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x665d56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ProcessLODGroups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.ProcessRendererMaterialChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::ProcessRendererMaterialChanges)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x665d820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ProcessRendererMaterialChanges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.ProcessRenderers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::UnityEngine::TypeDispatchData, ::Unity::Collections::NativeArray_1<int32_t>)>(&::UnityEngine::Rendering::GPUResidentDrawer::ProcessRenderers)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x665d5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ProcessRenderers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TypeDispatchData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.TransformInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::TransformInstances)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x665e0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "TransformInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.FreeInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>)>(&::UnityEngine::Rendering::GPUResidentDrawer::FreeInstances)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x665e0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "FreeInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.FreeRendererGroupInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>)>(&::UnityEngine::Rendering::GPUResidentDrawer::FreeRendererGroupInstances)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x665dfc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "FreeRendererGroupInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.AppendNewInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::InstanceHandle (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    int32_t, ::ByRef<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Rendering::GPUResidentDrawer::AppendNewInstance)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x665e11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "AppendNewInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.ScheduleQueryRendererGroupInstancesJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::ScheduleQueryRendererGroupInstancesJob)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x665dfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ScheduleQueryRendererGroupInstancesJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.ScheduleQueryRendererGroupInstancesJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::ScheduleQueryRendererGroupInstancesJob)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x665e154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ScheduleQueryRendererGroupInstancesJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.ScheduleQueryRendererGroupInstancesJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>)>(&::UnityEngine::Rendering::GPUResidentDrawer::ScheduleQueryRendererGroupInstancesJob)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x665e178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ScheduleQueryRendererGroupInstancesJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.ScheduleQueryMeshInstancesJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::ScheduleQueryMeshInstancesJob)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x665dbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ScheduleQueryMeshInstancesJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.ClassifyMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::ByRef<::Unity::Collections::NativeList_1<int32_t>>, ::ByRef<::Unity::Collections::NativeList_1<int32_t>>,
    ::ByRef<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>, ::Unity::Collections::Allocator)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::ClassifyMaterials)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x665d0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ClassifyMaterials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeList_1<int32_t>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeList_1<int32_t>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.FindUnsupportedRenderers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeList_1<int32_t> (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<int32_t>)>(&::UnityEngine::Rendering::GPUResidentDrawer::FindUnsupportedRenderers)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x665d278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "FindUnsupportedRenderers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.GetMaterialsWithChangedPackedMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeHashSet_1<int32_t> (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>, ::Unity::Collections::Allocator)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::GetMaterialsWithChangedPackedMaterial)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x665dc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "GetMaterialsWithChangedPackedMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.FindRenderersFromMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeList_1<int32_t> (::UnityEngine::Rendering::GPUResidentDrawer::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeHashSet_1<int32_t>, ::Unity::Collections::Allocator)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::FindRenderersFromMaterials)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x665dda4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "FindRenderersFromMaterials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeHashSet_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.IsProjectSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::GPUResidentDrawer::IsProjectSupported)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x665e19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                               "IsProjectSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.IsProjectSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::StringW>, ::ByRef<::UnityEngine::LogType>)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::IsProjectSupported)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x665e1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "IsProjectSupported", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::LogType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.IsGPUResidentDrawerSupportedBySRP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::GPUResidentDrawerSettings, ::ByRef<::StringW>, ::ByRef<::UnityEngine::LogType>)>(
    &::UnityEngine::Rendering::GPUResidentDrawer::IsGPUResidentDrawerSupportedBySRP)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6657870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "IsGPUResidentDrawerSupportedBySRP", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerSettings>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::LogType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawer.LogMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::LogType)>(&::UnityEngine::Rendering::GPUResidentDrawer::LogMessage)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x665c9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "LogMessage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_get_m_ContextIntPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContextIntPtr;
}
constexpr ::System::IntPtr const& UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_get_m_ContextIntPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContextIntPtr;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_set_m_ContextIntPtr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContextIntPtr = value;
}
constexpr ::UnityEngine::Rendering::GPUResidentDrawerSettings& UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::Rendering::GPUResidentDrawerSettings const& UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::GPUResidentDrawerSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
constexpr ::UnityEngine::Rendering::GPUDrivenProcessor*& UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_get_m_GPUDrivenProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GPUDrivenProcessor;
}
constexpr ::UnityEngine::Rendering::GPUDrivenProcessor* const& UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_get_m_GPUDrivenProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GPUDrivenProcessor;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_set_m_GPUDrivenProcessor(::UnityEngine::Rendering::GPUDrivenProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GPUDrivenProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderersBatchersContext*& UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_get_m_BatchersContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BatchersContext;
}
constexpr ::UnityEngine::Rendering::RenderersBatchersContext* const& UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_get_m_BatchersContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BatchersContext;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_set_m_BatchersContext(::UnityEngine::Rendering::RenderersBatchersContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BatchersContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::GPUResidentBatcher*& UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_get_m_Batcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Batcher;
}
constexpr ::UnityEngine::Rendering::GPUResidentBatcher* const& UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_get_m_Batcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Batcher;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_set_m_Batcher(::UnityEngine::Rendering::GPUResidentBatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Batcher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ObjectDispatcher*& UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_get_m_Dispatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dispatcher;
}
constexpr ::UnityEngine::ObjectDispatcher* const& UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_get_m_Dispatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dispatcher;
}
constexpr void UnityEngine::Rendering::GPUResidentDrawer::__cordl_internal_set_m_Dispatcher(::UnityEngine::ObjectDispatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Dispatcher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::GPUResidentDrawer::setStaticF_s_Instance(::UnityEngine::Rendering::GPUResidentDrawer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::GPUResidentDrawer*, "s_Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get>(
      std::forward<::UnityEngine::Rendering::GPUResidentDrawer*>(value));
}
inline ::UnityEngine::Rendering::GPUResidentDrawer* UnityEngine::Rendering::GPUResidentDrawer::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::GPUResidentDrawer*, "s_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get>();
}
inline ::UnityEngine::Rendering::GPUResidentDrawer* UnityEngine::Rendering::GPUResidentDrawer::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUResidentDrawer*, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::GPUResidentDrawer::IsInstanceOcclusionCullingEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "IsInstanceOcclusionCullingEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::PostCullBeginCameraRendering(::UnityEngine::Rendering::RenderRequestBatcherContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "PostCullBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderRequestBatcherContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::OnSetupAmbientProbe() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "OnSetupAmbientProbe", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::InstanceOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                             ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings> settings,
                                                                             ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest> subviewOcclusionTests) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "InstanceOcclusionTest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderGraph, settings, subviewOcclusionTests);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::UpdateInstanceOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                               ::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParameters,
                                                                               ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "UpdateInstanceOccluders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderGraph, occluderParameters, occluderSubviewUpdates);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::ReinitializeIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "ReinitializeIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::RenderDebugOcclusionTestOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                       ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* debugSettings, int32_t viewInstanceID,
                                                                                       ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "RenderDebugOcclusionTestOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderGraph, debugSettings, viewInstanceID, colorBuffer);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::RenderDebugOccluderOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                  ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* debugSettings, ::UnityEngine::Vector2 screenPos,
                                                                                  float_t maxHeight, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "RenderDebugOccluderOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderGraph, debugSettings, screenPos, maxHeight, colorBuffer);
}
inline ::UnityEngine::Rendering::DebugRendererBatcherStats* UnityEngine::Rendering::GPUResidentDrawer::GetDebugStats() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "GetDebugStats", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugRendererBatcherStats*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::InsertIntoPlayerLoop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "InsertIntoPlayerLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::RemoveFromPlayerLoop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "RemoveFromPlayerLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::GPUResidentDrawer::IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "IsEnabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::GPUResidentDrawerSettings UnityEngine::Rendering::GPUResidentDrawer::GetGlobalSettingsFromRPAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "GetGlobalSettingsFromRPAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUResidentDrawerSettings, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::GPUResidentDrawer::IsForcedOnViaCommandLine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "IsForcedOnViaCommandLine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::GPUResidentDrawer::IsOcclusionForcedOnViaCommandLine() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "IsOcclusionForcedOnViaCommandLine",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::Reinitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "Reinitialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::CleanUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "CleanUp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::Recreate(::UnityEngine::Rendering::GPUResidentDrawerSettings settings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "Recreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings);
}
inline ::UnityEngine::Rendering::GPUResidentBatcher* UnityEngine::Rendering::GPUResidentDrawer::get_batcher() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "get_batcher",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUResidentBatcher*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::GPUResidentDrawerSettings UnityEngine::Rendering::GPUResidentDrawer::get_settings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "get_settings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUResidentDrawerSettings, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::_ctor(::UnityEngine::Rendering::GPUResidentDrawerSettings settings, int32_t maxInstanceCount, int32_t maxTreeInstanceCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerSettings>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings, maxInstanceCount, maxTreeInstanceCount);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "OnSceneLoaded", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scene, mode);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::PostPostLateUpdateStatic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "PostPostLateUpdateStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::OnBeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                               ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "OnBeginContextRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cameras);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::OnEndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                             ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "OnEndContextRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cameras);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "OnBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, camera);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "OnEndCameraRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, camera);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::PostPostLateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "PostPostLateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::ProcessMaterials(::Unity::Collections::NativeArray_1<int32_t> destroyedID, ::Unity::Collections::NativeArray_1<int32_t> unsupportedMaterials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ProcessMaterials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destroyedID, unsupportedMaterials);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::ProcessMeshes(::Unity::Collections::NativeArray_1<int32_t> destroyedID) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ProcessMeshes", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destroyedID);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::ProcessLODGroups(::Unity::Collections::NativeArray_1<int32_t> changedID, ::Unity::Collections::NativeArray_1<int32_t> destroyed,
                                                                        ::Unity::Collections::NativeArray_1<int32_t> transformedID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ProcessLODGroups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, changedID, destroyed, transformedID);
}
inline void
UnityEngine::Rendering::GPUResidentDrawer::ProcessRendererMaterialChanges(::Unity::Collections::NativeArray_1<int32_t> excludedRenderers, ::Unity::Collections::NativeArray_1<int32_t> changedMaterials,
                                                                          ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> changedPackedMaterialDatas) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ProcessRendererMaterialChanges", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, excludedRenderers, changedMaterials, changedPackedMaterialDatas);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::ProcessRenderers(::UnityEngine::TypeDispatchData rendererChanges, ::Unity::Collections::NativeArray_1<int32_t> unsupportedRenderers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ProcessRenderers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TypeDispatchData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererChanges, unsupportedRenderers);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::TransformInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                          ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "TransformInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances, localToWorldMatrices);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::FreeInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "FreeInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::FreeRendererGroupInstances(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                                  ::Unity::Collections::NativeArray_1<int32_t> unsupportedRendererGroupIDs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "FreeRendererGroupInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererGroupIDs, unsupportedRendererGroupIDs);
}
inline ::UnityEngine::Rendering::InstanceHandle UnityEngine::Rendering::GPUResidentDrawer::AppendNewInstance(int32_t rendererGroupID, ::ByRef<::UnityEngine::Matrix4x4> instanceTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "AppendNewInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceHandle, false>(this, ___internal_method, rendererGroupID, instanceTransform);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::GPUResidentDrawer::ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ScheduleQueryRendererGroupInstancesJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, rendererGroupIDs, instances);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::GPUResidentDrawer::ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                                  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ScheduleQueryRendererGroupInstancesJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, rendererGroupIDs, instances);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::GPUResidentDrawer::ScheduleQueryRendererGroupInstancesJob(
    ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs, ::Unity::Collections::NativeArray_1<int32_t> instancesOffset, ::Unity::Collections::NativeArray_1<int32_t> instancesCount,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ScheduleQueryRendererGroupInstancesJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, rendererGroupIDs, instancesOffset, instancesCount, instances);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::GPUResidentDrawer::ScheduleQueryMeshInstancesJob(::Unity::Collections::NativeArray_1<int32_t> sortedMeshIDs,
                                                                                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ScheduleQueryMeshInstancesJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, sortedMeshIDs, instances);
}
inline void
UnityEngine::Rendering::GPUResidentDrawer::ClassifyMaterials(::Unity::Collections::NativeArray_1<int32_t> materials, ::ByRef<::Unity::Collections::NativeList_1<int32_t>> unsupportedMaterials,
                                                             ::ByRef<::Unity::Collections::NativeList_1<int32_t>> supportedMaterials,
                                                             ::ByRef<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> supportedPackedMaterialDatas,
                                                             ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "ClassifyMaterials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeList_1<int32_t>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeList_1<int32_t>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, materials, unsupportedMaterials, supportedMaterials, supportedPackedMaterialDatas, allocator);
}
inline ::Unity::Collections::NativeList_1<int32_t> UnityEngine::Rendering::GPUResidentDrawer::FindUnsupportedRenderers(::Unity::Collections::NativeArray_1<int32_t> unsupportedMaterials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "FindUnsupportedRenderers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<int32_t>, false>(this, ___internal_method, unsupportedMaterials);
}
inline ::Unity::Collections::NativeHashSet_1<int32_t>
UnityEngine::Rendering::GPUResidentDrawer::GetMaterialsWithChangedPackedMaterial(::Unity::Collections::NativeArray_1<int32_t> materials,
                                                                                 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas,
                                                                                 ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "GetMaterialsWithChangedPackedMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeHashSet_1<int32_t>, false>(this, ___internal_method, materials, packedMaterialDatas, allocator);
}
inline ::Unity::Collections::NativeList_1<int32_t> UnityEngine::Rendering::GPUResidentDrawer::FindRenderersFromMaterials(::Unity::Collections::NativeArray_1<int32_t> sortedExcludeRenderers,
                                                                                                                         ::Unity::Collections::NativeHashSet_1<int32_t> materials,
                                                                                                                         ::Unity::Collections::Allocator rendererListAllocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "FindRenderersFromMaterials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeHashSet_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<int32_t>, false>(this, ___internal_method, sortedExcludeRenderers, materials, rendererListAllocator);
}
inline bool UnityEngine::Rendering::GPUResidentDrawer::IsProjectSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(),
                                                                             "IsProjectSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::GPUResidentDrawer::IsProjectSupported(::ByRef<::StringW> message, ::ByRef<::UnityEngine::LogType> severity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "IsProjectSupported", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::LogType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, message, severity);
}
inline bool UnityEngine::Rendering::GPUResidentDrawer::IsGPUResidentDrawerSupportedBySRP(::UnityEngine::Rendering::GPUResidentDrawerSettings settings, ::ByRef<::StringW> message,
                                                                                         ::ByRef<::UnityEngine::LogType> severity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "IsGPUResidentDrawerSupportedBySRP", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerSettings>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::LogType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, settings, message, severity);
}
inline void UnityEngine::Rendering::GPUResidentDrawer::LogMessage(::StringW message, ::UnityEngine::LogType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentDrawer*>::get(), "LogMessage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, severity);
}
inline ::UnityEngine::Rendering::GPUResidentDrawer* UnityEngine::Rendering::GPUResidentDrawer::New_ctor(::UnityEngine::Rendering::GPUResidentDrawerSettings settings, int32_t maxInstanceCount,
                                                                                                        int32_t maxTreeInstanceCount) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::GPUResidentDrawer*>(settings, maxInstanceCount, maxTreeInstanceCount));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawer::GPUResidentDrawer() {}
