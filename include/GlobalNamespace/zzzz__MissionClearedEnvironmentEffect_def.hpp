#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionClearedEnvironmentEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionClearedEnvironmentEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionClearedEnvironmentEffect);
// Type: ::MissionClearedEnvironmentEffect
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4956))
// CS Name: ::MissionClearedEnvironmentEffect*
class CORDL_TYPE MissionClearedEnvironmentEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionObjectiveCheckersManager, offset 0x18, size 0x8
  __declspec(property(get = __get__missionObjectiveCheckersManager, put = __set__missionObjectiveCheckersManager))::GlobalNamespace::MissionObjectiveCheckersManager* _missionObjectiveCheckersManager;

  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  constexpr ::GlobalNamespace::MissionObjectiveCheckersManager*& __get__missionObjectiveCheckersManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveCheckersManager*> const& __get__missionObjectiveCheckersManager() const;

  constexpr void __set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  /// @brief Method Awake, addr 0x23ae7c4, size 0x8c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x23ae850, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleMissionObjectiveCheckersManagerObjectiveWasCleared, addr 0x23ae8dc, size 0x7c, virtual false, abstract: false, final false
  inline void HandleMissionObjectiveCheckersManagerObjectiveWasCleared();

  static inline ::GlobalNamespace::MissionClearedEnvironmentEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23ae958, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionClearedEnvironmentEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionClearedEnvironmentEffect(MissionClearedEnvironmentEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionClearedEnvironmentEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionClearedEnvironmentEffect(MissionClearedEnvironmentEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionClearedEnvironmentEffect();

public:
  /// @brief Field _missionObjectiveCheckersManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionObjectiveCheckersManager* ____missionObjectiveCheckersManager;

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionClearedEnvironmentEffect, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionClearedEnvironmentEffect, ____missionObjectiveCheckersManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionClearedEnvironmentEffect, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionClearedEnvironmentEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionClearedEnvironmentEffect*, "", "MissionClearedEnvironmentEffect");
