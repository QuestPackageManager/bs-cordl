#pragma once
// IWYU pragma private; include "GlobalNamespace/WaypointsTestGameplayManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WaypointsTestGameplayManager)
namespace GlobalNamespace {
class BTSCharacterSpawnController;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class StandardGameplaySceneSetupData;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class WaypointsTestGameplayManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WaypointsTestGameplayManager);
// Type: ::WaypointsTestGameplayManager
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::WaypointsTestGameplayManager*
class CORDL_TYPE WaypointsTestGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _biggestAcceleration, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__biggestAcceleration, put = __cordl_internal_set__biggestAcceleration)) float_t _biggestAcceleration;

  /// @brief Field _biggestAccelerationSongTime, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__biggestAccelerationSongTime, put = __cordl_internal_set__biggestAccelerationSongTime)) float_t _biggestAccelerationSongTime;

  /// @brief Field _biggestFrameSpeed, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__biggestFrameSpeed, put = __cordl_internal_set__biggestFrameSpeed)) float_t _biggestFrameSpeed;

  /// @brief Field _biggestFrameSpeedSongTime, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__biggestFrameSpeedSongTime, put = __cordl_internal_set__biggestFrameSpeedSongTime)) float_t _biggestFrameSpeedSongTime;

  /// @brief Field _characterSpawnController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__characterSpawnController, put = __cordl_internal_set__characterSpawnController)) ::UnityW<::GlobalNamespace::BTSCharacterSpawnController>
      _characterSpawnController;

  /// @brief Field _firstPosSaved, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__firstPosSaved, put = __cordl_internal_set__firstPosSaved)) bool _firstPosSaved;

  /// @brief Field _innerSphereOffset, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get__innerSphereOffset, put = __cordl_internal_set__innerSphereOffset)) ::UnityEngine::Vector3 _innerSphereOffset;

  /// @brief Field _innerSphereRadius, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__innerSphereRadius, put = __cordl_internal_set__innerSphereRadius)) float_t _innerSphereRadius;

  /// @brief Field _lastFramePos, offset 0x7c, size 0xc
  __declspec(property(get = __cordl_internal_get__lastFramePos, put = __cordl_internal_set__lastFramePos)) ::UnityEngine::Vector3 _lastFramePos;

  /// @brief Field _lastFrameSpeed, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameSpeed, put = __cordl_internal_set__lastFrameSpeed)) float_t _lastFrameSpeed;

  /// @brief Field _layersToColliderWith, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__layersToColliderWith, put = __cordl_internal_set__layersToColliderWith)) ::UnityEngine::LayerMask _layersToColliderWith;

  /// @brief Field _levelSceneSetupData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__levelSceneSetupData, put = __cordl_internal_set__levelSceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* _levelSceneSetupData;

  /// @brief Field _outerCapsuleEnd, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__outerCapsuleEnd, put = __cordl_internal_set__outerCapsuleEnd)) ::UnityEngine::Vector3 _outerCapsuleEnd;

  /// @brief Field _outerCapsuleRadius, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__outerCapsuleRadius, put = __cordl_internal_set__outerCapsuleRadius)) float_t _outerCapsuleRadius;

  /// @brief Field _outerCapsuleStart, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__outerCapsuleStart, put = __cordl_internal_set__outerCapsuleStart)) ::UnityEngine::Vector3 _outerCapsuleStart;

  /// @brief Field _speedSaved, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__speedSaved, put = __cordl_internal_set__speedSaved)) bool _speedSaved;

  /// @brief Field _standardSceneSetupData, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__standardSceneSetupData,
                      put = __cordl_internal_set__standardSceneSetupData)) ::GlobalNamespace::StandardGameplaySceneSetupData* _standardSceneSetupData;

  /// @brief Field _target, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__target, put = __cordl_internal_set__target)) ::UnityW<::UnityEngine::Transform> _target;

  /// @brief Method GetBar, addr 0x223830c, size 0x1a8, virtual false, abstract: false, final false
  inline ::StringW GetBar(float_t songTime);

  /// @brief Method LateUpdate, addr 0x2237740, size 0xbcc, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::WaypointsTestGameplayManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x22384b4, size 0x320, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDrawGizmos, addr 0x22387d4, size 0x1d8, virtual false, abstract: false, final false
  inline void OnDrawGizmos();

  /// @brief Method Start, addr 0x223770c, size 0x34, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSource() const;

  constexpr float_t const& __cordl_internal_get__biggestAcceleration() const;

  constexpr float_t& __cordl_internal_get__biggestAcceleration();

  constexpr float_t const& __cordl_internal_get__biggestAccelerationSongTime() const;

  constexpr float_t& __cordl_internal_get__biggestAccelerationSongTime();

  constexpr float_t const& __cordl_internal_get__biggestFrameSpeed() const;

  constexpr float_t& __cordl_internal_get__biggestFrameSpeed();

  constexpr float_t const& __cordl_internal_get__biggestFrameSpeedSongTime() const;

  constexpr float_t& __cordl_internal_get__biggestFrameSpeedSongTime();

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterSpawnController> const& __cordl_internal_get__characterSpawnController() const;

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterSpawnController>& __cordl_internal_get__characterSpawnController();

  constexpr bool const& __cordl_internal_get__firstPosSaved() const;

  constexpr bool& __cordl_internal_get__firstPosSaved();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__innerSphereOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__innerSphereOffset();

  constexpr float_t const& __cordl_internal_get__innerSphereRadius() const;

  constexpr float_t& __cordl_internal_get__innerSphereRadius();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastFramePos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastFramePos();

  constexpr float_t const& __cordl_internal_get__lastFrameSpeed() const;

  constexpr float_t& __cordl_internal_get__lastFrameSpeed();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layersToColliderWith() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layersToColliderWith();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__levelSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __cordl_internal_get__levelSceneSetupData() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__outerCapsuleEnd() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__outerCapsuleEnd();

  constexpr float_t const& __cordl_internal_get__outerCapsuleRadius() const;

  constexpr float_t& __cordl_internal_get__outerCapsuleRadius();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__outerCapsuleStart() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__outerCapsuleStart();

  constexpr bool const& __cordl_internal_get__speedSaved() const;

  constexpr bool& __cordl_internal_get__speedSaved();

  constexpr ::GlobalNamespace::StandardGameplaySceneSetupData*& __cordl_internal_get__standardSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardGameplaySceneSetupData*> const& __cordl_internal_get__standardSceneSetupData() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__target();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__biggestAcceleration(float_t value);

  constexpr void __cordl_internal_set__biggestAccelerationSongTime(float_t value);

  constexpr void __cordl_internal_set__biggestFrameSpeed(float_t value);

  constexpr void __cordl_internal_set__biggestFrameSpeedSongTime(float_t value);

  constexpr void __cordl_internal_set__characterSpawnController(::UnityW<::GlobalNamespace::BTSCharacterSpawnController> value);

  constexpr void __cordl_internal_set__firstPosSaved(bool value);

  constexpr void __cordl_internal_set__innerSphereOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__innerSphereRadius(float_t value);

  constexpr void __cordl_internal_set__lastFramePos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__lastFrameSpeed(float_t value);

  constexpr void __cordl_internal_set__layersToColliderWith(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__levelSceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set__outerCapsuleEnd(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__outerCapsuleRadius(float_t value);

  constexpr void __cordl_internal_set__outerCapsuleStart(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__speedSaved(bool value);

  constexpr void __cordl_internal_set__standardSceneSetupData(::GlobalNamespace::StandardGameplaySceneSetupData* value);

  constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x22389ac, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaypointsTestGameplayManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaypointsTestGameplayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaypointsTestGameplayManager(WaypointsTestGameplayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaypointsTestGameplayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaypointsTestGameplayManager(WaypointsTestGameplayManager const&) = delete;

  /// @brief Field _outerCapsuleStart, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____outerCapsuleStart;

  /// @brief Field _outerCapsuleEnd, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____outerCapsuleEnd;

  /// @brief Field _outerCapsuleRadius, offset: 0x38, size: 0x4, def value: None
  float_t ____outerCapsuleRadius;

  /// @brief Field _innerSphereOffset, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____innerSphereOffset;

  /// @brief Field _innerSphereRadius, offset: 0x48, size: 0x4, def value: None
  float_t ____innerSphereRadius;

  /// @brief Field _layersToColliderWith, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____layersToColliderWith;

  /// @brief Field _characterSpawnController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BTSCharacterSpawnController> ____characterSpawnController;

  /// @brief Field _audioTimeSource, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _standardSceneSetupData, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::StandardGameplaySceneSetupData* ____standardSceneSetupData;

  /// @brief Field _levelSceneSetupData, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____levelSceneSetupData;

  /// @brief Field _target, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____target;

  /// @brief Field _firstPosSaved, offset: 0x78, size: 0x1, def value: None
  bool ____firstPosSaved;

  /// @brief Field _speedSaved, offset: 0x79, size: 0x1, def value: None
  bool ____speedSaved;

  /// @brief Field _lastFramePos, offset: 0x7c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____lastFramePos;

  /// @brief Field _lastFrameSpeed, offset: 0x88, size: 0x4, def value: None
  float_t ____lastFrameSpeed;

  /// @brief Field _biggestFrameSpeed, offset: 0x8c, size: 0x4, def value: None
  float_t ____biggestFrameSpeed;

  /// @brief Field _biggestFrameSpeedSongTime, offset: 0x90, size: 0x4, def value: None
  float_t ____biggestFrameSpeedSongTime;

  /// @brief Field _biggestAcceleration, offset: 0x94, size: 0x4, def value: None
  float_t ____biggestAcceleration;

  /// @brief Field _biggestAccelerationSongTime, offset: 0x98, size: 0x4, def value: None
  float_t ____biggestAccelerationSongTime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17635 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WaypointsTestGameplayManager, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____outerCapsuleStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____outerCapsuleEnd) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____outerCapsuleRadius) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____innerSphereOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____innerSphereRadius) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____layersToColliderWith) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____characterSpawnController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____audioTimeSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____standardSceneSetupData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____levelSceneSetupData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____target) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____firstPosSaved) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____speedSaved) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____lastFramePos) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____lastFrameSpeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____biggestFrameSpeed) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____biggestFrameSpeedSongTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____biggestAcceleration) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____biggestAccelerationSongTime) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WaypointsTestGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointsTestGameplayManager*, "", "WaypointsTestGameplayManager");
