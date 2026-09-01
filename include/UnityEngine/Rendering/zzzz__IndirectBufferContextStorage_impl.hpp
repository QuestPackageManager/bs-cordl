#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\IndirectBufferContextStorage.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferAllocInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContext_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferLimits_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectDrawInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectInstanceInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContextStorage_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferAllocInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContextHandles_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferLimits_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectDrawInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectInstanceInfo_def.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.get_instanceBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::get_instanceBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682ff3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_instanceBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.get_instanceInfoBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::get_instanceInfoBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682ff44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_instanceInfoBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.get_argsBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::get_argsBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682ff4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_argsBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.get_drawInfoBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::get_drawInfoBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682ff54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_drawInfoBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.get_visibleInstanceBufferHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBufferHandle (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::get_visibleInstanceBufferHandle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x682ff5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_visibleInstanceBufferHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.get_indirectArgsBufferHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBufferHandle (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::get_indirectArgsBufferHandle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x682ff74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_indirectArgsBufferHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.ImportBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IndirectBufferContextHandles (::UnityEngine::Rendering::IndirectBufferContextStorage::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::IndirectBufferContextStorage::ImportBuffers)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x682ff8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(),
                                                                                           { "ImportBuffers", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.get_instanceInfoGlobalArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> (
    ::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(&::UnityEngine::Rendering::IndirectBufferContextStorage::get_instanceInfoGlobalArray)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6830060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_instanceInfoGlobalArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.get_drawInfoGlobalArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::get_drawInfoGlobalArray)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x683006c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_drawInfoGlobalArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.get_allocationCounters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::get_allocationCounters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6830078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_allocationCounters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(&::UnityEngine::Rendering::IndirectBufferContextStorage::Init)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6830084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.AllocateInstanceBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextStorage::*)(int32_t)>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::AllocateInstanceBuffers)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x68301c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "AllocateInstanceBuffers", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.FreeInstanceBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::FreeInstanceBuffers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68304ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "FreeInstanceBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.AllocateDrawBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextStorage::*)(int32_t)>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::AllocateDrawBuffers)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x68302f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "AllocateDrawBuffers", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.FreeDrawBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(&::UnityEngine::Rendering::IndirectBufferContextStorage::FreeDrawBuffers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x683055c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "FreeDrawBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(&::UnityEngine::Rendering::IndirectBufferContextStorage::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x68305cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.SyncContexts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(&::UnityEngine::Rendering::IndirectBufferContextStorage::SyncContexts)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x683069c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "SyncContexts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.ResetAllocators
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(&::UnityEngine::Rendering::IndirectBufferContextStorage::ResetAllocators)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6830424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "ResetAllocators", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.GrowBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(&::UnityEngine::Rendering::IndirectBufferContextStorage::GrowBuffers)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x68307bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "GrowBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.ClearContextsAndGrowBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextStorage::*)()>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::ClearContextsAndGrowBuffers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6830980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "ClearContextsAndGrowBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.TryAllocateContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::IndirectBufferContextStorage::*)(int32_t)>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::TryAllocateContext)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x68309a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "TryAllocateContext", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.TryGetContextIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::IndirectBufferContextStorage::*)(int32_t)>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::TryGetContextIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6830ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "TryGetContextIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.GetAllocInfoSubArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> (
    ::UnityEngine::Rendering::IndirectBufferContextStorage::*)(int32_t)>(&::UnityEngine::Rendering::IndirectBufferContextStorage::GetAllocInfoSubArray)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6830b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "GetAllocInfoSubArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.GetAllocInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IndirectBufferAllocInfo (::UnityEngine::Rendering::IndirectBufferContextStorage::*)(int32_t)>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::GetAllocInfo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6830bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "GetAllocInfo", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.CopyFromStaging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextStorage::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::IndirectBufferAllocInfo>)>(&::UnityEngine::Rendering::IndirectBufferContextStorage::CopyFromStaging)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6830c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(),
                            { "CopyFromStaging", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::IndirectBufferAllocInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.GetLimits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IndirectBufferLimits (::UnityEngine::Rendering::IndirectBufferContextStorage::*)(int32_t)>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::GetLimits)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6830d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "GetLimits", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.GetBufferContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IndirectBufferContext (::UnityEngine::Rendering::IndirectBufferContextStorage::*)(int32_t)>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::GetBufferContext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6830d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "GetBufferContext", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextStorage.SetBufferContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextStorage::*)(int32_t, ::UnityEngine::Rendering::IndirectBufferContext)>(
    &::UnityEngine::Rendering::IndirectBufferContextStorage::SetBufferContext)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6830e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(),
                                                             { "SetBufferContext", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndirectBufferContext>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::IndirectBufferContextStorage::get_instanceBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_instanceBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(*this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::IndirectBufferContextStorage::get_instanceInfoBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_instanceInfoBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(*this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::IndirectBufferContextStorage::get_argsBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_argsBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(*this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::IndirectBufferContextStorage::get_drawInfoBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_drawInfoBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(*this, ___internal_method);
}
inline ::UnityEngine::GraphicsBufferHandle UnityEngine::Rendering::IndirectBufferContextStorage::get_visibleInstanceBufferHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_visibleInstanceBufferHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBufferHandle>(*this, ___internal_method);
}
inline ::UnityEngine::GraphicsBufferHandle UnityEngine::Rendering::IndirectBufferContextStorage::get_indirectArgsBufferHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_indirectArgsBufferHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBufferHandle>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::IndirectBufferContextHandles
UnityEngine::Rendering::IndirectBufferContextStorage::ImportBuffers(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(),
                                                                                         { "ImportBuffers", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IndirectBufferContextHandles>(*this, ___internal_method, renderGraph);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> UnityEngine::Rendering::IndirectBufferContextStorage::get_instanceInfoGlobalArray() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_instanceInfoGlobalArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> UnityEngine::Rendering::IndirectBufferContextStorage::get_drawInfoGlobalArray() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_drawInfoGlobalArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> UnityEngine::Rendering::IndirectBufferContextStorage::get_allocationCounters() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "get_allocationCounters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::IndirectBufferContextStorage::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::IndirectBufferContextStorage::AllocateInstanceBuffers(int32_t maxInstanceCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "AllocateInstanceBuffers", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, maxInstanceCount);
}
inline void UnityEngine::Rendering::IndirectBufferContextStorage::FreeInstanceBuffers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "FreeInstanceBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::IndirectBufferContextStorage::AllocateDrawBuffers(int32_t maxDrawCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "AllocateDrawBuffers", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, maxDrawCount);
}
inline void UnityEngine::Rendering::IndirectBufferContextStorage::FreeDrawBuffers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "FreeDrawBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::IndirectBufferContextStorage::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::IndirectBufferContextStorage::SyncContexts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "SyncContexts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::IndirectBufferContextStorage::ResetAllocators() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "ResetAllocators", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::IndirectBufferContextStorage::GrowBuffers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "GrowBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::IndirectBufferContextStorage::ClearContextsAndGrowBuffers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "ClearContextsAndGrowBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::IndirectBufferContextStorage::TryAllocateContext(int32_t viewID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "TryAllocateContext", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, viewID);
}
inline int32_t UnityEngine::Rendering::IndirectBufferContextStorage::TryGetContextIndex(int32_t viewID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "TryGetContextIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, viewID);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> UnityEngine::Rendering::IndirectBufferContextStorage::GetAllocInfoSubArray(int32_t contextIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "GetAllocInfoSubArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo>>(*this, ___internal_method, contextIndex);
}
inline ::UnityEngine::Rendering::IndirectBufferAllocInfo UnityEngine::Rendering::IndirectBufferContextStorage::GetAllocInfo(int32_t contextIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "GetAllocInfo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IndirectBufferAllocInfo>(*this, ___internal_method, contextIndex);
}
inline void UnityEngine::Rendering::IndirectBufferContextStorage::CopyFromStaging(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::IndirectBufferAllocInfo> allocInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(),
                          { "CopyFromStaging", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::IndirectBufferAllocInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, allocInfo);
}
inline ::UnityEngine::Rendering::IndirectBufferLimits UnityEngine::Rendering::IndirectBufferContextStorage::GetLimits(int32_t contextIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "GetLimits", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IndirectBufferLimits>(*this, ___internal_method, contextIndex);
}
inline ::UnityEngine::Rendering::IndirectBufferContext UnityEngine::Rendering::IndirectBufferContextStorage::GetBufferContext(int32_t contextIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(), { "GetBufferContext", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IndirectBufferContext>(*this, ___internal_method, contextIndex);
}
inline void UnityEngine::Rendering::IndirectBufferContextStorage::SetBufferContext(int32_t contextIndex, ::UnityEngine::Rendering::IndirectBufferContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferContextStorage>(),
                                                           { "SetBufferContext", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndirectBufferContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, contextIndex, ctx);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::IndirectBufferContextStorage::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::IndirectBufferContextStorage::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_BufferLimits", ty: "::UnityEngine::Rendering::IndirectBufferLimits", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InstanceBuffer", ty:
// "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InstanceInfoBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_InstanceInfoStaging", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ArgsBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawInfoBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_DrawInfoStaging", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ContextAllocCounter", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ContextIndexFromViewID", ty: "::Unity::Collections::NativeHashMap_2<int32_t,int32_t>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_Contexts", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::IndirectBufferContext>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_ContextAllocInfo", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_AllocationCounters", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IndirectBufferContextStorage::IndirectBufferContextStorage(
    ::UnityEngine::Rendering::IndirectBufferLimits m_BufferLimits, ::UnityEngine::GraphicsBuffer* m_InstanceBuffer, ::UnityEngine::GraphicsBuffer* m_InstanceInfoBuffer,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> m_InstanceInfoStaging, ::UnityEngine::GraphicsBuffer* m_ArgsBuffer,
    ::UnityEngine::GraphicsBuffer* m_DrawInfoBuffer, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> m_DrawInfoStaging, int32_t m_ContextAllocCounter,
    ::Unity::Collections::NativeHashMap_2<int32_t, int32_t> m_ContextIndexFromViewID, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::IndirectBufferContext> m_Contexts,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> m_ContextAllocInfo, ::Unity::Collections::NativeArray_1<int32_t> m_AllocationCounters) noexcept {
  this->m_BufferLimits = m_BufferLimits;
  this->m_InstanceBuffer = m_InstanceBuffer;
  this->m_InstanceInfoBuffer = m_InstanceInfoBuffer;
  this->m_InstanceInfoStaging = m_InstanceInfoStaging;
  this->m_ArgsBuffer = m_ArgsBuffer;
  this->m_DrawInfoBuffer = m_DrawInfoBuffer;
  this->m_DrawInfoStaging = m_DrawInfoStaging;
  this->m_ContextAllocCounter = m_ContextAllocCounter;
  this->m_ContextIndexFromViewID = m_ContextIndexFromViewID;
  this->m_Contexts = m_Contexts;
  this->m_ContextAllocInfo = m_ContextAllocInfo;
  this->m_AllocationCounters = m_AllocationCounters;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IndirectBufferContextStorage::IndirectBufferContextStorage() {}
