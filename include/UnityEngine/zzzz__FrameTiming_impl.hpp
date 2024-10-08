#pragma once
// IWYU pragma private; include "UnityEngine/FrameTiming.hpp"
#include "UnityEngine/zzzz__FrameTiming_def.hpp"
// Ctor Parameters [CppParam { name: "cpuFrameTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpuMainThreadFrameTime", ty: "double_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cpuMainThreadPresentWaitTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpuRenderThreadFrameTime", ty: "double_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "gpuFrameTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "frameStartTimestamp", ty: "uint64_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "firstSubmitTimestamp", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpuTimePresentCalled", ty: "uint64_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cpuTimeFrameComplete", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "widthScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "syncInterval", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FrameTiming::FrameTiming(double_t cpuFrameTime, double_t cpuMainThreadFrameTime, double_t cpuMainThreadPresentWaitTime, double_t cpuRenderThreadFrameTime,
                                                  double_t gpuFrameTime, uint64_t frameStartTimestamp, uint64_t firstSubmitTimestamp, uint64_t cpuTimePresentCalled, uint64_t cpuTimeFrameComplete,
                                                  float_t heightScale, float_t widthScale, uint32_t syncInterval) noexcept {
  this->cpuFrameTime = cpuFrameTime;
  this->cpuMainThreadFrameTime = cpuMainThreadFrameTime;
  this->cpuMainThreadPresentWaitTime = cpuMainThreadPresentWaitTime;
  this->cpuRenderThreadFrameTime = cpuRenderThreadFrameTime;
  this->gpuFrameTime = gpuFrameTime;
  this->frameStartTimestamp = frameStartTimestamp;
  this->firstSubmitTimestamp = firstSubmitTimestamp;
  this->cpuTimePresentCalled = cpuTimePresentCalled;
  this->cpuTimeFrameComplete = cpuTimeFrameComplete;
  this->heightScale = heightScale;
  this->widthScale = widthScale;
  this->syncInterval = syncInterval;
}
// Ctor Parameters []
constexpr ::UnityEngine::FrameTiming::FrameTiming() {}
