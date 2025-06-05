#pragma once
// IWYU pragma private; include "GlobalNamespace/FileHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileHelpers)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FileHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileHelpers);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FileHelpers
class CORDL_TYPE FileHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetEscapedURLForFilePath, addr 0x22b454c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetEscapedURLForFilePath(::StringW filePath);

  /// @brief Method GetFileNamesFromFilePaths, addr 0x22b48b4, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFileNamesFromFilePaths(::System::Collections::Generic::IEnumerable_1<::StringW>* filePaths);

  /// @brief Method GetFilePaths, addr 0x22b4680, size 0x234, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFilePaths(::StringW directoryPath, ::System::Collections::Generic::HashSet_1<::StringW>* extensions);

  /// @brief Method GetUniqueDirectoryNameByAppendingNumber, addr 0x22b45c4, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueDirectoryNameByAppendingNumber(::StringW dirName);

  /// @brief Method PathIsUrl, addr 0x22b44f8, size 0x54, virtual false, abstract: false, final false
  static inline bool PathIsUrl(::StringW filePath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileHelpers(FileHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileHelpers(FileHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17134 };

  /// @brief Field kProtocolInfix offset 0xffffffff size 0x8
  static constexpr ::ConstString kProtocolInfix{ u"://" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileHelpers*, "", "FileHelpers");
