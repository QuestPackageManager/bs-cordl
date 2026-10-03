#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/RayTracingContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__RayTracingBackend_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__RayTracingContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AccelerationStructureOptions_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingAccelStruct_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingBackend_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingShader_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__RayTracingBackend_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__RayTracingResources_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ReferenceCounter_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::*)(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend,
                                                                                                                                ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6e0cfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::*)(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e0d1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e0d214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext.get_Resources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* (::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::get_Resources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0d2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(), { "get_Resources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext.set_Resources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::*)(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::set_Resources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0d2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                             { "set_Resources", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext.IsBackendSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::IsBackendSupported)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e0d100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                             { "IsBackendSupported", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext.CreateRayTracingShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* (
    ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::*)(::UnityEngine::Object*)>(&::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::CreateRayTracingShader)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6e0d2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                                                           { "CreateRayTracingShader", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext.LoadRayTracingShaderFromAssetBundle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* (::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::*)(::UnityEngine::AssetBundle*, ::StringW)>(
        &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::LoadRayTracingShaderFromAssetBundle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e0d3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                             { "LoadRayTracingShaderFromAssetBundle", {}, { ::i2c::type_of<::UnityEngine::AssetBundle*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext.CreateAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* (
    ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::*)(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::CreateAccelerationStructure)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e0d3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                             { "CreateAccelerationStructure", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext.GetRequiredTraceScratchBufferSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::*)(uint32_t, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::GetRequiredTraceScratchBufferSizeInBytes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6e0d4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                { "GetRequiredTraceScratchBufferSizeInBytes", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext.GetScratchBufferStrideInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::GetScratchBufferStrideInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0c0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(), { "GetScratchBufferStrideInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext.get_BackendType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend (::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::get_BackendType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0d580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(), { "get_BackendType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext.set_BackendType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::*)(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::set_BackendType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0d588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                             { "set_BackendType", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*& UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_get__Resources_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Resources_k__BackingField;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* const&
UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_get__Resources_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Resources_k__BackingField;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_set__Resources_k__BackingField(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Resources_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend& UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_get__BackendType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BackendType_k__BackingField;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend const&
UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_get__BackendType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BackendType_k__BackingField;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_set__BackendType_k__BackingField(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BackendType_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*& UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_get_m_Backend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Backend;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend* const& UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_get_m_Backend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Backend;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_set_m_Backend(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Backend = value;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*& UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_get_m_AccelStructCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccelStructCounter;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* const& UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_get_m_AccelStructCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccelStructCounter;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_set_m_AccelStructCounter(::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AccelStructCounter = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_get_m_DispatchBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_get_m_DispatchBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchBuffer;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::__cordl_internal_set_m_DispatchBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DispatchBuffer = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::_ctor(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend backend,
                                                                                ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend>(), ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backend, resources);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::_ctor(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::get_Resources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(), { "get_Resources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::set_Resources(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                           { "set_Resources", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::IsBackendSupported(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend backend) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                           { "IsBackendSupported", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, backend);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::CreateRayTracingShader(::UnityEngine::Object* shader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                                                         { "CreateRayTracingShader", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(this, ___internal_method, shader);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*
UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::LoadRayTracingShaderFromAssetBundle(::UnityEngine::AssetBundle* assetBundle, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                           { "LoadRayTracingShaderFromAssetBundle", {}, { ::i2c::type_of<::UnityEngine::AssetBundle*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(this, ___internal_method, assetBundle, name);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*
UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::CreateAccelerationStructure(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                           { "CreateAccelerationStructure", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(this, ___internal_method, options);
}
inline uint64_t UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::GetRequiredTraceScratchBufferSizeInBytes(uint32_t width, uint32_t height, uint32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                              { "GetRequiredTraceScratchBufferSizeInBytes", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, width, height, depth);
}
inline uint32_t UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::GetScratchBufferStrideInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(), { "GetScratchBufferStrideInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::get_BackendType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(), { "get_BackendType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::set_BackendType(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(),
                                                           { "set_BackendType", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*
UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend backend,
                                                                       ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(backend, resources));
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*
UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*>(resources));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext::RayTracingContext() {}
