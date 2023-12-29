#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileStatus_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystemInfo)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
struct DateTimeOffset;
}
namespace System::IO {
struct FileAttributes;
}
namespace System {
struct DateTime;
}
namespace System::IO {
struct FileStatus;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class FileSystemInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::FileSystemInfo);
// Type: System.IO::FileSystemInfo
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(3583))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3585))
// CS Name: ::System.IO::FileSystemInfo*
class CORDL_TYPE FileSystemInfo : public ::System::MarshalByRefObject {
public:
  // Declarations
  /// @brief Field _fileStatus, offset 0x18, size 0x78
  __declspec(property(get = __get__fileStatus, put = __set__fileStatus))::System::IO::FileStatus _fileStatus;

  /// @brief Field FullPath, offset 0x90, size 0x8
  __declspec(property(get = __get_FullPath, put = __set_FullPath))::StringW FullPath;

  /// @brief Field OriginalPath, offset 0x98, size 0x8
  __declspec(property(get = __get_OriginalPath, put = __set_OriginalPath))::StringW OriginalPath;

  /// @brief Field _name, offset 0xa0, size 0x8
  __declspec(property(get = __get__name, put = __set__name))::StringW _name;

  __declspec(property(get = get_Attributes))::System::IO::FileAttributes Attributes;

  __declspec(property(get = get_ExistsCore)) bool ExistsCore;

  __declspec(property(get = get_LastWriteTimeCore))::System::DateTimeOffset LastWriteTimeCore;

  __declspec(property(get = get_LengthCore)) int64_t LengthCore;

  __declspec(property(get = get_NormalizedPath))::StringW NormalizedPath;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Exists)) bool Exists;

  __declspec(property(get = get_LastWriteTime))::System::DateTime LastWriteTime;

  __declspec(property(get = get_LastWriteTimeUtc))::System::DateTime LastWriteTimeUtc;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::System::IO::FileStatus& __get__fileStatus();

  constexpr ::System::IO::FileStatus const& __get__fileStatus() const;

  constexpr void __set__fileStatus(::System::IO::FileStatus value);

  constexpr ::StringW& __get_FullPath();

  constexpr ::StringW const& __get_FullPath() const;

  constexpr void __set_FullPath(::StringW value);

  constexpr ::StringW& __get_OriginalPath();

  constexpr ::StringW const& __get_OriginalPath() const;

  constexpr void __set_OriginalPath(::StringW value);

  constexpr ::StringW& __get__name();

  constexpr ::StringW const& __get__name() const;

  constexpr void __set__name(::StringW value);

  static inline ::System::IO::FileSystemInfo* New_ctor();

  /// @brief Method .ctor addr 0x23aead0 size 0x74 virtual false final false
  inline void _ctor();

  /// @brief Method Create addr 0x23b3308 size 0xdc virtual false final false
  static inline ::System::IO::FileSystemInfo* Create(::StringW fullPath, ::StringW fileName, ByRef<::System::IO::FileStatus> fileStatus);

  /// @brief Method Init addr 0x23b33e4 size 0x7c virtual false final false
  inline void Init(ByRef<::System::IO::FileStatus> fileStatus);

  /// @brief Method get_Attributes addr 0x23b1a88 size 0xd0 virtual false final false
  inline ::System::IO::FileAttributes get_Attributes();

  /// @brief Method get_ExistsCore addr 0x23b3460 size 0x98 virtual false final false
  inline bool get_ExistsCore();

  /// @brief Method get_LastWriteTimeCore addr 0x23b34f8 size 0x6c virtual false final false
  inline ::System::DateTimeOffset get_LastWriteTimeCore();

  /// @brief Method get_LengthCore addr 0x23b1b58 size 0x80 virtual false final false
  inline int64_t get_LengthCore();

  /// @brief Method Refresh addr 0x23b3564 size 0x68 virtual false final false
  inline void Refresh();

  /// @brief Method ThrowNotFound addr 0x23b3274 size 0x94 virtual false final false
  static inline void ThrowNotFound(::StringW path);

  /// @brief Method get_NormalizedPath addr 0x23b35cc size 0x8 virtual false final false
  inline ::StringW get_NormalizedPath();

  static inline ::System::IO::FileSystemInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x23af1b0 size 0x144 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData addr 0x23b35d4 size 0x148 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_FullName addr 0x23b371c size 0x8 virtual true final false
  inline ::StringW get_FullName();

  /// @brief Method get_Name addr 0x23b3724 size 0x8 virtual true final false
  inline ::StringW get_Name();

  /// @brief Method get_Exists addr 0x23b372c size 0x88 virtual true final false
  inline bool get_Exists();

  /// @brief Method Delete addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Delete();

  /// @brief Method get_LastWriteTime addr 0x23b37b4 size 0x38 virtual false final false
  inline ::System::DateTime get_LastWriteTime();

  /// @brief Method get_LastWriteTimeUtc addr 0x23b37ec size 0x28 virtual false final false
  inline ::System::DateTime get_LastWriteTimeUtc();

  /// @brief Method ToString addr 0x23b3814 size 0x54 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemInfo(FileSystemInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemInfo(FileSystemInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemInfo();

public:
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
static_assert(::cordl_internals::size_check_v<::System::IO::FileSystemInfo, 0xa8>, "Size mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ____fileStatus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ___FullPath) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ___OriginalPath) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ____name) == 0xa0, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::FileSystemInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileSystemInfo*, "System.IO", "FileSystemInfo");
