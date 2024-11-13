#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/IO/zzzz__FileStatus_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FileSystemEntry)
namespace GlobalNamespace {
struct __Interop__Sys__DirectoryEntry;
}
namespace System::IO::Enumeration {
struct __FileSystemEntry____fileNameBuffer_e__FixedBuffer;
}
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
struct FileStatus;
}
namespace System::IO {
class FileSystemInfo;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
namespace System::IO::Enumeration {
struct __FileSystemEntry____fileNameBuffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::System::IO::Enumeration::FileSystemEntry);
MARK_VAL_T(::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer);
// Type: ::<_fileNameBuffer>e__FixedBuffer
// SizeInfo { instance_size: 512, native_size: 512, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, packing: None, specified_packing: Some(0) }
namespace System::IO::Enumeration {
// Is value type: true
// CS Name: ::FileSystemEntry::<_fileNameBuffer>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __FileSystemEntry____fileNameBuffer_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemEntry____fileNameBuffer_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
  constexpr __FileSystemEntry____fileNameBuffer_e__FixedBuffer(char16_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
  char16_t FixedElementField;

  /// @brief Size padding 0x200 - 0x2 = 0x1fe, packed as 0x1fe
  uint8_t _cordl_size_padding[0x1fe];

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3647 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x200 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer, 0x200>, "Size mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace System::IO::Enumeration
// Type: System.IO.Enumeration::FileSystemEntry
// SizeInfo { instance_size: 752, native_size: 760, calculated_instance_size: 752, calculated_native_size: 768, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::IO::Enumeration {
// Is value type: true
// CS Name: ::System.IO.Enumeration::FileSystemEntry
struct CORDL_TYPE FileSystemEntry {
public:
  // Declarations
  using __fileNameBuffer_e__FixedBuffer = ::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer;

  __declspec(property(get = get_Attributes)) ::System::IO::FileAttributes Attributes;

  __declspec(property(get = get_Directory, put = set_Directory)) ::System::ReadOnlySpan_1<char16_t> Directory;

  __declspec(property(get = get_FileName)) ::System::ReadOnlySpan_1<char16_t> FileName;

  __declspec(property(get = get_FullPath)) ::System::ReadOnlySpan_1<char16_t> FullPath;

  __declspec(property(get = get_IsDirectory)) bool IsDirectory;

  __declspec(property(get = get_OriginalRootDirectory, put = set_OriginalRootDirectory)) ::System::ReadOnlySpan_1<char16_t> OriginalRootDirectory;

  __declspec(property(get = get_RootDirectory, put = set_RootDirectory)) ::System::ReadOnlySpan_1<char16_t> RootDirectory;

  /// @brief Method Initialize, addr 0x3d23214, size 0x27c, virtual false, abstract: false, final false
  static inline ::System::IO::FileAttributes Initialize(ByRef<::System::IO::Enumeration::FileSystemEntry> entry, ::GlobalNamespace::__Interop__Sys__DirectoryEntry directoryEntry,
                                                        ::System::ReadOnlySpan_1<char16_t> directory, ::System::ReadOnlySpan_1<char16_t> rootDirectory,
                                                        ::System::ReadOnlySpan_1<char16_t> originalRootDirectory, ::System::Span_1<char16_t> pathBuffer);

  /// @brief Method ToFileSystemInfo, addr 0x3d236d4, size 0x70, virtual false, abstract: false, final false
  inline ::System::IO::FileSystemInfo* ToFileSystemInfo();

  /// @brief Method ToFullPath, addr 0x3d23744, size 0x28, virtual false, abstract: false, final false
  inline ::StringW ToFullPath();

  /// @brief Method ToSpecifiedFullPath, addr 0x3d2376c, size 0x17c, virtual false, abstract: false, final false
  inline ::StringW ToSpecifiedFullPath();

  /// @brief Method get_Attributes, addr 0x3d23684, size 0x48, virtual false, abstract: false, final false
  inline ::System::IO::FileAttributes get_Attributes();

  /// @brief Method get_Directory, addr 0x3d23630, size 0x10, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<char16_t> get_Directory();

  /// @brief Method get_FileName, addr 0x3d235c0, size 0x70, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<char16_t> get_FileName();

  /// @brief Method get_FullPath, addr 0x3d23490, size 0x130, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<char16_t> get_FullPath();

  /// @brief Method get_IsDirectory, addr 0x3d236cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDirectory();

  /// @brief Method get_OriginalRootDirectory, addr 0x3d23668, size 0x10, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<char16_t> get_OriginalRootDirectory();

  /// @brief Method get_RootDirectory, addr 0x3d2364c, size 0x10, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<char16_t> get_RootDirectory();

  /// @brief Method set_Directory, addr 0x3d23640, size 0xc, virtual false, abstract: false, final false
  inline void set_Directory(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method set_OriginalRootDirectory, addr 0x3d23678, size 0xc, virtual false, abstract: false, final false
  inline void set_OriginalRootDirectory(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method set_RootDirectory, addr 0x3d2365c, size 0xc, virtual false, abstract: false, final false
  inline void set_RootDirectory(::System::ReadOnlySpan_1<char16_t> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemEntry();

  // Ctor Parameters [CppParam { name: "_directoryEntry", ty: "::GlobalNamespace::__Interop__Sys__DirectoryEntry", modifiers: "", def_value: None }, CppParam { name: "_status", ty:
  // "::System::IO::FileStatus", modifiers: "", def_value: None }, CppParam { name: "_pathBuffer", ty: "::System::Span_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_fullPath", ty:
  // "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_fileName", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name:
  // "_fileNameBuffer", ty: "::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "_initialAttributes", ty:
  // "::System::IO::FileAttributes", modifiers: "", def_value: None }, CppParam { name: "_Directory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None },
  // CppParam { name: "_RootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_OriginalRootDirectory_k__BackingField", ty:
  // "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
  constexpr FileSystemEntry(::GlobalNamespace::__Interop__Sys__DirectoryEntry _directoryEntry, ::System::IO::FileStatus _status, ::System::Span_1<char16_t> _pathBuffer,
                            ::System::ReadOnlySpan_1<char16_t> _fullPath, ::System::ReadOnlySpan_1<char16_t> _fileName,
                            ::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer _fileNameBuffer, ::System::IO::FileAttributes _initialAttributes,
                            ::System::ReadOnlySpan_1<char16_t> _Directory_k__BackingField, ::System::ReadOnlySpan_1<char16_t> _RootDirectory_k__BackingField,
                            ::System::ReadOnlySpan_1<char16_t> _OriginalRootDirectory_k__BackingField) noexcept;

  /// @brief Field _directoryEntry, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::__Interop__Sys__DirectoryEntry _directoryEntry;

  /// @brief Field _status, offset: 0x10, size: 0x78, def value: None
  ::System::IO::FileStatus _status;

  /// @brief Field _pathBuffer, offset: 0x88, size: 0x10, def value: None
  ::System::Span_1<char16_t> _pathBuffer;

  /// @brief Field _fullPath, offset: 0x98, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _fullPath;

  /// @brief Field _fileName, offset: 0xa8, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _fileName;

  /// @brief Field _fileNameBuffer, offset: 0xb8, size: 0x200, def value: None
  ::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer _fileNameBuffer;

  /// @brief Field _initialAttributes, offset: 0x2b8, size: 0x4, def value: None
  ::System::IO::FileAttributes _initialAttributes;

  /// @brief Field <Directory>k__BackingField, offset: 0x2c0, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _Directory_k__BackingField;

  /// @brief Field <RootDirectory>k__BackingField, offset: 0x2d0, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _RootDirectory_k__BackingField;

  /// @brief Field <OriginalRootDirectory>k__BackingField, offset: 0x2e0, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _OriginalRootDirectory_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3648 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2f0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::FileSystemEntry, 0x2f0>, "Size mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _directoryEntry) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _pathBuffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _fullPath) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _fileName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _fileNameBuffer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _initialAttributes) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _Directory_k__BackingField) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _RootDirectory_k__BackingField) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _OriginalRootDirectory_k__BackingField) == 0x2e0, "Offset mismatch!");

} // namespace System::IO::Enumeration
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemEntry, "System.IO.Enumeration", "FileSystemEntry");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer, "System.IO.Enumeration", "FileSystemEntry/<_fileNameBuffer>e__FixedBuffer");
