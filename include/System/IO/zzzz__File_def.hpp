#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(File)
namespace System::IO {
class StreamWriter;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileAttributes;
}
namespace System::Text {
class Encoding;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Security::AccessControl {
class FileSecurity;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
class TextWriter;
}
namespace System::IO {
class FileStream;
}
namespace System::IO {
class StreamReader;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3581))
// CS Name: ::System.IO::File*
class CORDL_TYPE File : public ::System::Object {
public:
  // Declarations
  /// @brief Method OpenText addr 0x23af554 size 0xc8 virtual false final false
  static inline ::System::IO::StreamReader* OpenText(::StringW path);

  /// @brief Method CreateText addr 0x23af61c size 0xb4 virtual false final false
  static inline ::System::IO::StreamWriter* CreateText(::StringW path);

  /// @brief Method AppendText addr 0x23af6d0 size 0xb4 virtual false final false
  static inline ::System::IO::StreamWriter* AppendText(::StringW path);

  /// @brief Method Create addr 0x23af784 size 0x8 virtual false final false
  static inline ::System::IO::FileStream* Create(::StringW path);

  /// @brief Method Create addr 0x23af78c size 0x80 virtual false final false
  static inline ::System::IO::FileStream* Create(::StringW path, int32_t bufferSize);

  /// @brief Method Delete addr 0x23af80c size 0xac virtual false final false
  static inline void Delete(::StringW path);

  /// @brief Method Exists addr 0x23a632c size 0x1bc virtual false final false
  static inline bool Exists(::StringW path);

  /// @brief Method Open addr 0x23afae0 size 0x14 virtual false final false
  static inline ::System::IO::FileStream* Open(::StringW path, ::System::IO::FileMode mode);

  /// @brief Method Open addr 0x23afaf4 size 0x8c virtual false final false
  static inline ::System::IO::FileStream* Open(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share);

  /// @brief Method GetAttributes addr 0x23afb80 size 0x5c virtual false final false
  static inline ::System::IO::FileAttributes GetAttributes(::StringW path);

  /// @brief Method OpenRead addr 0x23afc5c size 0x70 virtual false final false
  static inline ::System::IO::FileStream* OpenRead(::StringW path);

  /// @brief Method OpenWrite addr 0x23afccc size 0x70 virtual false final false
  static inline ::System::IO::FileStream* OpenWrite(::StringW path);

  /// @brief Method ReadAllText addr 0x23afd3c size 0xcc virtual false final false
  static inline ::StringW ReadAllText(::StringW path);

  /// @brief Method InternalReadAllText addr 0x23afe08 size 0x1a8 virtual false final false
  static inline ::StringW InternalReadAllText(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method WriteAllText addr 0x23affb0 size 0x23c virtual false final false
  static inline void WriteAllText(::StringW path, ::StringW contents);

  /// @brief Method ReadAllBytes addr 0x23b01ec size 0x2c0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAllBytes(::StringW path);

  /// @brief Method ReadAllBytesUnknownLength addr 0x23b04ac size 0x470 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAllBytesUnknownLength(::System::IO::FileStream* fs);

  /// @brief Method WriteAllBytes addr 0x23b091c size 0x108 virtual false final false
  static inline void WriteAllBytes(::StringW path, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method InternalWriteAllBytes addr 0x23b0a24 size 0x1b8 virtual false final false
  static inline void InternalWriteAllBytes(::StringW path, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method ReadAllLines addr 0x23b0bdc size 0xcc virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> ReadAllLines(::StringW path);

  /// @brief Method InternalReadAllLines addr 0x23b0ca8 size 0x284 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> InternalReadAllLines(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method WriteAllLines addr 0x23b0f2c size 0x4 virtual false final false
  static inline void WriteAllLines(::StringW path, ::ArrayW<::StringW, ::Array<::StringW>*> contents);

  /// @brief Method WriteAllLines addr 0x23b0f30 size 0x134 virtual false final false
  static inline void WriteAllLines(::StringW path, ::System::Collections::Generic::IEnumerable_1<::StringW>* contents);

  /// @brief Method InternalWriteAllLines addr 0x23b1064 size 0x404 virtual false final false
  static inline void InternalWriteAllLines(::System::IO::TextWriter* writer, ::System::Collections::Generic::IEnumerable_1<::StringW>* contents);

  /// @brief Method AppendAllLines addr 0x23b1468 size 0x138 virtual false final false
  static inline void AppendAllLines(::StringW path, ::System::Collections::Generic::IEnumerable_1<::StringW>* contents);

  /// @brief Method Replace addr 0x23b15a0 size 0x8 virtual false final false
  static inline void Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName);

  /// @brief Method Replace addr 0x23b15a8 size 0x130 virtual false final false
  static inline void Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName, bool ignoreMetadataErrors);

  /// @brief Method GetAccessControl addr 0x23b1848 size 0x8 virtual false final false
  static inline ::System::Security::AccessControl::FileSecurity* GetAccessControl(::StringW path);

  /// @brief Method GetAccessControl addr 0x23b1850 size 0x74 virtual false final false
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
