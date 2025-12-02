#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/ReadCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadCommand)
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct ReadCommand;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::ReadCommand);
// Dependencies
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.IO.LowLevel.Unsafe.ReadCommand
struct CORDL_TYPE ReadCommand {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadCommand();

  // Ctor Parameters [CppParam { name: "Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "Offset", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Size", ty:
  // "int64_t", modifiers: "", def_value: None }]
  constexpr ReadCommand(void* Buffer, int64_t Offset, int64_t Size) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9938 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Buffer, offset: 0x0, size: 0x8, def value: None
  void* Buffer;

  /// @brief Field Offset, offset: 0x8, size: 0x8, def value: None
  int64_t Offset;

  /// @brief Field Size, offset: 0x10, size: 0x8, def value: None
  int64_t Size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::ReadCommand, Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::ReadCommand, Offset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::ReadCommand, Size) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::ReadCommand, 0x18>, "Size mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::ReadCommand, "Unity.IO.LowLevel.Unsafe", "ReadCommand");
