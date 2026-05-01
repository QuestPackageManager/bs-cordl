#pragma once
// IWYU pragma private; include "Zenject/SignalDefaultSyncModes.hpp"
#include "Zenject/zzzz__SignalDefaultSyncModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::SignalDefaultSyncModes::SignalDefaultSyncModes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::SignalDefaultSyncModes::SignalDefaultSyncModes() {}
constexpr ::Zenject::SignalDefaultSyncModes Zenject::SignalDefaultSyncModes::Synchronous{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::SignalDefaultSyncModes Zenject::SignalDefaultSyncModes::Asynchronous{ static_cast<int32_t>(0x1) };
