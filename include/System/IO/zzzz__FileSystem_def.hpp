#pragma once
// IWYU pragma private; include "System/IO/FileSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::IO::FileSystem*);
DEFINE_IL2CPP_CLASS(::System::IO::FileSystem*, "System.IO", "FileSystem");
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileSystem
class CORDL_TYPE FileSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Method CopyDanglingSymlink, addr 0x5bf1ef8, size 0x16c, virtual false, abstract: false, final false
  static inline bool CopyDanglingSymlink(::StringW sourceFullPath, ::StringW destFullPath);

  /// @brief Method CopyFile, addr 0x5bf2064, size 0x3c0, virtual false, abstract: false, final false
  static inline void CopyFile(::StringW sourceFullPath, ::StringW destFullPath, bool overwrite);

  /// @brief Method CreateDirectory, addr 0x5bf2de4, size 0x5a4, virtual false, abstract: false, final false
  static inline void CreateDirectory(::StringW fullPath);

  /// @brief Method DeleteFile, addr 0x5bf29e8, size 0x1a8, virtual false, abstract: false, final false
  static inline void DeleteFile(::StringW fullPath);

  /// @brief Method DirectoryExists, addr 0x5bf2424, size 0x1c, virtual false, abstract: false, final false
  static inline bool DirectoryExists(::System::ReadOnlySpan_1<char16_t> fullPath);

  /// @brief Method DirectoryExists, addr 0x5bf360c, size 0xc, virtual false, abstract: false, final false
  static inline bool DirectoryExists(::System::ReadOnlySpan_1<char16_t> fullPath, ::by_ref<::GlobalNamespace::Interop_ErrorInfo> errorInfo);

  /// @brief Method FileExists, addr 0x5bf3590, size 0x7c, virtual false, abstract: false, final false
  static inline bool FileExists(::System::ReadOnlySpan_1<char16_t> fullPath);

  /// @brief Method FileExists, addr 0x5bf2cd0, size 0x114, virtual false, abstract: false, final false
  static inline bool FileExists(::System::ReadOnlySpan_1<char16_t> fullPath, int32_t fileType, ::by_ref<::GlobalNamespace::Interop_ErrorInfo> errorInfo);

  /// @brief Method GetAttributes, addr 0x5bf402c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::IO::FileAttributes GetAttributes(::StringW fullPath);

  /// @brief Method GetLogicalDrives, addr 0x5bf41dc, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetLogicalDrives();

  /// @brief Method LinkOrCopyFile, addr 0x5bf2440, size 0x18c, virtual false, abstract: false, final false
  static inline void LinkOrCopyFile(::StringW sourceFullPath, ::StringW destFullPath);

  /// @brief Method MoveFile, addr 0x5bf28cc, size 0x11c, virtual false, abstract: false, final false
  static inline void MoveFile(::StringW sourceFullPath, ::StringW destFullPath);

  /// @brief Method RemoveDirectory, addr 0x5bf3618, size 0xc0, virtual false, abstract: false, final false
  static inline void RemoveDirectory(::StringW fullPath, bool recursive);

  /// @brief Method RemoveDirectoryInternal, addr 0x5bf3764, size 0x68c, virtual false, abstract: false, final false
  static inline void RemoveDirectoryInternal(::System::IO::DirectoryInfo* directory, bool recursive, bool throwOnTopLevelDirectoryNotFound);

  /// @brief Method ReplaceFile, addr 0x5bf275c, size 0x170, virtual false, abstract: false, final false
  static inline void ReplaceFile(::StringW sourceFullPath, ::StringW destFullPath, ::StringW destBackupFullPath, bool ignoreMetadataErrors);

  /// @brief Method ShouldIgnoreDirectory, addr 0x5bf3eb4, size 0x84, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::FileSystem) == 0x10, "Size mismatch!");

} // namespace System::IO
