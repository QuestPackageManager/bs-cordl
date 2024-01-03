#pragma once
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
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class StandardGameplaySceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class WaypointsTestGameplayManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WaypointsTestGameplayManager);
// Type: ::WaypointsTestGameplayManager
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10204)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5029))
// CS Name: ::WaypointsTestGameplayManager*
class CORDL_TYPE WaypointsTestGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _outerCapsuleStart, offset 0x18, size 0xc
  __declspec(property(get = __get__outerCapsuleStart, put = __set__outerCapsuleStart))::UnityEngine::Vector3 _outerCapsuleStart;

  /// @brief Field _outerCapsuleEnd, offset 0x24, size 0xc
  __declspec(property(get = __get__outerCapsuleEnd, put = __set__outerCapsuleEnd))::UnityEngine::Vector3 _outerCapsuleEnd;

  /// @brief Field _outerCapsuleRadius, offset 0x30, size 0x4
  __declspec(property(get = __get__outerCapsuleRadius, put = __set__outerCapsuleRadius)) float_t _outerCapsuleRadius;

  /// @brief Field _innerSphereOffset, offset 0x34, size 0xc
  __declspec(property(get = __get__innerSphereOffset, put = __set__innerSphereOffset))::UnityEngine::Vector3 _innerSphereOffset;

  /// @brief Field _innerSphereRadius, offset 0x40, size 0x4
  __declspec(property(get = __get__innerSphereRadius, put = __set__innerSphereRadius)) float_t _innerSphereRadius;

  /// @brief Field _layersToColliderWith, offset 0x44, size 0x4
  __declspec(property(get = __get__layersToColliderWith, put = __set__layersToColliderWith))::UnityEngine::LayerMask _layersToColliderWith;

  /// @brief Field _characterSpawnController, offset 0x48, size 0x8
  __declspec(property(get = __get__characterSpawnController, put = __set__characterSpawnController))::GlobalNamespace::BTSCharacterSpawnController* _characterSpawnController;

  /// @brief Field _audioTimeSource, offset 0x50, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _standardSceneSetupData, offset 0x58, size 0x8
  __declspec(property(get = __get__standardSceneSetupData, put = __set__standardSceneSetupData))::GlobalNamespace::StandardGameplaySceneSetupData* _standardSceneSetupData;

  /// @brief Field _levelSceneSetupData, offset 0x60, size 0x8
  __declspec(property(get = __get__levelSceneSetupData, put = __set__levelSceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _levelSceneSetupData;

  /// @brief Field _target, offset 0x68, size 0x8
  __declspec(property(get = __get__target, put = __set__target))::UnityEngine::Transform* _target;

  /// @brief Field _firstPosSaved, offset 0x70, size 0x1
  __declspec(property(get = __get__firstPosSaved, put = __set__firstPosSaved)) bool _firstPosSaved;

  /// @brief Field _speedSaved, offset 0x71, size 0x1
  __declspec(property(get = __get__speedSaved, put = __set__speedSaved)) bool _speedSaved;

  /// @brief Field _lastFramePos, offset 0x74, size 0xc
  __declspec(property(get = __get__lastFramePos, put = __set__lastFramePos))::UnityEngine::Vector3 _lastFramePos;

  /// @brief Field _lastFrameSpeed, offset 0x80, size 0x4
  __declspec(property(get = __get__lastFrameSpeed, put = __set__lastFrameSpeed)) float_t _lastFrameSpeed;

  /// @brief Field _biggestFrameSpeed, offset 0x84, size 0x4
  __declspec(property(get = __get__biggestFrameSpeed, put = __set__biggestFrameSpeed)) float_t _biggestFrameSpeed;

  /// @brief Field _biggestFrameSpeedSongTime, offset 0x88, size 0x4
  __declspec(property(get = __get__biggestFrameSpeedSongTime, put = __set__biggestFrameSpeedSongTime)) float_t _biggestFrameSpeedSongTime;

  /// @brief Field _biggestAcceleration, offset 0x8c, size 0x4
  __declspec(property(get = __get__biggestAcceleration, put = __set__biggestAcceleration)) float_t _biggestAcceleration;

  /// @brief Field _biggestAccelerationSongTime, offset 0x90, size 0x4
  __declspec(property(get = __get__biggestAccelerationSongTime, put = __set__biggestAccelerationSongTime)) float_t _biggestAccelerationSongTime;

  constexpr ::UnityEngine::Vector3& __get__outerCapsuleStart();

  constexpr ::UnityEngine::Vector3 const& __get__outerCapsuleStart() const;

  constexpr void __set__outerCapsuleStart(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__outerCapsuleEnd();

  constexpr ::UnityEngine::Vector3 const& __get__outerCapsuleEnd() const;

  constexpr void __set__outerCapsuleEnd(::UnityEngine::Vector3 value);

  constexpr float_t& __get__outerCapsuleRadius();

  constexpr float_t const& __get__outerCapsuleRadius() const;

  constexpr void __set__outerCapsuleRadius(float_t value);

  constexpr ::UnityEngine::Vector3& __get__innerSphereOffset();

  constexpr ::UnityEngine::Vector3 const& __get__innerSphereOffset() const;

  constexpr void __set__innerSphereOffset(::UnityEngine::Vector3 value);

  constexpr float_t& __get__innerSphereRadius();

  constexpr float_t const& __get__innerSphereRadius() const;

  constexpr void __set__innerSphereRadius(float_t value);

  constexpr ::UnityEngine::LayerMask& __get__layersToColliderWith();

  constexpr ::UnityEngine::LayerMask const& __get__layersToColliderWith() const;

  constexpr void __set__layersToColliderWith(::UnityEngine::LayerMask value);

  constexpr ::GlobalNamespace::BTSCharacterSpawnController*& __get__characterSpawnController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSCharacterSpawnController*> const& __get__characterSpawnController() const;

  constexpr void __set__characterSpawnController(::GlobalNamespace::BTSCharacterSpawnController* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::GlobalNamespace::StandardGameplaySceneSetupData*& __get__standardSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardGameplaySceneSetupData*> const& __get__standardSceneSetupData() const;

  constexpr void __set__standardSceneSetupData(::GlobalNamespace::StandardGameplaySceneSetupData* value);

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __get__levelSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __get__levelSceneSetupData() const;

  constexpr void __set__levelSceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr ::UnityEngine::Transform*& __get__target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__target() const;

  constexpr void __set__target(::UnityEngine::Transform* value);

  constexpr bool& __get__firstPosSaved();

  constexpr bool const& __get__firstPosSaved() const;

  constexpr void __set__firstPosSaved(bool value);

  constexpr bool& __get__speedSaved();

  constexpr bool const& __get__speedSaved() const;

  constexpr void __set__speedSaved(bool value);

  constexpr ::UnityEngine::Vector3& __get__lastFramePos();

  constexpr ::UnityEngine::Vector3 const& __get__lastFramePos() const;

  constexpr void __set__lastFramePos(::UnityEngine::Vector3 value);

  constexpr float_t& __get__lastFrameSpeed();

  constexpr float_t const& __get__lastFrameSpeed() const;

  constexpr void __set__lastFrameSpeed(float_t value);

  constexpr float_t& __get__biggestFrameSpeed();

  constexpr float_t const& __get__biggestFrameSpeed() const;

  constexpr void __set__biggestFrameSpeed(float_t value);

  constexpr float_t& __get__biggestFrameSpeedSongTime();

  constexpr float_t const& __get__biggestFrameSpeedSongTime() const;

  constexpr void __set__biggestFrameSpeedSongTime(float_t value);

  constexpr float_t& __get__biggestAcceleration();

  constexpr float_t const& __get__biggestAcceleration() const;

  constexpr void __set__biggestAcceleration(float_t value);

  constexpr float_t& __get__biggestAccelerationSongTime();

  constexpr float_t const& __get__biggestAccelerationSongTime() const;

  constexpr void __set__biggestAccelerationSongTime(float_t value);

  /// @brief Method Start, addr 0x23bde08, size 0x34, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method LateUpdate, addr 0x23bde3c, size 0x1200, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method OnDestroy, addr 0x23bf2ac, size 0x550, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method GetBar, addr 0x23bf03c, size 0x270, virtual false, abstract: false, final false
  inline ::StringW GetBar(float_t songTime);

  /// @brief Method OnDrawGizmos, addr 0x23bf7fc, size 0x1d4, virtual false, abstract: false, final false
  inline void OnDrawGizmos();

  static inline ::GlobalNamespace::WaypointsTestGameplayManager* New_ctor();

  /// @brief Method .ctor, addr 0x23bf9d0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "WaypointsTestGameplayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaypointsTestGameplayManager(WaypointsTestGameplayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaypointsTestGameplayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaypointsTestGameplayManager(WaypointsTestGameplayManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaypointsTestGameplayManager();

public:
  /// @brief Field _outerCapsuleStart, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____outerCapsuleStart;

  /// @brief Field _outerCapsuleEnd, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____outerCapsuleEnd;

  /// @brief Field _outerCapsuleRadius, offset: 0x30, size: 0x4, def value: None
  float_t ____outerCapsuleRadius;

  /// @brief Field _innerSphereOffset, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____innerSphereOffset;

  /// @brief Field _innerSphereRadius, offset: 0x40, size: 0x4, def value: None
  float_t ____innerSphereRadius;

  /// @brief Field _layersToColliderWith, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____layersToColliderWith;

  /// @brief Field _characterSpawnController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BTSCharacterSpawnController* ____characterSpawnController;

  /// @brief Field _audioTimeSource, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _standardSceneSetupData, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::StandardGameplaySceneSetupData* ____standardSceneSetupData;

  /// @brief Field _levelSceneSetupData, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____levelSceneSetupData;

  /// @brief Field _target, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ____target;

  /// @brief Field _firstPosSaved, offset: 0x70, size: 0x1, def value: None
  bool ____firstPosSaved;

  /// @brief Field _speedSaved, offset: 0x71, size: 0x1, def value: None
  bool ____speedSaved;

  /// @brief Field _lastFramePos, offset: 0x74, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____lastFramePos;

  /// @brief Field _lastFrameSpeed, offset: 0x80, size: 0x4, def value: None
  float_t ____lastFrameSpeed;

  /// @brief Field _biggestFrameSpeed, offset: 0x84, size: 0x4, def value: None
  float_t ____biggestFrameSpeed;

  /// @brief Field _biggestFrameSpeedSongTime, offset: 0x88, size: 0x4, def value: None
  float_t ____biggestFrameSpeedSongTime;

  /// @brief Field _biggestAcceleration, offset: 0x8c, size: 0x4, def value: None
  float_t ____biggestAcceleration;

  /// @brief Field _biggestAccelerationSongTime, offset: 0x90, size: 0x4, def value: None
  float_t ____biggestAccelerationSongTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WaypointsTestGameplayManager, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____outerCapsuleStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____outerCapsuleEnd) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____outerCapsuleRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____innerSphereOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____innerSphereRadius) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____layersToColliderWith) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____characterSpawnController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____audioTimeSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____standardSceneSetupData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____levelSceneSetupData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____target) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____firstPosSaved) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____speedSaved) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____lastFramePos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____lastFrameSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____biggestFrameSpeed) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____biggestFrameSpeedSongTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____biggestAcceleration) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaypointsTestGameplayManager, ____biggestAccelerationSongTime) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WaypointsTestGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointsTestGameplayManager*, "", "WaypointsTestGameplayManager");
