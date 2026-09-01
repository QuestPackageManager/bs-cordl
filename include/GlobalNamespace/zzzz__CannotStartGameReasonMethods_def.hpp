#pragma once
// IWYU pragma private; include "GlobalNamespace\CannotStartGameReasonMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CannotStartGameReasonMethods)
namespace GlobalNamespace {
struct CannotStartGameReason;
}
// Forward declare root types
namespace GlobalNamespace {
class CannotStartGameReasonMethods;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CannotStartGameReasonMethods*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CannotStartGameReasonMethods*, "", "CannotStartGameReasonMethods");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CannotStartGameReasonMethods
class CORDL_TYPE CannotStartGameReasonMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method LocalizedKey, addr 0x373671c, size 0xfc, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15086 };

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
static_assert(sizeof(::GlobalNamespace::CannotStartGameReasonMethods) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
