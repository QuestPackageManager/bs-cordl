#pragma once
#include "Zenject/zzzz__SignalMissingHandlerResponses_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::SignalMissingHandlerResponses::SignalMissingHandlerResponses(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::SignalMissingHandlerResponses::SignalMissingHandlerResponses() {}
constexpr ::Zenject::SignalMissingHandlerResponses Zenject::SignalMissingHandlerResponses::Ignore{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::SignalMissingHandlerResponses Zenject::SignalMissingHandlerResponses::Throw{ static_cast<int32_t>(0x1) };
constexpr ::Zenject::SignalMissingHandlerResponses Zenject::SignalMissingHandlerResponses::Warn{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
