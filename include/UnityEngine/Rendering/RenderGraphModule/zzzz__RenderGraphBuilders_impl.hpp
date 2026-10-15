#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphBuilders.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphBuilders_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__AccessFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ComputeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ExtendedFeatureFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IBaseRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IComputeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRasterRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRenderAttachmentRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IUnsafeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureResource_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateCombinerStage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateCombiner_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateFragmentSize_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c30c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*,
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::Setup)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c40bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "Setup",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.EnableAsyncCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::EnableAsyncCompute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c40c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "EnableAsyncCompute", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.AllowPassCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::AllowPassCulling)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6c40ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "AllowPassCulling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.AllowGlobalStateModification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::AllowGlobalStateModification)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c40cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "AllowGlobalStateModification", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.EnableFoveatedRasterization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::EnableFoveatedRasterization)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c40d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "EnableFoveatedRasterization", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CreateTransientBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientBuffer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c40d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "CreateTransientBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CreateTransientBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientBuffer)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6c40e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "CreateTransientBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CreateTransientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c40e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "CreateTransientTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CreateTransientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientTexture)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6c40ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "CreateTransientTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.GenerateDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::GenerateDebugData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c40f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "GenerateDebugData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c40f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::Dispose)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x6c40f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CheckWriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckWriteTo)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x6c413dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "CheckWriteTo", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseTransientResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseTransientResource)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6c40d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "UseTransientResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseResource)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6c4178c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UseResource",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c41990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UseBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CheckNotUseFragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckNotUseFragment)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x6c419ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "CheckNotUseFragment", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CheckTextureUVOriginIsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>, ::UnityEngine::Rendering::RenderGraphModule::TextureResource*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckTextureUVOriginIsValid)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6c41e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "CheckTextureUVOriginIsValid",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseTexture)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c41380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UseTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseGlobalTexture)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x6c42030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "UseGlobalTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseAllGlobalTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseAllGlobalTextures)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c4230c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "UseAllGlobalTextures", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.SetGlobalTextureAfterPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetGlobalTextureAfterPass)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6c42328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                            { "SetGlobalTextureAfterPass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CheckUseFragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckUseFragment)> {
  constexpr static std::size_t size = 0x1380;
  constexpr static std::size_t addrs = 0x6c42428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                { "CheckUseFragment", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.SetRenderAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetRenderAttachment)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c437a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                { "SetRenderAttachment",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.SetInputAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetInputAttachment)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c43824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                { "SetInputAttachment",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.SetRenderAttachmentDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetRenderAttachmentDepth)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6c438a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                { "SetRenderAttachmentDepth",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.SetRandomAccessAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetRandomAccessAttachment)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c43914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "SetRandomAccessAttachment",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.SetShadingRateImageAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetShadingRateImageAttachment)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c43994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                { "SetShadingRateImageAttachment", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseBufferRandomAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::UnityEngine::Rendering::RenderGraphModule::BufferHandle, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseBufferRandomAccess)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c43a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UseBufferRandomAccess",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseBufferRandomAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::UnityEngine::Rendering::RenderGraphModule::BufferHandle, int32_t, bool, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseBufferRandomAccess)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c43a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "UseBufferRandomAccess",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseRendererList)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c43b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "UseRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CheckResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckResource)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x6c43be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                { "CheckResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CheckFrameBufferFetchEmulationIsSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckFrameBufferFetchEmulationIsSupported)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6c4426c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                         { "CheckFrameBufferFetchEmulationIsSupported", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.SetShadingRateFragmentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(::UnityEngine::Rendering::ShadingRateFragmentSize)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetShadingRateFragmentSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c443f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "SetShadingRateFragmentSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.SetShadingRateCombiner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::UnityEngine::Rendering::ShadingRateCombinerStage, ::UnityEngine::Rendering::ShadingRateCombiner)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetShadingRateCombiner)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c4444c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                         { "SetShadingRateCombiner", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombinerStage>(), ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombiner>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.SetExtendedFeatureFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetExtendedFeatureFlags)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c44464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "SetExtendedFeatureFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetShadingRateImageAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetShadingRateImageAttachment)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c44484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IRasterRenderGraphBuilder.SetShadingRateImageAttachment",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseTexture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c44488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_SetGlobalTextureAfterPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>, int32_t)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_SetGlobalTextureAfterPass)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c4448c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.SetGlobalTextureAfterPass",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c44490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c444ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c444b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc const>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c444b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c444c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const>)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseRendererList)> {
  constexpr static std::size_t size = 0xd98;
  constexpr static std::size_t addrs = 0x6c444dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseRendererList",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*& UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::__cordl_internal_get_m_RenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderPass;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* const& UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::__cordl_internal_get_m_RenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderPass;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::__cordl_internal_set_m_RenderPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderPass = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*& UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::__cordl_internal_get_m_Resources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resources;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* const& UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::__cordl_internal_get_m_Resources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resources;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::__cordl_internal_set_m_Resources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Resources = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*& UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::__cordl_internal_get_m_RenderGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraph;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* const& UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::__cordl_internal_get_m_RenderGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraph;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::__cordl_internal_set_m_RenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderGraph = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::__cordl_internal_get_m_Disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Disposed;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::__cordl_internal_get_m_Disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Disposed;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::__cordl_internal_set_m_Disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Disposed = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::Setup(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* renderPass,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "Setup",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPass, resources, renderGraph);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::EnableAsyncCompute(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "EnableAsyncCompute", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::AllowPassCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "AllowPassCulling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::AllowGlobalStateModification(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "AllowGlobalStateModification", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::EnableFoveatedRasterization(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "EnableFoveatedRasterization", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc const> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "CreateTransientBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const> computebuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "CreateTransientBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, computebuffer);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "CreateTransientTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "CreateTransientTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, texture);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::GenerateDebugData(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "GenerateDebugData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckWriteTo(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "CheckWriteTo", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseTransientResource(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> inputHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "UseTransientResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(this, ___internal_method, inputHandle);
}
inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseResource(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> inputHandle,
                                                                            ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UseResource",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(this, ___internal_method, inputHandle, flags);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const> input,
                                                                          ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UseBuffer",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, input, flags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckNotUseFragment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> tex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "CheckNotUseFragment", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex);
}
inline void
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckTextureUVOriginIsValid(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle,
                                                                                            ::UnityEngine::Rendering::RenderGraphModule::TextureResource* texRes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "CheckTextureUVOriginIsValid",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, texRes);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> input,
                                                                                       ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UseTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, flags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseGlobalTexture(int32_t propertyId, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "UseGlobalTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyId, flags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseAllGlobalTextures(bool enable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "UseAllGlobalTextures", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetGlobalTextureAfterPass(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> input,
                                                                                          int32_t propertyId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                          { "SetGlobalTextureAfterPass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, propertyId);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckUseFragment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> tex,
                                                                                             bool isDepth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                              { "CheckUseFragment", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex, isDepth);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetRenderAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index,
                                                                                                ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel, int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "SetRenderAttachment",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex, index, flags, mipLevel, depthSlice);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetInputAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel, int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "SetInputAttachment",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex, index, flags, mipLevel, depthSlice);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetRenderAttachmentDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex,
                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                                                                                     int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "SetRenderAttachmentDepth",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex, flags, mipLevel, depthSlice);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetRandomAccessAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle input, int32_t index,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "SetRandomAccessAttachment",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, input, index, flags);
}
inline void
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetShadingRateImageAttachment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> tex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "SetShadingRateImageAttachment", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseBufferRandomAccess(::UnityEngine::Rendering::RenderGraphModule::BufferHandle input, int32_t index,
                                                                                      ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UseBufferRandomAccess",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, input, index, flags);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseBufferRandomAccess(::UnityEngine::Rendering::RenderGraphModule::BufferHandle input, int32_t index, bool preserveCounterValue,
                                                                                      ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UseBufferRandomAccess",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, input, index, preserveCounterValue, flags);
}
template <typename PassData>
  requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetRenderFunc(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* renderFunc) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                          { "SetRenderFunc",
                            { ::i2c::class_of<PassData>() },
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderFunc);
}
template <typename PassData>
  requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetRenderFunc(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* renderFunc) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                          { "SetRenderFunc",
                            { ::i2c::class_of<PassData>() },
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderFunc);
}
template <typename PassData>
  requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetRenderFunc(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* renderFunc) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                          { "SetRenderFunc",
                            { ::i2c::class_of<PassData>() },
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderFunc);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "UseRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckResource(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res,
                                                                                          bool checkTransientReadWrite) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                              { "CheckResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res, checkTransientReadWrite);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckFrameBufferFetchEmulationIsSupported(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> tex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                              { "CheckFrameBufferFetchEmulationIsSupported", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetShadingRateFragmentSize(::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "SetShadingRateFragmentSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shadingRateFragmentSize);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetShadingRateCombiner(::UnityEngine::Rendering::ShadingRateCombinerStage stage,
                                                                                                   ::UnityEngine::Rendering::ShadingRateCombiner combiner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                       { "SetShadingRateCombiner", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombinerStage>(), ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombiner>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stage, combiner);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetExtendedFeatureFlags(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags extendedFeatureFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "SetExtendedFeatureFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extendedFeatureFlags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetShadingRateImageAttachment(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> tex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IRasterRenderGraphBuilder.SetShadingRateImageAttachment",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseTexture(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> input, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, flags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_SetGlobalTextureAfterPass(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> input, int32_t propertyId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.SetGlobalTextureAfterPass",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, propertyId);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseBuffer(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const> input, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseBuffer",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, input, flags);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> texture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc const> desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientBuffer",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const> computebuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientBuffer",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, computebuffer);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseRendererList(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const> input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseRendererList",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::operator ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::i___UnityEngine__Rendering__RenderGraphModule__IBaseRenderGraphBuilder() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::operator ::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::i___UnityEngine__Rendering__RenderGraphModule__IComputeRenderGraphBuilder() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::operator ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::i___UnityEngine__Rendering__RenderGraphModule__IRasterRenderGraphBuilder() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::operator ::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::i___UnityEngine__Rendering__RenderGraphModule__IRenderAttachmentRenderGraphBuilder() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::operator ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::i___UnityEngine__Rendering__RenderGraphModule__IUnsafeRenderGraphBuilder() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::RenderGraphBuilders() {}
