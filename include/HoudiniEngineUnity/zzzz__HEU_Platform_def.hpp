#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_Platform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_Platform)
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Platform;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Platform);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_Platform
class CORDL_TYPE HEU_Platform : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lastErrorMsg, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__lastErrorMsg, put = setStaticF__lastErrorMsg)) ::StringW _lastErrorMsg;

  /// @brief Field _libPath, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__libPath, put = setStaticF__libPath)) ::StringW _libPath;

  /// @brief Field _pathSet, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__pathSet, put = setStaticF__pathSet)) bool _pathSet;

  /// @brief Method BuildPath, addr 0x3a3b914, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW BuildPath(::StringW folder1, ::StringW folder2, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method CreateDirectory, addr 0x3a407bc, size 0x28, virtual false, abstract: false, final false
  static inline bool CreateDirectory(::StringW inPath);

  /// @brief Method DoesDirectoryExist, addr 0x3a407b4, size 0x8, virtual false, abstract: false, final false
  static inline bool DoesDirectoryExist(::StringW inPath);

  /// @brief Method DoesFileExist, addr 0x3a3ca58, size 0x8, virtual false, abstract: false, final false
  static inline bool DoesFileExist(::StringW inPath);

  /// @brief Method DoesPathExist, addr 0x3a3c720, size 0x30, virtual false, abstract: false, final false
  static inline bool DoesPathExist(::StringW inPath);

  /// @brief Method GetAllFoldersInPath, addr 0x3a401d8, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW GetAllFoldersInPath(::StringW path);

  /// @brief Method GetAllFoldersInPathHelper, addr 0x3a402a4, size 0x15c, virtual false, abstract: false, final false
  static inline void GetAllFoldersInPathHelper(::StringW inPath, ::System::Text::StringBuilder* pathBuilder);

  /// @brief Method GetEnvironmentValue, addr 0x3a40b34, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW GetEnvironmentValue(::StringW key);

  /// @brief Method GetFileName, addr 0x3a40534, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetFileName(::StringW path);

  /// @brief Method GetFileNameWithoutExtension, addr 0x3a4058c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetFileNameWithoutExtension(::StringW path);

  /// @brief Method GetFilesInFolder, addr 0x3a40400, size 0x134, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFilesInFolder(::StringW folderPath, ::StringW searchPattern, bool bRecursive);

  /// @brief Method GetFolderPath, addr 0x3a405e4, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW GetFolderPath(::StringW path, bool bRemoveDirectorySeparatorAtEnd);

  /// @brief Method GetFullPath, addr 0x3a3adb4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetFullPath(::StringW inPath);

  /// @brief Method GetHoudiniEngineDefaultPath, addr 0x3a3fe40, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW GetHoudiniEngineDefaultPath();

  /// @brief Method GetHoudiniEngineEnvironmentFilePathFull, addr 0x3a40ba8, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW GetHoudiniEngineEnvironmentFilePathFull();

  /// @brief Method GetHoudiniEnginePath, addr 0x3a3c39c, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW GetHoudiniEnginePath();

  /// @brief Method GetParentDirectory, addr 0x3a407e4, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW GetParentDirectory(::StringW inPath);

  /// @brief Method GetSavedHoudiniPath, addr 0x3a3feb4, size 0x18c, virtual false, abstract: false, final false
  static inline ::StringW GetSavedHoudiniPath();

  /// @brief Method IsPathRooted, addr 0x3a40808, size 0x58, virtual false, abstract: false, final false
  static inline bool IsPathRooted(::StringW inPath);

  /// @brief Method LoadFileIntoMemory, addr 0x3a40ccc, size 0x21c, virtual false, abstract: false, final false
  static inline bool LoadFileIntoMemory(::StringW path, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer);

  static inline ::HoudiniEngineUnity::HEU_Platform* New_ctor();

  /// @brief Method ReadAllText, addr 0x3a409b0, size 0x184, virtual false, abstract: false, final false
  static inline ::StringW ReadAllText(::StringW path);

  /// @brief Method SetHapiClientName, addr 0x3a3fde0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetHapiClientName();

  /// @brief Method SetHoudiniEnginePath, addr 0x3a3fe3c, size 0x4, virtual false, abstract: false, final false
  static inline void SetHoudiniEnginePath();

  /// @brief Method TrimLastDirectorySeparator, addr 0x3a40708, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW TrimLastDirectorySeparator(::StringW inPath);

  /// @brief Method WriteAllText, addr 0x3a40868, size 0x148, virtual false, abstract: false, final false
  static inline bool WriteAllText(::StringW path, ::StringW text);

  /// @brief Method WriteBytes, addr 0x3a40860, size 0x8, virtual false, abstract: false, final false
  static inline void WriteBytes(::StringW path, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x3a40ee8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF__lastErrorMsg();

  static inline ::StringW getStaticF__libPath();

  static inline bool getStaticF__pathSet();

  /// @brief Method get_DirectorySeparator, addr 0x3a40700, size 0x8, virtual false, abstract: false, final false
  static inline char16_t get_DirectorySeparator();

  /// @brief Method get_DirectorySeparatorStr, addr 0x3a3a774, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_DirectorySeparatorStr();

  /// @brief Method get_IsPathSet, addr 0x3a3fd84, size 0x58, virtual false, abstract: false, final false
  static inline bool get_IsPathSet();

  /// @brief Method get_LibPath, addr 0x3a3fd2c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW get_LibPath();

  static inline void setStaticF__lastErrorMsg(::StringW value);

  static inline void setStaticF__libPath(::StringW value);

  static inline void setStaticF__pathSet(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Platform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_Platform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Platform(HEU_Platform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Platform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Platform(HEU_Platform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11661 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Platform, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Platform);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Platform*, "HoudiniEngineUnity", "HEU_Platform");
