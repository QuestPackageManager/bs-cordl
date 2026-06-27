#pragma once
// IWYU pragma private; include "System/RuntimeArgumentHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__RuntimeArgumentHandle_def.hpp"
// Ctor Parameters [CppParam { name: "args", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::System::RuntimeArgumentHandle::RuntimeArgumentHandle(::System::IntPtr  args) noexcept  {
this->args = args;
}
// Ctor Parameters []
constexpr ::System::RuntimeArgumentHandle::RuntimeArgumentHandle()   {
}
