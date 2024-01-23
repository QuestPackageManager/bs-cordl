#pragma once
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
// Type: ::FileSystemHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15824))
// CS Name: ::FileSystemHelper*
class CORDL_TYPE FileSystemHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindFirstExistedParentPath, addr 0xe254b4, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW FindFirstExistedParentPath(::StringW path);

  /// @brief Method HasWritePermission, addr 0xe25544, size 0x398, virtual false, abstract: false, final false
  static inline bool HasWritePermission(::System::Security::AccessControl::FileSystemSecurity* accessControlList);

  /// @brief Method HasWritePermissionOnDirectory, addr 0xe258dc, size 0x14, virtual false, abstract: false, final false
  static inline bool HasWritePermissionOnDirectory(::StringW path);

  /// @brief Method HasWritePermissionOnFile, addr 0xe258f0, size 0x14, virtual false, abstract: false, final false
  static inline bool HasWritePermissionOnFile(::StringW path);

  /// @brief Method IsFileWritable, addr 0xe25904, size 0x74, virtual false, abstract: false, final false
  static inline bool IsFileWritable(::StringW path);

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemHelper(FileSystemHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemHelper(FileSystemHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSystemHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileSystemHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemHelper*, "", "FileSystemHelper");
