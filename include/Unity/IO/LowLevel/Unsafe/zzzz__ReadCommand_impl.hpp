#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/ReadCommand.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommand_def.hpp"
// Ctor Parameters [CppParam { name: "Buffer", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Offset", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Size", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::ReadCommand::ReadCommand(void* Buffer, int64_t Offset, int64_t Size) noexcept {
  this->Buffer = Buffer;
  this->Offset = Offset;
  this->Size = Size;
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::ReadCommand::ReadCommand() {}
