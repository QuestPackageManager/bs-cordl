#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelAnalytics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelAnalytics)
namespace BeatSaber::Analytics::Gameplay {
class IGameplayEventsDispatcher;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class IBlockLevelGameplayAnalyticsEventsCache;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelAnalytics;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StandardLevelAnalytics*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StandardLevelAnalytics*, "", "StandardLevelAnalytics");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelAnalytics
class CORDL_TYPE StandardLevelAnalytics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _analyticsModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _blockLevelGameplayAnalyticsEventsCache, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__blockLevelGameplayAnalyticsEventsCache,
                      put = __cordl_internal_set__blockLevelGameplayAnalyticsEventsCache)) ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* _blockLevelGameplayAnalyticsEventsCache;

  /// @brief Field _gameplayEventsDispatcher, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayEventsDispatcher,
                      put = __cordl_internal_set__gameplayEventsDispatcher)) ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* _gameplayEventsDispatcher;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData)) ::GlobalNamespace::StandardLevelScenesTransitionSetupData* _standardLevelScenesTransitionSetupData;

  /// @brief Method HandleStandardLevelDidFinishEvent, addr 0x58b5ca0, size 0x934, virtual false, abstract: false, final false
  inline void HandleStandardLevelDidFinishEvent(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                                ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::StandardLevelAnalytics* New_ctor();

  /// @brief Method OnDestroy, addr 0x58b5c10, size 0x90, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x58b5b80, size 0x90, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::IAnalyticsModel* const& __cordl_internal_get__analyticsModel() const;

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* const& __cordl_internal_get__blockLevelGameplayAnalyticsEventsCache() const;

  constexpr ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*& __cordl_internal_get__blockLevelGameplayAnalyticsEventsCache();

  constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* const& __cordl_internal_get__gameplayEventsDispatcher() const;

  constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*& __cordl_internal_get__gameplayEventsDispatcher();

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const& __cordl_internal_get__standardLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& __cordl_internal_get__standardLevelScenesTransitionSetupData();

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__blockLevelGameplayAnalyticsEventsCache(::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* value);

  constexpr void __cordl_internal_set__gameplayEventsDispatcher(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* value);

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value);

  /// @brief Method .ctor, addr 0x58b65d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelAnalytics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelAnalytics(StandardLevelAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelAnalytics(StandardLevelAnalytics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5548 };

  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupData* ____standardLevelScenesTransitionSetupData;

  /// @brief Field _analyticsModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _gameplayEventsDispatcher, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* ____gameplayEventsDispatcher;

  /// @brief Field _blockLevelGameplayAnalyticsEventsCache, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* ____blockLevelGameplayAnalyticsEventsCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelAnalytics, ____standardLevelScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelAnalytics, ____analyticsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelAnalytics, ____gameplayEventsDispatcher) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelAnalytics, ____blockLevelGameplayAnalyticsEventsCache) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StandardLevelAnalytics) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
