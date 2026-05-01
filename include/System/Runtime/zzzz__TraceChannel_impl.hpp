#pragma once
// IWYU pragma private; include "System/Runtime/TraceChannel.hpp"
#include "System/Runtime/zzzz__TraceChannel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::TraceChannel::TraceChannel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::TraceChannel::TraceChannel() {}
constexpr ::System::Runtime::TraceChannel System::Runtime::TraceChannel::Admin{ static_cast<int32_t>(0x10) };
constexpr ::System::Runtime::TraceChannel System::Runtime::TraceChannel::Operational{ static_cast<int32_t>(0x11) };
constexpr ::System::Runtime::TraceChannel System::Runtime::TraceChannel::Analytic{ static_cast<int32_t>(0x12) };
constexpr ::System::Runtime::TraceChannel System::Runtime::TraceChannel::Debug{ static_cast<int32_t>(0x13) };
constexpr ::System::Runtime::TraceChannel System::Runtime::TraceChannel::Perf{ static_cast<int32_t>(0x14) };
constexpr ::System::Runtime::TraceChannel System::Runtime::TraceChannel::Application{ static_cast<int32_t>(0x9) };
