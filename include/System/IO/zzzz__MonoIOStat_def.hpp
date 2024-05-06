#pragma once
// IWYU pragma private; include "System/IO/MonoIOStat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoIOStat)
namespace System::IO {
struct FileAttributes;
}
// Forward declare root types
namespace System::IO {
struct MonoIOStat;
}
// Write type traits
MARK_VAL_T(::System::IO::MonoIOStat);
// Type: System.IO::MonoIOStat
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// CS Name: ::System.IO::MonoIOStat
struct CORDL_TYPE MonoIOStat {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoIOStat();

  // Ctor Parameters [CppParam { name: "fileAttributes", ty: "::System::IO::FileAttributes", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int64_t", modifiers: "", def_value: None
  // }, CppParam { name: "CreationTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "LastAccessTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name:
  // "LastWriteTime", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr MonoIOStat(::System::IO::FileAttributes fileAttributes, int64_t Length, int64_t CreationTime, int64_t LastAccessTime, int64_t LastWriteTime) noexcept;

  /// @brief Field fileAttributes, offset: 0x0, size: 0x4, def value: None
  ::System::IO::FileAttributes fileAttributes;

  /// @brief Field Length, offset: 0x8, size: 0x8, def value: None
  int64_t Length;

  /// @brief Field CreationTime, offset: 0x10, size: 0x8, def value: None
  int64_t CreationTime;

  /// @brief Field LastAccessTime, offset: 0x18, size: 0x8, def value: None
  int64_t LastAccessTime;

  /// @brief Field LastWriteTime, offset: 0x20, size: 0x8, def value: None
  int64_t LastWriteTime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::MonoIOStat, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::IO::MonoIOStat, fileAttributes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::MonoIOStat, Length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::MonoIOStat, CreationTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::MonoIOStat, LastAccessTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::MonoIOStat, LastWriteTime) == 0x20, "Offset mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoIOStat, "System.IO", "MonoIOStat");
