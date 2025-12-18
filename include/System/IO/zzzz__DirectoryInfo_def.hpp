#pragma once
// IWYU pragma private; include "System/IO/DirectoryInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DirectoryInfo)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class DirectoryInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::DirectoryInfo);
// Dependencies System.IO.FileSystemInfo
namespace System::IO {
// Is value type: false
// CS Name: System.IO.DirectoryInfo
class CORDL_TYPE DirectoryInfo : public ::System::IO::FileSystemInfo {
public:
  // Declarations
  /// @brief Method Init, addr 0x5a572f0, size 0x27c, virtual false, abstract: false, final false
  inline void Init(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized);

  static inline ::System::IO::DirectoryInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::IO::DirectoryInfo* New_ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized);

  static inline ::System::IO::DirectoryInfo* New_ctor(::StringW path);

  /// @brief Method .ctor, addr 0x5a5756c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5a56b70, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized);

  /// @brief Method .ctor, addr 0x5a45994, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectoryInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DirectoryInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectoryInfo(DirectoryInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectoryInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectoryInfo(DirectoryInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3875 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::DirectoryInfo, 0xa8>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::DirectoryInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::DirectoryInfo*, "System.IO", "DirectoryInfo");
