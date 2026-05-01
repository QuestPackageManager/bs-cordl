#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/ReadCommandArray.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommandArray_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommand_def.hpp"
// Ctor Parameters [CppParam { name: "ReadCommands", ty: "::Unity::IO::LowLevel::Unsafe::ReadCommand*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CommandCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::ReadCommandArray::ReadCommandArray(::Unity::IO::LowLevel::Unsafe::ReadCommand* ReadCommands, int32_t CommandCount) noexcept {
  this->ReadCommands = ReadCommands;
  this->CommandCount = CommandCount;
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::ReadCommandArray::ReadCommandArray() {}
