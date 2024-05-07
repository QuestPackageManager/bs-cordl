#pragma once
// IWYU pragma private; include "Unity/Burst/CompilationPriority.hpp"
#include "Unity/Burst/zzzz__CompilationPriority_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::CompilationPriority::CompilationPriority(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::CompilationPriority::CompilationPriority() {}
constexpr ::Unity::Burst::CompilationPriority Unity::Burst::CompilationPriority::EagerCompilationSynchronous{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::CompilationPriority Unity::Burst::CompilationPriority::Asynchronous{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Burst::CompilationPriority Unity::Burst::CompilationPriority::ILPP{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Burst::CompilationPriority Unity::Burst::CompilationPriority::EagerCompilationAsynchronous{ static_cast<int32_t>(0x3) };
