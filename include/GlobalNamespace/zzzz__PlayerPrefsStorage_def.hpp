#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPrefsStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerPrefsStorage)
// Forward declare root types
namespace GlobalNamespace {
class PlayerPrefsStorage;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerPrefsStorage);
// Type: ::PlayerPrefsStorage
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerPrefsStorage*
class CORDL_TYPE PlayerPrefsStorage : public ::System::Object {
public:
  // Declarations
  /// @brief Method FileExists, addr 0x1088288, size 0xc, virtual false, abstract: false, final false
  inline bool FileExists(::StringW filePath);

  /// @brief Method Initialize, addr 0x1088204, size 0x4, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method LoadFile, addr 0x1088208, size 0x80, virtual false, abstract: false, final false
  inline bool LoadFile(::StringW filePath, ByRef<::StringW> value);

  static inline ::GlobalNamespace::PlayerPrefsStorage* New_ctor();

  /// @brief Method .ctor, addr 0x1088294, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerPrefsStorage, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerPrefsStorage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerPrefsStorage*, "", "PlayerPrefsStorage");
