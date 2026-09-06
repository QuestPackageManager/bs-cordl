#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/IProfilerEmitter.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__IProfilerEmitter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter::*)()>(
    &::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter::get_IsEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter.EmitFrameMetaData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter::*)(::System::Guid, int32_t, ::System::Array*)>(
    &::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter::EmitFrameMetaData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter.InitialiseCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter::*)(::System::Action_1<float_t>*)>(
    &::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter::InitialiseCallbacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(), 2 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::Profiling::IProfilerEmitter::get_IsEnabled() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Profiling::IProfilerEmitter::EmitFrameMetaData(::System::Guid id, int32_t tag, ::System::Array* data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, tag, data);
}
inline void UnityEngine::ResourceManagement::Profiling::IProfilerEmitter::InitialiseCallbacks(::System::Action_1<float_t>* onLateUpdateDelegate) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onLateUpdateDelegate);
}
