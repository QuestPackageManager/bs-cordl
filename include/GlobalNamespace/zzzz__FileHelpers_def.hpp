#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileHelpers)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
class ISaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class FileHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileHelpers);
// Type: ::FileHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13802))
// CS Name: ::FileHelpers*
class CORDL_TYPE FileHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetEscapedURLForFilePath addr 0x1f8ffd8 size 0x5c virtual false final false
  static inline ::StringW GetEscapedURLForFilePath(::StringW filePath);

  /// @brief Method GetUniqueDirectoryNameByAppendingNumber addr 0x1f90034 size 0xa8 virtual false final false
  static inline ::StringW GetUniqueDirectoryNameByAppendingNumber(::StringW dirName);

  /// @brief Method GetFilePaths addr 0x1f900dc size 0x234 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFilePaths(::StringW directoryPath, ::System::Collections::Generic::HashSet_1<::StringW>* extensions);

  /// @brief Method GetFileNamesFromFilePaths addr 0x1f90310 size 0x174 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFileNamesFromFilePaths(::ArrayW<::StringW, ::Array<::StringW>*> filePaths);

  /// @brief Method SaveToJSONFile addr 0x1f90484 size 0x14c virtual false final false
  static inline void SaveToJSONFile(::GlobalNamespace::ISaveData* saveData, ::System::Object* obj, ::StringW filePath, bool prettyPrint);

  /// @brief Method SaveToJSONFile addr 0x1f905d0 size 0x18c virtual false final false
  static inline void SaveToJSONFile(::GlobalNamespace::ISaveData* saveData, ::System::Object* obj, ::StringW filePath, ::StringW tempFilePath, ::StringW backupFilePath);

  /// @brief Method LoadFromJSONFile addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T LoadFromJSONFile(::GlobalNamespace::ISaveData* saveData, ::StringW filePath, ::StringW backupFilePath);

  /// @brief Method LoadJSONFile addr 0x1f9075c size 0xc8 virtual false final false
  static inline ::StringW LoadJSONFile(::GlobalNamespace::ISaveData* saveData, ::StringW filePath, ::StringW backupFilePath);

  // Ctor Parameters [CppParam { name: "", ty: "FileHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileHelpers(FileHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileHelpers(FileHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileHelpers*, "", "FileHelpers");
