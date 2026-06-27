#pragma once
// IWYU pragma private; include "System/Threading/NativeOverlapped.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Threading/zzzz__NativeOverlapped_def.hpp"
// Ctor Parameters [CppParam { name: "InternalLow", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "InternalHigh", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "OffsetLow", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OffsetHigh", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EventHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::NativeOverlapped::NativeOverlapped(::System::IntPtr  InternalLow, ::System::IntPtr  InternalHigh, int32_t  OffsetLow, int32_t  OffsetHigh, ::System::IntPtr  EventHandle) noexcept  {
this->InternalLow = InternalLow;
this->InternalHigh = InternalHigh;
this->OffsetLow = OffsetLow;
this->OffsetHigh = OffsetHigh;
this->EventHandle = EventHandle;
}
// Ctor Parameters []
constexpr ::System::Threading::NativeOverlapped::NativeOverlapped()   {
}
