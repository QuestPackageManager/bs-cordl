#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SaberActivityCounter)
namespace GlobalNamespace {
class AveragingValueRecorder;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class MovementHistoryRecorder;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class Saber;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberActivityCounter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberActivityCounter);
// Type: ::SaberActivityCounter
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(8993))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4633))
// CS Name: ::SaberActivityCounter*
class CORDL_TYPE SaberActivityCounter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _averageWindowDuration, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__averageWindowDuration, put = __cordl_internal_set__averageWindowDuration)) float_t _averageWindowDuration;

  /// @brief Field _valuesPerSecond, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__valuesPerSecond, put = __cordl_internal_set__valuesPerSecond)) float_t _valuesPerSecond;

  /// @brief Field _increaseSpeed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__increaseSpeed, put = __cordl_internal_set__increaseSpeed)) float_t _increaseSpeed;

  /// @brief Field _decreaseSpeed, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__decreaseSpeed, put = __cordl_internal_set__decreaseSpeed)) float_t _decreaseSpeed;

  /// @brief Field _movementSensitivityThreshold, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__movementSensitivityThreshold, put = __cordl_internal_set__movementSensitivityThreshold)) float_t _movementSensitivityThreshold;

  /// @brief Field _saberManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager))::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _gamePause, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause, put = __cordl_internal_set__gamePause))::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field totalDistanceDidChangeEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_totalDistanceDidChangeEvent, put = __cordl_internal_set_totalDistanceDidChangeEvent))::System::Action_1<float_t>* totalDistanceDidChangeEvent;

  /// @brief Field _prevLeftSaberTipPos, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__prevLeftSaberTipPos, put = __cordl_internal_set__prevLeftSaberTipPos))::UnityEngine::Vector3 _prevLeftSaberTipPos;

  /// @brief Field _prevRightSaberTipPos, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get__prevRightSaberTipPos, put = __cordl_internal_set__prevRightSaberTipPos))::UnityEngine::Vector3 _prevRightSaberTipPos;

  /// @brief Field _prevLeftHandPos, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get__prevLeftHandPos, put = __cordl_internal_set__prevLeftHandPos))::UnityEngine::Vector3 _prevLeftHandPos;

  /// @brief Field _prevRightHandPos, offset 0x6c, size 0xc
  __declspec(property(get = __cordl_internal_get__prevRightHandPos, put = __cordl_internal_set__prevRightHandPos))::UnityEngine::Vector3 _prevRightHandPos;

  /// @brief Field _hasPrevPos, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__hasPrevPos, put = __cordl_internal_set__hasPrevPos)) bool _hasPrevPos;

  /// @brief Field _leftSaberMovementDistance, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__leftSaberMovementDistance, put = __cordl_internal_set__leftSaberMovementDistance)) float_t _leftSaberMovementDistance;

  /// @brief Field _rightSaberMovementDistance, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__rightSaberMovementDistance, put = __cordl_internal_set__rightSaberMovementDistance)) float_t _rightSaberMovementDistance;

  /// @brief Field _leftHandMovementDistance, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__leftHandMovementDistance, put = __cordl_internal_set__leftHandMovementDistance)) float_t _leftHandMovementDistance;

  /// @brief Field _rightHandMovementDistance, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__rightHandMovementDistance, put = __cordl_internal_set__rightHandMovementDistance)) float_t _rightHandMovementDistance;

  /// @brief Field _saberMovementHistoryRecorder, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__saberMovementHistoryRecorder,
                      put = __cordl_internal_set__saberMovementHistoryRecorder))::GlobalNamespace::MovementHistoryRecorder* _saberMovementHistoryRecorder;

  /// @brief Field _handMovementHistoryRecorder, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__handMovementHistoryRecorder,
                      put = __cordl_internal_set__handMovementHistoryRecorder))::GlobalNamespace::MovementHistoryRecorder* _handMovementHistoryRecorder;

  __declspec(property(get = get_leftSaberMovementDistance)) float_t leftSaberMovementDistance;

  __declspec(property(get = get_rightSaberMovementDistance)) float_t rightSaberMovementDistance;

  __declspec(property(get = get_leftHandMovementDistance)) float_t leftHandMovementDistance;

  __declspec(property(get = get_rightHandMovementDistance)) float_t rightHandMovementDistance;

  __declspec(property(get = get_saberMovementAveragingValueRecorder))::GlobalNamespace::AveragingValueRecorder* saberMovementAveragingValueRecorder;

  __declspec(property(get = get_handMovementAveragingValueRecorder))::GlobalNamespace::AveragingValueRecorder* handMovementAveragingValueRecorder;

  constexpr float_t& __cordl_internal_get__averageWindowDuration();

  constexpr float_t const& __cordl_internal_get__averageWindowDuration() const;

  constexpr void __cordl_internal_set__averageWindowDuration(float_t value);

  constexpr float_t& __cordl_internal_get__valuesPerSecond();

  constexpr float_t const& __cordl_internal_get__valuesPerSecond() const;

  constexpr void __cordl_internal_set__valuesPerSecond(float_t value);

  constexpr float_t& __cordl_internal_get__increaseSpeed();

  constexpr float_t const& __cordl_internal_get__increaseSpeed() const;

  constexpr void __cordl_internal_set__increaseSpeed(float_t value);

  constexpr float_t& __cordl_internal_get__decreaseSpeed();

  constexpr float_t const& __cordl_internal_get__decreaseSpeed() const;

  constexpr void __cordl_internal_set__decreaseSpeed(float_t value);

  constexpr float_t& __cordl_internal_get__movementSensitivityThreshold();

  constexpr float_t const& __cordl_internal_get__movementSensitivityThreshold() const;

  constexpr void __cordl_internal_set__movementSensitivityThreshold(float_t value);

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& __cordl_internal_get__gamePause() const;

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_totalDistanceDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __cordl_internal_get_totalDistanceDidChangeEvent() const;

  constexpr void __cordl_internal_set_totalDistanceDidChangeEvent(::System::Action_1<float_t>* value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__prevLeftSaberTipPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__prevLeftSaberTipPos() const;

  constexpr void __cordl_internal_set__prevLeftSaberTipPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__prevRightSaberTipPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__prevRightSaberTipPos() const;

  constexpr void __cordl_internal_set__prevRightSaberTipPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__prevLeftHandPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__prevLeftHandPos() const;

  constexpr void __cordl_internal_set__prevLeftHandPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__prevRightHandPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__prevRightHandPos() const;

  constexpr void __cordl_internal_set__prevRightHandPos(::UnityEngine::Vector3 value);

  constexpr bool& __cordl_internal_get__hasPrevPos();

  constexpr bool const& __cordl_internal_get__hasPrevPos() const;

  constexpr void __cordl_internal_set__hasPrevPos(bool value);

  constexpr float_t& __cordl_internal_get__leftSaberMovementDistance();

  constexpr float_t const& __cordl_internal_get__leftSaberMovementDistance() const;

  constexpr void __cordl_internal_set__leftSaberMovementDistance(float_t value);

  constexpr float_t& __cordl_internal_get__rightSaberMovementDistance();

  constexpr float_t const& __cordl_internal_get__rightSaberMovementDistance() const;

  constexpr void __cordl_internal_set__rightSaberMovementDistance(float_t value);

  constexpr float_t& __cordl_internal_get__leftHandMovementDistance();

  constexpr float_t const& __cordl_internal_get__leftHandMovementDistance() const;

  constexpr void __cordl_internal_set__leftHandMovementDistance(float_t value);

  constexpr float_t& __cordl_internal_get__rightHandMovementDistance();

  constexpr float_t const& __cordl_internal_get__rightHandMovementDistance() const;

  constexpr void __cordl_internal_set__rightHandMovementDistance(float_t value);

  constexpr ::GlobalNamespace::MovementHistoryRecorder*& __cordl_internal_get__saberMovementHistoryRecorder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MovementHistoryRecorder*> const& __cordl_internal_get__saberMovementHistoryRecorder() const;

  constexpr void __cordl_internal_set__saberMovementHistoryRecorder(::GlobalNamespace::MovementHistoryRecorder* value);

  constexpr ::GlobalNamespace::MovementHistoryRecorder*& __cordl_internal_get__handMovementHistoryRecorder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MovementHistoryRecorder*> const& __cordl_internal_get__handMovementHistoryRecorder() const;

  constexpr void __cordl_internal_set__handMovementHistoryRecorder(::GlobalNamespace::MovementHistoryRecorder* value);

  /// @brief Method add_totalDistanceDidChangeEvent, addr 0x23c1f84, size 0xb0, virtual false, abstract: false, final false
  inline void add_totalDistanceDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_totalDistanceDidChangeEvent, addr 0x23c2034, size 0xb0, virtual false, abstract: false, final false
  inline void remove_totalDistanceDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_leftSaberMovementDistance, addr 0x23c20e4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_leftSaberMovementDistance();

  /// @brief Method get_rightSaberMovementDistance, addr 0x23c20ec, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rightSaberMovementDistance();

  /// @brief Method get_leftHandMovementDistance, addr 0x23c20f4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_leftHandMovementDistance();

  /// @brief Method get_rightHandMovementDistance, addr 0x23c20fc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rightHandMovementDistance();

  /// @brief Method get_saberMovementAveragingValueRecorder, addr 0x23bf410, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AveragingValueRecorder* get_saberMovementAveragingValueRecorder();

  /// @brief Method get_handMovementAveragingValueRecorder, addr 0x23bf42c, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AveragingValueRecorder* get_handMovementAveragingValueRecorder();

  /// @brief Method Awake, addr 0x23c2104, size 0xb4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x23c21b8, size 0x154, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23c230c, size 0x1a0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleSaberPositionsWereUpdated, addr 0x23c24ac, size 0x434, virtual false, abstract: false, final false
  inline void HandleSaberPositionsWereUpdated(::GlobalNamespace::Saber* leftSaber, ::GlobalNamespace::Saber* rightSaber);

  /// @brief Method HandleDidPauseEvent, addr 0x23c28e0, size 0x8, virtual false, abstract: false, final false
  inline void HandleDidPauseEvent();

  static inline ::GlobalNamespace::SaberActivityCounter* New_ctor();

  /// @brief Method .ctor, addr 0x23c28e8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaberActivityCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberActivityCounter(SaberActivityCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberActivityCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberActivityCounter(SaberActivityCounter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberActivityCounter();

public:
  /// @brief Field _averageWindowDuration, offset: 0x18, size: 0x4, def value: None
  float_t ____averageWindowDuration;

  /// @brief Field _valuesPerSecond, offset: 0x1c, size: 0x4, def value: None
  float_t ____valuesPerSecond;

  /// @brief Field _increaseSpeed, offset: 0x20, size: 0x4, def value: None
  float_t ____increaseSpeed;

  /// @brief Field _decreaseSpeed, offset: 0x24, size: 0x4, def value: None
  float_t ____decreaseSpeed;

  /// @brief Field _movementSensitivityThreshold, offset: 0x28, size: 0x4, def value: None
  float_t ____movementSensitivityThreshold;

  /// @brief Field _saberManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _gamePause, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field totalDistanceDidChangeEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___totalDistanceDidChangeEvent;

  /// @brief Field _prevLeftSaberTipPos, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevLeftSaberTipPos;

  /// @brief Field _prevRightSaberTipPos, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevRightSaberTipPos;

  /// @brief Field _prevLeftHandPos, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevLeftHandPos;

  /// @brief Field _prevRightHandPos, offset: 0x6c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevRightHandPos;

  /// @brief Field _hasPrevPos, offset: 0x78, size: 0x1, def value: None
  bool ____hasPrevPos;

  /// @brief Field _leftSaberMovementDistance, offset: 0x7c, size: 0x4, def value: None
  float_t ____leftSaberMovementDistance;

  /// @brief Field _rightSaberMovementDistance, offset: 0x80, size: 0x4, def value: None
  float_t ____rightSaberMovementDistance;

  /// @brief Field _leftHandMovementDistance, offset: 0x84, size: 0x4, def value: None
  float_t ____leftHandMovementDistance;

  /// @brief Field _rightHandMovementDistance, offset: 0x88, size: 0x4, def value: None
  float_t ____rightHandMovementDistance;

  /// @brief Field _saberMovementHistoryRecorder, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::MovementHistoryRecorder* ____saberMovementHistoryRecorder;

  /// @brief Field _handMovementHistoryRecorder, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::MovementHistoryRecorder* ____handMovementHistoryRecorder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberActivityCounter, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____averageWindowDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____valuesPerSecond) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____increaseSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____decreaseSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____movementSensitivityThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____saberManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____gamePause) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ___totalDistanceDidChangeEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____prevLeftSaberTipPos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____prevRightSaberTipPos) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____prevLeftHandPos) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____prevRightHandPos) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____hasPrevPos) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____leftSaberMovementDistance) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____rightSaberMovementDistance) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____leftHandMovementDistance) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____rightHandMovementDistance) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____saberMovementHistoryRecorder) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____handMovementHistoryRecorder) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberActivityCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberActivityCounter*, "", "SaberActivityCounter");
