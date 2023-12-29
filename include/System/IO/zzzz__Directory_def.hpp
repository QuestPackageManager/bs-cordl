#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Directory)
namespace System::IO {
struct SearchTarget;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
class DirectoryInfo;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO {
struct SearchOption;
}
namespace System::Security::AccessControl {
class DirectorySecurity;
}
// Forward declare root types
namespace System::IO {
class Directory;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Directory);
// Type: System.IO::Directory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3578))
// CS Name: ::System.IO::Directory*
class CORDL_TYPE Directory : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetParent addr 0x23ad68c size 0x14c virtual false final false
  static inline ::System::IO::DirectoryInfo* GetParent(::StringW path);

  /// @brief Method CreateDirectory addr 0x23ad85c size 0x150 virtual false final false
  static inline ::System::IO::DirectoryInfo* CreateDirectory(::StringW path);

  /// @brief Method Exists addr 0x23adfd4 size 0x17c virtual false final false
  static inline bool Exists(::StringW path);

  /// @brief Method GetFiles addr 0x23ae170 size 0xa8 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFiles(::StringW path);

  /// @brief Method GetFiles addr 0x23ae280 size 0xa0 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFiles(::StringW path, ::StringW searchPattern);

  /// @brief Method GetFiles addr 0x23ae320 size 0x74 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFiles(::StringW path, ::StringW searchPattern, ::System::IO::SearchOption searchOption);

  /// @brief Method GetFiles addr 0x23ae218 size 0x68 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFiles(::StringW path, ::StringW searchPattern, ::System::IO::EnumerationOptions* enumerationOptions);

  /// @brief Method GetDirectories addr 0x23ae69c size 0xa8 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetDirectories(::StringW path);

  /// @brief Method GetDirectories addr 0x23ae744 size 0x68 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetDirectories(::StringW path, ::StringW searchPattern, ::System::IO::EnumerationOptions* enumerationOptions);

  /// @brief Method InternalEnumeratePaths addr 0x23ae4d0 size 0x1cc virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* InternalEnumeratePaths(::StringW path, ::StringW searchPattern, ::System::IO::SearchTarget searchTarget,
                                                                                                 ::System::IO::EnumerationOptions* options);

  /// @brief Method EnumerateDirectories addr 0x23ae7ac size 0x78 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateDirectories(::StringW path, ::StringW searchPattern, ::System::IO::SearchOption searchOption);

  /// @brief Method EnumerateDirectories addr 0x23ae824 size 0xc virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateDirectories(::StringW path, ::StringW searchPattern, ::System::IO::EnumerationOptions* enumerationOptions);

  /// @brief Method EnumerateFileSystemEntries addr 0x23ae830 size 0xac virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFileSystemEntries(::StringW path);

  /// @brief Method EnumerateFileSystemEntries addr 0x23ae8dc size 0xc virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFileSystemEntries(::StringW path, ::StringW searchPattern, ::System::IO::EnumerationOptions* enumerationOptions);

  /// @brief Method InternalGetDirectoryRoot addr 0x23ae8e8 size 0xb8 virtual false final false
  static inline ::StringW InternalGetDirectoryRoot(::StringW path);

  /// @brief Method GetCurrentDirectory addr 0x23ae9a0 size 0x8 virtual false final false
  static inline ::StringW GetCurrentDirectory();

  /// @brief Method GetLogicalDrives addr 0x23ae9a8 size 0x8 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetLogicalDrives();

  /// @brief Method GetAccessControl addr 0x23ae9b8 size 0x74 virtual false final false
  static inline ::System::Security::AccessControl::DirectorySecurity* GetAccessControl(::StringW path, ::System::Security::AccessControl::AccessControlSections includeSections);

  /// @brief Method GetAccessControl addr 0x23aea2c size 0x8 virtual false final false
  static inline ::System::Security::AccessControl::DirectorySecurity* GetAccessControl(::StringW path);

  /// @brief Method InsecureGetCurrentDirectory addr 0x23aea34 size 0x9c virtual false final false
  static inline ::StringW InsecureGetCurrentDirectory();

  // Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Directory(Directory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Directory(Directory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Directory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Directory, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::Directory);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Directory*, "System.IO", "Directory");
