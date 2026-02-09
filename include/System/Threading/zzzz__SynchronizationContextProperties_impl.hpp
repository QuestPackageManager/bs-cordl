#pragma once
// IWYU pragma private; include "System/Threading/SynchronizationContextProperties.hpp"
#include "System/Threading/zzzz__SynchronizationContextProperties_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::SynchronizationContextProperties::SynchronizationContextProperties(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::SynchronizationContextProperties::SynchronizationContextProperties()   {
}
constexpr ::System::Threading::SynchronizationContextProperties  System::Threading::SynchronizationContextProperties::None{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::SynchronizationContextProperties  System::Threading::SynchronizationContextProperties::RequireWaitNotification{static_cast<int32_t>(0x1)};
