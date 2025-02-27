#pragma once
// IWYU pragma private; include "GlobalNamespace/FileSystemHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSystemHelper)
namespace System::Security::AccessControl {
class FileSystemSecurity;
}
// Forward declare root types
namespace GlobalNamespace {
class FileSystemHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileSystemHelper);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FileSystemHelper
class CORDL_TYPE FileSystemHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindFirstExistedParentPath, addr 0x22a3044, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW FindFirstExistedParentPath(::StringW path);

  /// @brief Method HasWritePermission, addr 0x22a30d4, size 0x390, virtual false, abstract: false, final false
  static inline bool HasWritePermission(::System::Security::AccessControl::FileSystemSecurity* accessControlList);

  /// @brief Method HasWritePermissionOnDirectory, addr 0x22a3464, size 0x14, virtual false, abstract: false, final false
  static inline bool HasWritePermissionOnDirectory(::StringW path);

  /// @brief Method HasWritePermissionOnFile, addr 0x22a3478, size 0x14, virtual false, abstract: false, final false
  static inline bool HasWritePermissionOnFile(::StringW path);

  /// @brief Method IsFileWritable, addr 0x22a348c, size 0x74, virtual false, abstract: false, final false
  static inline bool IsFileWritable(::StringW path);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemHelper(FileSystemHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemHelper(FileSystemHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16920 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSystemHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileSystemHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemHelper*, "", "FileSystemHelper");
