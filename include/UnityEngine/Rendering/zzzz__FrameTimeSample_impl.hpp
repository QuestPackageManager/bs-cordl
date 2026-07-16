#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FrameTimeSample.hpp"
#include "UnityEngine/Rendering/zzzz__FrameTimeSample_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::FrameTimeSample._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FrameTimeSample::*)(float_t)>(&::UnityEngine::Rendering::FrameTimeSample::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6767c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FrameTimeSample>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FrameTimeSample::_ctor(float_t initValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FrameTimeSample>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue);
}
// Ctor Parameters [CppParam { name: "FramesPerSecond", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FullFrameTime", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "MainThreadCPUFrameTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MainThreadCPUPresentWaitTime", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "RenderThreadCPUFrameTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "GPUFrameTime", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::FrameTimeSample::FrameTimeSample(float_t FramesPerSecond, float_t FullFrameTime, float_t MainThreadCPUFrameTime, float_t MainThreadCPUPresentWaitTime,
                                                                     float_t RenderThreadCPUFrameTime, float_t GPUFrameTime) noexcept {
  this->FramesPerSecond = FramesPerSecond;
  this->FullFrameTime = FullFrameTime;
  this->MainThreadCPUFrameTime = MainThreadCPUFrameTime;
  this->MainThreadCPUPresentWaitTime = MainThreadCPUPresentWaitTime;
  this->RenderThreadCPUFrameTime = RenderThreadCPUFrameTime;
  this->GPUFrameTime = GPUFrameTime;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FrameTimeSample::FrameTimeSample() {}
