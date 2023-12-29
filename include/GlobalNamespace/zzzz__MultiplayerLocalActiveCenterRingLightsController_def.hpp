#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLocalActiveCenterRingLightsController)
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace GlobalNamespace {
class MultiplayerCenterResizeController;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5251))
// CS Name: ::MultiplayerLocalActiveCenterRingLightsController*
class CORDL_TYPE MultiplayerLocalActiveCenterRingLightsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _verticalLinePositions, offset 0x18, size 0x8
  __declspec(property(get = __get__verticalLinePositions, put = __set__verticalLinePositions))::ArrayW<float_t, ::Array<float_t>*> _verticalLinePositions;

  /// @brief Field _horizontalLines, offset 0x20, size 0x8
  __declspec(property(get = __get__horizontalLines, put = __set__horizontalLines))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> _horizontalLines;

  /// @brief Field _centerResizeController, offset 0x28, size 0x8
  __declspec(property(get = __get__centerResizeController, put = __set__centerResizeController))::GlobalNamespace::MultiplayerCenterResizeController* _centerResizeController;

  /// @brief Field _layoutProvider, offset 0x30, size 0x8
  __declspec(property(get = __get__layoutProvider, put = __set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _beatmapObjectSpawnCenter, offset 0x38, size 0x8
  __declspec(property(get = __get__beatmapObjectSpawnCenter, put = __set__beatmapObjectSpawnCenter))::GlobalNamespace::BeatmapObjectSpawnCenter* _beatmapObjectSpawnCenter;

  /// @brief Field _edgeDistanceFromCenterCalculated, offset 0x40, size 0x1
  __declspec(property(get = __get__edgeDistanceFromCenterCalculated, put = __set__edgeDistanceFromCenterCalculated)) bool _edgeDistanceFromCenterCalculated;

  /// @brief Field _spawnCenterDistanceFound, offset 0x41, size 0x1
  __declspec(property(get = __get__spawnCenterDistanceFound, put = __set__spawnCenterDistanceFound)) bool _spawnCenterDistanceFound;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__verticalLinePositions();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__verticalLinePositions() const;

  constexpr void __set__verticalLinePositions(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get__horizontalLines();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get__horizontalLines() const;

  constexpr void __set__horizontalLines(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::GlobalNamespace::MultiplayerCenterResizeController*& __get__centerResizeController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerCenterResizeController*> const& __get__centerResizeController() const;

  constexpr void __set__centerResizeController(::GlobalNamespace::MultiplayerCenterResizeController* value);

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __get__layoutProvider() const;

  constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr ::GlobalNamespace::BeatmapObjectSpawnCenter*& __get__beatmapObjectSpawnCenter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnCenter*> const& __get__beatmapObjectSpawnCenter() const;

  constexpr void __set__beatmapObjectSpawnCenter(::GlobalNamespace::BeatmapObjectSpawnCenter* value);

  constexpr bool& __get__edgeDistanceFromCenterCalculated();

  constexpr bool const& __get__edgeDistanceFromCenterCalculated() const;

  constexpr void __set__edgeDistanceFromCenterCalculated(bool value);

  constexpr bool& __get__spawnCenterDistanceFound();

  constexpr bool const& __get__spawnCenterDistanceFound() const;

  constexpr void __set__spawnCenterDistanceFound(bool value);

  /// @brief Method Start addr 0x20f67d8 size 0x198 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x20f69a0 size 0x154 virtual false final false
  inline void OnDestroy();

  /// @brief Method TryResize addr 0x20f6af4 size 0x18 virtual false final false
  inline void TryResize();

  /// @brief Method Resize addr 0x20f6b0c size 0x2bc virtual false final false
  inline void Resize();

  /// @brief Method HandleSpawnCenterDistanceWasFound addr 0x20f6988 size 0x18 virtual false final false
  inline void HandleSpawnCenterDistanceWasFound(float_t spawnCenterDistance);

  /// @brief Method HandleEdgeDistanceFromCenterWasCalculated addr 0x20f6970 size 0x18 virtual false final false
  inline void HandleEdgeDistanceFromCenterWasCalculated(float_t constructEdgeDistanceFromCenter);

  static inline ::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController* New_ctor();

  /// @brief Method .ctor addr 0x20f6dc8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveCenterRingLightsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActiveCenterRingLightsController(MultiplayerLocalActiveCenterRingLightsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveCenterRingLightsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActiveCenterRingLightsController(MultiplayerLocalActiveCenterRingLightsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActiveCenterRingLightsController();

public:
  /// @brief Field _verticalLinePositions, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____verticalLinePositions;

  /// @brief Field _horizontalLines, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ____horizontalLines;

  /// @brief Field _centerResizeController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerCenterResizeController* ____centerResizeController;

  /// @brief Field _layoutProvider, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _beatmapObjectSpawnCenter, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectSpawnCenter* ____beatmapObjectSpawnCenter;

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
