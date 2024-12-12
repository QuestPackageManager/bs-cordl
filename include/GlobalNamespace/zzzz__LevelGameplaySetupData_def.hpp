#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelGameplaySetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LevelGameplaySetupData)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelGameplaySetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelGameplaySetupData);
// Dependencies BeatmapKey, ILevelGameplaySetupData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelGameplaySetupData
class CORDL_TYPE LevelGameplaySetupData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapKey, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey)) ::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _gameplayModifiers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  __declspec(property(get = get_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  __declspec(property(get = get_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Convert operator to "::GlobalNamespace::ILevelGameplaySetupData"
  constexpr operator ::GlobalNamespace::ILevelGameplaySetupData*() noexcept;

  /// @brief Method ClearGameplaySetupData, addr 0x26d9e88, size 0x68, virtual false, abstract: false, final false
  inline void ClearGameplaySetupData();

  static inline ::GlobalNamespace::LevelGameplaySetupData* New_ctor();

  static inline ::GlobalNamespace::LevelGameplaySetupData* New_ctor(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method SetBeatmapKey, addr 0x26d9ef0, size 0x14, virtual false, abstract: false, final false
  inline void SetBeatmapKey(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method SetGameplayModifiers, addr 0x26d9f04, size 0x78, virtual false, abstract: false, final false
  inline void SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr void __cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method .ctor, addr 0x26d9d70, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26d9dd8, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method get_beatmapKey, addr 0x26d9d54, size 0x14, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_gameplayModifiers, addr 0x26d9d68, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Convert to "::GlobalNamespace::ILevelGameplaySetupData"
  constexpr ::GlobalNamespace::ILevelGameplaySetupData* i___GlobalNamespace__ILevelGameplaySetupData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelGameplaySetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelGameplaySetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelGameplaySetupData(LevelGameplaySetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelGameplaySetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelGameplaySetupData(LevelGameplaySetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13097 };

  /// @brief Field _beatmapKey, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey;

  /// @brief Field _gameplayModifiers, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelGameplaySetupData, ____beatmapKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelGameplaySetupData, ____gameplayModifiers) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelGameplaySetupData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelGameplaySetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelGameplaySetupData*, "", "LevelGameplaySetupData");
