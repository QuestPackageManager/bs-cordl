#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/FileInfoResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileState_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileInfoResult)
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct FileInfoResult;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::FileInfoResult);
// Dependencies Unity.IO.LowLevel.Unsafe.FileState
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.IO.LowLevel.Unsafe.FileInfoResult
struct CORDL_TYPE FileInfoResult {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileInfoResult();

  // Ctor Parameters [CppParam { name: "FileSize", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "FileState", ty: "::Unity::IO::LowLevel::Unsafe::FileState", modifiers: "",
  // def_value: None }]
  constexpr FileInfoResult(int64_t FileSize, ::Unity::IO::LowLevel::Unsafe::FileState FileState) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9941 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field FileSize, offset: 0x0, size: 0x8, def value: None
  int64_t FileSize;

  /// @brief Field FileState, offset: 0x8, size: 0x4, def value: None
  ::Unity::IO::LowLevel::Unsafe::FileState FileState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::FileInfoResult, FileSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::FileInfoResult, FileState) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::FileInfoResult, 0x10>, "Size mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::FileInfoResult, "Unity.IO.LowLevel.Unsafe", "FileInfoResult");
