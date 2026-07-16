#pragma once
// IWYU pragma private; include "UnityEngine/FrameTimingManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__FrameTimingManager_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__FrameTiming_def.hpp"
//  Writing Method size for method: ::UnityEngine::FrameTimingManager.CaptureFrameTimings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::FrameTimingManager::CaptureFrameTimings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a83ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::FrameTimingManager*>(), { "CaptureFrameTimings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::FrameTimingManager.GetLatestTimings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, ::ArrayW<::UnityEngine::FrameTiming>)>(&::UnityEngine::FrameTimingManager::GetLatestTimings)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6a83ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::FrameTimingManager*>(),
                                                             { "GetLatestTimings", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::FrameTiming>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::FrameTimingManager.GetLatestTimings_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::FrameTimingManager::GetLatestTimings_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a83fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::FrameTimingManager*>(),
                                                { "GetLatestTimings_Injected", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::FrameTimingManager::CaptureFrameTimings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::FrameTimingManager*>(), { "CaptureFrameTimings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::FrameTimingManager::GetLatestTimings(uint32_t numFrames, ::ArrayW<::UnityEngine::FrameTiming> timings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::FrameTimingManager*>(), { "GetLatestTimings", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::FrameTiming>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, numFrames, timings);
}
inline uint32_t UnityEngine::FrameTimingManager::GetLatestTimings_Injected(uint32_t numFrames, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> timings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::FrameTimingManager*>(),
                                              { "GetLatestTimings_Injected", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, numFrames, timings);
}
// Ctor Parameters []
constexpr ::UnityEngine::FrameTimingManager::FrameTimingManager() {}
