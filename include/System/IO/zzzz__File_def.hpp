#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::IO::File);
// Type: System.IO::File
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3592))
// CS Name: ::System.IO::File*
class CORDL_TYPE File : public ::System::Object {
public:
  // Declarations
  /// @brief Method OpenText, addr 0x250b7dc, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::IO::StreamReader* OpenText(::StringW path);

  /// @brief Method CreateText, addr 0x250b8a4, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::IO::StreamWriter* CreateText(::StringW path);

  /// @brief Method AppendText, addr 0x250b958, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::IO::StreamWriter* AppendText(::StringW path);

  /// @brief Method Create, addr 0x250ba0c, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* Create(::StringW path);

  /// @brief Method Create, addr 0x250ba14, size 0x80, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* Create(::StringW path, int32_t bufferSize);

  /// @brief Method Delete, addr 0x250ba94, size 0xac, virtual false, abstract: false, final false
  static inline void Delete(::StringW path);

  /// @brief Method Exists, addr 0x24ffff8, size 0x1bc, virtual false, abstract: false, final false
  static inline bool Exists(::StringW path);

  /// @brief Method Open, addr 0x250bd68, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* Open(::StringW path, ::System::IO::FileMode mode);

  /// @brief Method Open, addr 0x250bd7c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* Open(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share);

  /// @brief Method GetAttributes, addr 0x250be08, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IO::FileAttributes GetAttributes(::StringW path);

  /// @brief Method OpenRead, addr 0x250bee4, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* OpenRead(::StringW path);

  /// @brief Method OpenWrite, addr 0x250bf54, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* OpenWrite(::StringW path);

  /// @brief Method ReadAllText, addr 0x250bfc4, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW ReadAllText(::StringW path);

  /// @brief Method InternalReadAllText, addr 0x250c090, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW InternalReadAllText(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method WriteAllText, addr 0x250c238, size 0x23c, virtual false, abstract: false, final false
  static inline void WriteAllText(::StringW path, ::StringW contents);

  /// @brief Method ReadAllBytes, addr 0x250c474, size 0x2c0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAllBytes(::StringW path);

  /// @brief Method ReadAllBytesUnknownLength, addr 0x250c734, size 0x470, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAllBytesUnknownLength(::System::IO::FileStream* fs);

  /// @brief Method WriteAllBytes, addr 0x250cba4, size 0x108, virtual false, abstract: false, final false
  static inline void WriteAllBytes(::StringW path, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method InternalWriteAllBytes, addr 0x250ccac, size 0x1b8, virtual false, abstract: false, final false
  static inline void InternalWriteAllBytes(::StringW path, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method ReadAllLines, addr 0x250ce64, size 0xcc, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> ReadAllLines(::StringW path);

  /// @brief Method InternalReadAllLines, addr 0x250cf30, size 0x284, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> InternalReadAllLines(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method WriteAllLines, addr 0x250d1b4, size 0x4, virtual false, abstract: false, final false
  static inline void WriteAllLines(::StringW path, ::ArrayW<::StringW, ::Array<::StringW>*> contents);

  /// @brief Method WriteAllLines, addr 0x250d1b8, size 0x134, virtual false, abstract: false, final false
  static inline void WriteAllLines(::StringW path, ::System::Collections::Generic::IEnumerable_1<::StringW>* contents);

  /// @brief Method InternalWriteAllLines, addr 0x250d2ec, size 0x404, virtual false, abstract: false, final false
  static inline void InternalWriteAllLines(::System::IO::TextWriter* writer, ::System::Collections::Generic::IEnumerable_1<::StringW>* contents);

  /// @brief Method Replace, addr 0x250d6f0, size 0x8, virtual false, abstract: false, final false
  static inline void Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName);

  /// @brief Method Replace, addr 0x250d6f8, size 0x130, virtual false, abstract: false, final false
  static inline void Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName, bool ignoreMetadataErrors);

  /// @brief Method Move, addr 0x250d998, size 0x240, virtual false, abstract: false, final false
  static inline void Move(::StringW sourceFileName, ::StringW destFileName);

  /// @brief Method GetAccessControl, addr 0x250dcf0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::FileSecurity* GetAccessControl(::StringW path);

  /// @brief Method GetAccessControl, addr 0x250dcf8, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::FileSecurity* GetAccessControl(::StringW path, ::System::Security::AccessControl::AccessControlSections includeSections);

  // Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  File(File&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  File(File const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr File();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::File, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::File);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::File*, "System.IO", "File");
