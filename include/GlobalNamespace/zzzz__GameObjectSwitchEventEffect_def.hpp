#pragma once
// IWYU pragma private; include "GlobalNamespace/GameObjectSwitchEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameObjectSwitchEventEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GameObjectSwitchEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameObjectSwitchEventEffect);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameObjectSwitchEventEffect
class CORDL_TYPE GameObjectSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activateOnBoostObjects, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__activateOnBoostObjects,
                      put = __cordl_internal_set__activateOnBoostObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>
      _activateOnBoostObjects;

  /// @brief Field _beatmapCallbacksController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _deactivateOnBoostObjects, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__deactivateOnBoostObjects,
                      put = __cordl_internal_set__deactivateOnBoostObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>
      _deactivateOnBoostObjects;

  /// @brief Method HandleBeatmapEvent, addr 0x3b91840, size 0x18, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::GameObjectSwitchEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b91824, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b91778, size 0xac, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ToggleObjects, addr 0x3b91858, size 0xc4, virtual false, abstract: false, final false
  inline void ToggleObjects(bool isBoostOn);

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__activateOnBoostObjects() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__activateOnBoostObjects();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__deactivateOnBoostObjects() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__deactivateOnBoostObjects();

  constexpr void __cordl_internal_set__activateOnBoostObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__deactivateOnBoostObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  /// @brief Method .ctor, addr 0x3b9191c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObjectSwitchEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameObjectSwitchEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObjectSwitchEventEffect(GameObjectSwitchEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectSwitchEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObjectSwitchEventEffect(GameObjectSwitchEventEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4261 };

  /// @brief Field _deactivateOnBoostObjects, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____deactivateOnBoostObjects;

  /// @brief Field _activateOnBoostObjects, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____activateOnBoostObjects;

  /// @brief Field _beatmapCallbacksController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameObjectSwitchEventEffect, ____deactivateOnBoostObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectSwitchEventEffect, ____activateOnBoostObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectSwitchEventEffect, ____beatmapCallbacksController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectSwitchEventEffect, ____beatmapDataCallbackWrapper) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameObjectSwitchEventEffect, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameObjectSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameObjectSwitchEventEffect*, "", "GameObjectSwitchEventEffect");
