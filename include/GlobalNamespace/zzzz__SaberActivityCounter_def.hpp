#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SaberActivityCounter)
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class MovementHistoryRecorder;
}
namespace GlobalNamespace {
class AveragingValueRecorder;
}
namespace GlobalNamespace {
class SaberManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberActivityCounter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberActivityCounter);
// Type: ::SaberActivityCounter
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5388))
// CS Name: ::SaberActivityCounter*
class CORDL_TYPE SaberActivityCounter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _averageWindowDuration, offset 0x18, size 0x4
  __declspec(property(get = __get__averageWindowDuration, put = __set__averageWindowDuration)) float_t _averageWindowDuration;

  /// @brief Field _valuesPerSecond, offset 0x1c, size 0x4
  __declspec(property(get = __get__valuesPerSecond, put = __set__valuesPerSecond)) float_t _valuesPerSecond;

  /// @brief Field _increaseSpeed, offset 0x20, size 0x4
  __declspec(property(get = __get__increaseSpeed, put = __set__increaseSpeed)) float_t _increaseSpeed;

  /// @brief Field _deceraseSpeed, offset 0x24, size 0x4
  __declspec(property(get = __get__deceraseSpeed, put = __set__deceraseSpeed)) float_t _deceraseSpeed;

  /// @brief Field _movementSensitivityThreshold, offset 0x28, size 0x4
  __declspec(property(get = __get__movementSensitivityThreshold, put = __set__movementSensitivityThreshold)) float_t _movementSensitivityThreshold;

  /// @brief Field _saberManager, offset 0x30, size 0x8
  __declspec(property(get = __get__saberManager, put = __set__saberManager))::GlobalNamespace::SaberManager* _saberManager;

  /// @brief Field totalDistanceDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_totalDistanceDidChangeEvent, put = __set_totalDistanceDidChangeEvent))::System::Action_1<float_t>* totalDistanceDidChangeEvent;

  /// @brief Field _leftSaber, offset 0x40, size 0x8
  __declspec(property(get = __get__leftSaber, put = __set__leftSaber))::GlobalNamespace::Saber* _leftSaber;

  /// @brief Field _rightSaber, offset 0x48, size 0x8
  __declspec(property(get = __get__rightSaber, put = __set__rightSaber))::GlobalNamespace::Saber* _rightSaber;

  /// @brief Field _prevLeftSaberTipPos, offset 0x50, size 0xc
  __declspec(property(get = __get__prevLeftSaberTipPos, put = __set__prevLeftSaberTipPos))::UnityEngine::Vector3 _prevLeftSaberTipPos;

  /// @brief Field _prevRightSaberTipPos, offset 0x5c, size 0xc
  __declspec(property(get = __get__prevRightSaberTipPos, put = __set__prevRightSaberTipPos))::UnityEngine::Vector3 _prevRightSaberTipPos;

  /// @brief Field _prevLeftHandPos, offset 0x68, size 0xc
  __declspec(property(get = __get__prevLeftHandPos, put = __set__prevLeftHandPos))::UnityEngine::Vector3 _prevLeftHandPos;

  /// @brief Field _prevRightHandPos, offset 0x74, size 0xc
  __declspec(property(get = __get__prevRightHandPos, put = __set__prevRightHandPos))::UnityEngine::Vector3 _prevRightHandPos;

  /// @brief Field _hasPrevPos, offset 0x80, size 0x1
  __declspec(property(get = __get__hasPrevPos, put = __set__hasPrevPos)) bool _hasPrevPos;

  /// @brief Field _leftSaberMovementDistance, offset 0x84, size 0x4
  __declspec(property(get = __get__leftSaberMovementDistance, put = __set__leftSaberMovementDistance)) float_t _leftSaberMovementDistance;

  /// @brief Field _rightSaberMovementDistance, offset 0x88, size 0x4
  __declspec(property(get = __get__rightSaberMovementDistance, put = __set__rightSaberMovementDistance)) float_t _rightSaberMovementDistance;

  /// @brief Field _leftHandMovementDistance, offset 0x8c, size 0x4
  __declspec(property(get = __get__leftHandMovementDistance, put = __set__leftHandMovementDistance)) float_t _leftHandMovementDistance;

  /// @brief Field _rightHandMovementDistance, offset 0x90, size 0x4
  __declspec(property(get = __get__rightHandMovementDistance, put = __set__rightHandMovementDistance)) float_t _rightHandMovementDistance;

  /// @brief Field _saberMovementHistoryRecorder, offset 0x98, size 0x8
  __declspec(property(get = __get__saberMovementHistoryRecorder, put = __set__saberMovementHistoryRecorder))::GlobalNamespace::MovementHistoryRecorder* _saberMovementHistoryRecorder;

  /// @brief Field _handMovementHistoryRecorder, offset 0xa0, size 0x8
  __declspec(property(get = __get__handMovementHistoryRecorder, put = __set__handMovementHistoryRecorder))::GlobalNamespace::MovementHistoryRecorder* _handMovementHistoryRecorder;

  __declspec(property(get = get_leftSaberMovementDistance)) float_t leftSaberMovementDistance;

  __declspec(property(get = get_rightSaberMovementDistance)) float_t rightSaberMovementDistance;

  __declspec(property(get = get_leftHandMovementDistance)) float_t leftHandMovementDistance;

  __declspec(property(get = get_rightHandMovementDistance)) float_t rightHandMovementDistance;

  __declspec(property(get = get_saberMovementAveragingValueRecorder))::GlobalNamespace::AveragingValueRecorder* saberMovementAveragingValueRecorder;

  __declspec(property(get = get_handMovementAveragingValueRecorder))::GlobalNamespace::AveragingValueRecorder* handMovementAveragingValueRecorder;

  constexpr float_t& __get__averageWindowDuration();

  constexpr float_t const& __get__averageWindowDuration() const;

  constexpr void __set__averageWindowDuration(float_t value);

  constexpr float_t& __get__valuesPerSecond();

  constexpr float_t const& __get__valuesPerSecond() const;

  constexpr void __set__valuesPerSecond(float_t value);

  constexpr float_t& __get__increaseSpeed();

  constexpr float_t const& __get__increaseSpeed() const;

  constexpr void __set__increaseSpeed(float_t value);

  constexpr float_t& __get__deceraseSpeed();

  constexpr float_t const& __get__deceraseSpeed() const;

  constexpr void __set__deceraseSpeed(float_t value);

  constexpr float_t& __get__movementSensitivityThreshold();

  constexpr float_t const& __get__movementSensitivityThreshold() const;

  constexpr void __set__movementSensitivityThreshold(float_t value);

  constexpr ::GlobalNamespace::SaberManager*& __get__saberManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> const& __get__saberManager() const;

  constexpr void __set__saberManager(::GlobalNamespace::SaberManager* value);

  constexpr ::System::Action_1<float_t>*& __get_totalDistanceDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __get_totalDistanceDidChangeEvent() const;

  constexpr void __set_totalDistanceDidChangeEvent(::System::Action_1<float_t>* value);

  constexpr ::GlobalNamespace::Saber*& __get__leftSaber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& __get__leftSaber() const;

  constexpr void __set__leftSaber(::GlobalNamespace::Saber* value);

  constexpr ::GlobalNamespace::Saber*& __get__rightSaber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& __get__rightSaber() const;

  constexpr void __set__rightSaber(::GlobalNamespace::Saber* value);

  constexpr ::UnityEngine::Vector3& __get__prevLeftSaberTipPos();

  constexpr ::UnityEngine::Vector3 const& __get__prevLeftSaberTipPos() const;

  constexpr void __set__prevLeftSaberTipPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__prevRightSaberTipPos();

  constexpr ::UnityEngine::Vector3 const& __get__prevRightSaberTipPos() const;

  constexpr void __set__prevRightSaberTipPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__prevLeftHandPos();

  constexpr ::UnityEngine::Vector3 const& __get__prevLeftHandPos() const;

  constexpr void __set__prevLeftHandPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__prevRightHandPos();

  constexpr ::UnityEngine::Vector3 const& __get__prevRightHandPos() const;

  constexpr void __set__prevRightHandPos(::UnityEngine::Vector3 value);

  constexpr bool& __get__hasPrevPos();

  constexpr bool const& __get__hasPrevPos() const;

  constexpr void __set__hasPrevPos(bool value);

  constexpr float_t& __get__leftSaberMovementDistance();

  constexpr float_t const& __get__leftSaberMovementDistance() const;

  constexpr void __set__leftSaberMovementDistance(float_t value);

  constexpr float_t& __get__rightSaberMovementDistance();

  constexpr float_t const& __get__rightSaberMovementDistance() const;

  constexpr void __set__rightSaberMovementDistance(float_t value);

  constexpr float_t& __get__leftHandMovementDistance();

  constexpr float_t const& __get__leftHandMovementDistance() const;

  constexpr void __set__leftHandMovementDistance(float_t value);

  constexpr float_t& __get__rightHandMovementDistance();

  constexpr float_t const& __get__rightHandMovementDistance() const;

  constexpr void __set__rightHandMovementDistance(float_t value);

  constexpr ::GlobalNamespace::MovementHistoryRecorder*& __get__saberMovementHistoryRecorder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MovementHistoryRecorder*> const& __get__saberMovementHistoryRecorder() const;

  constexpr void __set__saberMovementHistoryRecorder(::GlobalNamespace::MovementHistoryRecorder* value);

  constexpr ::GlobalNamespace::MovementHistoryRecorder*& __get__handMovementHistoryRecorder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MovementHistoryRecorder*> const& __get__handMovementHistoryRecorder() const;

  constexpr void __set__handMovementHistoryRecorder(::GlobalNamespace::MovementHistoryRecorder* value);

  /// @brief Method add_totalDistanceDidChangeEvent addr 0x211f3ac size 0xb0 virtual false final false
  inline void add_totalDistanceDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_totalDistanceDidChangeEvent addr 0x211f45c size 0xb0 virtual false final false
  inline void remove_totalDistanceDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_leftSaberMovementDistance addr 0x211f50c size 0x8 virtual false final false
  inline float_t get_leftSaberMovementDistance();

  /// @brief Method get_rightSaberMovementDistance addr 0x211f514 size 0x8 virtual false final false
  inline float_t get_rightSaberMovementDistance();

  /// @brief Method get_leftHandMovementDistance addr 0x211f51c size 0x8 virtual false final false
  inline float_t get_leftHandMovementDistance();

  /// @brief Method get_rightHandMovementDistance addr 0x211f524 size 0x8 virtual false final false
  inline float_t get_rightHandMovementDistance();

  /// @brief Method get_saberMovementAveragingValueRecorder addr 0x211c870 size 0x1c virtual false final false
  inline ::GlobalNamespace::AveragingValueRecorder* get_saberMovementAveragingValueRecorder();

  /// @brief Method get_handMovementAveragingValueRecorder addr 0x211c88c size 0x1c virtual false final false
  inline ::GlobalNamespace::AveragingValueRecorder* get_handMovementAveragingValueRecorder();

  /// @brief Method Awake addr 0x211f52c size 0xb4 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x211f5e0 size 0x20 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x211f600 size 0x414 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::SaberActivityCounter* New_ctor();

  /// @brief Method .ctor addr 0x211fa14 size 0x20 virtual false final false
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

  /// @brief Field _deceraseSpeed, offset: 0x24, size: 0x4, def value: None
  float_t ____deceraseSpeed;

  /// @brief Field _movementSensitivityThreshold, offset: 0x28, size: 0x4, def value: None
  float_t ____movementSensitivityThreshold;

  /// @brief Field _saberManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SaberManager* ____saberManager;

  /// @brief Field totalDistanceDidChangeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___totalDistanceDidChangeEvent;

  /// @brief Field _leftSaber, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::Saber* ____leftSaber;

  /// @brief Field _rightSaber, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::Saber* ____rightSaber;

  /// @brief Field _prevLeftSaberTipPos, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevLeftSaberTipPos;

  /// @brief Field _prevRightSaberTipPos, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevRightSaberTipPos;

  /// @brief Field _prevLeftHandPos, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevLeftHandPos;

  /// @brief Field _prevRightHandPos, offset: 0x74, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevRightHandPos;

  /// @brief Field _hasPrevPos, offset: 0x80, size: 0x1, def value: None
  bool ____hasPrevPos;

  /// @brief Field _leftSaberMovementDistance, offset: 0x84, size: 0x4, def value: None
  float_t ____leftSaberMovementDistance;

  /// @brief Field _rightSaberMovementDistance, offset: 0x88, size: 0x4, def value: None
  float_t ____rightSaberMovementDistance;

  /// @brief Field _leftHandMovementDistance, offset: 0x8c, size: 0x4, def value: None
  float_t ____leftHandMovementDistance;

  /// @brief Field _rightHandMovementDistance, offset: 0x90, size: 0x4, def value: None
  float_t ____rightHandMovementDistance;

  /// @brief Field _saberMovementHistoryRecorder, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::MovementHistoryRecorder* ____saberMovementHistoryRecorder;

  /// @brief Field _handMovementHistoryRecorder, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::MovementHistoryRecorder* ____handMovementHistoryRecorder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberActivityCounter, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____averageWindowDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____valuesPerSecond) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____increaseSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____deceraseSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____movementSensitivityThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____saberManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ___totalDistanceDidChangeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____leftSaber) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____rightSaber) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____prevLeftSaberTipPos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____prevRightSaberTipPos) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____prevLeftHandPos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____prevRightHandPos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____hasPrevPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____leftSaberMovementDistance) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____rightSaberMovementDistance) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____leftHandMovementDistance) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____rightHandMovementDistance) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____saberMovementHistoryRecorder) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberActivityCounter, ____handMovementHistoryRecorder) == 0xa0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberActivityCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberActivityCounter*, "", "SaberActivityCounter");
