#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/EngineEmitter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__EngineEmitter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__IProfilerEmitter_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::EngineEmitter.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::Profiling::EngineEmitter::*)()>(
    &::UnityEngine::ResourceManagement::Profiling::EngineEmitter::get_IsEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x691ed1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>(), { "get_IsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::EngineEmitter.EmitFrameMetaData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Profiling::EngineEmitter::*)(::System::Guid, int32_t, ::System::Array*)>(
    &::UnityEngine::ResourceManagement::Profiling::EngineEmitter::EmitFrameMetaData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x691ed44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>(),
                                                             { "EmitFrameMetaData", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::EngineEmitter.InitialiseCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Profiling::EngineEmitter::*)(::System::Action_1<float_t>*)>(
    &::UnityEngine::ResourceManagement::Profiling::EngineEmitter::InitialiseCallbacks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x691ed48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>(),
                                                                                           { "InitialiseCallbacks", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::EngineEmitter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Profiling::EngineEmitter::*)()>(&::UnityEngine::ResourceManagement::Profiling::EngineEmitter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x691eda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::Profiling::EngineEmitter::get_IsEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>(), { "get_IsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Profiling::EngineEmitter::EmitFrameMetaData(::System::Guid id, int32_t tag, ::System::Array* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>(),
                                                           { "EmitFrameMetaData", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, tag, data);
}
inline void UnityEngine::ResourceManagement::Profiling::EngineEmitter::InitialiseCallbacks(::System::Action_1<float_t>* d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>(),
                                                                                         { "InitialiseCallbacks", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
inline void UnityEngine::ResourceManagement::Profiling::EngineEmitter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Profiling::EngineEmitter* UnityEngine::ResourceManagement::Profiling::EngineEmitter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Profiling::EngineEmitter*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter"
constexpr UnityEngine::ResourceManagement::Profiling::EngineEmitter::operator ::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter"
constexpr ::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*
UnityEngine::ResourceManagement::Profiling::EngineEmitter::i___UnityEngine__ResourceManagement__Profiling__IProfilerEmitter() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Profiling::EngineEmitter::EngineEmitter() {}
