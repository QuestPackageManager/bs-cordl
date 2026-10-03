#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/HardwareRayTracingShader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__HardwareRayTracingShader_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingAccelStruct_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingShader_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingShader_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(
    ::UnityEngine::Rendering::RayTracingShader*, ::StringW, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0cc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.GetThreadGroupSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::GetThreadGroupSizes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e0cc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(), { "GetThreadGroupSizes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.SetAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::StringW, ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetAccelerationStructure)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6e0cca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                                                                           { "SetAccelerationStructure",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.SetIntParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetIntParam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e0cd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                                { "SetIntParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.SetFloatParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, float_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetFloatParam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e0cdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                                { "SetFloatParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.SetVectorParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetVectorParam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e0cdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                            { "SetVectorParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.SetMatrixParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetMatrixParam)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e0cdec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                            { "SetMatrixParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.SetTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetTextureParam)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e0ce2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
            { "SetTextureParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.SetBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetBufferParam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e0ce6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                            { "SetBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.SetBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetBufferParam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e0ce88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                            { "SetBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.SetConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(
        &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetConstantBufferParam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e0cea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                                             { "SetConstantBufferParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.SetConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(
        &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetConstantBufferParam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e0cec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                                             { "SetConstantBufferParam",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, uint32_t, uint32_t, uint32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::Dispatch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e0cedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                                             { "Dispatch",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::Dispatch)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e0cefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
            { "Dispatch", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader.GetTraceScratchBufferRequiredSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::*)(uint32_t, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::GetTraceScratchBufferRequiredSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0cf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                                { "GetTraceScratchBufferRequiredSizeInBytes", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader>& UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::__cordl_internal_get_m_Shader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader> const& UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::__cordl_internal_get_m_Shader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::__cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Rendering::RayTracingShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Shader = value;
}
constexpr ::StringW& UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::__cordl_internal_get_m_ShaderDispatchFuncName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderDispatchFuncName;
}
constexpr ::StringW const& UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::__cordl_internal_get_m_ShaderDispatchFuncName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderDispatchFuncName;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::__cordl_internal_set_m_ShaderDispatchFuncName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderDispatchFuncName = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::_ctor(::UnityEngine::Rendering::RayTracingShader* shader, ::StringW dispatchFuncName,
                                                                                       ::UnityEngine::GraphicsBuffer* unused) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader, dispatchFuncName, unused);
}
inline ::Unity::Mathematics::uint3 UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::GetThreadGroupSizes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(), { "GetThreadGroupSizes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetAccelerationStructure(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW name,
                                                                                                          ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                                                                         { "SetAccelerationStructure",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, name, accelStruct);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetIntParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, int32_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                              { "SetIntParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, val);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetFloatParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, float_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                              { "SetFloatParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, val);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetVectorParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Vector4 val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                       { "SetVectorParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, val);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetMatrixParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Matrix4x4 val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                          { "SetMatrixParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, val);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetTextureParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID,
                                                                                                 ::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
          { "SetTextureParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, rt);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                          { "SetBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, buffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                          { "SetBufferParam", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, buffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetConstantBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID,
                                                                                                        ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                                           { "SetConstantBufferParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::SetConstantBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID,
                                                                                                        ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                                           { "SetConstantBufferParam",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer, uint32_t width,
                                                                                          uint32_t height, uint32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                                           { "Dispatch",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer, width, height, depth);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer,
                                                                                          ::UnityEngine::GraphicsBuffer* argsBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
          { "Dispatch", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer, argsBuffer);
}
inline uint64_t UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::GetTraceScratchBufferRequiredSizeInBytes(uint32_t width, uint32_t height, uint32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(),
                                              { "GetTraceScratchBufferRequiredSizeInBytes", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, width, height, depth);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*
UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::New_ctor(::UnityEngine::Rendering::RayTracingShader* shader, ::StringW dispatchFuncName, ::UnityEngine::GraphicsBuffer* unused) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader*>(shader, dispatchFuncName, unused));
}
/// @brief Convert operator to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader"
constexpr UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::operator ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*() noexcept {
  return static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader"
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*
UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::i___UnityEngine__Rendering__UnifiedRayTracing__IRayTracingShader() noexcept {
  return static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingShader::HardwareRayTracingShader() {}
