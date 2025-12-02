#pragma once
// IWYU pragma private; include "GlobalNamespace/IVariableMovementDataProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IVariableMovementDataProvider)
namespace GlobalNamespace {
struct BeatmapObjectSpawnMovementData_NoteJumpValueType;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class IVariableMovementDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IVariableMovementDataProvider);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IVariableMovementDataProvider
class CORDL_TYPE IVariableMovementDataProvider {
public:
  // Declarations
  __declspec(property(get = get_halfJumpDuration)) float_t halfJumpDuration;

  __declspec(property(get = get_jumpDistance)) float_t jumpDistance;

  __declspec(property(get = get_jumpDuration)) float_t jumpDuration;

  __declspec(property(get = get_jumpEndPosition)) ::UnityEngine::Vector3 jumpEndPosition;

  __declspec(property(get = get_moveDuration)) float_t moveDuration;

  __declspec(property(get = get_moveEndPosition)) ::UnityEngine::Vector3 moveEndPosition;

  __declspec(property(get = get_moveStartPosition)) ::UnityEngine::Vector3 moveStartPosition;

  __declspec(property(get = get_noteJumpSpeed)) float_t noteJumpSpeed;

  __declspec(property(get = get_spawnAheadTime)) float_t spawnAheadTime;

  __declspec(property(get = get_waitingDuration)) float_t waitingDuration;

  __declspec(property(get = get_wasUpdatedThisFrame)) bool wasUpdatedThisFrame;

  /// @brief Method CalculateCurrentNoteJumpGravity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t CalculateCurrentNoteJumpGravity(float_t gravityBase);

  /// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t minRelativeNoteJumpSpeed, float_t bpm,
                   ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType noteJumpValueType, float_t noteJumpValue, ::UnityEngine::Vector3 centerPosition,
                   ::UnityEngine::Vector3 forwardVector);

  /// @brief Method JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(float_t highestJumpPosY, float_t distanceFromPlayer);

  /// @brief Method get_halfJumpDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_halfJumpDuration();

  /// @brief Method get_jumpDistance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_jumpDistance();

  /// @brief Method get_jumpDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_jumpDuration();

  /// @brief Method get_jumpEndPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_jumpEndPosition();

  /// @brief Method get_moveDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_moveDuration();

  /// @brief Method get_moveEndPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_moveEndPosition();

  /// @brief Method get_moveStartPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_moveStartPosition();

  /// @brief Method get_noteJumpSpeed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_noteJumpSpeed();

  /// @brief Method get_spawnAheadTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_spawnAheadTime();

  /// @brief Method get_waitingDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_waitingDuration();

  /// @brief Method get_wasUpdatedThisFrame, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_wasUpdatedThisFrame();

  // Ctor Parameters [CppParam { name: "", ty: "IVariableMovementDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVariableMovementDataProvider(IVariableMovementDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5649 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IVariableMovementDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IVariableMovementDataProvider*, "", "IVariableMovementDataProvider");
