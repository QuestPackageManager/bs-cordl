#pragma once
// IWYU pragma private; include "System/IO/FileAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileAttributes)
// Forward declare root types
namespace System::IO {
struct FileAttributes;
}
// Write type traits
MARK_VAL_T(::System::IO::FileAttributes);
// Dependencies
namespace System::IO {
// Is value type: true
// CS Name: System.IO.FileAttributes
struct CORDL_TYPE FileAttributes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FileAttributes_Unwrapped
  enum struct __FileAttributes_Unwrapped : int32_t {
    __E_ReadOnly = static_cast<int32_t>(0x1),
    __E_Hidden = static_cast<int32_t>(0x2),
    __E_System = static_cast<int32_t>(0x4),
    __E_Directory = static_cast<int32_t>(0x10),
    __E_Archive = static_cast<int32_t>(0x20),
    __E_Device = static_cast<int32_t>(0x40),
    __E_Normal = static_cast<int32_t>(0x80),
    __E_Temporary = static_cast<int32_t>(0x100),
    __E_SparseFile = static_cast<int32_t>(0x200),
    __E_ReparsePoint = static_cast<int32_t>(0x400),
    __E_Compressed = static_cast<int32_t>(0x800),
    __E_Offline = static_cast<int32_t>(0x1000),
    __E_NotContentIndexed = static_cast<int32_t>(0x2000),
    __E_Encrypted = static_cast<int32_t>(0x4000),
    __E_IntegrityStream = static_cast<int32_t>(0x8000),
    __E_NoScrubData = static_cast<int32_t>(0x20000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FileAttributes_Unwrapped() const noexcept {
    return static_cast<__FileAttributes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FileAttributes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FileAttributes(int32_t value__) noexcept;

  /// @brief Field Archive value: I32(32)
  static ::System::IO::FileAttributes const Archive;

  /// @brief Field Compressed value: I32(2048)
  static ::System::IO::FileAttributes const Compressed;

  /// @brief Field Device value: I32(64)
  static ::System::IO::FileAttributes const Device;

  /// @brief Field Directory value: I32(16)
  static ::System::IO::FileAttributes const Directory;

  /// @brief Field Encrypted value: I32(16384)
  static ::System::IO::FileAttributes const Encrypted;

  /// @brief Field Hidden value: I32(2)
  static ::System::IO::FileAttributes const Hidden;

  /// @brief Field IntegrityStream value: I32(32768)
  static ::System::IO::FileAttributes const IntegrityStream;

  /// @brief Field NoScrubData value: I32(131072)
  static ::System::IO::FileAttributes const NoScrubData;

  /// @brief Field Normal value: I32(128)
  static ::System::IO::FileAttributes const Normal;

  /// @brief Field NotContentIndexed value: I32(8192)
  static ::System::IO::FileAttributes const NotContentIndexed;

  /// @brief Field Offline value: I32(4096)
  static ::System::IO::FileAttributes const Offline;

  /// @brief Field ReadOnly value: I32(1)
  static ::System::IO::FileAttributes const ReadOnly;

  /// @brief Field ReparsePoint value: I32(1024)
  static ::System::IO::FileAttributes const ReparsePoint;

  /// @brief Field SparseFile value: I32(512)
  static ::System::IO::FileAttributes const SparseFile;

  /// @brief Field System value: I32(4)
  static ::System::IO::FileAttributes const System;

  /// @brief Field Temporary value: I32(256)
  static ::System::IO::FileAttributes const Temporary;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3893 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::FileAttributes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::FileAttributes, 0x4>, "Size mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileAttributes, "System.IO", "FileAttributes");
