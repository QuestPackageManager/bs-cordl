#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/IRayTracingShader.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingShader_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingAccelStruct_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.SetAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(::UnityEngine::Rendering::CommandBuffer*, ::StringW,
                                                                                                                                ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetAccelerationStructure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.SetIntParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetIntParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.SetFloatParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, float_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetFloatParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.SetVectorParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetVectorParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.SetMatrixParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetMatrixParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.SetTextureParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetTextureParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.SetBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.SetBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, uint32_t, uint32_t, uint32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::Dispatch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::Dispatch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.SetConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetConstantBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.SetConstantBufferParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(
    ::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::ComputeBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetConstantBufferParam)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.GetTraceScratchBufferRequiredSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)(uint32_t, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::GetTraceScratchBufferRequiredSizeInBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader.GetThreadGroupSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::GetThreadGroupSizes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetAccelerationStructure(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW name,
                                                                                                   ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, name, accelStruct);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetIntParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, int32_t val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, val);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetFloatParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, float_t val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, val);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetVectorParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Vector4 val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, val);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetMatrixParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::Matrix4x4 val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, val);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetTextureParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID,
                                                                                          ::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, rt);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, buffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, buffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer, uint32_t width,
                                                                                   uint32_t height, uint32_t depth) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer, width, height, depth);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer,
                                                                                   ::UnityEngine::GraphicsBuffer* argsBuffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scratchBuffer, argsBuffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetConstantBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer,
                                                                                                 int32_t offset, int32_t size) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, buffer, offset, size);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::SetConstantBufferParam(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer,
                                                                                                 int32_t offset, int32_t size) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, buffer, offset, size);
}
inline uint64_t UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::GetTraceScratchBufferRequiredSizeInBytes(uint32_t width, uint32_t height, uint32_t depth) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, width, height, depth);
}
inline ::Unity::Mathematics::uint3 UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader::GetThreadGroupSizes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(this, ___internal_method);
}
