#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/ComputeRayTracingBackend.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ComputeRayTracingBackend_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AccelerationStructureOptions_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingAccelStruct_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingBackend_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingShader_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__RayTracingResources_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ReferenceCounter_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*)>(&::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0bed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend.CreateRayTracingShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* (
    ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::*)(::UnityEngine::Object*, ::StringW, ::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::CreateRayTracingShader)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e0bedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend*>(),
                            { "CreateRayTracingShader", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend.CreateAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* (
    ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::*)(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*,
                                                                              ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::CreateAccelerationStructure)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e0c04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend*>(),
                                                                                           { "CreateAccelerationStructure",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend.GetRequiredTraceScratchBufferSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::*)(uint32_t, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::GetRequiredTraceScratchBufferSizeInBytes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e0c0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend*>(),
                                                { "GetRequiredTraceScratchBufferSizeInBytes", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::__cordl_internal_get_m_Resources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resources;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* const& UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::__cordl_internal_get_m_Resources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resources;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::__cordl_internal_set_m_Resources(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Resources = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::_ctor(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::CreateRayTracingShader(::UnityEngine::Object* shader, ::StringW kernelName, ::UnityEngine::GraphicsBuffer* dispatchBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend*>(),
                                       { "CreateRayTracingShader", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(this, ___internal_method, shader, kernelName, dispatchBuffer);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::CreateAccelerationStructure(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options,
                                                                                                 ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* counter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend*>(),
                                                                                         { "CreateAccelerationStructure",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(this, ___internal_method, options, counter);
}
inline uint64_t UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::GetRequiredTraceScratchBufferSizeInBytes(uint32_t width, uint32_t height, uint32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend*>(),
                                              { "GetRequiredTraceScratchBufferSizeInBytes", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, width, height, depth);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend*
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend*>(resources));
}
/// @brief Convert operator to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend"
constexpr UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::operator ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*() noexcept {
  return static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend"
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*
UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::i___UnityEngine__Rendering__UnifiedRayTracing__IRayTracingBackend() noexcept {
  return static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingBackend::ComputeRayTracingBackend() {}
