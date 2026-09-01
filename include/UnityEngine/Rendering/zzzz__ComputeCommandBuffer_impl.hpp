#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ComputeCommandBuffer.hpp"
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ComputeCommandBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Profiling/zzzz__CustomSampler_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraLateLatchMatrixType_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__IComputeCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingShader_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTextureSubElement_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSamplingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__SinglePassStereoMode_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*, bool)>(&::UnityEngine::Rendering::ComputeCommandBuffer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x674ee84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetInvertCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(bool)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetInvertCulling)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x674eed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetInvertCulling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeFloatParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, float_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeFloatParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674eef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "SetComputeFloatParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeIntParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeIntParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674ef08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetComputeIntParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeVectorParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeVectorParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674ef20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                         { "SetComputeVectorParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeVectorArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::ArrayW<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeVectorArrayParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674ef38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetComputeVectorArrayParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeMatrixParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeMatrixParam)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x674ef50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                         { "SetComputeMatrixParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeMatrixArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::ArrayW<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeMatrixArrayParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674ef8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                         { "SetComputeMatrixArrayParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetViewport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rect)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetViewport)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674efa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetViewport", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.EnableScissorRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rect)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::EnableScissorRect)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674efbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "EnableScissorRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.DisableScissorRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)()>(&::UnityEngine::Rendering::ComputeCommandBuffer::DisableScissorRect)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674efd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "DisableScissorRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, float_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalFloat)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674efec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalInt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalInteger)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalInteger", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalVector)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetGlobalVector", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalColor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetGlobalColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalMatrix)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x674f064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetGlobalMatrix", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.EnableShaderKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW)>(&::UnityEngine::Rendering::ComputeCommandBuffer::EnableShaderKeyword)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "EnableShaderKeyword", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.EnableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::EnableKeyword)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x674f0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "EnableKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.EnableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Material*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::EnableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x674f0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "EnableKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.EnableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::EnableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x674f10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "EnableKeyword", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.DisableShaderKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW)>(&::UnityEngine::Rendering::ComputeCommandBuffer::DisableShaderKeyword)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "DisableShaderKeyword", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.DisableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::DisableKeyword)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x674f15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "DisableKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.DisableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Material*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::DisableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x674f178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "DisableKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.DisableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::DisableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x674f1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "DisableKeyword", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>, bool)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetKeyword)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x674f1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Material*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>, bool)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x674f20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>, bool)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x674f248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetViewProjectionMatrices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetViewProjectionMatrices)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x674f284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetViewProjectionMatrices", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalDepthBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(float_t, float_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalDepthBias)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalDepthBias", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, ::ArrayW<float_t>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, ::ArrayW<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetLateLatchProjectionMatrices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::ArrayW<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetLateLatchProjectionMatrices)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetLateLatchProjectionMatrices", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.MarkLateLatchMatrixShaderPropertyID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::CameraLateLatchMatrixType, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::MarkLateLatchMatrixShaderPropertyID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "MarkLateLatchMatrixShaderPropertyID", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraLateLatchMatrixType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.UnmarkLateLatchMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::CameraLateLatchMatrixType)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::UnmarkLateLatchMatrix)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "UnmarkLateLatchMatrix", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraLateLatchMatrixType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.BeginSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW)>(&::UnityEngine::Rendering::ComputeCommandBuffer::BeginSample)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "BeginSample", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.EndSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW)>(&::UnityEngine::Rendering::ComputeCommandBuffer::EndSample)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "EndSample", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.BeginSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Profiling::CustomSampler*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::BeginSample)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x674f3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "BeginSample", {}, { ::i2c::type_of<::UnityEngine::Profiling::CustomSampler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.EndSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Profiling::CustomSampler*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::EndSample)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x674f3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "EndSample", {}, { ::i2c::type_of<::UnityEngine::Profiling::CustomSampler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.BeginSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::Unity::Profiling::ProfilerMarker)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::BeginSample)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x674f3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "BeginSample", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.EndSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::Unity::Profiling::ProfilerMarker)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::EndSample)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x674f3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "EndSample", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.IncrementUpdateCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::IncrementUpdateCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x674f3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "IncrementUpdateCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetBufferData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, ::System::Array*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetBufferData", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetBufferData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, ::System::Array*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetBufferData",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::System::Array*>(),
                                                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetBufferCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetBufferCounterValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x674f448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetBufferCounterValue", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetBufferData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, ::System::Array*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetBufferData", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetBufferData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, ::System::Array*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674f474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetBufferData",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::System::Array*>(),
                                                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetBufferCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetBufferCounterValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x674f48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetBufferCounterValue", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetupCameraProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetupCameraProperties)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x674f4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetupCameraProperties", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.InvokeOnRenderObjectCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)()>(&::UnityEngine::Rendering::ComputeCommandBuffer::InvokeOnRenderObjectCallbacks)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x674f4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "InvokeOnRenderObjectCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeFloatParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, float_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeFloatParam)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x674f508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "SetComputeFloatParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeIntParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeIntParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x674f554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "SetComputeIntParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeVectorParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeVectorParam)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x674f598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                         { "SetComputeVectorParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeVectorArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, ::ArrayW<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeVectorArrayParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x674f604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                         { "SetComputeVectorArrayParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeMatrixParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeMatrixParam)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x674f648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetComputeMatrixParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeMatrixArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, ::ArrayW<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeMatrixArrayParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x674f6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "SetComputeMatrixArrayParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeFloatParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, ::ArrayW<float_t>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeFloatParams)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x674f6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                         { "SetComputeFloatParams", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeFloatParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::ArrayW<float_t>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeFloatParams)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x674f72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "SetComputeFloatParams", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeIntParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, ::ArrayW<int32_t>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeIntParams)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x674f740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "SetComputeIntParams", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeIntParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::ArrayW<int32_t>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeIntParams)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x674f784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "SetComputeIntParams", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x674f798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetComputeTextureParam",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x674f880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetComputeTextureParam",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x674f95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetComputeTextureParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x674fa48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetComputeTextureParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x674fb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetComputeTextureParam",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x674fc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetComputeTextureParam",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x674fd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetComputeBufferParam",
                              {},
                              { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x674fd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetComputeBufferParam",
                              {},
                              { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::GraphicsBufferHandle)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674fd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetComputeBufferParam",
                              {},
                              { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x674fd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetComputeBufferParam",
                              {},
                              { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x674fde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetComputeBufferParam",
                              {},
                              { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x674fdf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetComputeBufferParam",
                              {},
                              { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeConstantBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x674fe48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetComputeConstantBufferParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeConstantBufferParam)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x674fe5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetComputeConstantBufferParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeConstantBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x674feb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetComputeConstantBufferParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetComputeConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetComputeConstantBufferParam)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x674fecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetComputeConstantBufferParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.DispatchCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::DispatchCompute)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x674ff28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "DispatchCompute",
                              {},
                              { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.DispatchCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::ComputeBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::DispatchCompute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674ff3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "DispatchCompute", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.DispatchCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::GraphicsBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::DispatchCompute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674ff54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "DispatchCompute", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.BuildRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::BuildRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674ff6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "BuildRayTracingAccelerationStructure", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.BuildRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingAccelerationStructure*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::BuildRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674ff84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                         { "BuildRayTracingAccelerationStructure", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
        &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x674ff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetRayTracingAccelerationStructure",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
        &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x674ffe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetRayTracingAccelerationStructure",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
        &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x674fff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetRayTracingAccelerationStructure",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
        &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetRayTracingAccelerationStructure",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x675005c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "SetRayTracingBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67500a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "SetRayTracingBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67500b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "SetRayTracingBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67500f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "SetRayTracingBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x675010c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                         { "SetRayTracingBufferParam",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6750150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "SetRayTracingBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingConstantBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetRayTracingConstantBufferParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingConstantBufferParam)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x675017c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetRayTracingConstantBufferParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingConstantBufferParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67501d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetRayTracingConstantBufferParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingConstantBufferParam)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67501ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetRayTracingConstantBufferParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingTextureParam)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6750248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetRayTracingTextureParam",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingTextureParam)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6750318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetRayTracingTextureParam",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingFloatParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, float_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingFloatParam)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x67503dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetRayTracingFloatParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingFloatParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, float_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingFloatParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                         { "SetRayTracingFloatParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingFloatParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::ArrayW<float_t>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingFloatParams)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x675043c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetRayTracingFloatParams", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingFloatParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::ArrayW<float_t>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingFloatParams)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetRayTracingFloatParams", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingIntParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingIntParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6750494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                         { "SetRayTracingIntParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingIntParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingIntParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67504d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                         { "SetRayTracingIntParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingIntParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::ArrayW<int32_t>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingIntParams)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67504ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetRayTracingIntParams", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingIntParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::ArrayW<int32_t>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingIntParams)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetRayTracingIntParams", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingVectorParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingVectorParam)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6750544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "SetRayTracingVectorParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingVectorParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingVectorParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67505b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                         { "SetRayTracingVectorParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingVectorArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingVectorArrayParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67505c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                         { "SetRayTracingVectorArrayParam",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingVectorArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingVectorArrayParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "SetRayTracingVectorArrayParam",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingMatrixParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingMatrixParam)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x675061c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "SetRayTracingMatrixParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingMatrixParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingMatrixParam)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6750678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "SetRayTracingMatrixParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingMatrixArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::ArrayW<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingMatrixArrayParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67506b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                         { "SetRayTracingMatrixArrayParam",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetRayTracingMatrixArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::ArrayW<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingMatrixArrayParam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67506f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                         { "SetRayTracingMatrixArrayParam",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.DispatchRays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, uint32_t, uint32_t, uint32_t, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::ComputeCommandBuffer::DispatchRays)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "DispatchRays",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.CopyCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::CopyCounterValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x675071c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "CopyCounterValue", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.CopyCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, ::UnityEngine::ComputeBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::CopyCounterValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "CopyCounterValue", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.CopyCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, ::UnityEngine::GraphicsBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::CopyCounterValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "CopyCounterValue", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.CopyCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::CopyCounterValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "CopyCounterValue", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, float_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalFloat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x675076c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, int32_t)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalInt)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67507a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalInt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalInteger)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67507e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalVector)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6750820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetGlobalVector", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalColor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x675087c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetGlobalColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalMatrix)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x67508d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetGlobalMatrix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, ::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6750924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetGlobalFloatArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, ::System::Collections::Generic::List_1<float_t>*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6750960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, ::ArrayW<float_t>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalFloatArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6750978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetGlobalFloatArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67509b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "SetGlobalVectorArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67509f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "SetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalVectorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, ::ArrayW<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalVectorArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6750a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetGlobalVectorArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6750a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "SetGlobalMatrixArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6750a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "SetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalMatrixArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, ::ArrayW<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalMatrixArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6750a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetGlobalMatrixArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalTexture)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6750ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "SetGlobalTexture", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6750bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetGlobalTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderTextureSubElement)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalTexture)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6750c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetGlobalTexture",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderTextureSubElement)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalTexture)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6750d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetGlobalTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6750e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetGlobalBuffer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetGlobalBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::StringW, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6750e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetGlobalBuffer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(int32_t, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "SetGlobalBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, ::StringW, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6750ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                         { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetGlobalConstantBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, ::StringW, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalConstantBuffer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6750f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                         { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetShadowSamplingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ShadowSamplingMode)>(&::UnityEngine::Rendering::ComputeCommandBuffer::SetShadowSamplingMode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6750f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "SetShadowSamplingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowSamplingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.SetSinglePassStereo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Rendering::SinglePassStereoMode)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::SetSinglePassStereo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6750fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "SetSinglePassStereo", {}, { ::i2c::type_of<::UnityEngine::Rendering::SinglePassStereoMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.IssuePluginEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::System::IntPtr, int32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::IssuePluginEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6750ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                           { "IssuePluginEvent", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.IssuePluginEventAndData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::System::IntPtr, int32_t, ::System::IntPtr)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::IssuePluginEventAndData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x675100c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "IssuePluginEventAndData", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.IssuePluginCustomBlit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::System::IntPtr, uint32_t, ::UnityEngine::Rendering::RenderTargetIdentifier,
                                                                                                                ::UnityEngine::Rendering::RenderTargetIdentifier, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::IssuePluginCustomBlit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6751024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "IssuePluginCustomBlit",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.IssuePluginCustomTextureUpdateV2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::System::IntPtr, ::UnityEngine::Texture*, uint32_t)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::IssuePluginCustomTextureUpdateV2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x67510b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                         { "IssuePluginCustomTextureUpdateV2", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x675110c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Material*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6751128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6751160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6751198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Material*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67511b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
            { "UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67511ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                             { "UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::by_ref<::UnityEngine::Rendering::GlobalKeyword>, bool)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6751224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                            { "UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::Material*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>, bool)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6751248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ComputeCommandBuffer.UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::by_ref<::UnityEngine::Rendering::LocalKeyword>, bool)>(
    &::UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6751284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                { "UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ComputeCommandBuffer::_ctor(::UnityEngine::Rendering::CommandBuffer* wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass,
                                                                bool isAsync) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapped, executingPass, isAsync);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetInvertCulling(bool invertCulling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetInvertCulling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, invertCulling);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetComputeFloatParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetComputeIntParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Vector4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "SetComputeVectorParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetComputeVectorArrayParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Matrix4x4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "SetComputeMatrixParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetComputeMatrixArrayParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetViewport(::UnityEngine::Rect pixelRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetViewport", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pixelRect);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::EnableScissorRect(::UnityEngine::Rect scissor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "EnableScissorRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scissor);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::DisableScissorRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "DisableScissorRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalFloat(int32_t nameID, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalFloat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalInt(int32_t nameID, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalInteger(int32_t nameID, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalInteger", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalVector", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalColor(int32_t nameID, ::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalMatrix", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::EnableShaderKeyword(::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "EnableShaderKeyword", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::EnableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "EnableKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::EnableKeyword(::UnityEngine::Material* material, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "EnableKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::EnableKeyword(::UnityEngine::ComputeShader* computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "EnableKeyword", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::DisableShaderKeyword(::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "DisableShaderKeyword", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::DisableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "DisableKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::DisableKeyword(::UnityEngine::Material* material, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "DisableKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::DisableKeyword(::UnityEngine::ComputeShader* computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "DisableKeyword", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetKeyword(::UnityEngine::Material* material, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, keyword, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetKeyword(::UnityEngine::ComputeShader* computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetKeyword", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, keyword, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetViewProjectionMatrices(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 proj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetViewProjectionMatrices", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, view, proj);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalDepthBias(float_t bias, float_t slopeBias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalDepthBias", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bias, slopeBias);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t> values) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetLateLatchProjectionMatrices(::ArrayW<::UnityEngine::Matrix4x4> projectionMat) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetLateLatchProjectionMatrices", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectionMat);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::MarkLateLatchMatrixShaderPropertyID(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType, int32_t shaderPropertyID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "MarkLateLatchMatrixShaderPropertyID", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraLateLatchMatrixType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matrixPropertyType, shaderPropertyID);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::UnmarkLateLatchMatrix(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "UnmarkLateLatchMatrix", {}, { ::i2c::type_of<::UnityEngine::Rendering::CameraLateLatchMatrixType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matrixPropertyType);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::BeginSample(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "BeginSample", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::EndSample(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "EndSample", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::BeginSample(::UnityEngine::Profiling::CustomSampler* sampler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "BeginSample", {}, { ::i2c::type_of<::UnityEngine::Profiling::CustomSampler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampler);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::EndSample(::UnityEngine::Profiling::CustomSampler* sampler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "EndSample", {}, { ::i2c::type_of<::UnityEngine::Profiling::CustomSampler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampler);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::BeginSample(::Unity::Profiling::ProfilerMarker marker) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "BeginSample", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, marker);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::EndSample(::Unity::Profiling::ProfilerMarker marker) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "EndSample", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, marker);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::IncrementUpdateCount(::UnityEngine::Rendering::RenderTargetIdentifier dest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "IncrementUpdateCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dest);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetBufferData", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
template <typename T> inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetBufferData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
template <typename T> inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "SetBufferData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex,
                                                                        int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetBufferData",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::System::Array*>(),
                                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T>
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex,
                                                                        int32_t graphicsBufferStartIndex, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetBufferData",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T>
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex,
                                                                        int32_t graphicsBufferStartIndex, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetBufferData",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferCounterValue(::UnityEngine::ComputeBuffer* buffer, uint32_t counterValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetBufferCounterValue", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, counterValue);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetBufferData", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
template <typename T> inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetBufferData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
template <typename T> inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "SetBufferData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex,
                                                                        int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetBufferData",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::System::Array*>(),
                                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T>
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex,
                                                                        int32_t graphicsBufferStartIndex, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetBufferData",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T>
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex,
                                                                        int32_t graphicsBufferStartIndex, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetBufferData",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetBufferCounterValue(::UnityEngine::GraphicsBuffer* buffer, uint32_t counterValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetBufferCounterValue", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, counterValue);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetupCameraProperties(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetupCameraProperties", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::InvokeOnRenderObjectCallbacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "InvokeOnRenderObjectCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, float_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "SetComputeFloatParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetComputeIntParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Vector4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "SetComputeVectorParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<::UnityEngine::Vector4> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetComputeVectorArrayParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Matrix4x4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "SetComputeMatrixParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                       { "SetComputeMatrixArrayParam", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<float_t> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "SetComputeFloatParams", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<float_t> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "SetComputeFloatParams", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<int32_t> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "SetComputeIntParams", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<int32_t> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "SetComputeIntParams", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetComputeTextureParam",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, rt);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetComputeTextureParam",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, rt);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetComputeTextureParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, rt, mipLevel);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetComputeTextureParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, rt, mipLevel);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel,
                                                                                 ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetComputeTextureParam",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, rt, mipLevel, element);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel,
                                                                                 ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetComputeTextureParam",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, rt, mipLevel, element);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                ::UnityEngine::ComputeBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetComputeBufferParam",
                                                                                                                    {},
                                                                                                                    { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(),
                                                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, buffer);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                ::UnityEngine::ComputeBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetComputeBufferParam",
                            {},
                            { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, buffer);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                ::UnityEngine::GraphicsBufferHandle bufferHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetComputeBufferParam",
                            {},
                            { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, bufferHandle);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                ::UnityEngine::GraphicsBufferHandle bufferHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetComputeBufferParam",
                            {},
                            { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, bufferHandle);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                ::UnityEngine::GraphicsBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetComputeBufferParam",
                            {},
                            { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, buffer);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                ::UnityEngine::GraphicsBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetComputeBufferParam",
                            {},
                            { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, buffer);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer,
                                                                                        int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetComputeConstantBufferParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer,
                                                                                        int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetComputeConstantBufferParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, buffer, offset, size);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer,
                                                                                        int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetComputeConstantBufferParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer,
                                                                                        int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetComputeConstantBufferParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, buffer, offset, size);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY,
                                                                          int32_t threadGroupsZ) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "DispatchCompute", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::ComputeBuffer* indirectBuffer,
                                                                          uint32_t argsOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "DispatchCompute", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, indirectBuffer, argsOffset);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* indirectBuffer,
                                                                          uint32_t argsOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "DispatchCompute", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, indirectBuffer, argsOffset);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "BuildRayTracingAccelerationStructure", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accelerationStructure);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure,
                                                                                               ::UnityEngine::Vector3 relativeOrigin) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "BuildRayTracingAccelerationStructure", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accelerationStructure, relativeOrigin);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                             ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetRayTracingAccelerationStructure",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, rayTracingAccelerationStructure);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                             ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetRayTracingAccelerationStructure",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(),
                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, rayTracingAccelerationStructure);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                             ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetRayTracingAccelerationStructure",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, rayTracingAccelerationStructure);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                             ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetRayTracingAccelerationStructure",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, rayTracingAccelerationStructure);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "SetRayTracingBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, buffer);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "SetRayTracingBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, buffer);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                   ::UnityEngine::GraphicsBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "SetRayTracingBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, buffer);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                   ::UnityEngine::GraphicsBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "SetRayTracingBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, buffer);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                   ::UnityEngine::GraphicsBufferHandle bufferHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "SetRayTracingBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, bufferHandle);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                   ::UnityEngine::GraphicsBufferHandle bufferHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "SetRayTracingBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, bufferHandle);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                           ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetRayTracingConstantBufferParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                           ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetRayTracingConstantBufferParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, buffer, offset, size);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                           ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetRayTracingConstantBufferParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                           ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetRayTracingConstantBufferParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, buffer, offset, size);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetRayTracingTextureParam",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, rt);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetRayTracingTextureParam",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(),
                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, rt);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "SetRayTracingFloatParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "SetRayTracingFloatParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::ArrayW<float_t> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetRayTracingFloatParams", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<float_t> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetRayTracingFloatParams", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "SetRayTracingIntParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "SetRayTracingIntParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::ArrayW<int32_t> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetRayTracingIntParams", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<int32_t> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetRayTracingIntParams", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Vector4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                       { "SetRayTracingVectorParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Vector4 val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetRayTracingVectorParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                        ::ArrayW<::UnityEngine::Vector4> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "SetRayTracingVectorArrayParam",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                        ::ArrayW<::UnityEngine::Vector4> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "SetRayTracingVectorArrayParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Matrix4x4 val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "SetRayTracingMatrixParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Matrix4x4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                       { "SetRayTracingMatrixParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, val);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                        ::ArrayW<::UnityEngine::Matrix4x4> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "SetRayTracingMatrixArrayParam",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                        ::ArrayW<::UnityEngine::Matrix4x4> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "SetRayTracingMatrixArrayParam",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::DispatchRays(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW rayGenName, uint32_t width, uint32_t height,
                                                                       uint32_t depth, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "DispatchRays",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, rayGenName, width, height, depth, camera);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "CopyCounterValue", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst, dstOffsetBytes);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "CopyCounterValue", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst, dstOffsetBytes);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "CopyCounterValue", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst, dstOffsetBytes);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "CopyCounterValue", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst, dstOffsetBytes);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalFloat(::StringW name, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalInt(::StringW name, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalInt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalInteger(::StringW name, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), { "SetGlobalInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalVector", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalColor(::StringW name, ::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalMatrix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalFloatArray(::StringW propertyName, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetGlobalFloatArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetGlobalFloatArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalFloatArray(::StringW propertyName, ::ArrayW<float_t> values) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalFloatArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalVectorArray(::StringW propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "SetGlobalVectorArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "SetGlobalVectorArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalVectorArray(::StringW propertyName, ::ArrayW<::UnityEngine::Vector4> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetGlobalVectorArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalMatrixArray(::StringW propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "SetGlobalMatrixArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "SetGlobalMatrixArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalMatrixArray(::StringW propertyName, ::ArrayW<::UnityEngine::Matrix4x4> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetGlobalMatrixArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, values);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetGlobalTexture", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetGlobalTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value,
                                                                           ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, element);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value,
                                                                           ::UnityEngine::Rendering::RenderTextureSubElement element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderTextureSubElement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value, element);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalBuffer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "SetGlobalBuffer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetGlobalBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameID, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, nameID, offset, size);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, ::StringW name, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, name, offset, size);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer* buffer, int32_t nameID, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, nameID, offset, size);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer* buffer, ::StringW name, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetGlobalConstantBuffer", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, name, offset, size);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetShadowSamplingMode(::UnityEngine::Rendering::RenderTargetIdentifier shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "SetShadowSamplingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowSamplingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shadowmap, mode);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode mode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "SetSinglePassStereo", {}, { ::i2c::type_of<::UnityEngine::Rendering::SinglePassStereoMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::IssuePluginEvent(::System::IntPtr callback, int32_t eventID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                                                         { "IssuePluginEvent", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, eventID);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::IssuePluginEventAndData(::System::IntPtr callback, int32_t eventID, ::System::IntPtr data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "IssuePluginEventAndData", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, eventID, data);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::IssuePluginCustomBlit(::System::IntPtr callback, uint32_t command, ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                                ::UnityEngine::Rendering::RenderTargetIdentifier dest, uint32_t commandParam, uint32_t commandFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "IssuePluginCustomBlit",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, command, source, dest, commandParam, commandFlags);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::IssuePluginCustomTextureUpdateV2(::System::IntPtr callback, ::UnityEngine::Texture* targetTexture, uint32_t userData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                       { "IssuePluginCustomTextureUpdateV2", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, targetTexture, userData);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                                           { "UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::UnityEngine::Material* material,
                                                                                                                 ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::UnityEngine::ComputeShader* computeShader,
                                                                                                                 ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::UnityEngine::Material* material,
                                                                                                                  ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::UnityEngine::ComputeShader* computeShader,
                                                                                                                  ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
          { "UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, keyword);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::by_ref<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                          { "UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GlobalKeyword>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::UnityEngine::Material* material,
                                                                                                              ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, keyword, value);
}
inline void UnityEngine::Rendering::ComputeCommandBuffer::UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::UnityEngine::ComputeShader* computeShader,
                                                                                                              ::by_ref<::UnityEngine::Rendering::LocalKeyword> keyword, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(),
                                              { "UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::LocalKeyword>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, keyword, value);
}
inline ::UnityEngine::Rendering::ComputeCommandBuffer*
UnityEngine::Rendering::ComputeCommandBuffer::New_ctor(::UnityEngine::Rendering::CommandBuffer* wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass, bool isAsync) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ComputeCommandBuffer*>(wrapped, executingPass, isAsync));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IComputeCommandBuffer"
constexpr UnityEngine::Rendering::ComputeCommandBuffer::operator ::UnityEngine::Rendering::IComputeCommandBuffer*() noexcept {
  return static_cast<::UnityEngine::Rendering::IComputeCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IComputeCommandBuffer"
constexpr ::UnityEngine::Rendering::IComputeCommandBuffer* UnityEngine::Rendering::ComputeCommandBuffer::i___UnityEngine__Rendering__IComputeCommandBuffer() noexcept {
  return static_cast<::UnityEngine::Rendering::IComputeCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr UnityEngine::Rendering::ComputeCommandBuffer::operator ::UnityEngine::Rendering::IBaseCommandBuffer*() noexcept {
  return static_cast<::UnityEngine::Rendering::IBaseCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr ::UnityEngine::Rendering::IBaseCommandBuffer* UnityEngine::Rendering::ComputeCommandBuffer::i___UnityEngine__Rendering__IBaseCommandBuffer() noexcept {
  return static_cast<::UnityEngine::Rendering::IBaseCommandBuffer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ComputeCommandBuffer::ComputeCommandBuffer() {}
