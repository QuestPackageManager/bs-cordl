#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FrameTimeSample.hpp"
#include "UnityEngine/Rendering/zzzz__FrameTimeSample_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::FrameTimeSample._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::FrameTimeSample::*)(float_t)>(&::UnityEngine::Rendering::FrameTimeSample::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x654e734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FrameTimeSample>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FrameTimeSample::_ctor(float_t initValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FrameTimeSample>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initValue);
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
