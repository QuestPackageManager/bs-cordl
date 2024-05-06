#pragma once
#include "Unity/Burst/zzzz__NativeDumpFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::NativeDumpFlags::NativeDumpFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::NativeDumpFlags::NativeDumpFlags() {}
constexpr ::Unity::Burst::NativeDumpFlags Unity::Burst::NativeDumpFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::NativeDumpFlags Unity::Burst::NativeDumpFlags::IL{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Burst::NativeDumpFlags Unity::Burst::NativeDumpFlags::Unused{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Burst::NativeDumpFlags Unity::Burst::NativeDumpFlags::IR{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Burst::NativeDumpFlags Unity::Burst::NativeDumpFlags::IROptimized{ static_cast<int32_t>(0x8) };
constexpr ::Unity::Burst::NativeDumpFlags Unity::Burst::NativeDumpFlags::Asm{ static_cast<int32_t>(0x10) };
constexpr ::Unity::Burst::NativeDumpFlags Unity::Burst::NativeDumpFlags::Function{ static_cast<int32_t>(0x20) };
constexpr ::Unity::Burst::NativeDumpFlags Unity::Burst::NativeDumpFlags::Analysis{ static_cast<int32_t>(0x40) };
constexpr ::Unity::Burst::NativeDumpFlags Unity::Burst::NativeDumpFlags::IRPassAnalysis{ static_cast<int32_t>(0x80) };
constexpr ::Unity::Burst::NativeDumpFlags Unity::Burst::NativeDumpFlags::ILPre{ static_cast<int32_t>(0x100) };
constexpr ::Unity::Burst::NativeDumpFlags Unity::Burst::NativeDumpFlags::IRPerEntryPoint{ static_cast<int32_t>(0x200) };
constexpr ::Unity::Burst::NativeDumpFlags Unity::Burst::NativeDumpFlags::All{ static_cast<int32_t>(0x3fd) };
