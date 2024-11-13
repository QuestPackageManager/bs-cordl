#pragma once
// IWYU pragma private; include "GlobalNamespace/LastUsedBeatmapDataCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LastUsedBeatmapDataCache)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IEnvironmentInfo;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
// Forward declare root types
namespace GlobalNamespace {
struct LastUsedBeatmapDataCache;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LastUsedBeatmapDataCache);
// Type: ::LastUsedBeatmapDataCache
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LastUsedBeatmapDataCache
struct CORDL_TYPE LastUsedBeatmapDataCache {
public:
  // Declarations
  /// @brief Method AreRequiredGameplayModifiersSame, addr 0x2680a94, size 0x1c, virtual false, abstract: false, final false
  static inline bool AreRequiredGameplayModifiersSame(::GlobalNamespace::GameplayModifiers* first, ::GlobalNamespace::GameplayModifiers* second);

  /// @brief Method AreRequiredPlayerSettingsSame, addr 0x2680ab0, size 0x1c, virtual false, abstract: false, final false
  static inline bool AreRequiredPlayerSettingsSame(::GlobalNamespace::PlayerSpecificSettings* first, ::GlobalNamespace::PlayerSpecificSettings* second);

  /// @brief Method AreSameBeatmapDataCached, addr 0x26809d4, size 0xc0, virtual false, abstract: false, final false
  inline bool AreSameBeatmapDataCached(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                       ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief Method .ctor, addr 0x26809b8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LastUsedBeatmapDataCache();

  // Ctor Parameters [CppParam { name: "cachedReadonlyBeatmapData", ty: "::GlobalNamespace::IReadonlyBeatmapData*", modifiers: "", def_value: None }, CppParam { name: "_beatmapKey", ty:
  // "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None }, CppParam { name: "_environmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: None }, CppParam {
  // name: "_gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: None }, CppParam { name: "_playerSpecificSettings", ty:
  // "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None }]
  constexpr LastUsedBeatmapDataCache(::GlobalNamespace::IReadonlyBeatmapData* cachedReadonlyBeatmapData, ::GlobalNamespace::BeatmapKey _beatmapKey,
                                     ::GlobalNamespace::IEnvironmentInfo* _environmentInfo, ::GlobalNamespace::GameplayModifiers* _gameplayModifiers,
                                     ::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings) noexcept;

  /// @brief Field cachedReadonlyBeatmapData, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* cachedReadonlyBeatmapData;

  /// @brief Field _beatmapKey, offset: 0x8, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _environmentInfo, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* _environmentInfo;

  /// @brief Field _gameplayModifiers, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _playerSpecificSettings, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12841 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LastUsedBeatmapDataCache, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LastUsedBeatmapDataCache, cachedReadonlyBeatmapData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LastUsedBeatmapDataCache, _beatmapKey) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LastUsedBeatmapDataCache, _environmentInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LastUsedBeatmapDataCache, _gameplayModifiers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LastUsedBeatmapDataCache, _playerSpecificSettings) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LastUsedBeatmapDataCache, "", "LastUsedBeatmapDataCache");
