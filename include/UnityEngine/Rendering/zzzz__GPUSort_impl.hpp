#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUSort_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUSort_Stage::GPUSort_Stage(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUSort_Stage::GPUSort_Stage() {}
constexpr ::UnityEngine::Rendering::GPUSort_Stage UnityEngine::Rendering::GPUSort_Stage::LocalBMS{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::GPUSort_Stage UnityEngine::Rendering::GPUSort_Stage::LocalDisperse{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::GPUSort_Stage UnityEngine::Rendering::GPUSort_Stage::BigFlip{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::GPUSort_Stage UnityEngine::Rendering::GPUSort_Stage::BigDisperse{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort_SupportResources.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUSort_SupportResources (*)(::UnityEngine::Rendering::GPUSort_RenderGraphResources)>(
    &::UnityEngine::Rendering::GPUSort_SupportResources::Load)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x660d880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort_SupportResources>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUSort_RenderGraphResources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort_SupportResources.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUSort_SupportResources::*)()>(
    &::UnityEngine::Rendering::GPUSort_SupportResources::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x660d90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort_SupportResources>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::GPUSort_SupportResources UnityEngine::Rendering::GPUSort_SupportResources::Load(::UnityEngine::Rendering::GPUSort_RenderGraphResources renderGraphResources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort_SupportResources>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUSort_RenderGraphResources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUSort_SupportResources, false>(nullptr, ___internal_method, renderGraphResources);
}
inline void UnityEngine::Rendering::GPUSort_SupportResources::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort_SupportResources>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "sortBufferKeys", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "sortBufferValues", ty:
// "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUSort_SupportResources::GPUSort_SupportResources(::UnityEngine::GraphicsBuffer* sortBufferKeys, ::UnityEngine::GraphicsBuffer* sortBufferValues) noexcept {
  this->sortBufferKeys = sortBufferKeys;
  this->sortBufferValues = sortBufferValues;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUSort_SupportResources::GPUSort_SupportResources() {}
// Ctor Parameters [CppParam { name: "count", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDepth", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "inputKeys", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputValues", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "resources", ty: "::UnityEngine::Rendering::GPUSort_SupportResources", modifiers: "", def_value: Some("{}") }, CppParam { name: "workGroupCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUSort_Args::GPUSort_Args(uint32_t count, uint32_t maxDepth, ::UnityEngine::GraphicsBuffer* inputKeys, ::UnityEngine::GraphicsBuffer* inputValues,
                                                               ::UnityEngine::Rendering::GPUSort_SupportResources resources, int32_t workGroupCount) noexcept {
  this->count = count;
  this->maxDepth = maxDepth;
  this->inputKeys = inputKeys;
  this->inputValues = inputValues;
  this->resources = resources;
  this->workGroupCount = workGroupCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUSort_Args::GPUSort_Args() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort_RenderGraphResources.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUSort_RenderGraphResources (*)(
    int32_t, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder)>(
    &::UnityEngine::Rendering::GPUSort_RenderGraphResources::Create)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x660d798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort_RenderGraphResources>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::GPUSort_RenderGraphResources UnityEngine::Rendering::GPUSort_RenderGraphResources::Create(int32_t count,
                                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder builder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort_RenderGraphResources>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUSort_RenderGraphResources, false>(nullptr, ___internal_method, count, renderGraph, builder);
}
// Ctor Parameters [CppParam { name: "sortBufferKeys", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "sortBufferValues", ty:
// "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUSort_RenderGraphResources::GPUSort_RenderGraphResources(::UnityEngine::Rendering::RenderGraphModule::BufferHandle sortBufferKeys,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::BufferHandle sortBufferValues) noexcept {
  this->sortBufferKeys = sortBufferKeys;
  this->sortBufferValues = sortBufferValues;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUSort_RenderGraphResources::GPUSort_RenderGraphResources() {}
// Ctor Parameters [CppParam { name: "computeAsset", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUSort_SystemResources::GPUSort_SystemResources(::UnityW<::UnityEngine::ComputeShader> computeAsset) noexcept {
  this->computeAsset = computeAsset;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUSort_SystemResources::GPUSort_SystemResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUSort::*)(::UnityEngine::Rendering::GPUSort_SystemResources)>(
    &::UnityEngine::Rendering::GPUSort::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x660cf50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUSort_SystemResources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort.DispatchStage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUSort::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::GPUSort_Args, uint32_t, ::UnityEngine::Rendering::GPUSort_Stage)>(&::UnityEngine::Rendering::GPUSort::DispatchStage)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x660d108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort>::get(), "DispatchStage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUSort_Args>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUSort_Stage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort.CopyBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GPUSort::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::GPUSort::CopyBuffer)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x660d3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort>::get(), "CopyBuffer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort.DivRoundUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::GPUSort::DivRoundUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x660d5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort>::get(), "DivRoundUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort.Dispatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::GPUSort::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::GPUSort_Args)>(&::UnityEngine::Rendering::GPUSort::Dispatch)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x660d5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort>::get(), "Dispatch", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUSort_Args>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUSort::_ctor(::UnityEngine::Rendering::GPUSort_SystemResources resources) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUSort_SystemResources>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::GPUSort::DispatchStage(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::GPUSort_Args args, uint32_t h,
                                                           ::UnityEngine::Rendering::GPUSort_Stage stage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort>::get(), "DispatchStage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUSort_Args>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUSort_Stage>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, args, h, stage);
}
inline void UnityEngine::Rendering::GPUSort::CopyBuffer(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* src, ::UnityEngine::GraphicsBuffer* dst) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort>::get(), "CopyBuffer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, src, dst);
}
inline int32_t UnityEngine::Rendering::GPUSort::DivRoundUp(int32_t x, int32_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort>::get(), "DivRoundUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, y);
}
inline void UnityEngine::Rendering::GPUSort::Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::GPUSort_Args args) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GPUSort>::get(), "Dispatch", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUSort_Args>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, args);
}
// Ctor Parameters [CppParam { name: "m_Keywords", ty: "::ArrayW<::UnityEngine::Rendering::LocalKeyword,::Array<::UnityEngine::Rendering::LocalKeyword>*>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "resources", ty: "::UnityEngine::Rendering::GPUSort_SystemResources", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUSort::GPUSort(::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> m_Keywords,
                                                     ::UnityEngine::Rendering::GPUSort_SystemResources resources) noexcept {
  this->m_Keywords = m_Keywords;
  this->resources = resources;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUSort::GPUSort() {}
