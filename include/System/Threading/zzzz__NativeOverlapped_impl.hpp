#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Threading/zzzz__NativeOverlapped_def.hpp"
// Ctor Parameters [CppParam { name: "InternalLow", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "InternalHigh", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "OffsetLow", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OffsetHigh", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EventHandle", ty:
// "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::NativeOverlapped::NativeOverlapped(void* InternalLow, void* InternalHigh, int32_t OffsetLow, int32_t OffsetHigh, void* EventHandle) noexcept {
  this->InternalLow = InternalLow;
  this->InternalHigh = InternalHigh;
  this->OffsetLow = OffsetLow;
  this->OffsetHigh = OffsetHigh;
  this->EventHandle = EventHandle;
}
// Ctor Parameters []
constexpr ::System::Threading::NativeOverlapped::NativeOverlapped() {}
