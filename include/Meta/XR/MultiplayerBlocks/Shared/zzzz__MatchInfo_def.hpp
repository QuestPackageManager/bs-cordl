#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/MatchInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MatchInfo)
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
struct MatchInfo;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::MatchInfo);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.MatchInfo
struct CORDL_TYPE MatchInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x585e5e8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW roomId, ::StringW roomPassword, ::StringW extra);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchInfo();

  // Ctor Parameters [CppParam { name: "RoomId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "RoomPassword", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "Extra", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr MatchInfo(::StringW RoomId, ::StringW RoomPassword, ::StringW Extra) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20324 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field RoomId, offset: 0x0, size: 0x8, def value: None
  ::StringW RoomId;

  /// @brief Field RoomPassword, offset: 0x8, size: 0x8, def value: None
  ::StringW RoomPassword;

  /// @brief Field Extra, offset: 0x10, size: 0x8, def value: None
  ::StringW Extra;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::MatchInfo, RoomId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::MatchInfo, RoomPassword) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::MatchInfo, Extra) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::MatchInfo, 0x18>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::MatchInfo, "Meta.XR.MultiplayerBlocks.Shared", "MatchInfo");
