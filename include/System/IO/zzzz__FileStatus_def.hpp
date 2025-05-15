#pragma once
// IWYU pragma private; include "System/IO/FileStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileStatus)
namespace System::IO {
struct FileAttributes;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO {
struct FileStatus;
}
// Write type traits
MARK_VAL_T(::System::IO::FileStatus);
// Dependencies Interop::Sys::FileStatus
namespace System::IO {
// Is value type: true
// CS Name: System.IO.FileStatus
struct CORDL_TYPE FileStatus {
public:
  // Declarations
  __declspec(property(get = get_InitiallyDirectory, put = set_InitiallyDirectory)) bool InitiallyDirectory;

  /// @brief Method EnsureStatInitialized, addr 0x3d69f34, size 0xc0, virtual false, abstract: false, final false
  inline void EnsureStatInitialized(::System::ReadOnlySpan_1<char16_t> path, bool continueOnError);

  /// @brief Method GetAttributes, addr 0x3d69ff4, size 0xe8, virtual false, abstract: false, final false
  inline ::System::IO::FileAttributes GetAttributes(::System::ReadOnlySpan_1<char16_t> path, ::System::ReadOnlySpan_1<char16_t> fileName);

  /// @brief Method GetExists, addr 0x3d6a0dc, size 0x44, virtual false, abstract: false, final false
  inline bool GetExists(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method GetLastWriteTime, addr 0x3d6a2b8, size 0x9c, virtual false, abstract: false, final false
  inline ::System::DateTimeOffset GetLastWriteTime(::System::ReadOnlySpan_1<char16_t> path, bool continueOnError);

  /// @brief Method GetLength, addr 0x3d6a404, size 0x1c, virtual false, abstract: false, final false
  inline int64_t GetLength(::System::ReadOnlySpan_1<char16_t> path, bool continueOnError);

  /// @brief Method Initialize, addr 0x3d69e30, size 0x14, virtual false, abstract: false, final false
  static inline void Initialize(::ByRef<::System::IO::FileStatus> status, bool isDirectory);

  /// @brief Method IsReadOnly, addr 0x3d69e44, size 0xf0, virtual false, abstract: false, final false
  inline bool IsReadOnly(::System::ReadOnlySpan_1<char16_t> path, bool continueOnError);

  /// @brief Method Refresh, addr 0x3d6a120, size 0x198, virtual false, abstract: false, final false
  inline void Refresh(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method UnixTimeToDateTimeOffset, addr 0x3d6a354, size 0xb0, virtual false, abstract: false, final false
  inline ::System::DateTimeOffset UnixTimeToDateTimeOffset(int64_t seconds, int64_t nanoseconds);

  /// @brief Method get_InitiallyDirectory, addr 0x3d69e1c, size 0x8, virtual false, abstract: false, final false
  inline bool get_InitiallyDirectory();

  /// @brief Method set_InitiallyDirectory, addr 0x3d69e24, size 0xc, virtual false, abstract: false, final false
  inline void set_InitiallyDirectory(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FileStatus();

  // Ctor Parameters [CppParam { name: "_fileStatus", ty: "::GlobalNamespace::Sys_Interop_FileStatus", modifiers: "", def_value: None }, CppParam { name: "_fileStatusInitialized", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_InitiallyDirectory_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_isDirectory", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "_exists", ty: "bool", modifiers: "", def_value: None }]
  constexpr FileStatus(::GlobalNamespace::Sys_Interop_FileStatus _fileStatus, int32_t _fileStatusInitialized, bool _InitiallyDirectory_k__BackingField, bool _isDirectory, bool _exists) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3600 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field _fileStatus, offset: 0x0, size: 0x70, def value: None
  ::GlobalNamespace::Sys_Interop_FileStatus _fileStatus;

  /// @brief Field _fileStatusInitialized, offset: 0x70, size: 0x4, def value: None
  int32_t _fileStatusInitialized;

  /// @brief Field <InitiallyDirectory>k__BackingField, offset: 0x74, size: 0x1, def value: None
  bool _InitiallyDirectory_k__BackingField;

  /// @brief Field _isDirectory, offset: 0x75, size: 0x1, def value: None
  bool _isDirectory;

  /// @brief Field _exists, offset: 0x76, size: 0x1, def value: None
  bool _exists;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::FileStatus, _fileStatus) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStatus, _fileStatusInitialized) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStatus, _InitiallyDirectory_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStatus, _isDirectory) == 0x75, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileStatus, _exists) == 0x76, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::FileStatus, 0x78>, "Size mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileStatus, "System.IO", "FileStatus");
