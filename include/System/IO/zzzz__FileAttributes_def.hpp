#pragma once
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
// Type: System.IO::FileAttributes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3609))
// CS Name: ::System.IO::FileAttributes
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FileAttributes(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FileAttributes();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ReadOnly value: static_cast<int32_t>(0x1)
  static ::System::IO::FileAttributes const ReadOnly;

  /// @brief Field Hidden value: static_cast<int32_t>(0x2)
  static ::System::IO::FileAttributes const Hidden;

  /// @brief Field System value: static_cast<int32_t>(0x4)
  static ::System::IO::FileAttributes const System;

  /// @brief Field Directory value: static_cast<int32_t>(0x10)
  static ::System::IO::FileAttributes const Directory;

  /// @brief Field Archive value: static_cast<int32_t>(0x20)
  static ::System::IO::FileAttributes const Archive;

  /// @brief Field Device value: static_cast<int32_t>(0x40)
  static ::System::IO::FileAttributes const Device;

  /// @brief Field Normal value: static_cast<int32_t>(0x80)
  static ::System::IO::FileAttributes const Normal;

  /// @brief Field Temporary value: static_cast<int32_t>(0x100)
  static ::System::IO::FileAttributes const Temporary;

  /// @brief Field SparseFile value: static_cast<int32_t>(0x200)
  static ::System::IO::FileAttributes const SparseFile;

  /// @brief Field ReparsePoint value: static_cast<int32_t>(0x400)
  static ::System::IO::FileAttributes const ReparsePoint;

  /// @brief Field Compressed value: static_cast<int32_t>(0x800)
  static ::System::IO::FileAttributes const Compressed;

  /// @brief Field Offline value: static_cast<int32_t>(0x1000)
  static ::System::IO::FileAttributes const Offline;

  /// @brief Field NotContentIndexed value: static_cast<int32_t>(0x2000)
  static ::System::IO::FileAttributes const NotContentIndexed;

  /// @brief Field Encrypted value: static_cast<int32_t>(0x4000)
  static ::System::IO::FileAttributes const Encrypted;

  /// @brief Field IntegrityStream value: static_cast<int32_t>(0x8000)
  static ::System::IO::FileAttributes const IntegrityStream;

  /// @brief Field NoScrubData value: static_cast<int32_t>(0x20000)
  static ::System::IO::FileAttributes const NoScrubData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileAttributes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::IO::FileAttributes, value__) == 0x0, "Offset mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileAttributes, "System.IO", "FileAttributes");
