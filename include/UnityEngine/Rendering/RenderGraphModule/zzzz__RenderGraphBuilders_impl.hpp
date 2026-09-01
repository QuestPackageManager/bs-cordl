#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\RenderGraphBuilders.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphBuilders_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__AccessFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ComputeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IBaseRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IComputeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRasterRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IUnsafeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67dd664;

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
  constexpr static std::size_t addrs = 0x67dd678;

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
  constexpr static std::size_t addrs = 0x67dd70c;

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
  constexpr static std::size_t addrs = 0x67dd728;

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
  constexpr static std::size_t addrs = 0x67dd75c;

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
  constexpr static std::size_t addrs = 0x67dd780;

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
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientBuffer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x67dd79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "CreateTransientBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CreateTransientBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientBuffer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x67dda58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "CreateTransientBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CreateTransientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientTexture)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67ddaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "CreateTransientTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CreateTransientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientTexture)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x67ddb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "CreateTransientTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67ddb54;

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
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x67ddb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.ValidateWriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::ValidateWriteTo)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x67ddeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "ValidateWriteTo", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseResource)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x67dd804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "UseResource",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67de644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UseBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CheckNotUseFragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckNotUseFragment)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x67de664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "CheckNotUseFragment", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
                                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67ddeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UseTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseGlobalTexture)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x67dea90;

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
  constexpr static std::size_t addrs = 0x67dec54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "UseAllGlobalTextures", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.SetGlobalTextureAfterPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetGlobalTextureAfterPass)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x67dec70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                         { "SetGlobalTextureAfterPass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CheckUseFragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckUseFragment)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0x67ded70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "CheckUseFragment", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.SetRenderAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetRenderAttachment)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67df8a4;

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
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67df924;

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
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67df9a4;

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
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x67dfa1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "SetRandomAccessAttachment",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UseBufferRandomAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::UnityEngine::Rendering::RenderGraphModule::BufferHandle, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseBufferRandomAccess)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x67dfaa0;

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
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x67dfb24;

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
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseRendererList)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x67dfbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "UseRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.GetLatestVersionHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::GetLatestVersionHandle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x67de354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "GetLatestVersionHandle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.CheckResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckResource)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x67dfc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                { "CheckResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
                                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dffb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_SetGlobalTextureAfterPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, int32_t)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_SetGlobalTextureAfterPass)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67dffb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                             { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.SetGlobalTextureAfterPass",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67dffbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67dffdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67dffe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67dffe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67dfff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders.UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseRendererList)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67e000c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseRendererList",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
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
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "CreateTransientBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> computebuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "CreateTransientBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, computebuffer);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "CreateTransientTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CreateTransientTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "CreateTransientTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, texture);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::ValidateWriteTo(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "ValidateWriteTo", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseResource(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle,
                                                                            ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, bool isTransient) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UseResource",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(this, ___internal_method, handle, flags, isTransient);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> input,
                                                                          ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
          { "UseBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, input, flags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckNotUseFragment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "CheckNotUseFragment", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input,
                                                                                       ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                          { "UseTexture",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
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
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::SetGlobalTextureAfterPass(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input, int32_t propertyId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                       { "SetGlobalTextureAfterPass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, propertyId);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckUseFragment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, bool isDepth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "CheckUseFragment", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<bool>() } })));
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
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UseRendererList(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "UseRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::GetLatestVersionHandle(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "GetLatestVersionHandle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(this, ___internal_method, handle);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::CheckResource(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res, bool checkTransientReadWrite) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                              { "CheckResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res, checkTransientReadWrite);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseTexture(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                          { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseTexture",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, flags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_SetGlobalTextureAfterPass(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input, int32_t propertyId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                           { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.SetGlobalTextureAfterPass",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, propertyId);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseBuffer(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> input, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                          { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseBuffer",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, input, flags);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientBuffer",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> computebuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientBuffer",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, computebuffer);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders::UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseRendererList(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*>(),
                                                                                         { "UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseRendererList",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
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
