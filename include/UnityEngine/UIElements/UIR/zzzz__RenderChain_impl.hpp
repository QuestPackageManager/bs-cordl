#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\RenderChain.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::EnsureFits)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6ce9bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>(), { "EnsureFits", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking.RegisterDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses)>(
    &::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::RegisterDirty)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6ce96c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>(),
                                                             { "RegisterDirty",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking.ClearDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes)>(&::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::ClearDirty)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6ce78dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>(),
                            { "ClearDirty", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::Reset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6ce6ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::EnsureFits(int32_t maxDepth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>(), { "EnsureFits", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, maxDepth);
}
inline void UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::RegisterDirty(::UnityEngine::UIElements::VisualElement* ve,
                                                                                               ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypes,
                                                                                               ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses dirtyTypeClass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>(),
                                                           { "RegisterDirty",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, dirtyTypes, dirtyTypeClass);
}
inline void UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::ClearDirty(::UnityEngine::UIElements::VisualElement* ve,
                                                                                            ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypesInverse) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>(),
                                       { "ClearDirty", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, dirtyTypesInverse);
}
inline void UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "heads", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "tails", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "minDepths", ty: "::ArrayW<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDepths", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "dirtyID", ty: "uint32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking::RenderChain_DepthOrderedDirtyTracking(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* heads, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* tails,
    ::ArrayW<int32_t> minDepths, ::ArrayW<int32_t> maxDepths, uint32_t dirtyID) noexcept {
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::BaseElementBuilder* (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::get_elementBuilder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cea670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "get_elementBuilder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.get_meshGenerationContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<Il2CppObject* (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::get_meshGenerationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cea678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "get_meshGenerationContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)(::UnityEngine::UIElements::UIR::RenderChain*)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6ce6d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.ScheduleMeshGenerationJobs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::ScheduleMeshGenerationJobs)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ce7ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "ScheduleMeshGenerationJobs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.ProcessOnVisualsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)(::UnityEngine::UIElements::VisualElement*, uint32_t,
                                                                                                                                    ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::ProcessOnVisualsChanged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ce7a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                                                                           { "ProcessOnVisualsChanged",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<uint32_t>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.DepthFirstOnVisualsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)(::UnityEngine::UIElements::VisualElement*, uint32_t, bool,
                                                                                                                                    ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::DepthFirstOnVisualsChanged)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x6cea680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                                             { "DepthFirstOnVisualsChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.UpdateWorldFlipsWinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::UpdateWorldFlipsWinding)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6ceac7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                                                                           { "UpdateWorldFlipsWinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.ConvertEntriesToCommands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)(::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::ConvertEntriesToCommands)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6ce7adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                                             { "ConvertEntriesToCommands", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.UpdateOpacityId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderChain*)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::UpdateOpacityId)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6ceab84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                         { "UpdateOpacityId", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.DoUpdateOpacityId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::UIR::MeshHandle*)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::DoUpdateOpacityId)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6ceacb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                                             { "DoUpdateOpacityId",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ceadac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)(bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ceadb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6ce71c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::*)(bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ceadbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
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
  this->___m_RenderChain = value;
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
  this->___m_MeshGenerationContext = value;
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
  this->___m_ElementBuilder = value;
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
  this->___m_EntryProcessingList = value;
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
  this->___m_Processors = value;
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
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_GenerateEntriesMarker", ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::getStaticF_k_GenerateEntriesMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_GenerateEntriesMarker", ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::setStaticF_k_ConvertEntriesToCommandsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ConvertEntriesToCommandsMarker", ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::getStaticF_k_ConvertEntriesToCommandsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ConvertEntriesToCommandsMarker", ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::setStaticF_k_UpdateOpacityIdMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateOpacityIdMarker", ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::getStaticF_k_UpdateOpacityIdMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateOpacityIdMarker", ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>();
}
inline ::UnityEngine::UIElements::UIR::BaseElementBuilder* UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::get_elementBuilder() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "get_elementBuilder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BaseElementBuilder*>(this, ___internal_method);
}
inline Il2CppObject* UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::get_meshGenerationContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "get_meshGenerationContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::_ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderChain);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::ScheduleMeshGenerationJobs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "ScheduleMeshGenerationJobs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::ProcessOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                                                                                      ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                                                                         { "ProcessOnVisualsChanged",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<uint32_t>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, dirtyID, stats);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::DepthFirstOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID, bool hierarchical,
                                                                                                         ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                                           { "DepthFirstOnVisualsChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, dirtyID, hierarchical, stats);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::UpdateWorldFlipsWinding(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                                                                         { "UpdateWorldFlipsWinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::ConvertEntriesToCommands(::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                                           { "ConvertEntriesToCommands", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stats);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::UpdateOpacityId(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderChain* renderChain) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                       { "UpdateOpacityId", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, renderChain);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::DoUpdateOpacityId(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                                                                                ::UnityEngine::UIElements::UIR::MeshHandle* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(),
                                                           { "DoUpdateOpacityId",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, renderChain, mesh);
}
inline bool UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::get_disposed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::set_disposed(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*
UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor::New_ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*>(renderChain));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain___c::*)()>(&::UnityEngine::UIElements::UIR::RenderChain___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cec340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain___c.__ctor_b__31_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::RenderChain___c::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cec344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain___c*>(), { "<.ctor>b__31_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain___c.__ctor_b__31_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain___c::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6cec3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain___c*>(),
                                                                                           { "<.ctor>b__31_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain___c.__ctor_b__31_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* (::UnityEngine::UIElements::UIR::RenderChain___c::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cec3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain___c*>(), { "<.ctor>b__31_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain___c.__ctor_b__31_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain___c::*)(::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*)>(
    &::UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6cec4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain___c*>(),
                                                                                           { "<.ctor>b__31_3", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::RenderChain___c::setStaticF___9(::UnityEngine::UIElements::UIR::RenderChain___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::RenderChain___c*, "<>9", ::UnityEngine::UIElements::UIR::RenderChain___c*>(
      std::forward<::UnityEngine::UIElements::UIR::RenderChain___c*>(value));
}
inline ::UnityEngine::UIElements::UIR::RenderChain___c* UnityEngine::UIElements::UIR::RenderChain___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::RenderChain___c*, "<>9", ::UnityEngine::UIElements::UIR::RenderChain___c*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::setStaticF___9__31_0(::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__31_0", ::UnityEngine::UIElements::UIR::RenderChain___c*>(
      std::forward<::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* UnityEngine::UIElements::UIR::RenderChain___c::getStaticF___9__31_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__31_0", ::UnityEngine::UIElements::UIR::RenderChain___c*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::setStaticF___9__31_1(::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__31_1", ::UnityEngine::UIElements::UIR::RenderChain___c*>(
      std::forward<::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*>(value));
}
inline ::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* UnityEngine::UIElements::UIR::RenderChain___c::getStaticF___9__31_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__31_1", ::UnityEngine::UIElements::UIR::RenderChain___c*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::setStaticF___9__31_2(::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*, "<>9__31_2", ::UnityEngine::UIElements::UIR::RenderChain___c*>(
      std::forward<::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* UnityEngine::UIElements::UIR::RenderChain___c::getStaticF___9__31_2() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*, "<>9__31_2", ::UnityEngine::UIElements::UIR::RenderChain___c*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::setStaticF___9__31_3(::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*, "<>9__31_3", ::UnityEngine::UIElements::UIR::RenderChain___c*>(
      std::forward<::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*>(value));
}
inline ::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* UnityEngine::UIElements::UIR::RenderChain___c::getStaticF___9__31_3() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*, "<>9__31_3", ::UnityEngine::UIElements::UIR::RenderChain___c*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain___c*>(), { "<.ctor>b__31_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_1(::UnityEngine::UIElements::UIR::RenderChainCommand* r) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain___c*>(),
                                                                                         { "<.ctor>b__31_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain___c*>(), { "<.ctor>b__31_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain___c::__ctor_b__31_3(::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain___c*>(),
                                                                                         { "<.ctor>b__31_3", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::UnityEngine::UIElements::UIR::RenderChain___c* UnityEngine::UIElements::UIR::RenderChain___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderChain___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderChain___c::RenderChain___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_opacityIdAccelerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::OpacityIdAccelerator* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_opacityIdAccelerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce61ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_opacityIdAccelerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_opacityIdAccelerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::OpacityIdAccelerator*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_opacityIdAccelerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce61f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                             { "set_opacityIdAccelerator", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::OpacityIdAccelerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6ce61fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(
    ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::UnityEngine::UIElements::AtlasBase*, ::UnityEngine::UIElements::UIR::VectorImageManager*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::_ctor)> {
  constexpr static std::size_t size = 0x934;
  constexpr static std::size_t addrs = 0x6ce6374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(),
                                                    ::i2c::type_of<::UnityEngine::UIElements::AtlasBase*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::VectorImageManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce6e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderChain::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce6e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6ce6e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderChain::Dispose)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ce6ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_statsByRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_statsByRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce722c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_statsByRef", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.ProcessChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::ProcessChanges)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x6ce7234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "ProcessChanges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.SerializeCommandsForCameras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::SerializeCommandsForCameras)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x6ce7d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "SerializeCommandsForCameras", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::Render)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x6ce80dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "Render", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnChildAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnChildAdded)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6ce8ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "UIEOnChildAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnChildrenReordered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnChildrenReordered)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6ce934c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "UIEOnChildrenReordered", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnChildRemoving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnChildRemoving)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6ce94f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "UIEOnChildRemoving", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnRenderHintsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnRenderHintsChanged)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6ce9600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "UIEOnRenderHintsChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnClippingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnClippingChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6ce91a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                             { "UIEOnClippingChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnOpacityChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnOpacityChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6ce9234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                             { "UIEOnOpacityChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnColorChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnColorChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ce9898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "UIEOnColorChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnTransformOrSizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, bool, bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnTransformOrSizeChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ce9918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                         { "UIEOnTransformOrSizeChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnVisualsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnVisualsChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6ce92c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                             { "UIEOnVisualsChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnOpacityIdChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnOpacityIdChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ce99a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "UIEOnOpacityIdChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.UIEOnDisableRenderingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::UIEOnDisableRenderingChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ce9a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "UIEOnDisableRenderingChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BaseVisualElementPanel* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_panel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "set_panel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_device
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::UIRenderDevice* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_device", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_device
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::UIRenderDevice*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "set_device", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_elementBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::BaseElementBuilder* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_elementBuilder)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ce9ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_elementBuilder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_atlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::AtlasBase* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_atlas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_atlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::AtlasBase*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "set_atlas", {}, { ::i2c::type_of<::UnityEngine::UIElements::AtlasBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_vectorImageManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::VectorImageManager* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_vectorImageManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_vectorImageManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_vectorImageManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::VectorImageManager*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_vectorImageManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                             { "set_vectorImageManager", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::VectorImageManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_tempMeshAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_tempMeshAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_tempMeshAllocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_tempMeshAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_tempMeshAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                             { "set_tempMeshAllocator", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_meshWriteDataPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::MeshWriteDataPool* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_meshWriteDataPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_meshWriteDataPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_entryPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::EntryPool* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_entryPool)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ce9b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_entryPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_meshGenerationDeferrer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_meshGenerationDeferrer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_meshGenerationDeferrer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_meshGenerationNodeManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshGenerationNodeManager* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_meshGenerationNodeManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_meshGenerationNodeManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_meshGenerationNodeManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::MeshGenerationNodeManager*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_meshGenerationNodeManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                             { "set_meshGenerationNodeManager", {}, { ::i2c::type_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_jobManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::JobManager* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::get_jobManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_jobManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_jobManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::JobManager*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::set_jobManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "set_jobManager", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::JobManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_drawStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::get_drawStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_drawStats", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.set_drawStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderChain::set_drawStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "set_drawStats", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_drawInCameras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::get_drawInCameras)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_drawInCameras", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_isFlat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::get_isFlat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_isFlat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.get_forceGammaRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::get_forceGammaRendering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_forceGammaRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.EnsureFitsDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(int32_t)>(&::UnityEngine::UIElements::UIR::RenderChain::EnsureFitsDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "EnsureFitsDepth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.ChildWillBeRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::ChildWillBeRemoved)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6ce9cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "ChildWillBeRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.AllocCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::RenderChain::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChain::AllocCommand)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ce9db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "AllocCommand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.FreeCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::FreeCommand)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ce9e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "FreeCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.OnRenderCommandAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandAdded)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ce9e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "OnRenderCommandAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.OnRenderCommandsRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(
    ::UnityEngine::UIElements::UIR::RenderChainCommand*, ::UnityEngine::UIElements::UIR::RenderChainCommand*)>(&::UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandsRemoved)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ce9eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
            { "OnRenderCommandsRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.RepaintTexturedElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::RepaintTexturedElements)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6ce9ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "RepaintTexturedElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.GetOrAddExtraData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* (
    ::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderChain::GetOrAddExtraData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6ce9f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "GetOrAddExtraData", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.FreeExtraData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::FreeExtraData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6cea09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "FreeExtraData", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.InsertExtraMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::MeshHandle*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::InsertExtraMesh)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6cea1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                         { "InsertExtraMesh", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.FreeExtraMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::FreeExtraMeshes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6cea27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "FreeExtraMeshes", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.InsertTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Texture*, ::UnityEngine::UIElements::TextureId, bool)>(&::UnityEngine::UIElements::UIR::RenderChain::InsertTexture)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6cea370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "InsertTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.ResetTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::ResetTextures)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6ce70a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "ResetTextures", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.DrawStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChain::*)()>(&::UnityEngine::UIElements::UIR::RenderChain::DrawStats)> {
  constexpr static std::size_t size = 0xb84;
  constexpr static std::size_t addrs = 0x6ce8478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "DrawStats", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChain.GetFirstElementInPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderChain::GetFirstElementInPanel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ce7088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                           { "GetFirstElementInPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
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
  this->___m_FirstCommand = value;
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
  this->___m_VisualChangesProcessor = value;
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
  this->___m_CommandPool = value;
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
  this->___m_ExtraDataPool = value;
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
  this->___m_MeshHandleNodePool = value;
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
  this->___m_TexturePool = value;
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
  this->___m_ExtraData = value;
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
  this->___m_MeshGenerationDeferrer = value;
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
  this->___m_DefaultMat = value;
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
  this->___m_TextureRegistry = value;
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
  this->____opacityIdAccelerator_k__BackingField = value;
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
  this->____panel_k__BackingField = value;
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
  this->____device_k__BackingField = value;
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
  this->____atlas_k__BackingField = value;
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
  this->____vectorImageManager_k__BackingField = value;
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
  this->____tempMeshAllocator_k__BackingField = value;
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
  this->____meshWriteDataPool_k__BackingField = value;
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
  this->___entryRecorder = value;
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
  this->____meshGenerationNodeManager_k__BackingField = value;
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
  this->____jobManager_k__BackingField = value;
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
  this->___shaderInfoAllocator = value;
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
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::EntryPool*, "s_SharedEntryPool", ::UnityEngine::UIElements::UIR::RenderChain*>(
      std::forward<::UnityEngine::UIElements::UIR::EntryPool*>(value));
}
inline ::UnityEngine::UIElements::UIR::EntryPool* UnityEngine::UIElements::UIR::RenderChain::getStaticF_s_SharedEntryPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::EntryPool*, "s_SharedEntryPool", ::UnityEngine::UIElements::UIR::RenderChain*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerProcess(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerProcess", ::UnityEngine::UIElements::UIR::RenderChain*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerProcess() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerProcess", ::UnityEngine::UIElements::UIR::RenderChain*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerClipProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerClipProcessing", ::UnityEngine::UIElements::UIR::RenderChain*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerClipProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerClipProcessing", ::UnityEngine::UIElements::UIR::RenderChain*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerOpacityProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerOpacityProcessing", ::UnityEngine::UIElements::UIR::RenderChain*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerOpacityProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerOpacityProcessing", ::UnityEngine::UIElements::UIR::RenderChain*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerColorsProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerColorsProcessing", ::UnityEngine::UIElements::UIR::RenderChain*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerColorsProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerColorsProcessing", ::UnityEngine::UIElements::UIR::RenderChain*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerTransformProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerTransformProcessing", ::UnityEngine::UIElements::UIR::RenderChain*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerTransformProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerTransformProcessing", ::UnityEngine::UIElements::UIR::RenderChain*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerVisualsProcessing(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerVisualsProcessing", ::UnityEngine::UIElements::UIR::RenderChain*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerVisualsProcessing() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerVisualsProcessing", ::UnityEngine::UIElements::UIR::RenderChain*>();
}
inline void UnityEngine::UIElements::UIR::RenderChain::setStaticF_k_MarkerSerialize(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerSerialize", ::UnityEngine::UIElements::UIR::RenderChain*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::getStaticF_k_MarkerSerialize() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerSerialize", ::UnityEngine::UIElements::UIR::RenderChain*>();
}
inline ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* UnityEngine::UIElements::UIR::RenderChain::get_opacityIdAccelerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_opacityIdAccelerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::OpacityIdAccelerator*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_opacityIdAccelerator(::UnityEngine::UIElements::UIR::OpacityIdAccelerator* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                           { "set_opacityIdAccelerator", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::OpacityIdAccelerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderChain::_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::UIR::RenderChain::_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                             ::UnityEngine::UIElements::AtlasBase* atlas, ::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::AtlasBase*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::VectorImageManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel, device, atlas, vectorImageManager);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderChain::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> UnityEngine::UIElements::UIR::RenderChain::get_statsByRef() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_statsByRef", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::ProcessChanges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "ProcessChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::SerializeCommandsForCameras() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "SerializeCommandsForCameras", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::Render() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "Render", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnChildAdded(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "UIEOnChildAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnChildrenReordered(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                         { "UIEOnChildrenReordered", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnChildRemoving(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                         { "UIEOnChildRemoving", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnRenderHintsChanged(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                         { "UIEOnRenderHintsChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnClippingChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                           { "UIEOnClippingChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, hierarchical);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnOpacityChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                           { "UIEOnOpacityChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, hierarchical);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnColorChanged(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "UIEOnColorChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnTransformOrSizeChanged(::UnityEngine::UIElements::VisualElement* ve, bool transformChanged, bool clipRectSizeChanged) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                              { "UIEOnTransformOrSizeChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, transformChanged, clipRectSizeChanged);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                           { "UIEOnVisualsChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, hierarchical);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnOpacityIdChanged(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                         { "UIEOnOpacityIdChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::UIEOnDisableRenderingChanged(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                         { "UIEOnDisableRenderingChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::BaseVisualElementPanel* UnityEngine::UIElements::UIR::RenderChain::get_panel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_panel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseVisualElementPanel*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                         { "set_panel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::UIRenderDevice* UnityEngine::UIElements::UIR::RenderChain::get_device() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_device", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::UIRenderDevice*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_device(::UnityEngine::UIElements::UIR::UIRenderDevice* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "set_device", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::BaseElementBuilder* UnityEngine::UIElements::UIR::RenderChain::get_elementBuilder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_elementBuilder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BaseElementBuilder*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::AtlasBase* UnityEngine::UIElements::UIR::RenderChain::get_atlas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_atlas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::AtlasBase*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_atlas(::UnityEngine::UIElements::AtlasBase* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "set_atlas", {}, { ::i2c::type_of<::UnityEngine::UIElements::AtlasBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::VectorImageManager* UnityEngine::UIElements::UIR::RenderChain::get_vectorImageManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_vectorImageManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::VectorImageManager*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_vectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                         { "set_vectorImageManager", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::VectorImageManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* UnityEngine::UIElements::UIR::RenderChain::get_tempMeshAllocator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_tempMeshAllocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_tempMeshAllocator(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                           { "set_tempMeshAllocator", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::MeshWriteDataPool* UnityEngine::UIElements::UIR::RenderChain::get_meshWriteDataPool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_meshWriteDataPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshWriteDataPool*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::EntryPool* UnityEngine::UIElements::UIR::RenderChain::get_entryPool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_entryPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::EntryPool*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* UnityEngine::UIElements::UIR::RenderChain::get_meshGenerationDeferrer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_meshGenerationDeferrer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MeshGenerationNodeManager* UnityEngine::UIElements::UIR::RenderChain::get_meshGenerationNodeManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_meshGenerationNodeManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshGenerationNodeManager*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_meshGenerationNodeManager(::UnityEngine::UIElements::MeshGenerationNodeManager* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                           { "set_meshGenerationNodeManager", {}, { ::i2c::type_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::JobManager* UnityEngine::UIElements::UIR::RenderChain::get_jobManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_jobManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::JobManager*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_jobManager(::UnityEngine::UIElements::UIR::JobManager* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "set_jobManager", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::JobManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_drawStats() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_drawStats", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::set_drawStats(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "set_drawStats", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_drawInCameras() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_drawInCameras", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_isFlat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_isFlat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderChain::get_forceGammaRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "get_forceGammaRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::EnsureFitsDepth(int32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "EnsureFitsDepth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depth);
}
inline void UnityEngine::UIElements::UIR::RenderChain::ChildWillBeRemoved(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                         { "ChildWillBeRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderChain::AllocCommand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "AllocCommand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChain::FreeCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                         { "FreeCommand", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandAdded(::UnityEngine::UIElements::UIR::RenderChainCommand* command) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                         { "OnRenderCommandAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command);
}
inline void UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandsRemoved(::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand,
                                                                               ::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
          { "OnRenderCommandsRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstCommand, lastCommand);
}
inline void UnityEngine::UIElements::UIR::RenderChain::RepaintTexturedElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "RepaintTexturedElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* UnityEngine::UIElements::UIR::RenderChain::GetOrAddExtraData(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "GetOrAddExtraData", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::FreeExtraData(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "FreeExtraData", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::InsertExtraMesh(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::MeshHandle* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                       { "InsertExtraMesh", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, mesh);
}
inline void UnityEngine::UIElements::UIR::RenderChain::FreeExtraMeshes(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "FreeExtraMeshes", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::InsertTexture(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Texture* src, ::UnityEngine::UIElements::TextureId id, bool isAtlas) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                         { "InsertTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, src, id, isAtlas);
}
inline void UnityEngine::UIElements::UIR::RenderChain::ResetTextures(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "ResetTextures", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderChain::DrawStats() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(), { "DrawStats", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UIR::RenderChain::GetFirstElementInPanel(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                                         { "GetFirstElementInPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::UIR::RenderChain* UnityEngine::UIElements::UIR::RenderChain::New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderChain*>(panel));
}
inline ::UnityEngine::UIElements::UIR::RenderChain* UnityEngine::UIElements::UIR::RenderChain::New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                                                                        ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                                                                        ::UnityEngine::UIElements::AtlasBase* atlas,
                                                                                                        ::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderChain*>(panel, device, atlas, vectorImageManager));
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
