#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__InMultiplayerRichPresenceData_def.hpp"
CORDL_MODULE_EXPORT(PlayingMultiplayerRichPresenceData)
// Forward declare root types
namespace GlobalNamespace {
class PlayingMultiplayerRichPresenceData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayingMultiplayerRichPresenceData);
// Type: ::PlayingMultiplayerRichPresenceData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayingMultiplayerRichPresenceData*
class CORDL_TYPE PlayingMultiplayerRichPresenceData : public ::GlobalNamespace::InMultiplayerRichPresenceData {
public:
  // Declarations
  static inline ::GlobalNamespace::PlayingMultiplayerRichPresenceData* New_ctor(bool atMaxPartySize);

  /// @brief Method .ctor, addr 0x2405e40, size 0x8c, virtual false, abstract: false, final false
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

  /// @brief Field kPlayingMultiplayerLobbyRichPresenceLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayingMultiplayerLobbyRichPresenceLocalizationKey{ u"PLAYING_MULTIPLAYER_PRESENCE" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayingMultiplayerRichPresenceData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayingMultiplayerRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayingMultiplayerRichPresenceData*, "", "PlayingMultiplayerRichPresenceData");
