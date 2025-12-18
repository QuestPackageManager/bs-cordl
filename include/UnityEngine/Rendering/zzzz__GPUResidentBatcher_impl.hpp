#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentBatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentBatcher_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenProcessor_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererDataCallback_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullingBatcherDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullingBatcher_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderSubviewUpdate_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommon_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderRequestBatcherContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersBatchersContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubviewOcclusionTest_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.get_batchersContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderersBatchersContext* (::UnityEngine::Rendering::GPUResidentBatcher::*)()>(
    &::UnityEngine::Rendering::GPUResidentBatcher::get_batchersContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6659f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                               "get_batchersContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.get_occlusionCullingCommon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::OcclusionCullingCommon* (::UnityEngine::Rendering::GPUResidentBatcher::*)()>(
    &::UnityEngine::Rendering::GPUResidentBatcher::get_occlusionCullingCommon)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6659f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                               "get_occlusionCullingCommon", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.get_instanceCullingBatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::InstanceCullingBatcher* (::UnityEngine::Rendering::GPUResidentBatcher::*)()>(
    &::UnityEngine::Rendering::GPUResidentBatcher::get_instanceCullingBatcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6659f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                               "get_instanceCullingBatcher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(
    ::UnityEngine::Rendering::RenderersBatchersContext*, ::UnityEngine::Rendering::InstanceCullingBatcherDesc, ::UnityEngine::Rendering::GPUDrivenProcessor*)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6659f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceCullingBatcherDesc>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUDrivenProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)()>(&::UnityEngine::Rendering::GPUResidentBatcher::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x665a0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.OnBeginContextRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)()>(
    &::UnityEngine::Rendering::GPUResidentBatcher::OnBeginContextRendering)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x665a134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                               "OnBeginContextRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.OnEndContextRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)()>(
    &::UnityEngine::Rendering::GPUResidentBatcher::OnEndContextRendering)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x665a190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                               "OnEndContextRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.OnBeginCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x665a1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "OnBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.OnEndCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x665a1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "OnEndCameraRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.UpdateFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)()>(
    &::UnityEngine::Rendering::GPUResidentBatcher::UpdateFrame)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x665a1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                               "UpdateFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.DestroyMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::DestroyMaterials)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x665a21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "DestroyMaterials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.DestroyDrawInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>)>(&::UnityEngine::Rendering::GPUResidentBatcher::DestroyDrawInstances)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x665a234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "DestroyDrawInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.DestroyMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::DestroyMeshes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x665a24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "DestroyMeshes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.FreeRendererGroupInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::FreeRendererGroupInstances)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x665a264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "FreeRendererGroupInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.InstanceOcclusionTest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::InstanceOcclusionTest)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x665a3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "InstanceOcclusionTest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.UpdateInstanceOccluders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::ByRef<::UnityEngine::Rendering::OccluderParameters>, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::UpdateInstanceOccluders)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x665a8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "UpdateInstanceOccluders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.UpdateRenderers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(::Unity::Collections::NativeArray_1<int32_t>, bool)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::UpdateRenderers)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x665a908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "UpdateRenderers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.SchedulePackedMaterialCacheUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::GPUResidentBatcher::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::SchedulePackedMaterialCacheUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x665a9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "SchedulePackedMaterialCacheUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.PostCullBeginCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(::UnityEngine::Rendering::RenderRequestBatcherContext)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::PostCullBeginCameraRendering)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x665aa04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "PostCullBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderRequestBatcherContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.OnSetupAmbientProbe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)()>(
    &::UnityEngine::Rendering::GPUResidentBatcher::OnSetupAmbientProbe)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x665aa18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                               "OnSetupAmbientProbe", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.UpdateRendererInstancesAndBatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(
    ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*,
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*)>(&::UnityEngine::Rendering::GPUResidentBatcher::UpdateRendererInstancesAndBatches)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x665aa34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "UpdateRendererInstancesAndBatches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.UpdateRendererBatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(
    ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*,
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*)>(&::UnityEngine::Rendering::GPUResidentBatcher::UpdateRendererBatches)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x665ac8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "UpdateRendererBatches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.OnFinishedCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(::System::IntPtr)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::OnFinishedCulling)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x665add4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "OnFinishedCulling",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.ProcessTrees
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)()>(
    &::UnityEngine::Rendering::GPUResidentBatcher::ProcessTrees)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x665ae08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                               "ProcessTrees", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentBatcher.UpdateSpeedTreeWindAndUploadWindParamsToGPU
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUResidentBatcher::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, bool)>(
    &::UnityEngine::Rendering::GPUResidentBatcher::UpdateSpeedTreeWindAndUploadWindParamsToGPU)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x665b1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "UpdateSpeedTreeWindAndUploadWindParamsToGPU",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderersBatchersContext*& UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_get_m_BatchersContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BatchersContext;
}
constexpr ::UnityEngine::Rendering::RenderersBatchersContext* const& UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_get_m_BatchersContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BatchersContext;
}
constexpr void UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_set_m_BatchersContext(::UnityEngine::Rendering::RenderersBatchersContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BatchersContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::GPUDrivenProcessor*& UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_get_m_GPUDrivenProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GPUDrivenProcessor;
}
constexpr ::UnityEngine::Rendering::GPUDrivenProcessor* const& UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_get_m_GPUDrivenProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GPUDrivenProcessor;
}
constexpr void UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_set_m_GPUDrivenProcessor(::UnityEngine::Rendering::GPUDrivenProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GPUDrivenProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::GPUDrivenRendererDataCallback*& UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_get_m_UpdateRendererInstancesAndBatchesCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRendererInstancesAndBatchesCallback;
}
constexpr ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* const& UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_get_m_UpdateRendererInstancesAndBatchesCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRendererInstancesAndBatchesCallback;
}
constexpr void UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_set_m_UpdateRendererInstancesAndBatchesCallback(::UnityEngine::Rendering::GPUDrivenRendererDataCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UpdateRendererInstancesAndBatchesCallback)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::GPUDrivenRendererDataCallback*& UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_get_m_UpdateRendererBatchesCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRendererBatchesCallback;
}
constexpr ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* const& UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_get_m_UpdateRendererBatchesCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRendererBatchesCallback;
}
constexpr void UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_set_m_UpdateRendererBatchesCallback(::UnityEngine::Rendering::GPUDrivenRendererDataCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UpdateRendererBatchesCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::InstanceCullingBatcher*& UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_get_m_InstanceCullingBatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceCullingBatcher;
}
constexpr ::UnityEngine::Rendering::InstanceCullingBatcher* const& UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_get_m_InstanceCullingBatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceCullingBatcher;
}
constexpr void UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_set_m_InstanceCullingBatcher(::UnityEngine::Rendering::InstanceCullingBatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InstanceCullingBatcher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ParallelBitArray& UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_get_m_ProcessedThisFrameTreeBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessedThisFrameTreeBits;
}
constexpr ::UnityEngine::Rendering::ParallelBitArray const& UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_get_m_ProcessedThisFrameTreeBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessedThisFrameTreeBits;
}
constexpr void UnityEngine::Rendering::GPUResidentBatcher::__cordl_internal_set_m_ProcessedThisFrameTreeBits(::UnityEngine::Rendering::ParallelBitArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProcessedThisFrameTreeBits = value;
}
inline ::UnityEngine::Rendering::RenderersBatchersContext* UnityEngine::Rendering::GPUResidentBatcher::get_batchersContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                             "get_batchersContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderersBatchersContext*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::OcclusionCullingCommon* UnityEngine::Rendering::GPUResidentBatcher::get_occlusionCullingCommon() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                             "get_occlusionCullingCommon", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OcclusionCullingCommon*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::InstanceCullingBatcher* UnityEngine::Rendering::GPUResidentBatcher::get_instanceCullingBatcher() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                             "get_instanceCullingBatcher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceCullingBatcher*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::_ctor(::UnityEngine::Rendering::RenderersBatchersContext* batcherContext,
                                                              ::UnityEngine::Rendering::InstanceCullingBatcherDesc instanceCullerBatcherDesc,
                                                              ::UnityEngine::Rendering::GPUDrivenProcessor* gpuDrivenProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceCullingBatcherDesc>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUDrivenProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batcherContext, instanceCullerBatcherDesc, gpuDrivenProcessor);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::OnBeginContextRendering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                             "OnBeginContextRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::OnEndContextRendering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                             "OnEndContextRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::OnBeginCameraRendering(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "OnBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::OnEndCameraRendering(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "OnEndCameraRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::UpdateFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                             "UpdateFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::DestroyMaterials(::Unity::Collections::NativeArray_1<int32_t> destroyedMaterials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "DestroyMaterials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destroyedMaterials);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::DestroyDrawInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "DestroyDrawInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::DestroyMeshes(::Unity::Collections::NativeArray_1<int32_t> destroyedMeshes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "DestroyMeshes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destroyedMeshes);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::FreeRendererGroupInstances(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "FreeRendererGroupInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererGroupIDs);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::InstanceOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                              ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings> settings,
                                                                              ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest> subviewOcclusionTests) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "InstanceOcclusionTest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, settings, subviewOcclusionTests);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::UpdateInstanceOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                ::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParams,
                                                                                ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "UpdateInstanceOccluders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::OccluderParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, occluderParams, occluderSubviewUpdates);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::UpdateRenderers(::Unity::Collections::NativeArray_1<int32_t> renderersID, bool materialUpdateOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "UpdateRenderers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderersID, materialUpdateOnly);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::GPUResidentBatcher::SchedulePackedMaterialCacheUpdate(::Unity::Collections::NativeArray_1<int32_t> materialIDs,
                                                                              ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "SchedulePackedMaterialCacheUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, materialIDs, packedMaterialDatas);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::PostCullBeginCameraRendering(::UnityEngine::Rendering::RenderRequestBatcherContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "PostCullBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderRequestBatcherContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::OnSetupAmbientProbe() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                             "OnSetupAmbientProbe", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::UpdateRendererInstancesAndBatches(::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData,
                                                                                          ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                                                          ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>* materials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "UpdateRendererInstancesAndBatches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererData, meshes, materials);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::UpdateRendererBatches(::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData,
                                                                              ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                                              ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>* materials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "UpdateRendererBatches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererData, meshes, materials);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::OnFinishedCulling(::System::IntPtr customCullingResult) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "OnFinishedCulling",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customCullingResult);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::ProcessTrees() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(),
                                                                             "ProcessTrees", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentBatcher::UpdateSpeedTreeWindAndUploadWindParamsToGPU(::Unity::Collections::NativeArray_1<int32_t> treeRendererIDs,
                                                                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> treeInstances,
                                                                                                    bool history) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUResidentBatcher*>::get(), "UpdateSpeedTreeWindAndUploadWindParamsToGPU",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, treeRendererIDs, treeInstances, history);
}
inline ::UnityEngine::Rendering::GPUResidentBatcher* UnityEngine::Rendering::GPUResidentBatcher::New_ctor(::UnityEngine::Rendering::RenderersBatchersContext* batcherContext,
                                                                                                          ::UnityEngine::Rendering::InstanceCullingBatcherDesc instanceCullerBatcherDesc,
                                                                                                          ::UnityEngine::Rendering::GPUDrivenProcessor* gpuDrivenProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::GPUResidentBatcher*>(batcherContext, instanceCullerBatcherDesc, gpuDrivenProcessor));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::GPUResidentBatcher::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::GPUResidentBatcher::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentBatcher::GPUResidentBatcher() {}
