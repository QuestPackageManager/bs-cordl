#pragma once
// IWYU pragma private; include "UnityEngine/Audio/RealtimeContext.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeAccess_impl.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeContext_def.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include "UnityEngine/Audio/zzzz__ChannelBuffer_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::RealtimeContext.get_dspTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Audio::RealtimeContext::*)()>(&::UnityEngine::Audio::RealtimeContext::get_dspTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eabc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RealtimeContext>(), { "get_dspTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RealtimeContext.get_isCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::RealtimeContext::*)()>(&::UnityEngine::Audio::RealtimeContext::get_isCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6eabc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RealtimeContext>(), { "get_isCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RealtimeContext.UnityEngine_Audio_ProcessorInstance_IContext_GetAvailableData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance_AvailableData (::UnityEngine::Audio::RealtimeContext::*)(::Unity::Audio::Handle)>(
    &::UnityEngine::Audio::RealtimeContext::UnityEngine_Audio_ProcessorInstance_IContext_GetAvailableData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eabc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RealtimeContext>(),
                                                             { "UnityEngine.Audio.ProcessorInstance.IContext.GetAvailableData", {}, { ::i2c::type_of<::Unity::Audio::Handle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RealtimeContext.UnityEngine_Audio_ProcessorInstance_IContext_SendData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::RealtimeContext::*)(::Unity::Audio::Handle, void*, int32_t, int32_t, int64_t)>(
    &::UnityEngine::Audio::RealtimeContext::UnityEngine_Audio_ProcessorInstance_IContext_SendData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6eabd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RealtimeContext>(),
                                         { "UnityEngine.Audio.ProcessorInstance.IContext.SendData",
                                           {},
                                           { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RealtimeContext.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::GeneratorInstance_Result (::UnityEngine::Audio::RealtimeContext::*)(
    ::UnityEngine::Audio::GeneratorInstance, ::UnityEngine::Audio::ChannelBuffer, ::UnityEngine::Audio::GeneratorInstance_Arguments)>(&::UnityEngine::Audio::RealtimeContext::Process)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6eabdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RealtimeContext>(),
                                                             { "Process",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>(), ::i2c::type_of<::UnityEngine::Audio::ChannelBuffer>(),
                                                                 ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance_Arguments>() } })));
    return ___internal_method;
  }
};
inline uint64_t UnityEngine::Audio::RealtimeContext::get_dspTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RealtimeContext>(), { "get_dspTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline bool UnityEngine::Audio::RealtimeContext::get_isCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RealtimeContext>(), { "get_isCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Audio::ProcessorInstance_AvailableData UnityEngine::Audio::RealtimeContext::UnityEngine_Audio_ProcessorInstance_IContext_GetAvailableData(::Unity::Audio::Handle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RealtimeContext>(),
                                                           { "UnityEngine.Audio.ProcessorInstance.IContext.GetAvailableData", {}, { ::i2c::type_of<::Unity::Audio::Handle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_AvailableData>(*this, ___internal_method, handle);
}
inline bool UnityEngine::Audio::RealtimeContext::UnityEngine_Audio_ProcessorInstance_IContext_SendData(::Unity::Audio::Handle handle, void* data, int32_t size, int32_t align, int64_t typehash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RealtimeContext>(),
                                       { "UnityEngine.Audio.ProcessorInstance.IContext.SendData",
                                         {},
                                         { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, handle, data, size, align, typehash);
}
inline ::UnityEngine::Audio::GeneratorInstance_Result UnityEngine::Audio::RealtimeContext::Process(::UnityEngine::Audio::GeneratorInstance generatorInstance,
                                                                                                   ::UnityEngine::Audio::ChannelBuffer buffer, ::UnityEngine::Audio::GeneratorInstance_Arguments args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RealtimeContext>(),
                                                           { "Process",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>(), ::i2c::type_of<::UnityEngine::Audio::ChannelBuffer>(),
                                                               ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance_Arguments>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance_Result>(*this, ___internal_method, generatorInstance, buffer, args);
}
/// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IContext"
constexpr UnityEngine::Audio::RealtimeContext::operator ::UnityEngine::Audio::ProcessorInstance_IContext*() {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IContext*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IContext"
constexpr ::UnityEngine::Audio::ProcessorInstance_IContext* UnityEngine::Audio::RealtimeContext::i___UnityEngine__Audio__ProcessorInstance_IContext() {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IContext*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Access", ty: "::UnityEngine::Audio::RealtimeAccess", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DSPClock", ty: "uint64_t",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::RealtimeContext::RealtimeContext(::UnityEngine::Audio::RealtimeAccess Access, uint64_t m_DSPClock) noexcept {
  this->Access = Access;
  this->m_DSPClock = m_DSPClock;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::RealtimeContext::RealtimeContext() {}
