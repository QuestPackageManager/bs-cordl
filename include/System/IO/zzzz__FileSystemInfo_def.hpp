#pragma once
// IWYU pragma private; include "System/IO/FileSystemInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileStatus_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystemInfo)
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
struct FileStatus;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::IO {
class FileSystemInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::FileSystemInfo);
// Dependencies System.IO.FileStatus, System.MarshalByRefObject, System.Runtime.Serialization.ISerializable
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileSystemInfo
class CORDL_TYPE FileSystemInfo : public ::System::MarshalByRefObject {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::IO::FileAttributes Attributes;

  __declspec(property(get = get_Exists)) bool Exists;

  __declspec(property(get = get_ExistsCore)) bool ExistsCore;

  __declspec(property(get = get_FullName)) ::StringW FullName;

  /// @brief Field FullPath, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_FullPath, put = __cordl_internal_set_FullPath)) ::StringW FullPath;

  __declspec(property(get = get_LastWriteTime)) ::System::DateTime LastWriteTime;

  __declspec(property(get = get_LastWriteTimeCore)) ::System::DateTimeOffset LastWriteTimeCore;

  __declspec(property(get = get_LastWriteTimeUtc)) ::System::DateTime LastWriteTimeUtc;

  __declspec(property(get = get_LengthCore)) int64_t LengthCore;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NormalizedPath)) ::StringW NormalizedPath;

  /// @brief Field OriginalPath, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_OriginalPath, put = __cordl_internal_set_OriginalPath)) ::StringW OriginalPath;

  /// @brief Field _fileStatus, offset 0x18, size 0x78
  __declspec(property(get = __cordl_internal_get__fileStatus, put = __cordl_internal_set__fileStatus)) ::System::IO::FileStatus _fileStatus;

  /// @brief Field _name, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Create, addr 0x3d6b064, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::IO::FileSystemInfo* Create(::StringW fullPath, ::StringW fileName, ::ByRef<::System::IO::FileStatus> fileStatus);

  /// @brief Method Delete, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Delete();

  /// @brief Method GetObjectData, addr 0x3d6b324, size 0x148, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Init, addr 0x3d6b134, size 0x7c, virtual false, abstract: false, final false
  inline void Init(::ByRef<::System::IO::FileStatus> fileStatus);

  static inline ::System::IO::FileSystemInfo* New_ctor();

  static inline ::System::IO::FileSystemInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Refresh, addr 0x3d6b2b4, size 0x68, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method ThrowNotFound, addr 0x3d6afcc, size 0x98, virtual false, abstract: false, final false
  static inline void ThrowNotFound(::StringW path);

  /// @brief Method ToString, addr 0x3d6b5ec, size 0x54, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_FullPath() const;

  constexpr ::StringW& __cordl_internal_get_FullPath();

  constexpr ::StringW const& __cordl_internal_get_OriginalPath() const;

  constexpr ::StringW& __cordl_internal_get_OriginalPath();

  constexpr ::System::IO::FileStatus const& __cordl_internal_get__fileStatus() const;

  constexpr ::System::IO::FileStatus& __cordl_internal_get__fileStatus();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr void __cordl_internal_set_FullPath(::StringW value);

  constexpr void __cordl_internal_set_OriginalPath(::StringW value);

  constexpr void __cordl_internal_set__fileStatus(::System::IO::FileStatus value);

  constexpr void __cordl_internal_set__name(::StringW value);

  /// @brief Method .ctor, addr 0x3d66188, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d66868, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Attributes, addr 0x3d6977c, size 0xcc, virtual false, abstract: false, final false
  inline ::System::IO::FileAttributes get_Attributes();

  /// @brief Method get_Exists, addr 0x3d6b47c, size 0x88, virtual true, abstract: false, final false
  inline bool get_Exists();

  /// @brief Method get_ExistsCore, addr 0x3d6b1b0, size 0x98, virtual false, abstract: false, final false
  inline bool get_ExistsCore();

  /// @brief Method get_FullName, addr 0x3d6b46c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_FullName();

  /// @brief Method get_LastWriteTime, addr 0x3d6b504, size 0x74, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastWriteTime();

  /// @brief Method get_LastWriteTimeCore, addr 0x3d6b248, size 0x6c, virtual false, abstract: false, final false
  inline ::System::DateTimeOffset get_LastWriteTimeCore();

  /// @brief Method get_LastWriteTimeUtc, addr 0x3d6b578, size 0x74, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastWriteTimeUtc();

  /// @brief Method get_LengthCore, addr 0x3d69848, size 0x74, virtual false, abstract: false, final false
  inline int64_t get_LengthCore();

  /// @brief Method get_Name, addr 0x3d6b474, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NormalizedPath, addr 0x3d6b31c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NormalizedPath();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemInfo(FileSystemInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemInfo(FileSystemInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3602 };

  /// @brief Field _fileStatus, offset: 0x18, size: 0x78, def value: None
  ::System::IO::FileStatus ____fileStatus;

  /// @brief Field FullPath, offset: 0x90, size: 0x8, def value: None
  ::StringW ___FullPath;

  /// @brief Field OriginalPath, offset: 0x98, size: 0x8, def value: None
  ::StringW ___OriginalPath;

  /// @brief Field _name, offset: 0xa0, size: 0x8, def value: None
  ::StringW ____name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::FileSystemInfo, ____fileStatus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ___FullPath) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ___OriginalPath) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ____name) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::FileSystemInfo, 0xa8>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::FileSystemInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileSystemInfo*, "System.IO", "FileSystemInfo");
