#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/RayTracingHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__RayTracingHelper_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingAccelStruct_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__IRayTracingShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper.CreateDispatchIndirectBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (*)()>(&::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::CreateDispatchIndirectBuffer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e0d160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*>(), { "CreateDispatchIndirectBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper.CreateScratchBufferForBuildAndDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (*)(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*,
                                                                                          ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*, uint32_t, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::CreateScratchBufferForBuildAndDispatch)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6e0d594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*>(),
                                                                                           { "CreateScratchBufferForBuildAndDispatch",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper.CreateScratchBufferForBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (*)(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::CreateScratchBufferForBuild)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6e0d75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*>(),
                                                             { "CreateScratchBufferForBuild", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper.CreateScratchBufferForTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (*)(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*, uint32_t, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::CreateScratchBufferForTrace)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6e0d848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*>(),
                                                                                           { "CreateScratchBufferForTrace",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper.ResizeScratchBufferForTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*, uint32_t, uint32_t, uint32_t, ::by_ref<::UnityEngine::GraphicsBuffer*>)>(
        &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::ResizeScratchBufferForTrace)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6e0d95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*>(),
                                                             { "ResizeScratchBufferForTrace",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), ::i2c::type_of<uint32_t>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper.ResizeScratchBufferForBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*, ::by_ref<::UnityEngine::GraphicsBuffer*>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::ResizeScratchBufferForBuild)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e0dab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*>(),
                                         { "ResizeScratchBufferForBuild",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::CreateDispatchIndirectBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*>(), { "CreateDispatchIndirectBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer*
UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::CreateScratchBufferForBuildAndDispatch(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct,
                                                                                                    ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* shader, uint32_t dispatchWidth,
                                                                                                    uint32_t dispatchHeight, uint32_t dispatchDepth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*>(),
                                                                                         { "CreateScratchBufferForBuildAndDispatch",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method, accelStruct, shader, dispatchWidth, dispatchHeight, dispatchDepth);
}
inline ::UnityEngine::GraphicsBuffer*
UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::CreateScratchBufferForBuild(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*>(),
                                                           { "CreateScratchBufferForBuild", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method, accelStruct);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::CreateScratchBufferForTrace(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* shader,
                                                                                                                               uint32_t dispatchWidth, uint32_t dispatchHeight,
                                                                                                                               uint32_t dispatchDepth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*>(),
                                                                                         { "CreateScratchBufferForTrace",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(),
                                                                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method, shader, dispatchWidth, dispatchHeight, dispatchDepth);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::ResizeScratchBufferForTrace(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* shader, uint32_t dispatchWidth,
                                                                                                     uint32_t dispatchHeight, uint32_t dispatchDepth,
                                                                                                     ::by_ref<::UnityEngine::GraphicsBuffer*> scratchBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*>(),
                                                           { "ResizeScratchBufferForTrace",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader*>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shader, dispatchWidth, dispatchHeight, dispatchDepth, scratchBuffer);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::ResizeScratchBufferForBuild(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct,
                                                                                                     ::by_ref<::UnityEngine::GraphicsBuffer*> scratchBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*>(),
                                       { "ResizeScratchBufferForBuild",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, accelStruct, scratchBuffer);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::RayTracingHelper() {}
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper::ScratchBufferTarget{ static_cast<int32_t>(0x10) };
