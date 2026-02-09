#pragma once
// IWYU pragma private; include "Internal/Runtime/Augments/AsyncStatus.hpp"
#include "Internal/Runtime/Augments/zzzz__AsyncStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Internal::Runtime::Augments::AsyncStatus::AsyncStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Internal::Runtime::Augments::AsyncStatus::AsyncStatus()   {
}
constexpr ::Internal::Runtime::Augments::AsyncStatus  Internal::Runtime::Augments::AsyncStatus::Started{static_cast<int32_t>(0x0)};
constexpr ::Internal::Runtime::Augments::AsyncStatus  Internal::Runtime::Augments::AsyncStatus::Completed{static_cast<int32_t>(0x1)};
constexpr ::Internal::Runtime::Augments::AsyncStatus  Internal::Runtime::Augments::AsyncStatus::Canceled{static_cast<int32_t>(0x2)};
constexpr ::Internal::Runtime::Augments::AsyncStatus  Internal::Runtime::Augments::AsyncStatus::Error{static_cast<int32_t>(0x3)};
