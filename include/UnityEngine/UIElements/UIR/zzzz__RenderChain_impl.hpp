#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderChain.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BaseElementBuilder_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNodePool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryPool_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryProcessor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryRecorder_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Entry_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ExtraRenderChainVEData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__JobManager_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerationDeferrer_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshWriteDataPool_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__OpacityIdAccelerator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypeClasses_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TempMeshAllocatorImpl_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureEntry_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRVEShaderInfoAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNodeManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureRegistry_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking.EnsureFits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::EnsureFits)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6b1e30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>::get(), "EnsureFits",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking.RegisterDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses)>(
    &::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::RegisterDirty)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6b1de04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>::get(), "RegisterDirty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking.ClearDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes)>(&::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::ClearDirty)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6b1c01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>::get(), "ClearDirty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::Reset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b1b3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::EnsureFits(int32_t maxDepth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>::get(), "EnsureFits",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxDepth);
}
inline void UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::RegisterDirty(::UnityEngine::UIElements::VisualElement* ve,
                                                                                               ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypes,
                                                                                               ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses dirtyTypeClass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>::get(), "RegisterDirty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, dirtyTypes, dirtyTypeClass);
}
inline void UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::ClearDirty(::UnityEngine::UIElements::VisualElement* ve,
                                                                                            ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypesInverse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>::get(), "ClearDirty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, dirtyTypesInverse);
}
inline void UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "heads", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "tails", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "minDepths", ty:
// "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDepths", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "dirtyID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::RenderChain_DepthOrderedDirtyTracking(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* heads, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* tails,
    ::ArrayW<int32_t, ::Array<int32_t>*> minDepths, ::ArrayW<int32_t, ::Array<int32_t>*> maxDepths, uint32_t dirtyID) noexcept {
  this->heads = heads;
  this->tails = tails;
  this->minDepths = minDepths;
  this->maxDepths = maxDepths;
  this->dirtyID = dirtyID;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::RenderChain_DepthOrderedDirtyTracking() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType::VisualChangesProcessor_RenderChain_VisualsProcessingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType::VisualChangesProcessor_RenderChain_VisualsProcessingType() {}
constexpr ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType::Head{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType::Tail{
  static_cast<int32_t>(0x1)
};
// Ctor Parameters [CppParam { name: "visualElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty:
// "::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType", modifiers: "", def_value: Some("{}") }, CppParam { name: "rootEntry", ty:
// "::UnityEngine::UIElements::UIR::Entry*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo::VisualChangesProcessor_RenderChain_EntryProcessingInfo(
    ::UnityEngine::UIElements::VisualElement* visualElement, ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType type,
    ::UnityEngine::UIElements::UIR::Entry* rootEntry) noexcept {
  this->visualElement = visualElement;
  this->type = type;
  this->rootEntry = rootEntry;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo::VisualChangesProcessor_RenderChain_EntryProcessingInfo() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.get_elementBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::BaseElementBuilder* (
    ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)()>(&::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::get_elementBuilder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1edb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(),
                                                 "get_elementBuilder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.get_meshGenerationContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Il2CppObject* (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::get_meshGenerationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1edb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(),
                                                 "get_meshGenerationContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)(
    ::UnityEngine::UIElements::UIR::RenderChain*)>(&::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6b1b45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.ScheduleMeshGenerationJobs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::ScheduleMeshGenerationJobs)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b1c1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(),
                                                 "ScheduleMeshGenerationJobs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.ProcessOnVisualsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)(
    ::UnityEngine::UIElements::VisualElement*, uint32_t, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::ProcessOnVisualsChanged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b1c1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "ProcessOnVisualsChanged",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.DepthFirstOnVisualsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)(
    ::UnityEngine::UIElements::VisualElement*, uint32_t, bool, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::DepthFirstOnVisualsChanged)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x6b1edc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "DepthFirstOnVisualsChanged",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.UpdateWorldFlipsWinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::UpdateWorldFlipsWinding)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b1f3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "UpdateWorldFlipsWinding",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.ConvertEntriesToCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)(
    ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::ConvertEntriesToCommands)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6b1c21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "ConvertEntriesToCommands",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.UpdateOpacityId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderChain*)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::UpdateOpacityId)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b1f2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "UpdateOpacityId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.DoUpdateOpacityId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::UIR::MeshHandle*)>(
        &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::DoUpdateOpacityId)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b1f3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(),
                                                 "DoUpdateOpacityId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.get_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1f4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "get_disposed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.set_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)(bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1f4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "set_disposed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b1b904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)(bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b1f4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::RenderChain*& UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_get_m_RenderChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderChain;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChain* const& UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_get_m_RenderChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderChain;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_set_m_RenderChain(::UnityEngine::UIElements::UIR::RenderChain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderChain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr Il2CppObject*& UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_get_m_MeshGenerationContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshGenerationContext;
}
constexpr Il2CppObject* const& UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_get_m_MeshGenerationContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshGenerationContext;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_set_m_MeshGenerationContext(Il2CppObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MeshGenerationContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::BaseElementBuilder*& UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_get_m_ElementBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementBuilder;
}
constexpr ::UnityEngine::UIElements::UIR::BaseElementBuilder* const& UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_get_m_ElementBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementBuilder;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_set_m_ElementBuilder(::UnityEngine::UIElements::UIR::BaseElementBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ElementBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo>*&
UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_get_m_EntryProcessingList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryProcessingList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo>* const&
UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_get_m_EntryProcessingList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryProcessingList;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_set_m_EntryProcessingList(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EntryProcessingList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>*&
UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_get_m_Processors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Processors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>* const&
UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_get_m_Processors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Processors;
}
constexpr void
UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_set_m_Processors(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Processors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::setStaticF_k_GenerateEntriesMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_GenerateEntriesMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::getStaticF_k_GenerateEntriesMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_GenerateEntriesMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::setStaticF_k_ConvertEntriesToCommandsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ConvertEntriesToCommandsMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::getStaticF_k_ConvertEntriesToCommandsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ConvertEntriesToCommandsMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::setStaticF_k_UpdateOpacityIdMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateOpacityIdMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::getStaticF_k_UpdateOpacityIdMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateOpacityIdMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get>();
}
inline ::UnityEngine::UIElements::UIR::BaseElementBuilder* UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::get_elementBuilder() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "get_elementBuilder",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BaseElementBuilder*, false>(this, ___internal_method);
}
inline Il2CppObject* UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::get_meshGenerationContext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(),
                                               "get_meshGenerationContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::_ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderChain);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::ScheduleMeshGenerationJobs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(),
                                               "ScheduleMeshGenerationJobs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::ProcessOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                                                                                      ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "ProcessOnVisualsChanged",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, dirtyID, stats);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::DepthFirstOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID, bool hierarchical,
                                                                                                         ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "DepthFirstOnVisualsChanged",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, dirtyID, hierarchical, stats);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::UpdateWorldFlipsWinding(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "UpdateWorldFlipsWinding",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::ConvertEntriesToCommands(::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "ConvertEntriesToCommands",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stats);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::UpdateOpacityId(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderChain* renderChain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "UpdateOpacityId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve, renderChain);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::DoUpdateOpacityId(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                                                                                ::UnityEngine::UIElements::UIR::MeshHandle* mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "DoUpdateOpacityId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve, renderChain, mesh);
}
inline bool UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::get_disposed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "get_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "set_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*
UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::New_ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(renderChain));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::RenderChain_VisualChangesProcessor() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain___c::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b20a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain___c.__ctor_b__31_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::RenderChain___c::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b20a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get(),
                                                                               "<.ctor>b__31_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain___c.__ctor_b__31_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain___c::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6b20afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get(), "<.ctor>b__31_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain___c.__ctor_b__31_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* (::UnityEngine::UIElements::UIR::RenderChain___c::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b20b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get(),
                                                                               "<.ctor>b__31_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain___c.__ctor_b__31_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain___c::*)(::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*)>(
    &::UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b20be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get(), "<.ctor>b__31_3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::RenderChain___c::setStaticF___9(::UnityEngine::UIElements::UIR::RenderChain___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::RenderChain___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get>(
      std::forward<::UnityEngine::UIElements::UIR::RenderChain___c*>(value));
}
inline ::UnityEngine::UIElements::UIR::RenderChain___c* UnityEngine::UIElements::UIR::RenderChain___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::RenderChain___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::setStaticF___9__31_0(::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__31_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get>(
      std::forward<::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* UnityEngine::UIElements::UIR::RenderChain___c::getStaticF___9__31_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__31_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::setStaticF___9__31_1(::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__31_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get>(
      std::forward<::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*>(value));
}
inline ::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* UnityEngine::UIElements::UIR::RenderChain___c::getStaticF___9__31_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__31_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::setStaticF___9__31_2(::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*, "<>9__31_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get>(
      std::forward<::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* UnityEngine::UIElements::UIR::RenderChain___c::getStaticF___9__31_2() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*, "<>9__31_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::setStaticF___9__31_3(::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*, "<>9__31_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get>(
      std::forward<::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*>(value));
}
inline ::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* UnityEngine::UIElements::UIR::RenderChain___c::getStaticF___9__31_3() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*, "<>9__31_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get(),
                                                                             "<.ctor>b__31_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_1(::UnityEngine::UIElements::UIR::RenderChainCommand* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get(), "<.ctor>b__31_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r);
}
inline ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get(),
                                                                             "<.ctor>b__31_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_3(::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain___c*>::get(), "<.ctor>b__31_3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::UnityEngine::UIElements::UIR::RenderChain___c* UnityEngine::UIElements::UIR::RenderChain___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::RenderChain___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderChain___c::RenderChain___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_opacityIdAccelerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::OpacityIdAccelerator* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_opacityIdAccelerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1a92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_opacityIdAccelerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_opacityIdAccelerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::OpacityIdAccelerator*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_opacityIdAccelerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1a934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_opacityIdAccelerator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::OpacityIdAccelerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6b1a93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(
    ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::UnityEngine::UIElements::AtlasBase*, ::UnityEngine::UIElements::UIR::VectorImageManager*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::_ctor)> {
  constexpr static std::size_t size = 0x934;
  constexpr static std::size_t addrs = 0x6b1aab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VectorImageManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1b5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1b5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_disposed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b1b5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderChain::Dispose)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6b1b634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_statsByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_statsByRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1b96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_statsByRef", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.ProcessChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::ProcessChanges)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x6b1b974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "ProcessChanges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.SerializeCommandsForCameras
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::SerializeCommandsForCameras)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x6b1c4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "SerializeCommandsForCameras", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::Render)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x6b1c81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Render",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnChildAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnChildAdded)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6b1d73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnChildAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnChildrenReordered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnChildrenReordered)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6b1da8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnChildrenReordered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnChildRemoving
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnChildRemoving)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6b1dc34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnChildRemoving", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnRenderHintsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnRenderHintsChanged)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b1dd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnRenderHintsChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnClippingChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnClippingChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b1d8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnClippingChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnOpacityChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnOpacityChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b1d974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnOpacityChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnColorChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnColorChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b1dfd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnColorChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnTransformOrSizeChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, bool, bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnTransformOrSizeChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b1e058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnTransformOrSizeChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnVisualsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnVisualsChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b1da00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnVisualsChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnOpacityIdChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnOpacityIdChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b1e0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnOpacityIdChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnDisableRenderingChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnDisableRenderingChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b1e168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnDisableRenderingChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BaseVisualElementPanel* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "get_panel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_panel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_device
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::UIRenderDevice* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_device", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_device
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::UIRenderDevice*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_device", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_elementBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::BaseElementBuilder* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_elementBuilder)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b1e208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_elementBuilder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_atlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::AtlasBase* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "get_atlas",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_atlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::AtlasBase*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_atlas", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_vectorImageManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::VectorImageManager* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_vectorImageManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_vectorImageManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_vectorImageManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::VectorImageManager*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_vectorImageManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_vectorImageManager", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VectorImageManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_tempMeshAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_tempMeshAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_tempMeshAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_tempMeshAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_tempMeshAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_tempMeshAllocator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_meshWriteDataPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::MeshWriteDataPool* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_meshWriteDataPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_meshWriteDataPool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_entryPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::EntryPool* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_entryPool)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b1e258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_entryPool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_meshGenerationDeferrer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_meshGenerationDeferrer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_meshGenerationDeferrer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_meshGenerationNodeManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshGenerationNodeManager* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_meshGenerationNodeManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e2bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_meshGenerationNodeManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_meshGenerationNodeManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::MeshGenerationNodeManager*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_meshGenerationNodeManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_meshGenerationNodeManager", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationNodeManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_jobManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::JobManager* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_jobManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_jobManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_jobManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::JobManager*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_jobManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_jobManager", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::JobManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_drawStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_drawStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_drawStats", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_drawStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_drawStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_drawStats",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_drawInCameras
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_drawInCameras)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_drawInCameras", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_isFlat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::get_isFlat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_isFlat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_forceGammaRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_forceGammaRendering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "get_forceGammaRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.EnsureFitsDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::RenderChain::EnsureFitsDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "EnsureFitsDepth",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.ChildWillBeRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::ChildWillBeRemoved)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b1e434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "ChildWillBeRemoved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.AllocCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::AllocCommand)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b1e4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "AllocCommand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.FreeCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::FreeCommand)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b1e54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "FreeCommand", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.OnRenderCommandAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandAdded)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b1e5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRenderCommandAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.OnRenderCommandsRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(
    ::UnityEngine::UIElements::UIR::RenderChainCommand*, ::UnityEngine::UIElements::UIR::RenderChainCommand*)>(&::UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandsRemoved)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b1e5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRenderCommandsRemoved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.RepaintTexturedElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::RepaintTexturedElements)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b1e614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                               "RepaintTexturedElements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.GetOrAddExtraData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* (
    ::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderChain::GetOrAddExtraData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6b1e6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "GetOrAddExtraData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.FreeExtraData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::FreeExtraData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6b1e7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "FreeExtraData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.InsertExtraMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::MeshHandle*)>(&::UnityEngine::UIElements::UIR::RenderChain::InsertExtraMesh)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b1e8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "InsertExtraMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.FreeExtraMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::FreeExtraMeshes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6b1e9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "FreeExtraMeshes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.InsertTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Texture*, ::UnityEngine::UIElements::TextureId, bool)>(&::UnityEngine::UIElements::UIR::RenderChain::InsertTexture)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b1eab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "InsertTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.ResetTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::ResetTextures)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6b1b7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "ResetTextures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.DrawStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::DrawStats)> {
  constexpr static std::size_t size = 0xb84;
  constexpr static std::size_t addrs = 0x6b1cbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "DrawStats",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.GetFirstElementInPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::GetFirstElementInPanel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b1b7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "GetFirstElementInPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_FirstCommand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstCommand;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_FirstCommand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstCommand;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_FirstCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FirstCommand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_DirtyTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirtyTracker;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_DirtyTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirtyTracker;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_DirtyTracker(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DirtyTracker = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_VisualChangesProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualChangesProcessor;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_VisualChangesProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualChangesProcessor;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_VisualChangesProcessor(::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VisualChangesProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_CommandPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandPool;
}
constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* const&
UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_CommandPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandPool;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_CommandPool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CommandPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_ExtraDataPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtraDataPool;
}
constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* const&
UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_ExtraDataPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtraDataPool;
}
constexpr void
UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_ExtraDataPool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExtraDataPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_MeshHandleNodePool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshHandleNodePool;
}
constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* const&
UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_MeshHandleNodePool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshHandleNodePool;
}
constexpr void
UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_MeshHandleNodePool(::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MeshHandleNodePool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_TexturePool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TexturePool;
}
constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_TexturePool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TexturePool;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_TexturePool(::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TexturePool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*&
UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_ExtraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtraData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* const&
UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_ExtraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtraData;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_ExtraData(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExtraData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_MeshGenerationDeferrer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshGenerationDeferrer;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_MeshGenerationDeferrer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshGenerationDeferrer;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_MeshGenerationDeferrer(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MeshGenerationDeferrer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_DefaultMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_DefaultMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultMat;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_DefaultMat(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultMat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_BlockDirtyRegistration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockDirtyRegistration;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_BlockDirtyRegistration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockDirtyRegistration;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_BlockDirtyRegistration(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlockDirtyRegistration = value;
}
constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_Stats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stats;
}
constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_Stats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stats;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_Stats(::UnityEngine::UIElements::UIR::ChainBuilderStats value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Stats = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_StatsElementsAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StatsElementsAdded;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_StatsElementsAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StatsElementsAdded;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_StatsElementsAdded(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StatsElementsAdded = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_StatsElementsRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StatsElementsRemoved;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_StatsElementsRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StatsElementsRemoved;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_StatsElementsRemoved(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StatsElementsRemoved = value;
}
constexpr ::UnityEngine::UIElements::TextureRegistry*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_TextureRegistry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureRegistry;
}
constexpr ::UnityEngine::UIElements::TextureRegistry* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_m_TextureRegistry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureRegistry;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_m_TextureRegistry(::UnityEngine::UIElements::TextureRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextureRegistry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::OpacityIdAccelerator*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__opacityIdAccelerator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opacityIdAccelerator_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__opacityIdAccelerator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opacityIdAccelerator_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__opacityIdAccelerator_k__BackingField(::UnityEngine::UIElements::UIR::OpacityIdAccelerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____opacityIdAccelerator_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__panel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panel_k__BackingField;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__panel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panel_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__panel_k__BackingField(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____panel_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__device_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____device_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__device_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____device_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__device_k__BackingField(::UnityEngine::UIElements::UIR::UIRenderDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____device_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::AtlasBase*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__atlas_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____atlas_k__BackingField;
}
constexpr ::UnityEngine::UIElements::AtlasBase* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__atlas_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____atlas_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__atlas_k__BackingField(::UnityEngine::UIElements::AtlasBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____atlas_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::VectorImageManager*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__vectorImageManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vectorImageManager_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::VectorImageManager* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__vectorImageManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vectorImageManager_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__vectorImageManager_k__BackingField(::UnityEngine::UIElements::UIR::VectorImageManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vectorImageManager_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__tempMeshAllocator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tempMeshAllocator_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__tempMeshAllocator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tempMeshAllocator_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__tempMeshAllocator_k__BackingField(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tempMeshAllocator_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::MeshWriteDataPool*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__meshWriteDataPool_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshWriteDataPool_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::MeshWriteDataPool* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__meshWriteDataPool_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshWriteDataPool_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__meshWriteDataPool_k__BackingField(::UnityEngine::UIElements::UIR::MeshWriteDataPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshWriteDataPool_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::EntryRecorder*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_entryRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entryRecorder;
}
constexpr ::UnityEngine::UIElements::UIR::EntryRecorder* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_entryRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entryRecorder;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_entryRecorder(::UnityEngine::UIElements::UIR::EntryRecorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entryRecorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::MeshGenerationNodeManager*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__meshGenerationNodeManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshGenerationNodeManager_k__BackingField;
}
constexpr ::UnityEngine::UIElements::MeshGenerationNodeManager* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__meshGenerationNodeManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshGenerationNodeManager_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__meshGenerationNodeManager_k__BackingField(::UnityEngine::UIElements::MeshGenerationNodeManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshGenerationNodeManager_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::JobManager*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__jobManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jobManager_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::JobManager* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__jobManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jobManager_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__jobManager_k__BackingField(::UnityEngine::UIElements::UIR::JobManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____jobManager_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_shaderInfoAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderInfoAllocator;
}
constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get_shaderInfoAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderInfoAllocator;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set_shaderInfoAllocator(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shaderInfoAllocator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__drawStats_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawStats_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__drawStats_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawStats_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__drawStats_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____drawStats_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__drawInCameras_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawInCameras_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__drawInCameras_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawInCameras_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__drawInCameras_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____drawInCameras_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__isFlat_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFlat_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__isFlat_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFlat_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__isFlat_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isFlat_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__forceGammaRendering_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceGammaRendering_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_get__forceGammaRendering_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceGammaRendering_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__cordl_internal_set__forceGammaRendering_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forceGammaRendering_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_s_SharedEntryPool(::UnityEngine::UIElements::UIR::EntryPool* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::EntryPool*, "s_SharedEntryPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(
      std::forward<::UnityEngine::UIElements::UIR::EntryPool*>(value));
}
inline ::UnityEngine::UIElements::UIR::EntryPool* UnityEngine::UIElements::UIR::RenderChain::getStaticF_s_SharedEntryPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::EntryPool*, "s_SharedEntryPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerProcess(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerProcess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerProcess() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerProcess",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerClipProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerClipProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerClipProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerClipProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerOpacityProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerOpacityProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerOpacityProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerOpacityProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerColorsProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerColorsProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerColorsProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerColorsProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerTransformProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerTransformProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerTransformProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerTransformProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerVisualsProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerVisualsProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerVisualsProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerVisualsProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerSerialize(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerSerialize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerSerialize() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerSerialize",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get>();
}
inline ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* UnityEngine::UIElements::UIR::RenderChain::get_opacityIdAccelerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_opacityIdAccelerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::OpacityIdAccelerator*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_opacityIdAccelerator(::UnityEngine::UIElements::UIR::OpacityIdAccelerator* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_opacityIdAccelerator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::OpacityIdAccelerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderChain::_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::UIR::RenderChain::_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                             ::UnityEngine::UIElements::AtlasBase* atlas, ::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VectorImageManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel, device, atlas, vectorImageManager);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderChain::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> UnityEngine::UIElements::UIR::RenderChain::get_statsByRef() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_statsByRef", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::ProcessChanges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "ProcessChanges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::SerializeCommandsForCameras() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "SerializeCommandsForCameras", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::Render() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "Render",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnChildAdded(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnChildAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnChildrenReordered(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnChildrenReordered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnChildRemoving(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnChildRemoving", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnRenderHintsChanged(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnRenderHintsChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnClippingChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnClippingChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, hierarchical);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnOpacityChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnOpacityChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, hierarchical);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnColorChanged(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnColorChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnTransformOrSizeChanged(::UnityEngine::UIElements::VisualElement* ve, bool transformChanged, bool clipRectSizeChanged) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnTransformOrSizeChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, transformChanged, clipRectSizeChanged);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnVisualsChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, hierarchical);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnOpacityIdChanged(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnOpacityIdChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnDisableRenderingChanged(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "UIEOnDisableRenderingChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::BaseVisualElementPanel* UnityEngine::UIElements::UIR::RenderChain::get_panel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "get_panel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseVisualElementPanel*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_panel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::UIRenderDevice* UnityEngine::UIElements::UIR::RenderChain::get_device() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "get_device",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::UIRenderDevice*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_device(::UnityEngine::UIElements::UIR::UIRenderDevice* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_device", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::BaseElementBuilder* UnityEngine::UIElements::UIR::RenderChain::get_elementBuilder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_elementBuilder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BaseElementBuilder*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::AtlasBase* UnityEngine::UIElements::UIR::RenderChain::get_atlas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "get_atlas",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::AtlasBase*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_atlas(::UnityEngine::UIElements::AtlasBase* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_atlas", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::VectorImageManager* UnityEngine::UIElements::UIR::RenderChain::get_vectorImageManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_vectorImageManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::VectorImageManager*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_vectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_vectorImageManager", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::VectorImageManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* UnityEngine::UIElements::UIR::RenderChain::get_tempMeshAllocator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_tempMeshAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_tempMeshAllocator(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_tempMeshAllocator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::MeshWriteDataPool* UnityEngine::UIElements::UIR::RenderChain::get_meshWriteDataPool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_meshWriteDataPool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshWriteDataPool*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::EntryPool* UnityEngine::UIElements::UIR::RenderChain::get_entryPool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_entryPool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::EntryPool*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* UnityEngine::UIElements::UIR::RenderChain::get_meshGenerationDeferrer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_meshGenerationDeferrer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MeshGenerationNodeManager* UnityEngine::UIElements::UIR::RenderChain::get_meshGenerationNodeManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_meshGenerationNodeManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshGenerationNodeManager*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_meshGenerationNodeManager(::UnityEngine::UIElements::MeshGenerationNodeManager* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_meshGenerationNodeManager", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationNodeManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::JobManager* UnityEngine::UIElements::UIR::RenderChain::get_jobManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_jobManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::JobManager*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_jobManager(::UnityEngine::UIElements::UIR::JobManager* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_jobManager", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::JobManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_drawStats() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_drawStats", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_drawStats(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "set_drawStats",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_drawInCameras() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_drawInCameras", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_isFlat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "get_isFlat",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_forceGammaRendering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "get_forceGammaRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::EnsureFitsDepth(int32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "EnsureFitsDepth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, depth);
}
inline void UnityEngine::UIElements::UIR::RenderChain::ChildWillBeRemoved(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "ChildWillBeRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderChain::AllocCommand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "AllocCommand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::FreeCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "FreeCommand", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandAdded(::UnityEngine::UIElements::UIR::RenderChainCommand* command) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRenderCommandAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command);
}
inline void UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandsRemoved(::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand,
                                                                               ::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "OnRenderCommandsRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstCommand, lastCommand);
}
inline void UnityEngine::UIElements::UIR::RenderChain::RepaintTexturedElements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                             "RepaintTexturedElements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* UnityEngine::UIElements::UIR::RenderChain::GetOrAddExtraData(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "GetOrAddExtraData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::FreeExtraData(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "FreeExtraData", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::InsertExtraMesh(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::MeshHandle* mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "InsertExtraMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, mesh);
}
inline void UnityEngine::UIElements::UIR::RenderChain::FreeExtraMeshes(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "FreeExtraMeshes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::InsertTexture(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Texture* src, ::UnityEngine::UIElements::TextureId id, bool isAtlas) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "InsertTexture", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, src, id, isAtlas);
}
inline void UnityEngine::UIElements::UIR::RenderChain::ResetTextures(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "ResetTextures", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::DrawStats() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "DrawStats",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UIR::RenderChain::GetFirstElementInPanel(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChain*>::get(), "GetFirstElementInPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(nullptr, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::UIR::RenderChain* UnityEngine::UIElements::UIR::RenderChain::New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::RenderChain*>(panel));
}
inline ::UnityEngine::UIElements::UIR::RenderChain* UnityEngine::UIElements::UIR::RenderChain::New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                                        ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                                                                        ::UnityEngine::UIElements::AtlasBase* atlas,
                                                                                                        ::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::RenderChain*>(panel, device, atlas, vectorImageManager));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::RenderChain::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::RenderChain::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderChain::RenderChain() {}
