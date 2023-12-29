#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteMovement)
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct __NoteMovement__MovementPhase;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class NoteFloorMovement;
}
namespace GlobalNamespace {
class NoteJump;
}
// Forward declare root types
namespace GlobalNamespace {
struct __NoteMovement__MovementPhase;
}
namespace GlobalNamespace {
class NoteMovement;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__NoteMovement__MovementPhase);
MARK_REF_PTR_T(::GlobalNamespace::NoteMovement);
// Type: ::MovementPhase
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4903))
// CS Name: ::NoteMovement::MovementPhase
struct CORDL_TYPE __NoteMovement__MovementPhase {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NoteMovement__MovementPhase_Unwrapped
  enum struct ____NoteMovement__MovementPhase_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MovingOnTheFloor = static_cast<int32_t>(0x1),
    __E_Jumping = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NoteMovement__MovementPhase_Unwrapped() const noexcept {
    return static_cast<____NoteMovement__MovementPhase_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NoteMovement__MovementPhase(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteMovement__MovementPhase();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NoteMovement__MovementPhase const None;

  /// @brief Field MovingOnTheFloor value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NoteMovement__MovementPhase const MovingOnTheFloor;

  /// @brief Field Jumping value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NoteMovement__MovementPhase const Jumping;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteMovement__MovementPhase, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteMovement__MovementPhase, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteMovement
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(4903))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4904))
// CS Name: ::NoteMovement*
class CORDL_TYPE NoteMovement : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MovementPhase = ::GlobalNamespace::__NoteMovement__MovementPhase;

  /// @brief Field _floorMovement, offset 0x18, size 0x8
  __declspec(property(get = __get__floorMovement, put = __set__floorMovement))::GlobalNamespace::NoteFloorMovement* _floorMovement;

  /// @brief Field _jump, offset 0x20, size 0x8
  __declspec(property(get = __get__jump, put = __set__jump))::GlobalNamespace::NoteJump* _jump;

  /// @brief Field _zOffset, offset 0x28, size 0x4
  __declspec(property(get = __get__zOffset, put = __set__zOffset)) float_t _zOffset;

  /// @brief Field didInitEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_didInitEvent, put = __set_didInitEvent))::System::Action* didInitEvent;

  /// @brief Field noteDidStartJumpEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_noteDidStartJumpEvent, put = __set_noteDidStartJumpEvent))::System::Action* noteDidStartJumpEvent;

  /// @brief Field noteDidFinishJumpEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_noteDidFinishJumpEvent, put = __set_noteDidFinishJumpEvent))::System::Action* noteDidFinishJumpEvent;

  /// @brief Field noteDidPassMissedMarkerEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_noteDidPassMissedMarkerEvent, put = __set_noteDidPassMissedMarkerEvent))::System::Action* noteDidPassMissedMarkerEvent;

  /// @brief Field noteDidPassHalfJumpEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_noteDidPassHalfJumpEvent, put = __set_noteDidPassHalfJumpEvent))::System::Action* noteDidPassHalfJumpEvent;

  /// @brief Field noteDidPassJumpThreeQuartersEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_noteDidPassJumpThreeQuartersEvent,
                      put = __set_noteDidPassJumpThreeQuartersEvent))::System::Action_1<::GlobalNamespace::NoteMovement*>* noteDidPassJumpThreeQuartersEvent;

  /// @brief Field noteDidMoveInJumpPhaseEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_noteDidMoveInJumpPhaseEvent, put = __set_noteDidMoveInJumpPhaseEvent))::System::Action* noteDidMoveInJumpPhaseEvent;

  /// @brief Field <movementPhase>k__BackingField, offset 0x68, size 0x4
  __declspec(property(get = __get__movementPhase_k__BackingField, put = __set__movementPhase_k__BackingField))::GlobalNamespace::__NoteMovement__MovementPhase _movementPhase_k__BackingField;

  /// @brief Field _position, offset 0x6c, size 0xc
  __declspec(property(get = __get__position, put = __set__position))::UnityEngine::Vector3 _position;

  /// @brief Field _prevPosition, offset 0x78, size 0xc
  __declspec(property(get = __get__prevPosition, put = __set__prevPosition))::UnityEngine::Vector3 _prevPosition;

  /// @brief Field _localPosition, offset 0x84, size 0xc
  __declspec(property(get = __get__localPosition, put = __set__localPosition))::UnityEngine::Vector3 _localPosition;

  /// @brief Field _prevLocalPosition, offset 0x90, size 0xc
  __declspec(property(get = __get__prevLocalPosition, put = __set__prevLocalPosition))::UnityEngine::Vector3 _prevLocalPosition;

  __declspec(property(get = get_movementPhase, put = set_movementPhase))::GlobalNamespace::__NoteMovement__MovementPhase movementPhase;

  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_prevPosition))::UnityEngine::Vector3 prevPosition;

  __declspec(property(get = get_localPosition))::UnityEngine::Vector3 localPosition;

  __declspec(property(get = get_prevLocalPosition))::UnityEngine::Vector3 prevLocalPosition;

  __declspec(property(get = get_worldRotation))::UnityEngine::Quaternion worldRotation;

  __declspec(property(get = get_inverseWorldRotation))::UnityEngine::Quaternion inverseWorldRotation;

  __declspec(property(get = get_moveEndPos))::UnityEngine::Vector3 moveEndPos;

  __declspec(property(get = get_moveStartTime)) float_t moveStartTime;

  __declspec(property(get = get_moveDuration)) float_t moveDuration;

  __declspec(property(get = get_beatPos))::UnityEngine::Vector3 beatPos;

  __declspec(property(get = get_jumpDuration)) float_t jumpDuration;

  __declspec(property(get = get_jumpMoveVec))::UnityEngine::Vector3 jumpMoveVec;

  __declspec(property(get = get_distanceToPlayer)) float_t distanceToPlayer;

  constexpr ::GlobalNamespace::NoteFloorMovement*& __get__floorMovement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteFloorMovement*> const& __get__floorMovement() const;

  constexpr void __set__floorMovement(::GlobalNamespace::NoteFloorMovement* value);

  constexpr ::GlobalNamespace::NoteJump*& __get__jump();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteJump*> const& __get__jump() const;

  constexpr void __set__jump(::GlobalNamespace::NoteJump* value);

  constexpr float_t& __get__zOffset();

  constexpr float_t const& __get__zOffset() const;

  constexpr void __set__zOffset(float_t value);

  constexpr ::System::Action*& __get_didInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didInitEvent() const;

  constexpr void __set_didInitEvent(::System::Action* value);

  constexpr ::System::Action*& __get_noteDidStartJumpEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_noteDidStartJumpEvent() const;

  constexpr void __set_noteDidStartJumpEvent(::System::Action* value);

  constexpr ::System::Action*& __get_noteDidFinishJumpEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_noteDidFinishJumpEvent() const;

  constexpr void __set_noteDidFinishJumpEvent(::System::Action* value);

  constexpr ::System::Action*& __get_noteDidPassMissedMarkerEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_noteDidPassMissedMarkerEvent() const;

  constexpr void __set_noteDidPassMissedMarkerEvent(::System::Action* value);

  constexpr ::System::Action*& __get_noteDidPassHalfJumpEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_noteDidPassHalfJumpEvent() const;

  constexpr void __set_noteDidPassHalfJumpEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::NoteMovement*>*& __get_noteDidPassJumpThreeQuartersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteMovement*>*> const& __get_noteDidPassJumpThreeQuartersEvent() const;

  constexpr void __set_noteDidPassJumpThreeQuartersEvent(::System::Action_1<::GlobalNamespace::NoteMovement*>* value);

  constexpr ::System::Action*& __get_noteDidMoveInJumpPhaseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_noteDidMoveInJumpPhaseEvent() const;

  constexpr void __set_noteDidMoveInJumpPhaseEvent(::System::Action* value);

  constexpr ::GlobalNamespace::__NoteMovement__MovementPhase& __get__movementPhase_k__BackingField();

  constexpr ::GlobalNamespace::__NoteMovement__MovementPhase const& __get__movementPhase_k__BackingField() const;

  constexpr void __set__movementPhase_k__BackingField(::GlobalNamespace::__NoteMovement__MovementPhase value);

  constexpr ::UnityEngine::Vector3& __get__position();

  constexpr ::UnityEngine::Vector3 const& __get__position() const;

  constexpr void __set__position(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__prevPosition();

  constexpr ::UnityEngine::Vector3 const& __get__prevPosition() const;

  constexpr void __set__prevPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__localPosition();

  constexpr ::UnityEngine::Vector3 const& __get__localPosition() const;

  constexpr void __set__localPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__prevLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get__prevLocalPosition() const;

  constexpr void __set__prevLocalPosition(::UnityEngine::Vector3 value);

  /// @brief Method add_didInitEvent addr 0x2256d34 size 0x9c virtual false final false
  inline void add_didInitEvent(::System::Action* value);

  /// @brief Method remove_didInitEvent addr 0x2256dd0 size 0x9c virtual false final false
  inline void remove_didInitEvent(::System::Action* value);

  /// @brief Method add_noteDidStartJumpEvent addr 0x2252c3c size 0x9c virtual false final false
  inline void add_noteDidStartJumpEvent(::System::Action* value);

  /// @brief Method remove_noteDidStartJumpEvent addr 0x2252ec0 size 0x9c virtual false final false
  inline void remove_noteDidStartJumpEvent(::System::Action* value);

  /// @brief Method add_noteDidFinishJumpEvent addr 0x2252ba0 size 0x9c virtual false final false
  inline void add_noteDidFinishJumpEvent(::System::Action* value);

  /// @brief Method remove_noteDidFinishJumpEvent addr 0x2252e24 size 0x9c virtual false final false
  inline void remove_noteDidFinishJumpEvent(::System::Action* value);

  /// @brief Method add_noteDidPassMissedMarkerEvent addr 0x2252d88 size 0x9c virtual false final false
  inline void add_noteDidPassMissedMarkerEvent(::System::Action* value);

  /// @brief Method remove_noteDidPassMissedMarkerEvent addr 0x225300c size 0x9c virtual false final false
  inline void remove_noteDidPassMissedMarkerEvent(::System::Action* value);

  /// @brief Method add_noteDidPassHalfJumpEvent addr 0x2256e6c size 0x9c virtual false final false
  inline void add_noteDidPassHalfJumpEvent(::System::Action* value);

  /// @brief Method remove_noteDidPassHalfJumpEvent addr 0x2256f08 size 0x9c virtual false final false
  inline void remove_noteDidPassHalfJumpEvent(::System::Action* value);

  /// @brief Method add_noteDidPassJumpThreeQuartersEvent addr 0x2252cd8 size 0xb0 virtual false final false
  inline void add_noteDidPassJumpThreeQuartersEvent(::System::Action_1<::GlobalNamespace::NoteMovement*>* value);

  /// @brief Method remove_noteDidPassJumpThreeQuartersEvent addr 0x2252f5c size 0xb0 virtual false final false
  inline void remove_noteDidPassJumpThreeQuartersEvent(::System::Action_1<::GlobalNamespace::NoteMovement*>* value);

  /// @brief Method add_noteDidMoveInJumpPhaseEvent addr 0x2256fa4 size 0x9c virtual false final false
  inline void add_noteDidMoveInJumpPhaseEvent(::System::Action* value);

  /// @brief Method remove_noteDidMoveInJumpPhaseEvent addr 0x2257040 size 0x9c virtual false final false
  inline void remove_noteDidMoveInJumpPhaseEvent(::System::Action* value);

  /// @brief Method get_movementPhase addr 0x22570dc size 0x8 virtual false final false
  inline ::GlobalNamespace::__NoteMovement__MovementPhase get_movementPhase();

  /// @brief Method set_movementPhase addr 0x22570e4 size 0x8 virtual false final false
  inline void set_movementPhase(::GlobalNamespace::__NoteMovement__MovementPhase value);

  /// @brief Method get_position addr 0x22570ec size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_prevPosition addr 0x22570f8 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_prevPosition();

  /// @brief Method get_localPosition addr 0x2257104 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method get_prevLocalPosition addr 0x2257110 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_prevLocalPosition();

  /// @brief Method get_worldRotation addr 0x2252934 size 0x20 virtual false final false
  inline ::UnityEngine::Quaternion get_worldRotation();

  /// @brief Method get_inverseWorldRotation addr 0x2252954 size 0x20 virtual false final false
  inline ::UnityEngine::Quaternion get_inverseWorldRotation();

  /// @brief Method get_moveEndPos addr 0x2252b00 size 0x20 virtual false final false
  inline ::UnityEngine::Vector3 get_moveEndPos();

  /// @brief Method get_moveStartTime addr 0x2252998 size 0x1c virtual false final false
  inline float_t get_moveStartTime();

  /// @brief Method get_moveDuration addr 0x22529d8 size 0x1c virtual false final false
  inline float_t get_moveDuration();

  /// @brief Method get_beatPos addr 0x2252a94 size 0x44 virtual false final false
  inline ::UnityEngine::Vector3 get_beatPos();

  /// @brief Method get_jumpDuration addr 0x2252a18 size 0x1c virtual false final false
  inline float_t get_jumpDuration();

  /// @brief Method get_jumpMoveVec addr 0x2252a5c size 0x20 virtual false final false
  inline ::UnityEngine::Vector3 get_jumpMoveVec();

  /// @brief Method get_distanceToPlayer addr 0x225711c size 0x34 virtual false final false
  inline float_t get_distanceToPlayer();

  /// @brief Method Init addr 0x2253770 size 0x1a4 virtual false final false
  inline void Init(float_t beatTime, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t moveDuration,
                   float_t jumpDuration, float_t jumpGravity, float_t flipYSide, float_t endRotation, bool rotateTowardsPlayer, bool useRandomRotation);

  /// @brief Method Awake addr 0x2257150 size 0x1c8 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x2257318 size 0x230 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleFloorMovementDidFinish addr 0x2257548 size 0x64 virtual false final false
  inline void HandleFloorMovementDidFinish();

  /// @brief Method HandleNoteJumpDidFinish addr 0x22575ac size 0x20 virtual false final false
  inline void HandleNoteJumpDidFinish();

  /// @brief Method HandleNoteJumpDidPassMissedMark addr 0x22575cc size 0x1c virtual false final false
  inline void HandleNoteJumpDidPassMissedMark();

  /// @brief Method HandleNoteJumpDidPassThreeQuarters addr 0x22575e8 size 0x20 virtual false final false
  inline void HandleNoteJumpDidPassThreeQuarters(::GlobalNamespace::NoteJump* noteJump);

  /// @brief Method HandleNoteJumpNoteJumpDidPassHalf addr 0x2257608 size 0x1c virtual false final false
  inline void HandleNoteJumpNoteJumpDidPassHalf();

  /// @brief Method ManualUpdate addr 0x22530d0 size 0xb8 virtual false final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::NoteMovement* New_ctor();

  /// @brief Method .ctor addr 0x2257624 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteMovement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteMovement(NoteMovement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteMovement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteMovement(NoteMovement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteMovement();

public:
  /// @brief Field _floorMovement, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::NoteFloorMovement* ____floorMovement;

  /// @brief Field _jump, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::NoteJump* ____jump;

  /// @brief Field _zOffset, offset: 0x28, size: 0x4, def value: None
  float_t ____zOffset;

  /// @brief Field didInitEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___didInitEvent;

  /// @brief Field noteDidStartJumpEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___noteDidStartJumpEvent;

  /// @brief Field noteDidFinishJumpEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___noteDidFinishJumpEvent;

  /// @brief Field noteDidPassMissedMarkerEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___noteDidPassMissedMarkerEvent;

  /// @brief Field noteDidPassHalfJumpEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___noteDidPassHalfJumpEvent;

  /// @brief Field noteDidPassJumpThreeQuartersEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteMovement*>* ___noteDidPassJumpThreeQuartersEvent;

  /// @brief Field noteDidMoveInJumpPhaseEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___noteDidMoveInJumpPhaseEvent;

  /// @brief Field <movementPhase>k__BackingField, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::__NoteMovement__MovementPhase ____movementPhase_k__BackingField;

  /// @brief Field _position, offset: 0x6c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position;

  /// @brief Field _prevPosition, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevPosition;

  /// @brief Field _localPosition, offset: 0x84, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localPosition;

  /// @brief Field _prevLocalPosition, offset: 0x90, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevLocalPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteMovement, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____floorMovement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____jump) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____zOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___didInitEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___noteDidStartJumpEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___noteDidFinishJumpEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___noteDidPassMissedMarkerEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___noteDidPassHalfJumpEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___noteDidPassJumpThreeQuartersEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ___noteDidMoveInJumpPhaseEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____movementPhase_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____position) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____prevPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____localPosition) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteMovement, ____prevLocalPosition) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteMovement__MovementPhase, "", "NoteMovement/MovementPhase");
NEED_NO_BOX(::GlobalNamespace::NoteMovement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteMovement*, "", "NoteMovement");
