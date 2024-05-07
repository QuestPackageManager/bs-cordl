#pragma once
// IWYU pragma private; include "System/RuntimeArgumentHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__RuntimeArgumentHandle_def.hpp"
// Ctor Parameters [CppParam { name: "args", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::RuntimeArgumentHandle::RuntimeArgumentHandle(void* args) noexcept {
  this->args = args;
}
// Ctor Parameters []
constexpr ::System::RuntimeArgumentHandle::RuntimeArgumentHandle() {}
