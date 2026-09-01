#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\IComputeCommandBuffer.hpp"
#include "UnityEngine/Rendering/zzzz__IComputeCommandBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingShader_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTextureSubElement_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeFloatParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, float_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeFloatParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeIntParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeIntParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeVectorParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeVectorParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeVectorArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::ArrayW<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeVectorArrayParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeMatrixParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeMatrixParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeMatrixArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::ArrayW<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeMatrixArrayParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetBufferData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, ::System::Array*)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetBufferData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, ::System::Array*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetBufferCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetBufferCounterValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetBufferData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, ::System::Array*)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetBufferData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, ::System::Array*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetBufferCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetBufferCounterValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeFloatParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, float_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeFloatParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeIntParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, int32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeIntParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeVectorParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeVectorParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeVectorArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, ::ArrayW<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeVectorArrayParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeMatrixParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeMatrixParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeMatrixArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, ::ArrayW<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeMatrixArrayParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeFloatParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, ::ArrayW<float_t>)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeFloatParams)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeFloatParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::ArrayW<float_t>)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeFloatParams)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeIntParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, ::StringW, ::ArrayW<int32_t>)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeIntParams)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeIntParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::ArrayW<int32_t>)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeIntParams)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t)>(
        &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderTextureSubElement)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::GraphicsBufferHandle)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeConstantBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeConstantBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeConstantBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetComputeConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetComputeConstantBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.DispatchCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::DispatchCompute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.DispatchCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::ComputeBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::DispatchCompute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.DispatchCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::UnityEngine::GraphicsBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::DispatchCompute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.BuildRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::BuildRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.BuildRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingAccelerationStructure*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::BuildRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
        &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
        &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, ::StringW, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
        &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
        &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingConstantBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingConstantBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingConstantBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingConstantBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingFloatParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, float_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingFloatParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingFloatParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, float_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingFloatParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingFloatParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::ArrayW<float_t>)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingFloatParams)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingFloatParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::ArrayW<float_t>)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingFloatParams)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingIntParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, int32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingIntParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 71 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingIntParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingIntParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingIntParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::ArrayW<int32_t>)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingIntParams)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingIntParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::ArrayW<int32_t>)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingIntParams)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingVectorParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingVectorParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingVectorParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingVectorParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 76 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingVectorArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingVectorArrayParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 77 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingVectorArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingVectorArrayParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 78 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingMatrixParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingMatrixParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 79 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingMatrixParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::Rendering::RayTracingShader*, int32_t, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingMatrixParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 80 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingMatrixArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::ArrayW<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingMatrixArrayParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 81 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.SetRayTracingMatrixArrayParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, int32_t, ::ArrayW<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingMatrixArrayParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 82 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.DispatchRays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, uint32_t, uint32_t, uint32_t, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::IComputeCommandBuffer::DispatchRays)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 83 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.CopyCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::CopyCounterValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 84 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.CopyCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, ::UnityEngine::ComputeBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::CopyCounterValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 85 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.CopyCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::ComputeBuffer*, ::UnityEngine::GraphicsBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::CopyCounterValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 86 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IComputeCommandBuffer.CopyCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IComputeCommandBuffer::*)(::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, uint32_t)>(
    &::UnityEngine::Rendering::IComputeCommandBuffer::CopyCounterValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 87 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, float_t val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, int32_t val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Vector4 val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Matrix4x4 val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
template <typename T> inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 7 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
template <typename T> inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 8 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex,
                                                                         int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T>
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex,
                                                                         int32_t graphicsBufferStartIndex, int32_t count) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 10 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T>
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex,
                                                                         int32_t graphicsBufferStartIndex, int32_t count) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 11 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferCounterValue(::UnityEngine::ComputeBuffer* buffer, uint32_t counterValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, counterValue);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
template <typename T> inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 14 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
template <typename T> inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 15 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex,
                                                                         int32_t graphicsBufferStartIndex, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T>
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex,
                                                                         int32_t graphicsBufferStartIndex, int32_t count) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 17 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T>
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex,
                                                                         int32_t graphicsBufferStartIndex, int32_t count) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 18 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetBufferCounterValue(::UnityEngine::GraphicsBuffer* buffer, uint32_t counterValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, counterValue);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, float_t val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, int32_t val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Vector4 val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<::UnityEngine::Vector4> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Matrix4x4 val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<float_t> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<float_t> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<int32_t> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<int32_t> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, rt);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, rt);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, rt, mipLevel);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, rt, mipLevel);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel,
                                                                                  ::UnityEngine::Rendering::RenderTextureSubElement element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, rt, mipLevel, element);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel,
                                                                                  ::UnityEngine::Rendering::RenderTextureSubElement element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, rt, mipLevel, element);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                 ::UnityEngine::ComputeBuffer* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, buffer);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                 ::UnityEngine::ComputeBuffer* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, buffer);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                 ::UnityEngine::GraphicsBufferHandle bufferHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, bufferHandle);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                 ::UnityEngine::GraphicsBufferHandle bufferHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, bufferHandle);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                 ::UnityEngine::GraphicsBuffer* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, buffer);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                 ::UnityEngine::GraphicsBuffer* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, buffer);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer,
                                                                                         int32_t offset, int32_t size) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer,
                                                                                         int32_t offset, int32_t size) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, buffer, offset, size);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer,
                                                                                         int32_t offset, int32_t size) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer,
                                                                                         int32_t offset, int32_t size) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, name, buffer, offset, size);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY,
                                                                           int32_t threadGroupsZ) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::ComputeBuffer* indirectBuffer,
                                                                           uint32_t argsOffset) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, indirectBuffer, argsOffset);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* indirectBuffer,
                                                                           uint32_t argsOffset) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, indirectBuffer, argsOffset);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accelerationStructure);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure,
                                                                                                ::UnityEngine::Vector3 relativeOrigin) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accelerationStructure, relativeOrigin);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                              ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, rayTracingAccelerationStructure);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                              ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, rayTracingAccelerationStructure);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                                                              ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, name, rayTracingAccelerationStructure);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                              ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShader, kernelIndex, nameID, rayTracingAccelerationStructure);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                    ::UnityEngine::ComputeBuffer* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, buffer);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                    ::UnityEngine::ComputeBuffer* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, buffer);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                    ::UnityEngine::GraphicsBuffer* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, buffer);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                    ::UnityEngine::GraphicsBuffer* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, buffer);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                    ::UnityEngine::GraphicsBufferHandle bufferHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, bufferHandle);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                    ::UnityEngine::GraphicsBufferHandle bufferHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, bufferHandle);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                            ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                            ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, buffer, offset, size);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                            ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                            ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, buffer, offset, size);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, rt);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, rt);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, float_t val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, float_t val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::ArrayW<float_t> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<float_t> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, int32_t val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, int32_t val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::ArrayW<int32_t> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<int32_t> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Vector4 val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Vector4 val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 76 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                         ::ArrayW<::UnityEngine::Vector4> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 77 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                         ::ArrayW<::UnityEngine::Vector4> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 78 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Matrix4x4 val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 79 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Matrix4x4 val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, val);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                                                         ::ArrayW<::UnityEngine::Matrix4x4> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 81 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, name, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                                                         ::ArrayW<::UnityEngine::Matrix4x4> values) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 82 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, nameID, values);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::DispatchRays(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW rayGenName, uint32_t width, uint32_t height,
                                                                        uint32_t depth, ::UnityEngine::Camera* camera) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 83 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayTracingShader, rayGenName, width, height, depth, camera);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 84 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst, dstOffsetBytes);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 85 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst, dstOffsetBytes);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 86 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst, dstOffsetBytes);
}
inline void UnityEngine::Rendering::IComputeCommandBuffer::CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IComputeCommandBuffer*>(), 87 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst, dstOffsetBytes);
}
/// @brief Convert operator to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr UnityEngine::Rendering::IComputeCommandBuffer::operator ::UnityEngine::Rendering::IBaseCommandBuffer*() noexcept {
  return static_cast<::UnityEngine::Rendering::IBaseCommandBuffer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr ::UnityEngine::Rendering::IBaseCommandBuffer* UnityEngine::Rendering::IComputeCommandBuffer::i___UnityEngine__Rendering__IBaseCommandBuffer() noexcept {
  return static_cast<::UnityEngine::Rendering::IBaseCommandBuffer*>(static_cast<void*>(this));
}
