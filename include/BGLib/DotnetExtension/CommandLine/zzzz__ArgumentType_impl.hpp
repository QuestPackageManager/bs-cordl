#pragma once
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::DotnetExtension::CommandLine::ArgumentType::ArgumentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::CommandLine::ArgumentType::ArgumentType() {}
constexpr ::BGLib::DotnetExtension::CommandLine::ArgumentType BGLib::DotnetExtension::CommandLine::ArgumentType::Boolean{ static_cast<int32_t>(0x0) };
constexpr ::BGLib::DotnetExtension::CommandLine::ArgumentType BGLib::DotnetExtension::CommandLine::ArgumentType::String{ static_cast<int32_t>(0x1) };
constexpr ::BGLib::DotnetExtension::CommandLine::ArgumentType BGLib::DotnetExtension::CommandLine::ArgumentType::StringOptional{ static_cast<int32_t>(0x2) };
constexpr ::BGLib::DotnetExtension::CommandLine::ArgumentType BGLib::DotnetExtension::CommandLine::ArgumentType::Integer{ static_cast<int32_t>(0x3) };
constexpr ::BGLib::DotnetExtension::CommandLine::ArgumentType BGLib::DotnetExtension::CommandLine::ArgumentType::IntegerOptional{ static_cast<int32_t>(0x4) };
