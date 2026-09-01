#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\RenderGraphBuilder.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__DepthAccess_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RayTracingAccelerationStructureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.UseColorBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::UseColorBuffer)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x67dc10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                { "UseColorBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.UseDepthBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::RenderGraphModule::DepthAccess)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::UseDepthBuffer)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67dc2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                                                           { "UseDepthBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DepthAccess>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.ReadTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::ReadTexture)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x67dc640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                             { "ReadTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.WriteTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::WriteTexture)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67dc5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                             { "WriteTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.ReadWriteTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::ReadWriteTexture)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x67dc824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                             { "ReadWriteTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.CreateTransientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientTexture)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x67dc87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                             { "CreateTransientTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.CreateTransientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientTexture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67dc9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                             { "CreateTransientTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.WriteRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::WriteRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x67dcbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                            { "WriteRayTracingAccelerationStructure", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.ReadRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::ReadRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67dcc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                            { "ReadRayTracingAccelerationStructure", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.UseRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::UseRendererList)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x67dcc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                             { "UseRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.ReadBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::ReadBuffer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67dccfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                             { "ReadBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.WriteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::WriteBuffer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x67dcd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                             { "WriteBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.CreateTransientBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67dcd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                             { "CreateTransientBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.CreateTransientBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientBuffer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67dcea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                             { "CreateTransientBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.EnableAsyncCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::EnableAsyncCompute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67dd0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "EnableAsyncCompute", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.AllowPassCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::AllowPassCulling)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67dd0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "AllowPassCulling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.EnableFoveatedRasterization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::EnableFoveatedRasterization)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67dd0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "EnableFoveatedRasterization", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dd108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.AllowRendererListCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::AllowRendererListCulling)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67dd148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "AllowRendererListCulling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.DependsOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::DependsOn)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x67dd164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                             { "DependsOn", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67dd228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67dd110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.CheckResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::CheckResource)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x67dd238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                { "CheckResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder.GenerateDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::GenerateDebugData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67dd648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "GenerateDebugData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::UseColorBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                              { "UseColorBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(*this, ___internal_method, input, index);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::UseDepthBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::DepthAccess flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                          { "UseDepthBuffer",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DepthAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(*this, ___internal_method, input, flags);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::ReadTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                           { "ReadTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(*this, ___internal_method, input);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::WriteTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                           { "WriteTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(*this, ___internal_method, input);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::ReadWriteTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                           { "ReadWriteTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(*this, ___internal_method, input);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                           { "CreateTransientTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(*this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                           { "CreateTransientTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(*this, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::WriteRayTracingAccelerationStructure(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle> input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                          { "WriteRayTracingAccelerationStructure", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(*this, ___internal_method, input);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::ReadRayTracingAccelerationStructure(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle> input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                          { "ReadRayTracingAccelerationStructure", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(*this, ___internal_method, input);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::UseRendererList(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                           { "UseRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(*this, ___internal_method, input);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::ReadBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                           { "ReadBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(*this, ___internal_method, input);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::WriteBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                           { "WriteBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(*this, ___internal_method, input);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                           { "CreateTransientBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(*this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::CreateTransientBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> graphicsbuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                           { "CreateTransientBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(*this, ___internal_method, graphicsbuffer);
}
template <typename PassData>
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::SetRenderFunc(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>* renderFunc) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                          { "SetRenderFunc",
                            { ::i2c::class_of<PassData>() },
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, renderFunc);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::EnableAsyncCompute(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "EnableAsyncCompute", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::AllowPassCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "AllowPassCulling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::EnableFoveatedRasterization(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "EnableFoveatedRasterization", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::AllowRendererListCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "AllowRendererListCulling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::DependsOn(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                           { "DependsOn", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(*this, ___internal_method, input);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::_ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* renderPass,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, renderPass, resources, renderGraph);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::CheckResource(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res, bool checkTransientReadWrite) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(),
                                              { "CheckResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, res, checkTransientReadWrite);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::GenerateDebugData(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(), { "GenerateDebugData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_RenderPass", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Resources", ty:
// "::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RenderGraph", ty:
// "::UnityEngine::Rendering::RenderGraphModule::RenderGraph*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::RenderGraphBuilder(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* m_RenderPass,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* m_RenderGraph, bool m_Disposed) noexcept {
  this->m_RenderPass = m_RenderPass;
  this->m_Resources = m_Resources;
  this->m_RenderGraph = m_RenderGraph;
  this->m_Disposed = m_Disposed;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder::RenderGraphBuilder() {}
