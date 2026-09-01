#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ProfilingScope.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingScope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingScope::*)(::UnityEngine::Rendering::ProfilingSampler*)>(
    &::UnityEngine::Rendering::ProfilingScope::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676ddb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingScope>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingScope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingScope::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProfilingSampler*)>(
    &::UnityEngine::Rendering::ProfilingScope::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676ddb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingScope>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingScope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingScope::*)(::UnityEngine::Rendering::BaseCommandBuffer*, ::UnityEngine::Rendering::ProfilingSampler*)>(
    &::UnityEngine::Rendering::ProfilingScope::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676ddbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingScope>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingScope.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingScope::*)()>(&::UnityEngine::Rendering::ProfilingScope::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676ddc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingScope>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProfilingScope::_ctor(::UnityEngine::Rendering::ProfilingSampler* sampler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingScope>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sampler);
}
inline void UnityEngine::Rendering::ProfilingScope::_ctor(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProfilingSampler* sampler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingScope>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, sampler);
}
inline void UnityEngine::Rendering::ProfilingScope::_ctor(::UnityEngine::Rendering::BaseCommandBuffer* cmd, ::UnityEngine::Rendering::ProfilingSampler* sampler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingScope>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, sampler);
}
inline void UnityEngine::Rendering::ProfilingScope::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingScope>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::ProfilingScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::ProfilingScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProfilingScope::ProfilingScope() {}
