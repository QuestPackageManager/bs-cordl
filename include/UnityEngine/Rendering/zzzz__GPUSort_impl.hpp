#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_impl.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GPUSort_SupportResources (*)(::UnityEngine::Rendering::GPUSort_RenderGraphResources)>(
    &::UnityEngine::Rendering::GPUSort_SupportResources::Load)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67bf1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort_SupportResources>(),
                                                                                           { "Load", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUSort_RenderGraphResources>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort_SupportResources.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUSort_SupportResources::*)()>(&::UnityEngine::Rendering::GPUSort_SupportResources::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67bf25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort_SupportResources>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::GPUSort_SupportResources UnityEngine::Rendering::GPUSort_SupportResources::Load(::UnityEngine::Rendering::GPUSort_RenderGraphResources renderGraphResources) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort_SupportResources>(),
                                                                                         { "Load", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUSort_RenderGraphResources>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUSort_SupportResources>(nullptr, ___internal_method, renderGraphResources);
}
inline void UnityEngine::Rendering::GPUSort_SupportResources::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort_SupportResources>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GPUSort_RenderGraphResources (*)(int32_t, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder)>(
    &::UnityEngine::Rendering::GPUSort_RenderGraphResources::Create)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x67bf0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort_RenderGraphResources>(),
                                                                                           { "Create",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::GPUSort_RenderGraphResources UnityEngine::Rendering::GPUSort_RenderGraphResources::Create(int32_t count,
                                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder builder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort_RenderGraphResources>(),
                                                                                         { "Create",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUSort_RenderGraphResources>(nullptr, ___internal_method, count, renderGraph, builder);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUSort::*)(::UnityEngine::Rendering::GPUSort_SystemResources)>(&::UnityEngine::Rendering::GPUSort::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x67be8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUSort_SystemResources>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort.DispatchStage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUSort::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::GPUSort_Args, uint32_t,
                                                                                                   ::UnityEngine::Rendering::GPUSort_Stage)>(&::UnityEngine::Rendering::GPUSort::DispatchStage)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x67bea58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                                                             { "DispatchStage",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::GPUSort_Args>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Rendering::GPUSort_Stage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort.CopyBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUSort::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*,
                                                                                                   ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::GPUSort::CopyBuffer)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x67bed18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
            { "CopyBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort.DivRoundUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::GPUSort::DivRoundUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67bef00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort>(), { "DivRoundUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUSort.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUSort::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::GPUSort_Args)>(
    &::UnityEngine::Rendering::GPUSort::Dispatch)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x67bef10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                                                { "Dispatch", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::GPUSort_Args>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUSort::_ctor(::UnityEngine::Rendering::GPUSort_SystemResources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUSort_SystemResources>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::GPUSort::DispatchStage(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::GPUSort_Args args, uint32_t h,
                                                           ::UnityEngine::Rendering::GPUSort_Stage stage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                                                           { "DispatchStage",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::GPUSort_Args>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Rendering::GPUSort_Stage>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, args, h, stage);
}
inline void UnityEngine::Rendering::GPUSort::CopyBuffer(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* src, ::UnityEngine::GraphicsBuffer* dst) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
          { "CopyBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, src, dst);
}
inline int32_t UnityEngine::Rendering::GPUSort::DivRoundUp(int32_t x, int32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort>(), { "DivRoundUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline void UnityEngine::Rendering::GPUSort::Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::GPUSort_Args args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUSort>(),
                                              { "Dispatch", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::GPUSort_Args>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, args);
}
// Ctor Parameters [CppParam { name: "m_Keywords", ty: "::ArrayW<::UnityEngine::Rendering::LocalKeyword>", modifiers: "", def_value: Some("{}") }, CppParam { name: "resources", ty:
// "::UnityEngine::Rendering::GPUSort_SystemResources", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUSort::GPUSort(::ArrayW<::UnityEngine::Rendering::LocalKeyword> m_Keywords, ::UnityEngine::Rendering::GPUSort_SystemResources resources) noexcept {
  this->m_Keywords = m_Keywords;
  this->resources = resources;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUSort::GPUSort() {}
