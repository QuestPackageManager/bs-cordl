#pragma once
// IWYU pragma private; include "GlobalNamespace/CannotStartGameReasonMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CannotStartGameReasonMethods)
namespace GlobalNamespace {
struct CannotStartGameReason;
}
// Forward declare root types
namespace GlobalNamespace {
class CannotStartGameReasonMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CannotStartGameReasonMethods);
// Type: ::CannotStartGameReasonMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CannotStartGameReasonMethods*
class CORDL_TYPE CannotStartGameReasonMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method LocalizedKey, addr 0x14d5b4c, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW LocalizedKey(::GlobalNamespace::CannotStartGameReason cannotStartGameReason);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CannotStartGameReasonMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CannotStartGameReasonMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CannotStartGameReasonMethods(CannotStartGameReasonMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CannotStartGameReasonMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CannotStartGameReasonMethods(CannotStartGameReasonMethods const&) = delete;

  /// @brief Field kAllPlayersNotInLobby offset 0xffffffff size 0x8
  static constexpr ::ConstString kAllPlayersNotInLobby{ u"LABEL_CANT_START_GAME_ALL_PLAYERS_NOT_IN_LOBBY" };

  /// @brief Field kAllPlayersSpectating offset 0xffffffff size 0x8
  static constexpr ::ConstString kAllPlayersSpectating{ u"LABEL_CANT_START_GAME_ALL_PLAYERS_SPECTATING" };

  /// @brief Field kDoNotOwnSong offset 0xffffffff size 0x8
  static constexpr ::ConstString kDoNotOwnSong{ u"LABEL_CANT_START_GAME_DO_NOT_OWN_SONG" };

  /// @brief Field kNoSongSelected offset 0xffffffff size 0x8
  static constexpr ::ConstString kNoSongSelected{ u"LABEL_CANT_START_GAME_NO_SONG_SELECTED" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CannotStartGameReasonMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CannotStartGameReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CannotStartGameReasonMethods*, "", "CannotStartGameReasonMethods");
