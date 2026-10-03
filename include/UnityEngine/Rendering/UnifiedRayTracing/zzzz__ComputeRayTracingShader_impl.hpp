#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/ComputeRayTracingShader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__uint3_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ComputeRayTracingShader_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingAccelStruct_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingShader_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(
    ::UnityEngine::ComputeShader*, ::StringW, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e0bf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.GetThreadGroupSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::GetThreadGroupSizes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e0c0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(), { "GetThreadGroupSizes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.SetAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::StringW, ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetAccelerationStructure)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e0c0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                                                                           { "SetAccelerationStructure",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.SetIntParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetIntParam)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e0c1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                                { "SetIntParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.SetFloatParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, float_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetFloatParam)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e0c1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                                { "SetFloatParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.SetVectorParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetVectorParam)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e0c1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                            { "SetVectorParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.SetMatrixParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetMatrixParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e0c200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                            { "SetMatrixParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.SetTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetTextureParam)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e0c244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
            { "SetTextureParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.SetBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetBufferParam)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e0c298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                            { "SetBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.SetBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetBufferParam)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e0c2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                            { "SetBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.SetConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(
        &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetConstantBufferParam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e0c2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                                             { "SetConstantBufferParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.SetConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(
        &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetConstantBufferParam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e0c304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                                             { "SetConstantBufferParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, uint32_t, uint32_t, uint32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::Dispatch)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e0c320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                                             { "Dispatch",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::Dispatch)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e0c4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
            { "Dispatch", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.SetIndirectDispatchDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetIndirectDispatchDimensions)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6e0c4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                         { "SetIndirectDispatchDimensions", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.DispatchIndirect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(::UnityEngine::Rendering::CommandBuffer*,
                                                                                                                                      ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::DispatchIndirect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6e0c5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                            { "DispatchIndirect",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader.GetTraceScratchBufferRequiredSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::*)(uint32_t, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::GetTraceScratchBufferRequiredSizeInBytes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e0c490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                                { "GetTraceScratchBufferRequiredSizeInBytes", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_get_m_Shader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_get_m_Shader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_set_m_Shader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Shader = value;
}
constexpr int32_t& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_get_m_KernelIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KernelIndex;
}
constexpr int32_t const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_get_m_KernelIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KernelIndex;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_set_m_KernelIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KernelIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_get_m_ComputeIndirectDispatchDimsKernelIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComputeIndirectDispatchDimsKernelIndex;
}
constexpr int32_t const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_get_m_ComputeIndirectDispatchDimsKernelIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComputeIndirectDispatchDimsKernelIndex;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_set_m_ComputeIndirectDispatchDimsKernelIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ComputeIndirectDispatchDimsKernelIndex = value;
}
constexpr ::Unity::Mathematics::uint3& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_get_m_ThreadGroupSizes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThreadGroupSizes;
}
constexpr ::Unity::Mathematics::uint3 const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_get_m_ThreadGroupSizes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThreadGroupSizes;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_set_m_ThreadGroupSizes(::Unity::Mathematics::uint3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThreadGroupSizes = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_get_m_DispatchBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_get_m_DispatchBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::__cordl_internal_set_m_DispatchBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DispatchBuffer = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::_ctor(::UnityEngine::ComputeShader* shader, ::StringW dispatchFuncName, ::UnityEngine::GraphicsBuffer* dispatchBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader, dispatchFuncName, dispatchBuffer);
}
inline ::Unity::Mathematics::uint3 UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::GetThreadGroupSizes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(), { "GetThreadGroupSizes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetAccelerationStructure(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW name,
                                                                                                         ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                                                                         { "SetAccelerationStructure",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, name, accelStruct);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetIntParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, int32_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                              { "SetIntParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, val);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetFloatParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, float_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                              { "SetFloatParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, val);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetVectorParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Vector4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                       { "SetVectorParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, val);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetMatrixParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Matrix4x4 val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                          { "SetMatrixParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, val);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetTextureParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID,
                                                                                                ::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
          { "SetTextureParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, rt);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                          { "SetBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, buffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                          { "SetBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, buffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetConstantBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID,
                                                                                                       ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                                           { "SetConstantBufferParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetConstantBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID,
                                                                                                       ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                                           { "SetConstantBufferParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer, uint32_t width,
                                                                                         uint32_t height, uint32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                                           { "Dispatch",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer, width, height, depth);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer,
                                                                                         ::UnityEngine::GraphicsBuffer* argsBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
          { "Dispatch", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer, argsBuffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::SetIndirectDispatchDimensions(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* argsBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                       { "SetIndirectDispatchDimensions", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, argsBuffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::DispatchIndirect(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer,
                                                                                                 ::UnityEngine::GraphicsBuffer* argsBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                          { "DispatchIndirect",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer, argsBuffer);
}
inline uint64_t UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::GetTraceScratchBufferRequiredSizeInBytes(uint32_t width, uint32_t height, uint32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(),
                                              { "GetTraceScratchBufferRequiredSizeInBytes", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, width, height, depth);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::New_ctor(::UnityEngine::ComputeShader* shader, ::StringW dispatchFuncName, ::UnityEngine::GraphicsBuffer* dispatchBuffer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader*>(shader, dispatchFuncName, dispatchBuffer));
}
/// @brief Convert operator to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader"
constexpr UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::operator ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*() noexcept {
  return static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader"
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::i___UnityEngine__Rendering__UnifiedRayTracing__IRayTracingShader() noexcept {
  return static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingShader::ComputeRayTracingShader() {}
