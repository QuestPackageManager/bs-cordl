#pragma once
// IWYU pragma private; include "GlobalNamespace\FileSystemHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FileSystemHelper)
namespace System::Security::AccessControl {
class FileSystemSecurity;
}
// Forward declare root types
namespace GlobalNamespace {
class FileSystemHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FileSystemHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FileSystemHelper*, "", "FileSystemHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FileSystemHelper
class CORDL_TYPE FileSystemHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindFirstExistedParentPath, addr 0x330bf20, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW FindFirstExistedParentPath(::StringW path);

  /// @brief Method HasWritePermission, addr 0x330bfb4, size 0x338, virtual false, abstract: false, final false
  static inline bool HasWritePermission(::System::Security::AccessControl::FileSystemSecurity* accessControlList);

  /// @brief Method HasWritePermissionOnDirectory, addr 0x330c2ec, size 0x14, virtual false, abstract: false, final false
  static inline bool HasWritePermissionOnDirectory(::StringW path);

  /// @brief Method HasWritePermissionOnFile, addr 0x330c300, size 0x14, virtual false, abstract: false, final false
  static inline bool HasWritePermissionOnFile(::StringW path);

  /// @brief Method IsFileWritable, addr 0x330c314, size 0x80, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20460 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FileSystemHelper) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
