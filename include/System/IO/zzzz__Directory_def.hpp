#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Directory)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO {
class DirectoryInfo;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
struct SearchOption;
}
namespace System::IO {
struct SearchTarget;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
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
// CS Name: ::System.IO::Directory*
class CORDL_TYPE Directory : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateDirectory, addr 0x28aa16c, size 0x150, virtual false, abstract: false, final false
  static inline ::System::IO::DirectoryInfo* CreateDirectory(::StringW path);

  /// @brief Method EnumerateDirectories, addr 0x28ab038, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateDirectories(::StringW path, ::StringW searchPattern, ::System::IO::EnumerationOptions* enumerationOptions);

  /// @brief Method EnumerateDirectories, addr 0x28aafc0, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateDirectories(::StringW path, ::StringW searchPattern, ::System::IO::SearchOption searchOption);

  /// @brief Method EnumerateFileSystemEntries, addr 0x28ab044, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFileSystemEntries(::StringW path);

  /// @brief Method EnumerateFileSystemEntries, addr 0x28ab0f0, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFileSystemEntries(::StringW path, ::StringW searchPattern, ::System::IO::EnumerationOptions* enumerationOptions);

  /// @brief Method Exists, addr 0x28aa8f8, size 0x17c, virtual false, abstract: false, final false
  static inline bool Exists(::StringW path);

  /// @brief Method GetAccessControl, addr 0x28ab244, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::DirectorySecurity* GetAccessControl(::StringW path);

  /// @brief Method GetAccessControl, addr 0x28ab1d0, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::DirectorySecurity* GetAccessControl(::StringW path, ::System::Security::AccessControl::AccessControlSections includeSections);

  /// @brief Method GetCurrentDirectory, addr 0x28ab1b8, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetCurrentDirectory();

  /// @brief Method GetFiles, addr 0x28aaa94, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFiles(::StringW path);

  /// @brief Method GetFiles, addr 0x28aaba4, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFiles(::StringW path, ::StringW searchPattern);

  /// @brief Method GetFiles, addr 0x28aab3c, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFiles(::StringW path, ::StringW searchPattern, ::System::IO::EnumerationOptions* enumerationOptions);

  /// @brief Method GetFiles, addr 0x28aac44, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFiles(::StringW path, ::StringW searchPattern, ::System::IO::SearchOption searchOption);

  /// @brief Method GetLogicalDrives, addr 0x28ab1c0, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetLogicalDrives();

  /// @brief Method GetParent, addr 0x28a9f9c, size 0x14c, virtual false, abstract: false, final false
  static inline ::System::IO::DirectoryInfo* GetParent(::StringW path);

  /// @brief Method InsecureGetCurrentDirectory, addr 0x28ab24c, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW InsecureGetCurrentDirectory();

  /// @brief Method InternalEnumeratePaths, addr 0x28aadf4, size 0x1cc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* InternalEnumeratePaths(::StringW path, ::StringW searchPattern, ::System::IO::SearchTarget searchTarget,
                                                                                                 ::System::IO::EnumerationOptions* options);

  /// @brief Method InternalGetDirectoryRoot, addr 0x28ab0fc, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW InternalGetDirectoryRoot(::StringW path);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Directory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Directory(Directory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Directory(Directory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Directory, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::Directory);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Directory*, "System.IO", "Directory");
