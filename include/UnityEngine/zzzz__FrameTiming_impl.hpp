#pragma once
#include "UnityEngine/zzzz__FrameTiming_def.hpp"
// Ctor Parameters [CppParam { name: "cpuTimePresentCalled", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cpuFrameTime", ty: "double_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cpuTimeFrameComplete", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpuFrameTime", ty: "double_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "widthScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "syncInterval", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FrameTiming::FrameTiming(uint64_t cpuTimePresentCalled, double_t cpuFrameTime, uint64_t cpuTimeFrameComplete, double_t gpuFrameTime, float_t heightScale, float_t widthScale,
                                                  uint32_t syncInterval) noexcept {
  this->cpuTimePresentCalled = cpuTimePresentCalled;
  this->cpuFrameTime = cpuFrameTime;
  this->cpuTimeFrameComplete = cpuTimeFrameComplete;
  this->gpuFrameTime = gpuFrameTime;
  this->heightScale = heightScale;
  this->widthScale = widthScale;
  this->syncInterval = syncInterval;
}
// Ctor Parameters []
constexpr ::UnityEngine::FrameTiming::FrameTiming() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
