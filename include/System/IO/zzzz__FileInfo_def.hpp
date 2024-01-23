#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileInfo)
namespace System::IO {
class FileStream;
}
namespace System::IO {
class StreamWriter;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class FileInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::FileInfo);
// Type: System.IO::FileInfo
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3596))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3593))
// CS Name: ::System.IO::FileInfo*
class CORDL_TYPE FileInfo : public ::System::IO::FileSystemInfo {
public:
  // Declarations
  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Name))::StringW Name;

  static inline ::System::IO::FileInfo* New_ctor();

  /// @brief Method .ctor, addr 0x250dd6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::FileInfo* New_ctor(::StringW fileName);

  /// @brief Method .ctor, addr 0x250dd70, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW fileName);

  static inline ::System::IO::FileInfo* New_ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized);

  /// @brief Method .ctor, addr 0x250dd80, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized);

  /// @brief Method get_Length, addr 0x250dea8, size 0x88, virtual false, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method CreateText, addr 0x250e080, size 0x68, virtual false, abstract: false, final false
  inline ::System::IO::StreamWriter* CreateText();

  /// @brief Method AppendText, addr 0x250e0e8, size 0x68, virtual false, abstract: false, final false
  inline ::System::IO::StreamWriter* AppendText();

  /// @brief Method Delete, addr 0x250e150, size 0x8, virtual true, abstract: false, final false
  inline void Delete();

  /// @brief Method OpenRead, addr 0x250e158, size 0x7c, virtual false, abstract: false, final false
  inline ::System::IO::FileStream* OpenRead();

  static inline ::System::IO::FileInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x250e1d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Name, addr 0x250e1d8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  // Ctor Parameters [CppParam { name: "", ty: "FileInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileInfo(FileInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileInfo(FileInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileInfo, 0xa8>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::FileInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileInfo*, "System.IO", "FileInfo");
