#pragma once
// IWYU pragma private; include "Unity/IO/Archive/ArchiveHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArchiveHandle)
// Forward declare root types
namespace Unity::IO::Archive {
struct ArchiveHandle;
}
// Write type traits
MARK_VAL_T(::Unity::IO::Archive::ArchiveHandle);
// Dependencies
namespace Unity::IO::Archive {
// Is value type: true
// CS Name: Unity.IO.Archive.ArchiveHandle
struct CORDL_TYPE ArchiveHandle {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArchiveHandle();

  // Ctor Parameters [CppParam { name: "Handle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr ArchiveHandle(uint64_t Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9954 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Handle, offset: 0x0, size: 0x8, def value: None
  uint64_t Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IO::Archive::ArchiveHandle, Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IO::Archive::ArchiveHandle, 0x8>, "Size mismatch!");

} // namespace Unity::IO::Archive
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::Archive::ArchiveHandle, "Unity.IO.Archive", "ArchiveHandle");
