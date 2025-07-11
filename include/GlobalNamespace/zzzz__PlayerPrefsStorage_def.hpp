#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPrefsStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerPrefsStorage)
// Forward declare root types
namespace GlobalNamespace {
class PlayerPrefsStorage;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerPrefsStorage);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerPrefsStorage
class CORDL_TYPE PlayerPrefsStorage : public ::System::Object {
public:
  // Declarations
  /// @brief Method FileExists, addr 0x22a5e84, size 0xc, virtual false, abstract: false, final false
  inline bool FileExists(::StringW filePath);

  /// @brief Method Initialize, addr 0x22a5e00, size 0x4, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method LoadFile, addr 0x22a5e04, size 0x80, virtual false, abstract: false, final false
  inline bool LoadFile(::StringW filePath, ::ByRef<::StringW> value);

  static inline ::GlobalNamespace::PlayerPrefsStorage* New_ctor();

  /// @brief Method .ctor, addr 0x22a5e90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerPrefsStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerPrefsStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerPrefsStorage(PlayerPrefsStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerPrefsStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerPrefsStorage(PlayerPrefsStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18914 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerPrefsStorage, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerPrefsStorage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerPrefsStorage*, "", "PlayerPrefsStorage");
