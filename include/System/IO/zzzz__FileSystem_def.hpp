#pragma once
// IWYU pragma private; include "System/IO/FileSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystem)
namespace GlobalNamespace {
struct Interop_ErrorInfo;
}
namespace System::IO {
class DirectoryInfo;
}
namespace System::IO {
struct FileAttributes;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO {
class FileSystem;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::FileSystem);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileSystem
class CORDL_TYPE FileSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Method CopyDanglingSymlink, addr 0x3d6a040, size 0x168, virtual false, abstract: false, final false
  static inline bool CopyDanglingSymlink(::StringW sourceFullPath, ::StringW destFullPath);

  /// @brief Method CopyFile, addr 0x3d6a1a8, size 0x454, virtual false, abstract: false, final false
  static inline void CopyFile(::StringW sourceFullPath, ::StringW destFullPath, bool overwrite);

  /// @brief Method CreateDirectory, addr 0x3d65190, size 0x5d8, virtual false, abstract: false, final false
  static inline void CreateDirectory(::StringW fullPath);

  /// @brief Method DeleteFile, addr 0x3d66f4c, size 0x1b0, virtual false, abstract: false, final false
  static inline void DeleteFile(::StringW fullPath);

  /// @brief Method DirectoryExists, addr 0x3d6592c, size 0x20, virtual false, abstract: false, final false
  static inline bool DirectoryExists(::System::ReadOnlySpan_1<char16_t> fullPath);

  /// @brief Method DirectoryExists, addr 0x3d6a8a8, size 0xc, virtual false, abstract: false, final false
  static inline bool DirectoryExists(::System::ReadOnlySpan_1<char16_t> fullPath, ::ByRef<::GlobalNamespace::Interop_ErrorInfo> errorInfo);

  /// @brief Method FileExists, addr 0x3d672c0, size 0x80, virtual false, abstract: false, final false
  static inline bool FileExists(::System::ReadOnlySpan_1<char16_t> fullPath);

  /// @brief Method FileExists, addr 0x3d6a798, size 0x110, virtual false, abstract: false, final false
  static inline bool FileExists(::System::ReadOnlySpan_1<char16_t> fullPath, int32_t fileType, ::ByRef<::GlobalNamespace::Interop_ErrorInfo> errorInfo);

  /// @brief Method GetAttributes, addr 0x3d67468, size 0x80, virtual false, abstract: false, final false
  static inline ::System::IO::FileAttributes GetAttributes(::StringW fullPath);

  /// @brief Method GetLogicalDrives, addr 0x3d66070, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetLogicalDrives();

  /// @brief Method LinkOrCopyFile, addr 0x3d6a61c, size 0x17c, virtual false, abstract: false, final false
  static inline void LinkOrCopyFile(::StringW sourceFullPath, ::StringW destFullPath);

  /// @brief Method MoveFile, addr 0x3d6942c, size 0x118, virtual false, abstract: false, final false
  static inline void MoveFile(::StringW sourceFullPath, ::StringW destFullPath);

  /// @brief Method RemoveDirectory, addr 0x3d667a0, size 0xc4, virtual false, abstract: false, final false
  static inline void RemoveDirectory(::StringW fullPath, bool recursive);

  /// @brief Method RemoveDirectoryInternal, addr 0x3d6a8b4, size 0x694, virtual false, abstract: false, final false
  static inline void RemoveDirectoryInternal(::System::IO::DirectoryInfo* directory, bool recursive, bool throwOnTopLevelDirectoryNotFound);

  /// @brief Method ReplaceFile, addr 0x3d69090, size 0x170, virtual false, abstract: false, final false
  static inline void ReplaceFile(::StringW sourceFullPath, ::StringW destFullPath, ::StringW destBackupFullPath, bool ignoreMetadataErrors);

  /// @brief Method ShouldIgnoreDirectory, addr 0x3d6af48, size 0x84, virtual false, abstract: false, final false
  static inline bool ShouldIgnoreDirectory(::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystem(FileSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystem(FileSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3601 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileSystem, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::FileSystem);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileSystem*, "System.IO", "FileSystem");
