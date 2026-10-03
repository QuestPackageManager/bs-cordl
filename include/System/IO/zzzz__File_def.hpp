#pragma once
// IWYU pragma private; include "System/IO/File.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(File)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
class FileStream;
}
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class StreamWriter;
}
namespace System::IO {
class TextWriter;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::Security::AccessControl {
class FileSecurity;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class File;
}
// Write type traits
MARK_REF_T(::System::IO::File*);
DEFINE_IL2CPP_CLASS(::System::IO::File*, "System.IO", "File");
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.File
class CORDL_TYPE File : public ::System::Object {
public:
  // Declarations
  /// @brief Method AppendText, addr 0x601fc14, size 0xac, virtual false, abstract: false, final false
  static inline ::System::IO::StreamWriter* AppendText(::StringW path);

  /// @brief Method Copy, addr 0x601fcc0, size 0x198, virtual false, abstract: false, final false
  static inline void Copy(::StringW sourceFileName, ::StringW destFileName, bool overwrite);

  /// @brief Method Create, addr 0x601fe58, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* Create(::StringW path);

  /// @brief Method Create, addr 0x601fe60, size 0x88, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* Create(::StringW path, int32_t bufferSize);

  /// @brief Method CreateText, addr 0x601fb68, size 0xac, virtual false, abstract: false, final false
  static inline ::System::IO::StreamWriter* CreateText(::StringW path);

  /// @brief Method Delete, addr 0x601fee8, size 0xac, virtual false, abstract: false, final false
  static inline void Delete(::StringW path);

  /// @brief Method Exists, addr 0x6012754, size 0x1c4, virtual false, abstract: false, final false
  static inline bool Exists(::StringW path);

  /// @brief Method GetAccessControl, addr 0x6021e54, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::FileSecurity* GetAccessControl(::StringW path);

  /// @brief Method GetAccessControl, addr 0x6021e5c, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::FileSecurity* GetAccessControl(::StringW path, ::System::Security::AccessControl::AccessControlSections includeSections);

  /// @brief Method GetAttributes, addr 0x6020040, size 0x60, virtual false, abstract: false, final false
  static inline ::System::IO::FileAttributes GetAttributes(::StringW path);

  /// @brief Method InternalReadAllLines, addr 0x6021304, size 0x268, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> InternalReadAllLines(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method InternalReadAllText, addr 0x602025c, size 0x17c, virtual false, abstract: false, final false
  static inline ::StringW InternalReadAllText(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method InternalWriteAllBytes, addr 0x60210b8, size 0x188, virtual false, abstract: false, final false
  static inline void InternalWriteAllBytes(::StringW path, ::ArrayW<uint8_t> bytes);

  /// @brief Method InternalWriteAllLines, addr 0x6021764, size 0x388, virtual false, abstract: false, final false
  static inline void InternalWriteAllLines(::System::IO::TextWriter* writer, ::System::Collections::Generic::IEnumerable_1<::StringW>* contents);

  /// @brief Method Move, addr 0x6021c20, size 0x234, virtual false, abstract: false, final false
  static inline void Move(::StringW sourceFileName, ::StringW destFileName);

  /// @brief Method Open, addr 0x601ff94, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* Open(::StringW path, ::System::IO::FileMode mode);

  /// @brief Method Open, addr 0x601ffa8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* Open(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share);

  /// @brief Method OpenRead, addr 0x60200a0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* OpenRead(::StringW path);

  /// @brief Method OpenText, addr 0x601faa8, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::IO::StreamReader* OpenText(::StringW path);

  /// @brief Method OpenWrite, addr 0x602011c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* OpenWrite(::StringW path);

  /// @brief Method ReadAllBytes, addr 0x602080c, size 0x2a4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ReadAllBytes(::StringW path);

  /// @brief Method ReadAllBytesUnknownLength, addr 0x6020ab0, size 0x50c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ReadAllBytesUnknownLength(::System::IO::FileStream* fs);

  /// @brief Method ReadAllLines, addr 0x6021240, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> ReadAllLines(::StringW path);

  /// @brief Method ReadAllText, addr 0x6020198, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW ReadAllText(::StringW path);

  /// @brief Method ReadLines, addr 0x602156c, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ReadLines(::StringW path);

  /// @brief Method Replace, addr 0x6021aec, size 0x8, virtual false, abstract: false, final false
  static inline void Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName);

  /// @brief Method Replace, addr 0x6021af4, size 0x12c, virtual false, abstract: false, final false
  static inline void Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName, bool ignoreMetadataErrors);

  /// @brief Method WriteAllBytes, addr 0x6020fbc, size 0xfc, virtual false, abstract: false, final false
  static inline void WriteAllBytes(::StringW path, ::ArrayW<uint8_t> bytes);

  /// @brief Method WriteAllLines, addr 0x6021634, size 0x4, virtual false, abstract: false, final false
  static inline void WriteAllLines(::StringW path, ::ArrayW<::StringW> contents);

  /// @brief Method WriteAllLines, addr 0x6021638, size 0x12c, virtual false, abstract: false, final false
  static inline void WriteAllLines(::StringW path, ::System::Collections::Generic::IEnumerable_1<::StringW>* contents);

  /// @brief Method WriteAllText, addr 0x60203d8, size 0x200, virtual false, abstract: false, final false
  static inline void WriteAllText(::StringW path, ::StringW contents);

  /// @brief Method WriteAllText, addr 0x60205d8, size 0x234, virtual false, abstract: false, final false
  static inline void WriteAllText(::StringW path, ::StringW contents, ::System::Text::Encoding* encoding);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr File();

public:
  // Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  File(File&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  File(File const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3873 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::File) == 0x10, "Size mismatch!");

} // namespace System::IO
