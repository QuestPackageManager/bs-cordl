#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystem)
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
class DirectoryInfo;
}
namespace GlobalNamespace {
struct __Interop__ErrorInfo;
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
// Type: System.IO::FileSystem
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3584))
// CS Name: ::System.IO::FileSystem*
class CORDL_TYPE FileSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Method CopyDanglingSymlink addr 0x23b2338 size 0x168 virtual false final false
  static inline bool CopyDanglingSymlink(::StringW sourceFullPath, ::StringW destFullPath);

  /// @brief Method CopyFile addr 0x23b24a0 size 0x428 virtual false final false
  static inline void CopyFile(::StringW sourceFullPath, ::StringW destFullPath, bool overwrite);

  /// @brief Method LinkOrCopyFile addr 0x23b28c8 size 0x17c virtual false final false
  static inline void LinkOrCopyFile(::StringW sourceFullPath, ::StringW destFullPath);

  /// @brief Method ReplaceFile addr 0x23b16d8 size 0x170 virtual false final false
  static inline void ReplaceFile(::StringW sourceFullPath, ::StringW destFullPath, ::StringW destBackupFullPath, bool ignoreMetadataErrors);

  /// @brief Method DeleteFile addr 0x23af8b8 size 0x1ac virtual false final false
  static inline void DeleteFile(::StringW fullPath);

  /// @brief Method CreateDirectory addr 0x23ad9ac size 0x5e0 virtual false final false
  static inline void CreateDirectory(::StringW fullPath);

  /// @brief Method RemoveDirectory addr 0x23af0e8 size 0xc4 virtual false final false
  static inline void RemoveDirectory(::StringW fullPath, bool recursive);

  /// @brief Method RemoveDirectoryInternal addr 0x23b2b60 size 0x690 virtual false final false
  static inline void RemoveDirectoryInternal(::System::IO::DirectoryInfo* directory, bool recursive, bool throwOnTopLevelDirectoryNotFound);

  /// @brief Method DirectoryExists addr 0x23ae150 size 0x20 virtual false final false
  static inline bool DirectoryExists(::System::ReadOnlySpan_1<char16_t> fullPath);

  /// @brief Method DirectoryExists addr 0x23b2b54 size 0xc virtual false final false
  static inline bool DirectoryExists(::System::ReadOnlySpan_1<char16_t> fullPath, ByRef<::GlobalNamespace::__Interop__ErrorInfo> errorInfo);

  /// @brief Method FileExists addr 0x23afa64 size 0x7c virtual false final false
  static inline bool FileExists(::System::ReadOnlySpan_1<char16_t> fullPath);

  /// @brief Method FileExists addr 0x23b2a44 size 0x110 virtual false final false
  static inline bool FileExists(::System::ReadOnlySpan_1<char16_t> fullPath, int32_t fileType, ByRef<::GlobalNamespace::__Interop__ErrorInfo> errorInfo);

  /// @brief Method ShouldIgnoreDirectory addr 0x23b31f0 size 0x84 virtual false final false
  static inline bool ShouldIgnoreDirectory(::StringW name);

  /// @brief Method GetAttributes addr 0x23afbdc size 0x80 virtual false final false
  static inline ::System::IO::FileAttributes GetAttributes(::StringW fullPath);

  /// @brief Method GetLogicalDrives addr 0x23ae9b0 size 0x8 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetLogicalDrives();

  // Ctor Parameters [CppParam { name: "", ty: "FileSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystem(FileSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystem(FileSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystem();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileSystem, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::FileSystem);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileSystem*, "System.IO", "FileSystem");
