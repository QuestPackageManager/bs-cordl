#pragma once
// IWYU pragma private; include "System/Security/AccessControl/FileSystemRights.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystemRights)
// Forward declare root types
namespace System::Security::AccessControl {
struct FileSystemRights;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::FileSystemRights);
// Dependencies
namespace System::Security::AccessControl {
// Is value type: true
// CS Name: System.Security.AccessControl.FileSystemRights
struct CORDL_TYPE FileSystemRights {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FileSystemRights_Unwrapped
  enum struct __FileSystemRights_Unwrapped : int32_t {
    __E_ListDirectory = static_cast<int32_t>(0x1),
    __E_ReadData = static_cast<int32_t>(0x1),
    __E_CreateFiles = static_cast<int32_t>(0x2),
    __E_WriteData = static_cast<int32_t>(0x2),
    __E_AppendData = static_cast<int32_t>(0x4),
    __E_CreateDirectories = static_cast<int32_t>(0x4),
    __E_ReadExtendedAttributes = static_cast<int32_t>(0x8),
    __E_WriteExtendedAttributes = static_cast<int32_t>(0x10),
    __E_ExecuteFile = static_cast<int32_t>(0x20),
    __E_Traverse = static_cast<int32_t>(0x20),
    __E_DeleteSubdirectoriesAndFiles = static_cast<int32_t>(0x40),
    __E_ReadAttributes = static_cast<int32_t>(0x80),
    __E_WriteAttributes = static_cast<int32_t>(0x100),
    __E_Write = static_cast<int32_t>(0x116),
    __E_Delete = static_cast<int32_t>(0x10000),
    __E_ReadPermissions = static_cast<int32_t>(0x20000),
    __E_Read = static_cast<int32_t>(0x20089),
    __E_ReadAndExecute = static_cast<int32_t>(0x200a9),
    __E_Modify = static_cast<int32_t>(0x301bf),
    __E_ChangePermissions = static_cast<int32_t>(0x40000),
    __E_TakeOwnership = static_cast<int32_t>(0x80000),
    __E_Synchronize = static_cast<int32_t>(0x100000),
    __E_FullControl = static_cast<int32_t>(0x1f01ff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FileSystemRights_Unwrapped() const noexcept {
    return static_cast<__FileSystemRights_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemRights();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FileSystemRights(int32_t value__) noexcept;

  /// @brief Field AppendData value: I32(4)
  static ::System::Security::AccessControl::FileSystemRights const AppendData;

  /// @brief Field ChangePermissions value: I32(262144)
  static ::System::Security::AccessControl::FileSystemRights const ChangePermissions;

  /// @brief Field CreateDirectories value: I32(4)
  static ::System::Security::AccessControl::FileSystemRights const CreateDirectories;

  /// @brief Field CreateFiles value: I32(2)
  static ::System::Security::AccessControl::FileSystemRights const CreateFiles;

  /// @brief Field Delete value: I32(65536)
  static ::System::Security::AccessControl::FileSystemRights const Delete;

  /// @brief Field DeleteSubdirectoriesAndFiles value: I32(64)
  static ::System::Security::AccessControl::FileSystemRights const DeleteSubdirectoriesAndFiles;

  /// @brief Field ExecuteFile value: I32(32)
  static ::System::Security::AccessControl::FileSystemRights const ExecuteFile;

  /// @brief Field FullControl value: I32(2032127)
  static ::System::Security::AccessControl::FileSystemRights const FullControl;

  /// @brief Field ListDirectory value: I32(1)
  static ::System::Security::AccessControl::FileSystemRights const ListDirectory;

  /// @brief Field Modify value: I32(197055)
  static ::System::Security::AccessControl::FileSystemRights const Modify;

  /// @brief Field Read value: I32(131209)
  static ::System::Security::AccessControl::FileSystemRights const Read;

  /// @brief Field ReadAndExecute value: I32(131241)
  static ::System::Security::AccessControl::FileSystemRights const ReadAndExecute;

  /// @brief Field ReadAttributes value: I32(128)
  static ::System::Security::AccessControl::FileSystemRights const ReadAttributes;

  /// @brief Field ReadData value: I32(1)
  static ::System::Security::AccessControl::FileSystemRights const ReadData;

  /// @brief Field ReadExtendedAttributes value: I32(8)
  static ::System::Security::AccessControl::FileSystemRights const ReadExtendedAttributes;

  /// @brief Field ReadPermissions value: I32(131072)
  static ::System::Security::AccessControl::FileSystemRights const ReadPermissions;

  /// @brief Field Synchronize value: I32(1048576)
  static ::System::Security::AccessControl::FileSystemRights const Synchronize;

  /// @brief Field TakeOwnership value: I32(524288)
  static ::System::Security::AccessControl::FileSystemRights const TakeOwnership;

  /// @brief Field Traverse value: I32(32)
  static ::System::Security::AccessControl::FileSystemRights const Traverse;

  /// @brief Field Write value: I32(278)
  static ::System::Security::AccessControl::FileSystemRights const Write;

  /// @brief Field WriteAttributes value: I32(256)
  static ::System::Security::AccessControl::FileSystemRights const WriteAttributes;

  /// @brief Field WriteData value: I32(2)
  static ::System::Security::AccessControl::FileSystemRights const WriteData;

  /// @brief Field WriteExtendedAttributes value: I32(16)
  static ::System::Security::AccessControl::FileSystemRights const WriteExtendedAttributes;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3049 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::FileSystemRights, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::FileSystemRights, 0x4>, "Size mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::FileSystemRights, "System.Security.AccessControl", "FileSystemRights");
