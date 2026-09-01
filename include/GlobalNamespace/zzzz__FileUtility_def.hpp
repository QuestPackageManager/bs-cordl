#pragma once
// IWYU pragma private; include "GlobalNamespace\FileUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FileUtility)
// Forward declare root types
namespace GlobalNamespace {
class FileUtility;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FileUtility*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FileUtility*, "", "FileUtility");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FileUtility
class CORDL_TYPE FileUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetPlatformPersistentDataPath, addr 0x3315f24, size 0xdc, virtual false, abstract: false, final false
  static inline ::StringW GetPlatformPersistentDataPath(bool local);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileUtility(FileUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileUtility(FileUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23271 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FileUtility) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
