#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IUnsafeCommandBuffer.hpp"
#include "UnityEngine/Rendering/zzzz__IUnsafeCommandBuffer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__IComputeCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingShader_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetBinding_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTextureSubElement_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.RequestAsyncReadback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeBuffer*, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.RequestAsyncReadback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.RequestAsyncReadback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeBuffer*, int32_t, int32_t, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.RequestAsyncReadback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, int32_t, int32_t, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.RequestAsyncReadback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Texture*, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.RequestAsyncReadback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Texture*, int32_t, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.RequestAsyncReadback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::UnityEngine::Texture*, int32_t, ::UnityEngine::TextureFormat,
                                                                                                                ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.RequestAsyncReadback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Texture*, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.RequestAsyncReadback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t,
                                                                                                                ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.RequestAsyncReadback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.RequestAsyncReadback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
    ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)()>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.ClearRandomWriteTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)()>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::ClearRandomWriteTargets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier, int32_t)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::CubemapFace)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::CubemapFace,
                                                                                                                int32_t)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier,
                                                                                                                ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::CubemapFace)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetBinding, int32_t, ::UnityEngine::CubemapFace,
                                                                                                                int32_t)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetBinding)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRayTracingTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRayTracingTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRayTracingTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRayTracingTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.GenerateMips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::GenerateMips)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.GenerateMips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::UnityEngine::RenderTexture*)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::GenerateMips)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRandomWriteTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRandomWriteTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRandomWriteTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(int32_t, ::UnityEngine::ComputeBuffer*, bool)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRandomWriteTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRandomWriteTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(int32_t, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRandomWriteTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRandomWriteTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(int32_t, ::UnityEngine::GraphicsBuffer*, bool)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRandomWriteTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetRandomWriteTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(int32_t, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetRandomWriteTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.CopyTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::CopyTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.CopyTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::CopyTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.CopyTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, int32_t,
                                                                                                                ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, int32_t)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::CopyTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.CopyTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::CopyTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(::StringW, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetGlobalTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::IUnsafeCommandBuffer::SetGlobalTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    ::StringW, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTextureSubElement)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetGlobalTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IUnsafeCommandBuffer.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IUnsafeCommandBuffer::*)(
    int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTextureSubElement)>(&::UnityEngine::Rendering::IUnsafeCommandBuffer::SetGlobalTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 61 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback(::UnityEngine::ComputeBuffer* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, callback);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback(::UnityEngine::GraphicsBuffer* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, callback);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback(::UnityEngine::ComputeBuffer* src, int32_t size, int32_t offset,
                                                                               ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, size, offset, callback);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback(::UnityEngine::GraphicsBuffer* src, int32_t size, int32_t offset,
                                                                               ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, size, offset, callback);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback(::UnityEngine::Texture* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, callback);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex,
                                                                               ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, mipIndex, callback);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, ::UnityEngine::TextureFormat dstFormat,
                                                                               ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, mipIndex, dstFormat, callback);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                                               ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, mipIndex, dstFormat, callback);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z,
                                                                               int32_t depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, mipIndex, x, width, y, height, z, depth, callback);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z,
                                                                               int32_t depth, ::UnityEngine::TextureFormat dstFormat,
                                                                               ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, mipIndex, x, width, y, height, z, depth, dstFormat, callback);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z,
                                                                               int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                                               ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, mipIndex, x, width, y, height, z, depth, dstFormat, callback);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::ComputeBuffer* src,
                                                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 11 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, src, callback);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::ComputeBuffer* src, int32_t size,
                                                                                              int32_t offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 12 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, src, size, offset, callback);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::GraphicsBuffer* src,
                                                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 13 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, src, callback);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::GraphicsBuffer* src, int32_t size,
                                                                                              int32_t offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 14 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, src, size, offset, callback);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src,
                                                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 15 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, src, callback);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 16 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, src, mipIndex, callback);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                                                              ::UnityEngine::TextureFormat dstFormat,
                                                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 17 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, src, mipIndex, dstFormat, callback);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                                                              ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 18 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, src, mipIndex, dstFormat, callback);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                                                              int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 19 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, src, mipIndex, x, width, y, height, z, depth, callback);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                                                              int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                                                                              ::UnityEngine::TextureFormat dstFormat,
                                                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 20 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, src, mipIndex, x, width, y, height, z, depth, dstFormat, callback);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                                                              int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                                                                              ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 21 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, src, mipIndex, x, width, y, height, z, depth, dstFormat, callback);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::ClearRandomWriteTargets() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                                                          ::UnityEngine::Rendering::RenderBufferStoreAction storeAction) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt, loadAction, storeAction);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                                                          ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                                          ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                                          ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt, mipLevel);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt, mipLevel, cubemapFace);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                                                                          int32_t depthSlice) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt, mipLevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, depth);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                                          int32_t mipLevel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, depth, mipLevel);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                                          int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, depth, mipLevel, cubemapFace);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                                          int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, depth, mipLevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                                                          ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                                          ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                                          ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, colorLoadAction, colorStoreAction, depth, depthLoadAction, depthStoreAction);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, depth);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                                          int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, depth, mipLevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding binding, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                                                                          int32_t depthSlice) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binding, mipLevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding binding) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binding);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                 ::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, rt);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                 ::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, rt);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                 ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, rt, mipLevel);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                 ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, rt, mipLevel);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                 ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel,
                                                                                 ::UnityEngine::Rendering::RenderTextureSubElement element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, rt, mipLevel, element);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                 ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel,
                                                                                 ::UnityEngine::Rendering::RenderTextureSubElement element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, rt, mipLevel, element);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                    ::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, rt);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                    ::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, rt);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::GenerateMips(::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::GenerateMips(::UnityEngine::RenderTexture* rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRandomWriteTarget(int32_t index, ::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, rt);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRandomWriteTarget(int32_t index, ::UnityEngine::ComputeBuffer* buffer, bool preserveCounterValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, buffer, preserveCounterValue);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRandomWriteTarget(int32_t index, ::UnityEngine::ComputeBuffer* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, buffer);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRandomWriteTarget(int32_t index, ::UnityEngine::GraphicsBuffer* buffer, bool preserveCounterValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, buffer, preserveCounterValue);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetRandomWriteTarget(int32_t index, ::UnityEngine::GraphicsBuffer* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, buffer);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, ::UnityEngine::Rendering::RenderTargetIdentifier dst) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, int32_t srcElement, ::UnityEngine::Rendering::RenderTargetIdentifier dst,
                                                                      int32_t dstElement) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, dst, dstElement);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, int32_t srcElement, int32_t srcMip,
                                                                      ::UnityEngine::Rendering::RenderTargetIdentifier dst, int32_t dstElement, int32_t dstMip) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, dst, dstElement, dstMip);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY,
                                                                      int32_t srcWidth, int32_t srcHeight, ::UnityEngine::Rendering::RenderTargetIdentifier dst, int32_t dstElement, int32_t dstMip,
                                                                      int32_t dstX, int32_t dstY) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier value,
                                                                           ::UnityEngine::Rendering::RenderTextureSubElement element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, element);
}
inline void UnityEngine::Rendering::IUnsafeCommandBuffer::SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value,
                                                                           ::UnityEngine::Rendering::RenderTextureSubElement element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value, element);
}
/// @brief Convert operator to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr UnityEngine::Rendering::IUnsafeCommandBuffer::operator ::UnityEngine::Rendering::IBaseCommandBuffer*() noexcept {
  return static_cast<::UnityEngine::Rendering::IBaseCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr ::UnityEngine::Rendering::IBaseCommandBuffer* UnityEngine::Rendering::IUnsafeCommandBuffer::i___UnityEngine__Rendering__IBaseCommandBuffer() noexcept {
  return static_cast<::UnityEngine::Rendering::IBaseCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRasterCommandBuffer"
constexpr UnityEngine::Rendering::IUnsafeCommandBuffer::operator ::UnityEngine::Rendering::IRasterCommandBuffer*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRasterCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRasterCommandBuffer"
constexpr ::UnityEngine::Rendering::IRasterCommandBuffer* UnityEngine::Rendering::IUnsafeCommandBuffer::i___UnityEngine__Rendering__IRasterCommandBuffer() noexcept {
  return static_cast<::UnityEngine::Rendering::IRasterCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IComputeCommandBuffer"
constexpr UnityEngine::Rendering::IUnsafeCommandBuffer::operator ::UnityEngine::Rendering::IComputeCommandBuffer*() noexcept {
  return static_cast<::UnityEngine::Rendering::IComputeCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IComputeCommandBuffer"
constexpr ::UnityEngine::Rendering::IComputeCommandBuffer* UnityEngine::Rendering::IUnsafeCommandBuffer::i___UnityEngine__Rendering__IComputeCommandBuffer() noexcept {
  return static_cast<::UnityEngine::Rendering::IComputeCommandBuffer*>(static_cast<void*>(this));
}
