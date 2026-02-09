#pragma once
// IWYU pragma private; include "System/Threading/LockRecursionPolicy.hpp"
#include "System/Threading/zzzz__LockRecursionPolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::LockRecursionPolicy::LockRecursionPolicy(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::LockRecursionPolicy::LockRecursionPolicy()   {
}
constexpr ::System::Threading::LockRecursionPolicy  System::Threading::LockRecursionPolicy::NoRecursion{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::LockRecursionPolicy  System::Threading::LockRecursionPolicy::SupportsRecursion{static_cast<int32_t>(0x1)};
