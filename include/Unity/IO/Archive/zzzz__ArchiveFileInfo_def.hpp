#pragma once
// IWYU pragma private; include "Unity/IO/Archive/ArchiveFileInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArchiveFileInfo)
// Forward declare root types
namespace Unity::IO::Archive {
struct ArchiveFileInfo;
}
// Write type traits
MARK_VAL_T(::Unity::IO::Archive::ArchiveFileInfo);
// Type: Unity.IO.Archive::ArchiveFileInfo
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::IO::Archive {
// Is value type: true
// CS Name: ::Unity.IO.Archive::ArchiveFileInfo
struct CORDL_TYPE ArchiveFileInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArchiveFileInfo();

  // Ctor Parameters [CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "FileSize", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr ArchiveFileInfo(::StringW Filename, uint64_t FileSize) noexcept;

  /// @brief Field Filename, offset: 0x0, size: 0x8, def value: None
  ::StringW Filename;

  /// @brief Field FileSize, offset: 0x8, size: 0x8, def value: None
  uint64_t FileSize;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10551 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IO::Archive::ArchiveFileInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::IO::Archive::ArchiveFileInfo, Filename) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::Archive::ArchiveFileInfo, FileSize) == 0x8, "Offset mismatch!");

} // namespace Unity::IO::Archive
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::Archive::ArchiveFileInfo, "Unity.IO.Archive", "ArchiveFileInfo");
