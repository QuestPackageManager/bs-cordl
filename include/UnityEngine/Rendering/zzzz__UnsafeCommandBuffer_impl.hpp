#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnsafeCommandBuffer.hpp"
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__UnsafeCommandBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Profiling/zzzz__CustomSampler_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraLateLatchMatrixType_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__FoveatedRenderingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__IComputeCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__IUnsafeCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTClearFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingShader_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetBinding_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTextureSubElement_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSamplingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__SinglePassStereoMode_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*, bool)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6597d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetInvertCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(bool)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetInvertCulling)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x659bae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetInvertCulling",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeFloatParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, float_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeFloatParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bb00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeFloatParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeIntParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeIntParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bb18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeIntParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeVectorParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeVectorParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeVectorParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeVectorArrayParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeVectorArrayParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeVectorArrayParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeMatrixParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeMatrixParam)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659bb60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeMatrixParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeMatrixArrayParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeMatrixArrayParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bb9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeMatrixArrayParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)()>(&::UnityEngine::Rendering::UnsafeCommandBuffer::Clear)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bbb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rect)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetViewport)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetViewport",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.EnableScissorRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rect)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::EnableScissorRect)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bbe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EnableScissorRect",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DisableScissorRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)()>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DisableScissorRect)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                                               "DisableScissorRect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.ClearRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(bool, bool, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::ClearRenderTarget)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x659bc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "ClearRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.ClearRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(bool, bool, ::UnityEngine::Color, float_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::ClearRenderTarget)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x659bc38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "ClearRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.ClearRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(bool, bool, ::UnityEngine::Color, float_t, uint32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::ClearRenderTarget)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x659bc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "ClearRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.ClearRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RTClearFlags, ::UnityEngine::Color, float_t, uint32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::ClearRenderTarget)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x659bcf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "ClearRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTClearFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.ClearRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RTClearFlags, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, float_t, uint32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::ClearRenderTarget)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "ClearRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTClearFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(int32_t, float_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalFloat)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bd90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalInt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalInteger)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bdc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(int32_t, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalVector)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bdd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalVector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(int32_t, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalColor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bdf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(int32_t, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalMatrix)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659be08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.EnableShaderKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::EnableShaderKeyword)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659be44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EnableShaderKeyword",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.EnableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::ByRef<::UnityEngine::Rendering::GlobalKeyword>)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::EnableKeyword)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x659be5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EnableKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.EnableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Material*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::EnableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x659be78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EnableKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.EnableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::EnableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x659beb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EnableKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DisableShaderKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DisableShaderKeyword)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659bee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DisableShaderKeyword",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DisableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::ByRef<::UnityEngine::Rendering::GlobalKeyword>)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DisableKeyword)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x659bf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DisableKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DisableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Material*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DisableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x659bf1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DisableKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DisableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DisableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x659bf54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DisableKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::ByRef<::UnityEngine::Rendering::GlobalKeyword>, bool)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetKeyword)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x659bf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Material*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>, bool)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659bfb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>, bool)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659bfec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetViewProjectionMatrices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetViewProjectionMatrices)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x659c028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetViewProjectionMatrices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalDepthBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(float_t, float_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalDepthBias)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalDepthBias", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(int32_t, ::ArrayW<float_t, ::Array<float_t>*>)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    int32_t, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    int32_t, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetLateLatchProjectionMatrices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetLateLatchProjectionMatrices)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetLateLatchProjectionMatrices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.MarkLateLatchMatrixShaderPropertyID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::CameraLateLatchMatrixType, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::MarkLateLatchMatrixShaderPropertyID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c0f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "MarkLateLatchMatrixShaderPropertyID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraLateLatchMatrixType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.UnmarkLateLatchMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::CameraLateLatchMatrixType)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::UnmarkLateLatchMatrix)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "UnmarkLateLatchMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraLateLatchMatrixType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.BeginSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::BeginSample)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "BeginSample",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.EndSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::EndSample)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EndSample",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.BeginSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Profiling::CustomSampler*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::BeginSample)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659c150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "BeginSample", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Profiling::CustomSampler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.EndSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Profiling::CustomSampler*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::EndSample)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659c164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EndSample", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Profiling::CustomSampler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.BeginSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::Unity::Profiling::ProfilerMarker)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::BeginSample)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x659c178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "BeginSample", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerMarker>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.EndSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::Unity::Profiling::ProfilerMarker)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::EndSample)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x659c17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EndSample", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerMarker>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.IncrementUpdateCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::IncrementUpdateCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659c180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "IncrementUpdateCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetInstanceMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(uint32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetInstanceMultiplier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetInstanceMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetFoveatedRenderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::FoveatedRenderingMode)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetFoveatedRenderingMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetFoveatedRenderingMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FoveatedRenderingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetWireframe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(bool)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetWireframe)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x659c1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetWireframe",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.ConfigureFoveatedRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::System::IntPtr)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::ConfigureFoveatedRendering)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "ConfigureFoveatedRendering",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659c220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659c25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659c298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659c2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::CubemapFace)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659c310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659c34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x659c388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x659c3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::CubemapFace)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x659c428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x659c478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x659c4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659c518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t,
    ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659c554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetBinding, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x659c590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetBinding)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659c5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetBinding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetBufferData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, ::System::Array*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetBufferData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeBuffer*, ::System::Array*, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetBufferCounterValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferCounterValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659c660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferCounterValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetBufferData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, ::System::Array*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetBufferData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::System::Array*, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659c68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetBufferCounterValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferCounterValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659c6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferCounterValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetupCameraProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetupCameraProperties)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659c6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetupCameraProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.InvokeOnRenderObjectCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)()>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::InvokeOnRenderObjectCallbacks)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x659c6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                                               "InvokeOnRenderObjectCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeFloatParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, float_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeFloatParam)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x659c720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeFloatParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeIntParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeIntParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659c76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeIntParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeVectorParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::Vector4)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeVectorParam)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x659c7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeVectorParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeVectorArrayParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeVectorArrayParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659c81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeVectorArrayParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeMatrixParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeMatrixParam)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x659c860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeMatrixParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeMatrixArrayParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeMatrixArrayParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659c8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeMatrixArrayParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeFloatParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::ArrayW<float_t, ::Array<float_t>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeFloatParams)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659c900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeFloatParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeFloatParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::ArrayW<float_t, ::Array<float_t>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeFloatParams)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659c944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeFloatParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeIntParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeIntParams)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659c958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeIntParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeIntParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeIntParams)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659c99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeIntParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x659c9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeTextureParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x659ca98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeTextureParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x659cb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeTextureParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x659cc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeTextureParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x659cd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeTextureParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x659ce38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeTextureParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659cf24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x659cf38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659cf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x659cfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659cff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x659d00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeConstantBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeConstantBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeConstantBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeConstantBufferParam)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x659d074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeConstantBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeConstantBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetComputeConstantBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeConstantBufferParam)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x659d0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DispatchCompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DispatchCompute)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DispatchCompute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DispatchCompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::ComputeBuffer*, uint32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DispatchCompute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659d154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DispatchCompute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DispatchCompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::GraphicsBuffer*, uint32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DispatchCompute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659d16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DispatchCompute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.BuildRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::BuildRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659d184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "BuildRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingAccelerationStructure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.BuildRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingAccelerationStructure*, ::UnityEngine::Vector3)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::BuildRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659d19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "BuildRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingAccelerationStructure*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
        &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659d1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingAccelerationStructure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
        &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingAccelerationStructure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
        &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x659d20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingAccelerationStructure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingAccelerationStructure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659d274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659d2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659d324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659d368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingConstantBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingConstantBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingConstantBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingConstantBufferParam)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x659d394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingConstantBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingConstantBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingConstantBufferParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingConstantBufferParam)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x659d404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingTextureParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingTextureParam)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x659d460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingTextureParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingTextureParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingTextureParam)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x659d530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingTextureParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingFloatParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, float_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingFloatParam)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x659d5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingFloatParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingFloatParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, float_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingFloatParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingFloatParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingFloatParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::ArrayW<float_t, ::Array<float_t>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingFloatParams)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659d654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingFloatParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingFloatParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::ArrayW<float_t, ::Array<float_t>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingFloatParams)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingFloatParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingIntParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingIntParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659d6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingIntParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingIntParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingIntParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingIntParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingIntParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingIntParams)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659d704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingIntParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingIntParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingIntParams)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingIntParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingVectorParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Vector4)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingVectorParam)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x659d75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingVectorParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingVectorParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingVectorParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingVectorParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingVectorArrayParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>)>(
        &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingVectorArrayParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659d7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingVectorArrayParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingVectorArrayParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>)>(
        &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingVectorArrayParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingVectorArrayParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingMatrixParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingMatrixParam)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x659d834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingMatrixParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingMatrixParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingMatrixParam)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x659d890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingMatrixParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingMatrixArrayParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingMatrixArrayParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659d8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingMatrixArrayParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetRayTracingMatrixArrayParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>)>(
        &::UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingMatrixArrayParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingMatrixArrayParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DispatchRays
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, uint32_t, uint32_t, uint32_t, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DispatchRays)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659d920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DispatchRays", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMesh)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659d934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMesh)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659d970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMesh)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x659d9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMesh)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x659d9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMultipleMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, ::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t,
    ::UnityEngine::Material*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMultipleMeshes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x659da30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMultipleMeshes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Renderer*, ::UnityEngine::Material*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawRenderer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659da4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawRenderer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Renderer*, ::UnityEngine::Material*, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawRenderer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659da64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawRenderer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Renderer*, ::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawRenderer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x659da7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawRenderer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::RendererList)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawRendererList)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x659da98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawRendererList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProcedural
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, int32_t, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProcedural)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659dad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProcedural", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProcedural
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, int32_t, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProcedural)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659db0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProcedural", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProcedural
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProcedural)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x659db48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProcedural", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProcedural
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, int32_t, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProcedural)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x659db88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProcedural", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProcedural
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProcedural)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659dbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProcedural", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProcedural
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProcedural)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x659dc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProcedural", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProceduralIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659dc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProceduralIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659dc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProceduralIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x659dcbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProceduralIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*, int32_t,
    ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x659dcfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProceduralIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659dd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProceduralIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x659dd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProceduralIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::GraphicsBuffer*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659ddb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProceduralIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::GraphicsBuffer*, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659ddf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProceduralIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::GraphicsBuffer*)>(
        &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x659de30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProceduralIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::GraphicsBuffer*, int32_t,
    ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x659de70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProceduralIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::GraphicsBuffer*, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659deb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawProceduralIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x659deec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMeshInstanced
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, int32_t, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstanced)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x659df2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstanced", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMeshInstanced
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, int32_t, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstanced)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x659df48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstanced", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMeshInstanced
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, int32_t, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstanced)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659df70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstanced", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMeshInstancedProcedural
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, int32_t, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedProcedural)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659df88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedProcedural", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMeshInstancedIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, int32_t, ::UnityEngine::ComputeBuffer*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedIndirect)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x659dfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMeshInstancedIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, int32_t, ::UnityEngine::ComputeBuffer*, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedIndirect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x659dfbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMeshInstancedIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedIndirect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x659dfe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMeshInstancedIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedIndirect)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x659e010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMeshInstancedIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, int32_t, ::UnityEngine::GraphicsBuffer*, int32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedIndirect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x659e02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawMeshInstancedIndirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedIndirect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x659e054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedIndirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.DrawOcclusionMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::RectInt)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::DrawOcclusionMesh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659e080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawOcclusionMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.CopyCounterValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*, uint32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::CopyCounterValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659e094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "CopyCounterValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.CopyCounterValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::UnityEngine::ComputeBuffer*, uint32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::CopyCounterValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659e0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "CopyCounterValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.CopyCounterValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeBuffer*, ::UnityEngine::GraphicsBuffer*, uint32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::CopyCounterValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659e0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "CopyCounterValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.CopyCounterValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, uint32_t)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::CopyCounterValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659e0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "CopyCounterValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW, float_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalFloat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659e0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalInt)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659e120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalInteger)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659e15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalVector)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x659e198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalVector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalColor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x659e1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalMatrix)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x659e250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW, ::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659e29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(int32_t, ::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659e2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW, ::ArrayW<float_t, ::Array<float_t>*>)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659e2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659e32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659e368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659e380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659e3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659e3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659e410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalTexture)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x659e44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x659e528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderTextureSubElement)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalTexture)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x659e5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderTextureSubElement)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalTexture)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x659e6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659e78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(int32_t, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659e7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::StringW, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659e7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(int32_t, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659e818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659e82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, ::StringW, int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x659e840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659e894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, ::StringW, int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x659e8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetShadowSamplingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ShadowSamplingMode)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::SetShadowSamplingMode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x659e8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetShadowSamplingMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShadowSamplingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.SetSinglePassStereo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::UnityEngine::Rendering::SinglePassStereoMode)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::SetSinglePassStereo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659e958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetSinglePassStereo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SinglePassStereoMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.IssuePluginEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::System::IntPtr, int32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::IssuePluginEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659e96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "IssuePluginEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.IssuePluginEventAndData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::System::IntPtr, int32_t, ::System::IntPtr)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::IssuePluginEventAndData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659e984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "IssuePluginEventAndData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.IssuePluginCustomBlit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::System::IntPtr, uint32_t, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::IssuePluginCustomBlit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x659e99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "IssuePluginCustomBlit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.IssuePluginCustomTextureUpdateV2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::System::IntPtr, ::UnityEngine::Texture*, uint32_t)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::IssuePluginCustomTextureUpdateV2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x659ea2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "IssuePluginCustomTextureUpdateV2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::ByRef<::UnityEngine::Rendering::GlobalKeyword>)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x659ea84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                    "UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Material*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x659eaa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                 "UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x659ead8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                 "UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::ByRef<::UnityEngine::Rendering::GlobalKeyword>)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x659eb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                    "UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Material*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x659eb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                 "UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x659eb64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                 "UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(::ByRef<::UnityEngine::Rendering::GlobalKeyword>, bool)>(
    &::UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x659eb9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                 "UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::Material*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>, bool)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659ebc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                 "UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnsafeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UnsafeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::ByRef<::UnityEngine::Rendering::LocalKeyword>, bool)>(&::UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x659ebfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                 "UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnsafeCommandBuffer::_ctor(::UnityEngine::Rendering::CommandBuffer* wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass,
                                                               bool isAsync) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, wrapped, executingPass, isAsync);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::ComputeBuffer* src,
                                                                                             ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "RequestAsyncReadbackIntoNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<T>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, src, callback);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::ComputeBuffer* src, int32_t size,
                                                                                             int32_t offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "RequestAsyncReadbackIntoNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<T>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, src, size, offset, callback);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::GraphicsBuffer* src,
                                                                                             ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "RequestAsyncReadbackIntoNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<T>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, src, callback);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::GraphicsBuffer* src, int32_t size,
                                                                                             int32_t offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "RequestAsyncReadbackIntoNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<T>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, src, size, offset, callback);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src,
                                                                                             ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "RequestAsyncReadbackIntoNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<T>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, src, callback);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                                                             ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "RequestAsyncReadbackIntoNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<T>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, src, mipIndex, callback);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                                                             ::UnityEngine::TextureFormat dstFormat,
                                                                                             ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "RequestAsyncReadbackIntoNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<T>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, src, mipIndex, dstFormat, callback);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                                                             ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                                                             ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "RequestAsyncReadbackIntoNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<T>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, src, mipIndex, dstFormat, callback);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                                                             int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                                                                             ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "RequestAsyncReadbackIntoNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<T>>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, src, mipIndex, x, width, y, height, z, depth, callback);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                                                             int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                                                                             ::UnityEngine::TextureFormat dstFormat,
                                                                                             ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "RequestAsyncReadbackIntoNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<T>>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, src, mipIndex, x, width, y, height, z, depth, dstFormat, callback);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                                                             int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                                                                             ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                                                             ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "RequestAsyncReadbackIntoNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<T>>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, src, mipIndex, x, width, y, height, z, depth, dstFormat, callback);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetInvertCulling(bool invertCulling) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetInvertCulling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, invertCulling);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, float_t val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeFloatParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, nameID, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, int32_t val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeIntParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, nameID, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Vector4 val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeVectorParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, nameID, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID,
                                                                                    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeVectorArrayParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Matrix4x4 val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeMatrixParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, nameID, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID,
                                                                                    ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeMatrixArrayParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetViewport(::UnityEngine::Rect pixelRect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetViewport",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pixelRect);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::EnableScissorRect(::UnityEngine::Rect scissor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EnableScissorRect",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scissor);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DisableScissorRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                                             "DisableScissorRect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "ClearRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clearDepth, clearColor, backgroundColor);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "ClearRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clearDepth, clearColor, backgroundColor, depth);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth, uint32_t stencil) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "ClearRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clearDepth, clearColor, backgroundColor, depth, stencil);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags clearFlags, ::UnityEngine::Color backgroundColor, float_t depth, uint32_t stencil) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "ClearRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTClearFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clearFlags, backgroundColor, depth, stencil);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags clearFlags,
                                                                           ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> backgroundColors, float_t depth, uint32_t stencil) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "ClearRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTClearFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clearFlags, backgroundColors, depth, stencil);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalFloat(int32_t nameID, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalInt(int32_t nameID, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalInteger(int32_t nameID, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalVector", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalColor(int32_t nameID, ::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::EnableShaderKeyword(::StringW keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EnableShaderKeyword",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::EnableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EnableKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::EnableKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EnableKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::EnableKeyword(::UnityEngine::ComputeShader* computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EnableKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DisableShaderKeyword(::StringW keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DisableShaderKeyword",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DisableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DisableKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DisableKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DisableKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DisableKeyword(::UnityEngine::ComputeShader* computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DisableKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material, keyword, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetKeyword(::UnityEngine::ComputeShader* computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, keyword, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetViewProjectionMatrices(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 proj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetViewProjectionMatrices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, view, proj);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalDepthBias(float_t bias, float_t slopeBias) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalDepthBias", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bias, slopeBias);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetLateLatchProjectionMatrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> projectionMat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetLateLatchProjectionMatrices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, projectionMat);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::MarkLateLatchMatrixShaderPropertyID(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType, int32_t shaderPropertyID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "MarkLateLatchMatrixShaderPropertyID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraLateLatchMatrixType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matrixPropertyType, shaderPropertyID);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::UnmarkLateLatchMatrix(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "UnmarkLateLatchMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraLateLatchMatrixType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matrixPropertyType);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::BeginSample(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "BeginSample",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::EndSample(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EndSample", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::BeginSample(::UnityEngine::Profiling::CustomSampler* sampler) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "BeginSample", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Profiling::CustomSampler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampler);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::EndSample(::UnityEngine::Profiling::CustomSampler* sampler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EndSample", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Profiling::CustomSampler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampler);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::BeginSample(::Unity::Profiling::ProfilerMarker marker) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "BeginSample", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerMarker>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, marker);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::EndSample(::Unity::Profiling::ProfilerMarker marker) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "EndSample", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerMarker>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, marker);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::IncrementUpdateCount(::UnityEngine::Rendering::RenderTargetIdentifier dest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "IncrementUpdateCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dest);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetInstanceMultiplier(uint32_t multiplier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetInstanceMultiplier",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplier);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetFoveatedRenderingMode(::UnityEngine::Rendering::FoveatedRenderingMode foveatedRenderingMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetFoveatedRenderingMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FoveatedRenderingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, foveatedRenderingMode);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetWireframe(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetWireframe",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enable);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::ConfigureFoveatedRendering(::System::IntPtr platformData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "ConfigureFoveatedRendering",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platformData);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rt);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                                                         ::UnityEngine::Rendering::RenderBufferStoreAction storeAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rt, loadAction, storeAction);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                                                         ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                                         ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                                         ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rt, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rt, mipLevel);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rt, mipLevel, cubemapFace);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                                                                         int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rt, mipLevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, depth);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                                         int32_t mipLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, depth, mipLevel);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                                         int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, depth, mipLevel, cubemapFace);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                                         int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, depth, mipLevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                                                         ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                                         ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                                         ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferLoadAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderBufferStoreAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, colorLoadAction, colorStoreAction, depth, depthLoadAction, depthStoreAction);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colors,
                                                                         ::UnityEngine::Rendering::RenderTargetIdentifier depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colors, depth);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colors,
                                                                         ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                                                                         int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colors, depth, mipLevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding binding, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                                                                         int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binding, mipLevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding binding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetBinding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binding);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, data);
}
template <typename T> inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, data);
}
template <typename T> inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, data);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex,
                                                                       int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex,
                                                                       int32_t graphicsBufferStartIndex, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex,
                                                                       int32_t graphicsBufferStartIndex, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferCounterValue(::UnityEngine::ComputeBuffer* buffer, uint32_t counterValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferCounterValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, counterValue);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, data);
}
template <typename T> inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, data);
}
template <typename T> inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, data);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex,
                                                                       int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex,
                                                                       int32_t graphicsBufferStartIndex, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T>
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex,
                                                                       int32_t graphicsBufferStartIndex, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferData",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetBufferCounterValue(::UnityEngine::GraphicsBuffer* buffer, uint32_t counterValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetBufferCounterValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, counterValue);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetupCameraProperties(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetupCameraProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::InvokeOnRenderObjectCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                                             "InvokeOnRenderObjectCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, float_t val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeFloatParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, name, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, int32_t val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeIntParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, name, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Vector4 val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeVectorParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, name, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name,
                                                                                    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeVectorArrayParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, name, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Matrix4x4 val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeMatrixParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, name, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name,
                                                                                    ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeMatrixArrayParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, name, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeFloatParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, name, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeFloatParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<int32_t, ::Array<int32_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeIntParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, name, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<int32_t, ::Array<int32_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeIntParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeTextureParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, name, rt);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeTextureParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, nameID, rt);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeTextureParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, name, rt, mipLevel);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeTextureParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, nameID, rt, mipLevel);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel,
                                                                                ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeTextureParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, name, rt, mipLevel, element);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel,
                                                                                ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeTextureParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, nameID, rt, mipLevel, element);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, nameID, buffer);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::ComputeBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, name, buffer);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                               ::UnityEngine::GraphicsBufferHandle bufferHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, nameID, bufferHandle);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                               ::UnityEngine::GraphicsBufferHandle bufferHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, name, bufferHandle);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                               ::UnityEngine::GraphicsBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, nameID, buffer);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                               ::UnityEngine::GraphicsBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, name, buffer);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer,
                                                                                       int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer,
                                                                                       int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, name, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer,
                                                                                       int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer,
                                                                                       int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetComputeConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, name, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY,
                                                                         int32_t threadGroupsZ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DispatchCompute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::ComputeBuffer* indirectBuffer,
                                                                         uint32_t argsOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DispatchCompute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, indirectBuffer, argsOffset);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* indirectBuffer,
                                                                         uint32_t argsOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DispatchCompute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, indirectBuffer, argsOffset);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "BuildRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingAccelerationStructure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accelerationStructure);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure,
                                                                                              ::UnityEngine::Vector3 relativeOrigin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "BuildRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingAccelerationStructure*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accelerationStructure, relativeOrigin);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                            ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingAccelerationStructure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, rayTracingAccelerationStructure);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                            ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingAccelerationStructure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, rayTracingAccelerationStructure);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                            ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingAccelerationStructure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, name, rayTracingAccelerationStructure);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                            ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingAccelerationStructure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingAccelerationStructure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, kernelIndex, nameID, rayTracingAccelerationStructure);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, buffer);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, buffer);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, buffer);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, buffer);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                  ::UnityEngine::GraphicsBufferHandle bufferHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, bufferHandle);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                  ::UnityEngine::GraphicsBufferHandle bufferHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, bufferHandle);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                          ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                          ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                          ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                          ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingConstantBufferParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                   ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingTextureParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, rt);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                   ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingTextureParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, rt);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, float_t val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingFloatParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, float_t val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingFloatParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                  ::ArrayW<float_t, ::Array<float_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingFloatParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                  ::ArrayW<float_t, ::Array<float_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingFloatParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, int32_t val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingIntParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, int32_t val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingIntParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                ::ArrayW<int32_t, ::Array<int32_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingIntParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                ::ArrayW<int32_t, ::Array<int32_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingIntParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Vector4 val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingVectorParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Vector4 val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingVectorParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                       ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingVectorArrayParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                       ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingVectorArrayParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Matrix4x4 val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingMatrixParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Matrix4x4 val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingMatrixParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, val);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                       ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingMatrixArrayParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, name, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                       ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetRayTracingMatrixArrayParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DispatchRays(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW rayGenName, uint32_t width, uint32_t height,
                                                                      uint32_t depth, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DispatchRays", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RayTracingShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTracingShader, rayGenName, width, height, depth, camera);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex,
                                                                  int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, matrix, material, submeshIndex, shaderPass, properties);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex,
                                                                  int32_t shaderPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, matrix, material, submeshIndex, shaderPass);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, matrix, material, submeshIndex);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, matrix, material);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMultipleMeshes(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices,
                                                                            ::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::ArrayW<int32_t, ::Array<int32_t>*> subsetIndices,
                                                                            int32_t count, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMultipleMeshes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matrices, meshes, subsetIndices, count, material, shaderPass, properties);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawRenderer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, material, submeshIndex, shaderPass);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                                             "DrawRenderer", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, material, submeshIndex);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawRenderer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, material);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawRendererList(::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawRendererList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererList);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                                                        int32_t vertexCount, int32_t instanceCount, ::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProcedural", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matrix, material, shaderPass, topology, vertexCount, instanceCount, properties);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                                                        int32_t vertexCount, int32_t instanceCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProcedural", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matrix, material, shaderPass, topology, vertexCount, instanceCount);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                                                        int32_t vertexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProcedural", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matrix, material, shaderPass, topology, vertexCount);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProcedural(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material,
                                                                        int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t indexCount, int32_t instanceCount,
                                                                        ::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProcedural", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexBuffer, matrix, material, shaderPass, topology, indexCount, instanceCount, properties);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProcedural(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material,
                                                                        int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t indexCount, int32_t instanceCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProcedural", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexBuffer, matrix, material, shaderPass, topology, indexCount, instanceCount);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProcedural(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material,
                                                                        int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t indexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProcedural", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexBuffer, matrix, material, shaderPass, topology, indexCount);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset,
                                                                                ::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matrix, material, shaderPass, topology, bufferWithArgs, argsOffset, properties);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matrix, material, shaderPass, topology, bufferWithArgs, argsOffset);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matrix, material, shaderPass, topology, bufferWithArgs);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material,
                                                                                int32_t shaderPass, ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs,
                                                                                int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexBuffer, matrix, material, shaderPass, topology, bufferWithArgs, argsOffset, properties);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material,
                                                                                int32_t shaderPass, ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs,
                                                                                int32_t argsOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexBuffer, matrix, material, shaderPass, topology, bufferWithArgs, argsOffset);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material,
                                                                                int32_t shaderPass, ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexBuffer, matrix, material, shaderPass, topology, bufferWithArgs);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset,
                                                                                ::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matrix, material, shaderPass, topology, bufferWithArgs, argsOffset, properties);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matrix, material, shaderPass, topology, bufferWithArgs, argsOffset);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, matrix, material, shaderPass, topology, bufferWithArgs);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material,
                                                                                int32_t shaderPass, ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs,
                                                                                int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexBuffer, matrix, material, shaderPass, topology, bufferWithArgs, argsOffset, properties);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material,
                                                                                int32_t shaderPass, ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs,
                                                                                int32_t argsOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexBuffer, matrix, material, shaderPass, topology, bufferWithArgs, argsOffset);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material,
                                                                                int32_t shaderPass, ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawProceduralIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexBuffer, matrix, material, shaderPass, topology, bufferWithArgs);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                           ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count,
                                                                           ::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstanced", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, submeshIndex, material, shaderPass, matrices, count, properties);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                           ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstanced", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, submeshIndex, material, shaderPass, matrices, count);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                           ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstanced", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, submeshIndex, material, shaderPass, matrices);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedProcedural(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                     int32_t count, ::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedProcedural", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, submeshIndex, material, shaderPass, count, properties);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                   ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, submeshIndex, material, shaderPass, bufferWithArgs, argsOffset, properties);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                   ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, submeshIndex, material, shaderPass, bufferWithArgs, argsOffset);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                   ::UnityEngine::ComputeBuffer* bufferWithArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, submeshIndex, material, shaderPass, bufferWithArgs);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                   ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset,
                                                                                   ::UnityEngine::MaterialPropertyBlock* properties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, submeshIndex, material, shaderPass, bufferWithArgs, argsOffset, properties);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                   ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, submeshIndex, material, shaderPass, bufferWithArgs, argsOffset);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                                   ::UnityEngine::GraphicsBuffer* bufferWithArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawMeshInstancedIndirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, submeshIndex, material, shaderPass, bufferWithArgs);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::DrawOcclusionMesh(::UnityEngine::RectInt normalizedCamViewport) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "DrawOcclusionMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, normalizedCamViewport);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "CopyCounterValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dst, dstOffsetBytes);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "CopyCounterValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dst, dstOffsetBytes);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "CopyCounterValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dst, dstOffsetBytes);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "CopyCounterValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dst, dstOffsetBytes);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalFloat(::StringW name, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalInt(::StringW name, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalInteger(::StringW name, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalVector", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalColor(::StringW name, ::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalFloatArray(::StringW propertyName, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalFloatArray(::StringW propertyName, ::ArrayW<float_t, ::Array<float_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalFloatArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalVectorArray(::StringW propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalVectorArray(::StringW propertyName, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalVectorArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalMatrixArray(::StringW propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalMatrixArray(::StringW propertyName, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalMatrixArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, values);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value,
                                                                          ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value, element);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value,
                                                                          ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTextureSubElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, value, element);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, nameID, offset, size);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, ::StringW name, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, name, offset, size);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer* buffer, int32_t nameID, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, nameID, offset, size);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer* buffer, ::StringW name, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetGlobalConstantBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, name, offset, size);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetShadowSamplingMode(::UnityEngine::Rendering::RenderTargetIdentifier shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetShadowSamplingMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShadowSamplingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shadowmap, mode);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "SetSinglePassStereo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SinglePassStereoMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::IssuePluginEvent(::System::IntPtr callback, int32_t eventID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "IssuePluginEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, eventID);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::IssuePluginEventAndData(::System::IntPtr callback, int32_t eventID, ::System::IntPtr data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "IssuePluginEventAndData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, eventID, data);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::IssuePluginCustomBlit(::System::IntPtr callback, uint32_t command, ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                               ::UnityEngine::Rendering::RenderTargetIdentifier dest, uint32_t commandParam, uint32_t commandFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "IssuePluginCustomBlit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, command, source, dest, commandParam, commandFlags);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::IssuePluginCustomTextureUpdateV2(::System::IntPtr callback, ::UnityEngine::Texture* targetTexture, uint32_t userData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                                                             "IssuePluginCustomTextureUpdateV2", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, targetTexture, userData);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::UnityEngine::Material* material,
                                                                                                                ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                               "UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::UnityEngine::ComputeShader* computeShader,
                                                                                                                ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                               "UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), "UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::UnityEngine::Material* material,
                                                                                                                 ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                               "UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::UnityEngine::ComputeShader* computeShader,
                                                                                                                 ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                               "UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, keyword);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                               "UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GlobalKeyword>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword,
                                                                                                             bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                               "UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material, keyword, value);
}
inline void UnityEngine::Rendering::UnsafeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::UnityEngine::ComputeShader* computeShader,
                                                                                                             ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                               "UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LocalKeyword>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeShader, keyword, value);
}
inline ::UnityEngine::Rendering::UnsafeCommandBuffer* UnityEngine::Rendering::UnsafeCommandBuffer::New_ctor(::UnityEngine::Rendering::CommandBuffer* wrapped,
                                                                                                            ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass, bool isAsync) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::UnsafeCommandBuffer*>(wrapped, executingPass, isAsync));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IUnsafeCommandBuffer"
constexpr UnityEngine::Rendering::UnsafeCommandBuffer::operator ::UnityEngine::Rendering::IUnsafeCommandBuffer*() noexcept {
  return static_cast<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IUnsafeCommandBuffer"
constexpr ::UnityEngine::Rendering::IUnsafeCommandBuffer* UnityEngine::Rendering::UnsafeCommandBuffer::i___UnityEngine__Rendering__IUnsafeCommandBuffer() noexcept {
  return static_cast<::UnityEngine::Rendering::IUnsafeCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr UnityEngine::Rendering::UnsafeCommandBuffer::operator ::UnityEngine::Rendering::IBaseCommandBuffer*() noexcept {
  return static_cast<::UnityEngine::Rendering::IBaseCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr ::UnityEngine::Rendering::IBaseCommandBuffer* UnityEngine::Rendering::UnsafeCommandBuffer::i___UnityEngine__Rendering__IBaseCommandBuffer() noexcept {
  return static_cast<::UnityEngine::Rendering::IBaseCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRasterCommandBuffer"
constexpr UnityEngine::Rendering::UnsafeCommandBuffer::operator ::UnityEngine::Rendering::IRasterCommandBuffer*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRasterCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRasterCommandBuffer"
constexpr ::UnityEngine::Rendering::IRasterCommandBuffer* UnityEngine::Rendering::UnsafeCommandBuffer::i___UnityEngine__Rendering__IRasterCommandBuffer() noexcept {
  return static_cast<::UnityEngine::Rendering::IRasterCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IComputeCommandBuffer"
constexpr UnityEngine::Rendering::UnsafeCommandBuffer::operator ::UnityEngine::Rendering::IComputeCommandBuffer*() noexcept {
  return static_cast<::UnityEngine::Rendering::IComputeCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IComputeCommandBuffer"
constexpr ::UnityEngine::Rendering::IComputeCommandBuffer* UnityEngine::Rendering::UnsafeCommandBuffer::i___UnityEngine__Rendering__IComputeCommandBuffer() noexcept {
  return static_cast<::UnityEngine::Rendering::IComputeCommandBuffer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnsafeCommandBuffer::UnsafeCommandBuffer() {}
