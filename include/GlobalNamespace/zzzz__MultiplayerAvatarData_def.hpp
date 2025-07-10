#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerAvatarData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerAvatarData)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerAvatarData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerAvatarData
struct CORDL_TYPE MultiplayerAvatarData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x27213ec, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t avatarTypeIdentifierHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerAvatarData();

  // Ctor Parameters [CppParam { name: "avatarTypeIdentifierHash", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "",
  // def_value: None }]
  constexpr MultiplayerAvatarData(uint32_t avatarTypeIdentifierHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17005 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field avatarTypeIdentifierHash, offset: 0x0, size: 0x4, def value: None
  uint32_t avatarTypeIdentifierHash;

  /// @brief Field data, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, avatarTypeIdentifierHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarData, data) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerAvatarData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerAvatarData, "", "MultiplayerAvatarData");
