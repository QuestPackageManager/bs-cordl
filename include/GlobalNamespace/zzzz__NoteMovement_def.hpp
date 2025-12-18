#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteMovement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteMovement)
namespace GlobalNamespace {
class IVariableMovementDataProvider;
}
namespace GlobalNamespace {
class NoteFloorMovement;
}
namespace GlobalNamespace {
class NoteJump;
}
namespace GlobalNamespace {
struct NoteSpawnData;
}
namespace GlobalNamespace {
class NoteWaiting;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteMovement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteMovement);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteMovement
class CORDL_TYPE NoteMovement : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _distanceToPlayer, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__distanceToPlayer, put = __cordl_internal_set__distanceToPlayer)) float_t _distanceToPlayer;

  /// @brief Field _floorMovement, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__floorMovement, put = __cordl_internal_set__floorMovement)) ::UnityW<::GlobalNamespace::NoteFloorMovement> _floorMovement;

  /// @brief Field _jump, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__jump, put = __cordl_internal_set__jump)) ::UnityW<::GlobalNamespace::NoteJump> _jump;

  /// @brief Field _localPosition, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get__localPosition, put = __cordl_internal_set__localPosition)) ::UnityEngine::Vector3 _localPosition;

  /// @brief Field _position, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position)) ::UnityEngine::Vector3 _position;

  /// @brief Field _prevLocalPosition, offset 0xa4, size 0xc
  __declspec(property(get = __cordl_internal_get__prevLocalPosition, put = __cordl_internal_set__prevLocalPosition)) ::UnityEngine::Vector3 _prevLocalPosition;

  /// @brief Field _prevPosition, offset 0x8c, size 0xc
  __declspec(property(get = __cordl_internal_get__prevPosition, put = __cordl_internal_set__prevPosition)) ::UnityEngine::Vector3 _prevPosition;

  /// @brief Field _variableMovementDataProvider, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::IVariableMovementDataProvider* _variableMovementDataProvider;

  /// @brief Field _waiting, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__waiting, put = __cordl_internal_set__waiting)) ::UnityW<::GlobalNamespace::NoteWaiting> _waiting;

  /// @brief Field _zOffset, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__zOffset, put = __cordl_internal_set__zOffset)) float_t _zOffset;

  __declspec(property(get = get_beatPos)) ::UnityEngine::Vector3 beatPos;

  /// @brief Field didInitEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_didInitEvent, put = __cordl_internal_set_didInitEvent)) ::System::Action* didInitEvent;

  __declspec(property(get = get_distanceToPlayer)) float_t distanceToPlayer;

  __declspec(property(get = get_inverseWorldRotation)) ::UnityEngine::Quaternion inverseWorldRotation;

  __declspec(property(get = get_jumpMoveVec)) ::UnityEngine::Vector3 jumpMoveVec;

  __declspec(property(get = get_localPosition)) ::UnityEngine::Vector3 localPosition;

  __declspec(property(get = get_moveEndPos)) ::UnityEngine::Vector3 moveEndPos;

  /// @brief Field noteDidFinishJumpEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidFinishJumpEvent, put = __cordl_internal_set_noteDidFinishJumpEvent)) ::System::Action* noteDidFinishJumpEvent;

  /// @brief Field noteDidMoveInJumpPhaseEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidMoveInJumpPhaseEvent, put = __cordl_internal_set_noteDidMoveInJumpPhaseEvent)) ::System::Action* noteDidMoveInJumpPhaseEvent;

  /// @brief Field noteDidPassHalfJumpEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidPassHalfJumpEvent, put = __cordl_internal_set_noteDidPassHalfJumpEvent)) ::System::Action* noteDidPassHalfJumpEvent;

  /// @brief Field noteDidPassJumpThreeQuartersEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidPassJumpThreeQuartersEvent,
                      put = __cordl_internal_set_noteDidPassJumpThreeQuartersEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>* noteDidPassJumpThreeQuartersEvent;

  /// @brief Field noteDidPassMissedMarkerEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidPassMissedMarkerEvent, put = __cordl_internal_set_noteDidPassMissedMarkerEvent)) ::System::Action* noteDidPassMissedMarkerEvent;

  /// @brief Field noteDidStartJumpEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidStartJumpEvent, put = __cordl_internal_set_noteDidStartJumpEvent)) ::System::Action* noteDidStartJumpEvent;

  __declspec(property(get = get_noteTime)) float_t noteTime;

  __declspec(property(get = get_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_prevLocalPosition)) ::UnityEngine::Vector3 prevLocalPosition;

  __declspec(property(get = get_prevPosition)) ::UnityEngine::Vector3 prevPosition;

  __declspec(property(get = get_worldRotation)) ::UnityEngine::Quaternion worldRotation;

  /// @brief Method Awake, addr 0x572c498, size 0x258, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleNoteJumpDidFinish, addr 0x572c9dc, size 0x1c, virtual false, abstract: false, final false
  inline void HandleNoteJumpDidFinish();

  /// @brief Method HandleNoteJumpDidPassMissedMark, addr 0x572c9f8, size 0x1c, virtual false, abstract: false, final false
  inline void HandleNoteJumpDidPassMissedMark();

  /// @brief Method HandleNoteJumpDidPassThreeQuarters, addr 0x572ca14, size 0x20, virtual false, abstract: false, final false
  inline void HandleNoteJumpDidPassThreeQuarters(::GlobalNamespace::NoteJump* noteJump);

  /// @brief Method HandleNoteJumpDidStart, addr 0x572c9c0, size 0x1c, virtual false, abstract: false, final false
  inline void HandleNoteJumpDidStart();

  /// @brief Method HandleNoteJumpNoteJumpDidPassHalf, addr 0x572ca34, size 0x1c, virtual false, abstract: false, final false
  inline void HandleNoteJumpNoteJumpDidPassHalf();

  /// @brief Method Init, addr 0x5728480, size 0x188, virtual false, abstract: false, final false
  inline void Init(float_t noteTime, float_t worldRotation, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, float_t flipYSide, float_t endRotation, bool rotateTowardsPlayer,
                   bool useRandomRotation);

  /// @brief Method ManualUpdate, addr 0x5727e30, size 0xec, virtual false, abstract: false, final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::NoteMovement* New_ctor();

  /// @brief Method OnDestroy, addr 0x572c6f0, size 0x2d0, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr float_t const& __cordl_internal_get__distanceToPlayer() const;

  constexpr float_t& __cordl_internal_get__distanceToPlayer();

  constexpr ::UnityW<::GlobalNamespace::NoteFloorMovement> const& __cordl_internal_get__floorMovement() const;

  constexpr ::UnityW<::GlobalNamespace::NoteFloorMovement>& __cordl_internal_get__floorMovement();

  constexpr ::UnityW<::GlobalNamespace::NoteJump> const& __cordl_internal_get__jump() const;

  constexpr ::UnityW<::GlobalNamespace::NoteJump>& __cordl_internal_get__jump();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__prevLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__prevLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__prevPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__prevPosition();

  constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::IVariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr ::UnityW<::GlobalNamespace::NoteWaiting> const& __cordl_internal_get__waiting() const;

  constexpr ::UnityW<::GlobalNamespace::NoteWaiting>& __cordl_internal_get__waiting();

  constexpr float_t const& __cordl_internal_get__zOffset() const;

  constexpr float_t& __cordl_internal_get__zOffset();

  constexpr ::System::Action* const& __cordl_internal_get_didInitEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didInitEvent();

  constexpr ::System::Action* const& __cordl_internal_get_noteDidFinishJumpEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteDidFinishJumpEvent();

  constexpr ::System::Action* const& __cordl_internal_get_noteDidMoveInJumpPhaseEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteDidMoveInJumpPhaseEvent();

  constexpr ::System::Action* const& __cordl_internal_get_noteDidPassHalfJumpEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteDidPassHalfJumpEvent();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>* const& __cordl_internal_get_noteDidPassJumpThreeQuartersEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>*& __cordl_internal_get_noteDidPassJumpThreeQuartersEvent();

  constexpr ::System::Action* const& __cordl_internal_get_noteDidPassMissedMarkerEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteDidPassMissedMarkerEvent();

  constexpr ::System::Action* const& __cordl_internal_get_noteDidStartJumpEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteDidStartJumpEvent();

  constexpr void __cordl_internal_set__distanceToPlayer(float_t value);

  constexpr void __cordl_internal_set__floorMovement(::UnityW<::GlobalNamespace::NoteFloorMovement> value);

  constexpr void __cordl_internal_set__jump(::UnityW<::GlobalNamespace::NoteJump> value);

  constexpr void __cordl_internal_set__localPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__prevLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__prevPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value);

  constexpr void __cordl_internal_set__waiting(::UnityW<::GlobalNamespace::NoteWaiting> value);

  constexpr void __cordl_internal_set__zOffset(float_t value);

  constexpr void __cordl_internal_set_didInitEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteDidFinishJumpEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteDidMoveInJumpPhaseEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteDidPassHalfJumpEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteDidPassJumpThreeQuartersEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>* value);

  constexpr void __cordl_internal_set_noteDidPassMissedMarkerEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteDidStartJumpEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x572cc30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didInitEvent, addr 0x572c104, size 0xac, virtual false, abstract: false, final false
  inline void add_didInitEvent(::System::Action* value);

  /// @brief Method add_noteDidFinishJumpEvent, addr 0x5727898, size 0xac, virtual false, abstract: false, final false
  inline void add_noteDidFinishJumpEvent(::System::Action* value);

  /// @brief Method add_noteDidMoveInJumpPhaseEvent, addr 0x572c308, size 0xac, virtual false, abstract: false, final false
  inline void add_noteDidMoveInJumpPhaseEvent(::System::Action* value);

  /// @brief Method add_noteDidPassHalfJumpEvent, addr 0x57232f8, size 0xac, virtual false, abstract: false, final false
  inline void add_noteDidPassHalfJumpEvent(::System::Action* value);

  /// @brief Method add_noteDidPassJumpThreeQuartersEvent, addr 0x57279f0, size 0xc0, virtual false, abstract: false, final false
  inline void add_noteDidPassJumpThreeQuartersEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>* value);

  /// @brief Method add_noteDidPassMissedMarkerEvent, addr 0x5727ab0, size 0xac, virtual false, abstract: false, final false
  inline void add_noteDidPassMissedMarkerEvent(::System::Action* value);

  /// @brief Method add_noteDidStartJumpEvent, addr 0x5727944, size 0xac, virtual false, abstract: false, final false
  inline void add_noteDidStartJumpEvent(::System::Action* value);

  /// @brief Method get_beatPos, addr 0x5727758, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_beatPos();

  /// @brief Method get_distanceToPlayer, addr 0x572c490, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distanceToPlayer();

  /// @brief Method get_inverseWorldRotation, addr 0x57276ec, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inverseWorldRotation();

  /// @brief Method get_jumpMoveVec, addr 0x5727838, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_jumpMoveVec();

  /// @brief Method get_localPosition, addr 0x572c478, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method get_moveEndPos, addr 0x57277b8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_moveEndPos();

  /// @brief Method get_noteTime, addr 0x572772c, size 0x18, virtual false, abstract: false, final false
  inline float_t get_noteTime();

  /// @brief Method get_position, addr 0x572c460, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_prevLocalPosition, addr 0x572c484, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_prevLocalPosition();

  /// @brief Method get_prevPosition, addr 0x572c46c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_prevPosition();

  /// @brief Method get_worldRotation, addr 0x57276d0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_worldRotation();

  /// @brief Method remove_didInitEvent, addr 0x572c1b0, size 0xac, virtual false, abstract: false, final false
  inline void remove_didInitEvent(::System::Action* value);

  /// @brief Method remove_noteDidFinishJumpEvent, addr 0x5727b5c, size 0xac, virtual false, abstract: false, final false
  inline void remove_noteDidFinishJumpEvent(::System::Action* value);

  /// @brief Method remove_noteDidMoveInJumpPhaseEvent, addr 0x572c3b4, size 0xac, virtual false, abstract: false, final false
  inline void remove_noteDidMoveInJumpPhaseEvent(::System::Action* value);

  /// @brief Method remove_noteDidPassHalfJumpEvent, addr 0x572c25c, size 0xac, virtual false, abstract: false, final false
  inline void remove_noteDidPassHalfJumpEvent(::System::Action* value);

  /// @brief Method remove_noteDidPassJumpThreeQuartersEvent, addr 0x5727cb4, size 0xc0, virtual false, abstract: false, final false
  inline void remove_noteDidPassJumpThreeQuartersEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>* value);

  /// @brief Method remove_noteDidPassMissedMarkerEvent, addr 0x5727d74, size 0xac, virtual false, abstract: false, final false
  inline void remove_noteDidPassMissedMarkerEvent(::System::Action* value);

  /// @brief Method remove_noteDidStartJumpEvent, addr 0x5727c08, size 0xac, virtual false, abstract: false, final false
  inline void remove_noteDidStartJumpEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteMovement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteMovement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteMovement(NoteMovement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteMovement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteMovement(NoteMovement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5699 };

  /// @brief Field _waiting, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteWaiting> ____waiting;

  /// @brief Field _floorMovement, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteFloorMovement> ____floorMovement;

  /// @brief Field _jump, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteJump> ____jump;

  /// @brief Field _zOffset, offset: 0x38, size: 0x4, def value: None
  float_t ____zOffset;

  /// @brief Field _variableMovementDataProvider, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IVariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field didInitEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___didInitEvent;

  /// @brief Field noteDidStartJumpEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___noteDidStartJumpEvent;

  /// @brief Field noteDidFinishJumpEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___noteDidFinishJumpEvent;

  /// @brief Field noteDidPassMissedMarkerEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___noteDidPassMissedMarkerEvent;

  /// @brief Field noteDidPassHalfJumpEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___noteDidPassHalfJumpEvent;

  /// @brief Field noteDidPassJumpThreeQuartersEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>* ___noteDidPassJumpThreeQuartersEvent;

  /// @brief Field noteDidMoveInJumpPhaseEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___noteDidMoveInJumpPhaseEvent;

  /// @brief Field _position, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position;

  /// @brief Field _prevPosition, offset: 0x8c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevPosition;

  /// @brief Field _localPosition, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localPosition;

  /// @brief Field _prevLocalPosition, offset: 0xa4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevLocalPosition;

  /// @brief Field _distanceToPlayer, offset: 0xb0, size: 0x4, def value: None
  float_t ____distanceToPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteMovement, ____waiting) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____floorMovement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____jump) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____zOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____variableMovementDataProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___didInitEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___noteDidStartJumpEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___noteDidFinishJumpEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___noteDidPassMissedMarkerEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___noteDidPassHalfJumpEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___noteDidPassJumpThreeQuartersEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___noteDidMoveInJumpPhaseEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____position) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____prevPosition) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____localPosition) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____prevLocalPosition) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____distanceToPlayer) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteMovement, 0xb8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteMovement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteMovement*, "", "NoteMovement");
