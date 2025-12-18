#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardGameplaySceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(StandardGameplaySceneSetupData)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardGameplaySceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardGameplaySceneSetupData);
// Dependencies BeatmapKey, SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardGameplaySceneSetupData
class CORDL_TYPE StandardGameplaySceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field autoRestart, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_autoRestart, put = __cordl_internal_set_autoRestart)) bool autoRestart;

  /// @brief Field beatmapKey, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field beatmapLevel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel)) ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field gameplayModifiers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  static inline ::GlobalNamespace::StandardGameplaySceneSetupData* New_ctor(bool autoRestart, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                            ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  constexpr bool const& __cordl_internal_get_autoRestart() const;

  constexpr bool& __cordl_internal_get_autoRestart();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get_beatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr void __cordl_internal_set_autoRestart(bool value);

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method .ctor, addr 0x577c5a8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool autoRestart, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardGameplaySceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardGameplaySceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardGameplaySceneSetupData(StandardGameplaySceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardGameplaySceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardGameplaySceneSetupData(StandardGameplaySceneSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6818 };

  /// @brief Field autoRestart, offset: 0x10, size: 0x1, def value: None
  bool ___autoRestart;

  /// @brief Field beatmapKey, offset: 0x18, size: 0x20, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field beatmapLevel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  /// @brief Field gameplayModifiers, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___autoRestart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___beatmapKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___beatmapLevel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___gameplayModifiers) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardGameplaySceneSetupData, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardGameplaySceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardGameplaySceneSetupData*, "", "StandardGameplaySceneSetupData");
