#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/IRayTracingBackend.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingBackend_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AccelerationStructureOptions_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingAccelStruct_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingShader_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ReferenceCounter_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend.CreateRayTracingShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* (
    ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend::*)(::UnityEngine::Object*, ::StringW, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend::CreateRayTracingShader)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend.CreateAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* (
    ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend::*)(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*,
                                                                        ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend::CreateAccelerationStructure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend.GetRequiredTraceScratchBufferSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend::*)(uint32_t, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend::GetRequiredTraceScratchBufferSizeInBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*
UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend::CreateRayTracingShader(::UnityEngine::Object* shader, ::StringW kernelName, ::UnityEngine::GraphicsBuffer* dispatchBuffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(this, ___internal_method, shader, kernelName, dispatchBuffer);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*
UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend::CreateAccelerationStructure(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options,
                                                                                           ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* counter) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(this, ___internal_method, options, counter);
}
inline uint64_t UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend::GetRequiredTraceScratchBufferSizeInBytes(uint32_t width, uint32_t height, uint32_t depth) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, width, height, depth);
}
