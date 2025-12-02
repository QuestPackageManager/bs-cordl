#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/ReadCommandArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadCommandArray)
namespace Unity::IO::LowLevel::Unsafe {
struct ReadCommand;
}
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct ReadCommandArray;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::ReadCommandArray);
// Dependencies
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.IO.LowLevel.Unsafe.ReadCommandArray
struct CORDL_TYPE ReadCommandArray {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadCommandArray();

  // Ctor Parameters [CppParam { name: "ReadCommands", ty: "::Unity::IO::LowLevel::Unsafe::ReadCommand*", modifiers: "", def_value: None }, CppParam { name: "CommandCount", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr ReadCommandArray(::Unity::IO::LowLevel::Unsafe::ReadCommand* ReadCommands, int32_t CommandCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9939 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field ReadCommands, offset: 0x0, size: 0x8, def value: None
  ::Unity::IO::LowLevel::Unsafe::ReadCommand* ReadCommands;

  /// @brief Field CommandCount, offset: 0x8, size: 0x4, def value: None
  int32_t CommandCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::ReadCommandArray, ReadCommands) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::ReadCommandArray, CommandCount) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::ReadCommandArray, 0x10>, "Size mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::ReadCommandArray, "Unity.IO.LowLevel.Unsafe", "ReadCommandArray");
