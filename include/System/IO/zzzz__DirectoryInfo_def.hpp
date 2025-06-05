#pragma once
// IWYU pragma private; include "System/IO/DirectoryInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DirectoryInfo)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
class FileSystemInfo;
}
namespace System::IO {
struct SearchTarget;
}
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
  /// @brief Method Delete, addr 0x3d66afc, size 0xc, virtual true, abstract: false, final false
  inline void Delete();

  /// @brief Method GetDirectories, addr 0x3d667fc, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::IO::DirectoryInfo*, ::Array<::System::IO::DirectoryInfo*>*> GetDirectories();

  /// @brief Method GetDirectories, addr 0x3d668a4, size 0xa0, virtual false, abstract: false, final false
  inline ::ArrayW<::System::IO::DirectoryInfo*, ::Array<::System::IO::DirectoryInfo*>*> GetDirectories(::StringW searchPattern, ::System::IO::EnumerationOptions* enumerationOptions);

  /// @brief Method Init, addr 0x3d66564, size 0x298, virtual false, abstract: false, final false
  inline void Init(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized);

  /// @brief Method InternalEnumerateInfos, addr 0x3d66944, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* InternalEnumerateInfos(::StringW path, ::StringW searchPattern, ::System::IO::SearchTarget searchTarget,
                                                                                                                     ::System::IO::EnumerationOptions* options);

  static inline ::System::IO::DirectoryInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::IO::DirectoryInfo* New_ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized);

  static inline ::System::IO::DirectoryInfo* New_ctor(::StringW path);

  /// @brief Method .ctor, addr 0x3d66bcc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d65ad0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized);

  /// @brief Method .ctor, addr 0x3d65334, size 0x84, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3596 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::DirectoryInfo, 0xa8>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::DirectoryInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::DirectoryInfo*, "System.IO", "DirectoryInfo");
