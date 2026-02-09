#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Lifetime/LeaseState.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState::LeaseState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState::LeaseState()   {
}
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Null{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Initial{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Active{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Renewing{static_cast<int32_t>(0x3)};
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Expired{static_cast<int32_t>(0x4)};
