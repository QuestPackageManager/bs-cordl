#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Player.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Player)
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct Player;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::Player);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.Player
struct CORDL_TYPE Player {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>"
  constexpr operator ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*();

  /// @brief Method Equals, addr 0x58ce98c, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::Meta::XR::MultiplayerBlocks::Colocation::Player other);

  /// @brief Method .ctor, addr 0x58cc8d0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t playerId, uint64_t oculusId, uint32_t colocationGroupId);

  /// @brief Convert to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>"
  constexpr ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>* i___System__IEquatable_1___Meta__XR__MultiplayerBlocks__Colocation__Player_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Player();

  // Ctor Parameters [CppParam { name: "playerId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "oculusId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "colocationGroupId", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr Player(uint64_t playerId, uint64_t oculusId, uint32_t colocationGroupId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20396 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field playerId, offset: 0x0, size: 0x8, def value: None
  uint64_t playerId;

  /// @brief Field oculusId, offset: 0x8, size: 0x8, def value: None
  uint64_t oculusId;

  /// @brief Field colocationGroupId, offset: 0x10, size: 0x4, def value: None
  uint32_t colocationGroupId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Player, playerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Player, oculusId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Player, colocationGroupId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::Player, 0x18>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::Player, "Meta.XR.MultiplayerBlocks.Colocation", "Player");
