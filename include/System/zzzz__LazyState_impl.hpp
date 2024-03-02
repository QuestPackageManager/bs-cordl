#pragma once
#include "System/zzzz__LazyState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::LazyState::LazyState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::LazyState::LazyState() {}
constexpr ::System::LazyState System::LazyState::NoneViaConstructor{ static_cast<int32_t>(0x0) };
constexpr ::System::LazyState System::LazyState::NoneViaFactory{ static_cast<int32_t>(0x1) };
constexpr ::System::LazyState System::LazyState::NoneException{ static_cast<int32_t>(0x2) };
constexpr ::System::LazyState System::LazyState::PublicationOnlyViaConstructor{ static_cast<int32_t>(0x3) };
constexpr ::System::LazyState System::LazyState::PublicationOnlyViaFactory{ static_cast<int32_t>(0x4) };
constexpr ::System::LazyState System::LazyState::PublicationOnlyWait{ static_cast<int32_t>(0x5) };
constexpr ::System::LazyState System::LazyState::PublicationOnlyException{ static_cast<int32_t>(0x6) };
constexpr ::System::LazyState System::LazyState::ExecutionAndPublicationViaConstructor{ static_cast<int32_t>(0x7) };
constexpr ::System::LazyState System::LazyState::ExecutionAndPublicationViaFactory{ static_cast<int32_t>(0x8) };
constexpr ::System::LazyState System::LazyState::ExecutionAndPublicationException{ static_cast<int32_t>(0x9) };
