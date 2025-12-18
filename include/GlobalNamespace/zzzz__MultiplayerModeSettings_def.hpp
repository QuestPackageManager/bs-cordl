#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerModeSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerModeSettings)
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerModeSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerModeSettings);
// Dependencies BeatmapDifficultyMask, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerModeSettings
class CORDL_TYPE MultiplayerModeSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field createServerPlayersCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_createServerPlayersCount, put = __cordl_internal_set_createServerPlayersCount)) int32_t createServerPlayersCount;

  /// @brief Field quickPlayBeatmapDifficulty, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_quickPlayBeatmapDifficulty,
                      put = __cordl_internal_set_quickPlayBeatmapDifficulty)) ::GlobalNamespace::BeatmapDifficultyMask quickPlayBeatmapDifficulty;

  /// @brief Field quickPlayEnableLevelSelection, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_quickPlayEnableLevelSelection, put = __cordl_internal_set_quickPlayEnableLevelSelection)) bool quickPlayEnableLevelSelection;

  /// @brief Field quickPlaySongPackMaskSerializedName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_quickPlaySongPackMaskSerializedName, put = __cordl_internal_set_quickPlaySongPackMaskSerializedName)) ::StringW quickPlaySongPackMaskSerializedName;

  static inline ::GlobalNamespace::MultiplayerModeSettings* New_ctor();

  constexpr int32_t const& __cordl_internal_get_createServerPlayersCount() const;

  constexpr int32_t& __cordl_internal_get_createServerPlayersCount();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get_quickPlayBeatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get_quickPlayBeatmapDifficulty();

  constexpr bool const& __cordl_internal_get_quickPlayEnableLevelSelection() const;

  constexpr bool& __cordl_internal_get_quickPlayEnableLevelSelection();

  constexpr ::StringW const& __cordl_internal_get_quickPlaySongPackMaskSerializedName() const;

  constexpr ::StringW& __cordl_internal_get_quickPlaySongPackMaskSerializedName();

  constexpr void __cordl_internal_set_createServerPlayersCount(int32_t value);

  constexpr void __cordl_internal_set_quickPlayBeatmapDifficulty(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr void __cordl_internal_set_quickPlayEnableLevelSelection(bool value);

  constexpr void __cordl_internal_set_quickPlaySongPackMaskSerializedName(::StringW value);

  /// @brief Method .ctor, addr 0x363fdb4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerModeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerModeSettings(MultiplayerModeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerModeSettings(MultiplayerModeSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15093 };

  /// @brief Field createServerPlayersCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___createServerPlayersCount;

  /// @brief Field quickPlayBeatmapDifficulty, offset: 0x14, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ___quickPlayBeatmapDifficulty;

  /// @brief Field quickPlaySongPackMaskSerializedName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___quickPlaySongPackMaskSerializedName;

  /// @brief Field quickPlayEnableLevelSelection, offset: 0x20, size: 0x1, def value: None
  bool ___quickPlayEnableLevelSelection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerModeSettings, ___createServerPlayersCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSettings, ___quickPlayBeatmapDifficulty) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSettings, ___quickPlaySongPackMaskSerializedName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSettings, ___quickPlayEnableLevelSelection) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerModeSettings, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerModeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSettings*, "", "MultiplayerModeSettings");
