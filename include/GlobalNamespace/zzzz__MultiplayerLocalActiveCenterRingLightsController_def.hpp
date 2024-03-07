#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLocalActiveCenterRingLightsController)
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace GlobalNamespace {
class MultiplayerCenterResizeController;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActiveCenterRingLightsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController);
// Type: ::MultiplayerLocalActiveCenterRingLightsController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 66, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalActiveCenterRingLightsController*
class CORDL_TYPE MultiplayerLocalActiveCenterRingLightsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapObjectSpawnCenter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnCenter,
                      put = __cordl_internal_set__beatmapObjectSpawnCenter))::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> _beatmapObjectSpawnCenter;

  /// @brief Field _centerResizeController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__centerResizeController,
                      put = __cordl_internal_set__centerResizeController))::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> _centerResizeController;

  /// @brief Field _edgeDistanceFromCenterCalculated, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__edgeDistanceFromCenterCalculated, put = __cordl_internal_set__edgeDistanceFromCenterCalculated)) bool _edgeDistanceFromCenterCalculated;

  /// @brief Field _horizontalLines, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__horizontalLines,
                      put = __cordl_internal_set__horizontalLines))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> _horizontalLines;

  /// @brief Field _layoutProvider, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__layoutProvider, put = __cordl_internal_set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _spawnCenterDistanceFound, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__spawnCenterDistanceFound, put = __cordl_internal_set__spawnCenterDistanceFound)) bool _spawnCenterDistanceFound;

  /// @brief Field _verticalLinePositions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__verticalLinePositions, put = __cordl_internal_set__verticalLinePositions))::ArrayW<float_t, ::Array<float_t>*> _verticalLinePositions;

  /// @brief Method HandleEdgeDistanceFromCenterWasCalculated, addr 0x24cdbcc, size 0x18, virtual false, abstract: false, final false
  inline void HandleEdgeDistanceFromCenterWasCalculated(float_t constructEdgeDistanceFromCenter);

  /// @brief Method HandleSpawnCenterDistanceWasFound, addr 0x24cdbe4, size 0x18, virtual false, abstract: false, final false
  inline void HandleSpawnCenterDistanceWasFound(float_t spawnCenterDistance);

  static inline ::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController* New_ctor();

  /// @brief Method OnDestroy, addr 0x24cdbfc, size 0x154, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Resize, addr 0x24cdd68, size 0x2bc, virtual false, abstract: false, final false
  inline void Resize();

  /// @brief Method Start, addr 0x24cda34, size 0x198, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryResize, addr 0x24cdd50, size 0x18, virtual false, abstract: false, final false
  inline void TryResize();

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> const& __cordl_internal_get__beatmapObjectSpawnCenter() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>& __cordl_internal_get__beatmapObjectSpawnCenter();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> const& __cordl_internal_get__centerResizeController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerCenterResizeController>& __cordl_internal_get__centerResizeController();

  constexpr bool const& __cordl_internal_get__edgeDistanceFromCenterCalculated() const;

  constexpr bool& __cordl_internal_get__edgeDistanceFromCenterCalculated();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__horizontalLines() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__horizontalLines();

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __cordl_internal_get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __cordl_internal_get__layoutProvider() const;

  constexpr bool const& __cordl_internal_get__spawnCenterDistanceFound() const;

  constexpr bool& __cordl_internal_get__spawnCenterDistanceFound();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__verticalLinePositions() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__verticalLinePositions();

  constexpr void __cordl_internal_set__beatmapObjectSpawnCenter(::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> value);

  constexpr void __cordl_internal_set__centerResizeController(::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> value);

  constexpr void __cordl_internal_set__edgeDistanceFromCenterCalculated(bool value);

  constexpr void __cordl_internal_set__horizontalLines(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr void __cordl_internal_set__spawnCenterDistanceFound(bool value);

  constexpr void __cordl_internal_set__verticalLinePositions(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method .ctor, addr 0x24ce024, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActiveCenterRingLightsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveCenterRingLightsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActiveCenterRingLightsController(MultiplayerLocalActiveCenterRingLightsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveCenterRingLightsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActiveCenterRingLightsController(MultiplayerLocalActiveCenterRingLightsController const&) = delete;

  /// @brief Field _verticalLinePositions, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____verticalLinePositions;

  /// @brief Field _horizontalLines, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____horizontalLines;

  /// @brief Field _centerResizeController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> ____centerResizeController;

  /// @brief Field _layoutProvider, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _beatmapObjectSpawnCenter, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> ____beatmapObjectSpawnCenter;

  /// @brief Field _edgeDistanceFromCenterCalculated, offset: 0x40, size: 0x1, def value: None
  bool ____edgeDistanceFromCenterCalculated;

  /// @brief Field _spawnCenterDistanceFound, offset: 0x41, size: 0x1, def value: None
  bool ____spawnCenterDistanceFound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController, ____verticalLinePositions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController, ____horizontalLines) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController, ____centerResizeController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController, ____layoutProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController, ____beatmapObjectSpawnCenter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController, ____edgeDistanceFromCenterCalculated) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController, ____spawnCenterDistanceFound) == 0x41, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController*, "", "MultiplayerLocalActiveCenterRingLightsController");
