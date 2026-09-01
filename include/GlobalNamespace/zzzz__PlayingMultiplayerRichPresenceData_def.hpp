#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayingMultiplayerRichPresenceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__InMultiplayerRichPresenceData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayingMultiplayerRichPresenceData)
// Forward declare root types
namespace GlobalNamespace {
class PlayingMultiplayerRichPresenceData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayingMultiplayerRichPresenceData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayingMultiplayerRichPresenceData*, "", "PlayingMultiplayerRichPresenceData");
// Dependencies InMultiplayerRichPresenceData
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayingMultiplayerRichPresenceData
class CORDL_TYPE PlayingMultiplayerRichPresenceData : public ::GlobalNamespace::InMultiplayerRichPresenceData {
public:
  // Declarations
  static inline ::GlobalNamespace::PlayingMultiplayerRichPresenceData* New_ctor(bool atMaxPartySize);

  /// @brief Method .ctor, addr 0x58ff590, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(bool atMaxPartySize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayingMultiplayerRichPresenceData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayingMultiplayerRichPresenceData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayingMultiplayerRichPresenceData(PlayingMultiplayerRichPresenceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayingMultiplayerRichPresenceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayingMultiplayerRichPresenceData(PlayingMultiplayerRichPresenceData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6645 };

  /// @brief Field kPlayingMultiplayerLobbyRichPresenceLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayingMultiplayerLobbyRichPresenceLocalizationKey{ u"PLAYING_MULTIPLAYER_PRESENCE" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlayingMultiplayerRichPresenceData) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
