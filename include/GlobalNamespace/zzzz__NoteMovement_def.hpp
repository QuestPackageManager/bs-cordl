#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteMovement.hpp"
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
namespace GlobalNamespace {
class NoteFloorMovement;
}
namespace GlobalNamespace {
class NoteJump;
}
namespace GlobalNamespace {
struct __NoteMovement__MovementPhase;
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteMovement__MovementPhase();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NoteMovement__MovementPhase(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Jumping value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NoteMovement__MovementPhase const Jumping;

  /// @brief Field MovingOnTheFloor value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NoteMovement__MovementPhase const MovingOnTheFloor;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NoteMovement__MovementPhase const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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
// CS Name: ::NoteMovement*
class CORDL_TYPE NoteMovement : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MovementPhase = ::GlobalNamespace::__NoteMovement__MovementPhase;

  /// @brief Field _floorMovement, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__floorMovement, put = __cordl_internal_set__floorMovement))::UnityW<::GlobalNamespace::NoteFloorMovement> _floorMovement;

  /// @brief Field _jump, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__jump, put = __cordl_internal_set__jump))::UnityW<::GlobalNamespace::NoteJump> _jump;

  /// @brief Field _localPosition, offset 0x84, size 0xc
  __declspec(property(get = __cordl_internal_get__localPosition, put = __cordl_internal_set__localPosition))::UnityEngine::Vector3 _localPosition;

  /// @brief Field <movementPhase>k__BackingField, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__movementPhase_k__BackingField,
                      put = __cordl_internal_set__movementPhase_k__BackingField))::GlobalNamespace::__NoteMovement__MovementPhase _movementPhase_k__BackingField;

  /// @brief Field _position, offset 0x6c, size 0xc
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position))::UnityEngine::Vector3 _position;

  /// @brief Field _prevLocalPosition, offset 0x90, size 0xc
  __declspec(property(get = __cordl_internal_get__prevLocalPosition, put = __cordl_internal_set__prevLocalPosition))::UnityEngine::Vector3 _prevLocalPosition;

  /// @brief Field _prevPosition, offset 0x78, size 0xc
  __declspec(property(get = __cordl_internal_get__prevPosition, put = __cordl_internal_set__prevPosition))::UnityEngine::Vector3 _prevPosition;

  /// @brief Field _zOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__zOffset, put = __cordl_internal_set__zOffset)) float_t _zOffset;

  __declspec(property(get = get_beatPos))::UnityEngine::Vector3 beatPos;

  /// @brief Field didInitEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_didInitEvent, put = __cordl_internal_set_didInitEvent))::System::Action* didInitEvent;

  __declspec(property(get = get_distanceToPlayer)) float_t distanceToPlayer;

  __declspec(property(get = get_inverseWorldRotation))::UnityEngine::Quaternion inverseWorldRotation;

  __declspec(property(get = get_jumpDuration)) float_t jumpDuration;

  __declspec(property(get = get_jumpMoveVec))::UnityEngine::Vector3 jumpMoveVec;

  __declspec(property(get = get_localPosition))::UnityEngine::Vector3 localPosition;

  __declspec(property(get = get_moveDuration)) float_t moveDuration;

  __declspec(property(get = get_moveEndPos))::UnityEngine::Vector3 moveEndPos;

  __declspec(property(get = get_moveStartTime)) float_t moveStartTime;

  __declspec(property(get = get_movementPhase, put = set_movementPhase))::GlobalNamespace::__NoteMovement__MovementPhase movementPhase;

  /// @brief Field noteDidFinishJumpEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidFinishJumpEvent, put = __cordl_internal_set_noteDidFinishJumpEvent))::System::Action* noteDidFinishJumpEvent;

  /// @brief Field noteDidMoveInJumpPhaseEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidMoveInJumpPhaseEvent, put = __cordl_internal_set_noteDidMoveInJumpPhaseEvent))::System::Action* noteDidMoveInJumpPhaseEvent;

  /// @brief Field noteDidPassHalfJumpEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidPassHalfJumpEvent, put = __cordl_internal_set_noteDidPassHalfJumpEvent))::System::Action* noteDidPassHalfJumpEvent;

  /// @brief Field noteDidPassJumpThreeQuartersEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidPassJumpThreeQuartersEvent,
                      put = __cordl_internal_set_noteDidPassJumpThreeQuartersEvent))::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>* noteDidPassJumpThreeQuartersEvent;

  /// @brief Field noteDidPassMissedMarkerEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidPassMissedMarkerEvent, put = __cordl_internal_set_noteDidPassMissedMarkerEvent))::System::Action* noteDidPassMissedMarkerEvent;

  /// @brief Field noteDidStartJumpEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidStartJumpEvent, put = __cordl_internal_set_noteDidStartJumpEvent))::System::Action* noteDidStartJumpEvent;

  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_prevLocalPosition))::UnityEngine::Vector3 prevLocalPosition;

  __declspec(property(get = get_prevPosition))::UnityEngine::Vector3 prevPosition;

  __declspec(property(get = get_worldRotation))::UnityEngine::Quaternion worldRotation;

  /// @brief Method Awake, addr 0x263ac98, size 0x1c8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleFloorMovementDidFinish, addr 0x263b090, size 0x64, virtual false, abstract: false, final false
  inline void HandleFloorMovementDidFinish();

  /// @brief Method HandleNoteJumpDidFinish, addr 0x263b0f4, size 0x20, virtual false, abstract: false, final false
  inline void HandleNoteJumpDidFinish();

  /// @brief Method HandleNoteJumpDidPassMissedMark, addr 0x263b114, size 0x1c, virtual false, abstract: false, final false
  inline void HandleNoteJumpDidPassMissedMark();

  /// @brief Method HandleNoteJumpDidPassThreeQuarters, addr 0x263b130, size 0x20, virtual false, abstract: false, final false
  inline void HandleNoteJumpDidPassThreeQuarters(::GlobalNamespace::NoteJump* noteJump);

  /// @brief Method HandleNoteJumpNoteJumpDidPassHalf, addr 0x263b150, size 0x1c, virtual false, abstract: false, final false
  inline void HandleNoteJumpNoteJumpDidPassHalf();

  /// @brief Method Init, addr 0x2637368, size 0x1a4, virtual false, abstract: false, final false
  inline void Init(float_t beatTime, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t moveDuration,
                   float_t jumpDuration, float_t jumpGravity, float_t flipYSide, float_t endRotation, bool rotateTowardsPlayer, bool useRandomRotation);

  /// @brief Method ManualUpdate, addr 0x2636cc8, size 0xb8, virtual false, abstract: false, final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::NoteMovement* New_ctor();

  /// @brief Method OnDestroy, addr 0x263ae60, size 0x230, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::NoteFloorMovement> const& __cordl_internal_get__floorMovement() const;

  constexpr ::UnityW<::GlobalNamespace::NoteFloorMovement>& __cordl_internal_get__floorMovement();

  constexpr ::UnityW<::GlobalNamespace::NoteJump> const& __cordl_internal_get__jump() const;

  constexpr ::UnityW<::GlobalNamespace::NoteJump>& __cordl_internal_get__jump();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPosition();

  constexpr ::GlobalNamespace::__NoteMovement__MovementPhase const& __cordl_internal_get__movementPhase_k__BackingField() const;

  constexpr ::GlobalNamespace::__NoteMovement__MovementPhase& __cordl_internal_get__movementPhase_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__prevLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__prevLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__prevPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__prevPosition();

  constexpr float_t const& __cordl_internal_get__zOffset() const;

  constexpr float_t& __cordl_internal_get__zOffset();

  constexpr ::System::Action*& __cordl_internal_get_didInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didInitEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteDidFinishJumpEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_noteDidFinishJumpEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteDidMoveInJumpPhaseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_noteDidMoveInJumpPhaseEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteDidPassHalfJumpEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_noteDidPassHalfJumpEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>*& __cordl_internal_get_noteDidPassJumpThreeQuartersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>*> const& __cordl_internal_get_noteDidPassJumpThreeQuartersEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteDidPassMissedMarkerEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_noteDidPassMissedMarkerEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteDidStartJumpEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_noteDidStartJumpEvent() const;

  constexpr void __cordl_internal_set__floorMovement(::UnityW<::GlobalNamespace::NoteFloorMovement> value);

  constexpr void __cordl_internal_set__jump(::UnityW<::GlobalNamespace::NoteJump> value);

  constexpr void __cordl_internal_set__localPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__movementPhase_k__BackingField(::GlobalNamespace::__NoteMovement__MovementPhase value);

  constexpr void __cordl_internal_set__position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__prevLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__prevPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__zOffset(float_t value);

  constexpr void __cordl_internal_set_didInitEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteDidFinishJumpEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteDidMoveInJumpPhaseEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteDidPassHalfJumpEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteDidPassJumpThreeQuartersEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>* value);

  constexpr void __cordl_internal_set_noteDidPassMissedMarkerEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteDidStartJumpEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x263b16c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didInitEvent, addr 0x263a918, size 0x9c, virtual false, abstract: false, final false
  inline void add_didInitEvent(::System::Action* value);

  /// @brief Method add_noteDidFinishJumpEvent, addr 0x2636798, size 0x9c, virtual false, abstract: false, final false
  inline void add_noteDidFinishJumpEvent(::System::Action* value);

  /// @brief Method add_noteDidMoveInJumpPhaseEvent, addr 0x263aaec, size 0x9c, virtual false, abstract: false, final false
  inline void add_noteDidMoveInJumpPhaseEvent(::System::Action* value);

  /// @brief Method add_noteDidPassHalfJumpEvent, addr 0x263249c, size 0x9c, virtual false, abstract: false, final false
  inline void add_noteDidPassHalfJumpEvent(::System::Action* value);

  /// @brief Method add_noteDidPassJumpThreeQuartersEvent, addr 0x26368d0, size 0xb0, virtual false, abstract: false, final false
  inline void add_noteDidPassJumpThreeQuartersEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>* value);

  /// @brief Method add_noteDidPassMissedMarkerEvent, addr 0x2636980, size 0x9c, virtual false, abstract: false, final false
  inline void add_noteDidPassMissedMarkerEvent(::System::Action* value);

  /// @brief Method add_noteDidStartJumpEvent, addr 0x2636834, size 0x9c, virtual false, abstract: false, final false
  inline void add_noteDidStartJumpEvent(::System::Action* value);

  /// @brief Method get_beatPos, addr 0x2636684, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_beatPos();

  /// @brief Method get_distanceToPlayer, addr 0x263ac64, size 0x34, virtual false, abstract: false, final false
  inline float_t get_distanceToPlayer();

  /// @brief Method get_inverseWorldRotation, addr 0x2636544, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inverseWorldRotation();

  /// @brief Method get_jumpDuration, addr 0x2636608, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_jumpDuration();

  /// @brief Method get_jumpMoveVec, addr 0x263664c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_jumpMoveVec();

  /// @brief Method get_localPosition, addr 0x263ac4c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method get_moveDuration, addr 0x26365c8, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_moveDuration();

  /// @brief Method get_moveEndPos, addr 0x26366f0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_moveEndPos();

  /// @brief Method get_moveStartTime, addr 0x2636588, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_moveStartTime();

  /// @brief Method get_movementPhase, addr 0x263ac24, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__NoteMovement__MovementPhase get_movementPhase();

  /// @brief Method get_position, addr 0x263ac34, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_prevLocalPosition, addr 0x263ac58, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_prevLocalPosition();

  /// @brief Method get_prevPosition, addr 0x263ac40, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_prevPosition();

  /// @brief Method get_worldRotation, addr 0x2636524, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_worldRotation();

  /// @brief Method remove_didInitEvent, addr 0x263a9b4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didInitEvent(::System::Action* value);

  /// @brief Method remove_noteDidFinishJumpEvent, addr 0x2636a1c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_noteDidFinishJumpEvent(::System::Action* value);

  /// @brief Method remove_noteDidMoveInJumpPhaseEvent, addr 0x263ab88, size 0x9c, virtual false, abstract: false, final false
  inline void remove_noteDidMoveInJumpPhaseEvent(::System::Action* value);

  /// @brief Method remove_noteDidPassHalfJumpEvent, addr 0x263aa50, size 0x9c, virtual false, abstract: false, final false
  inline void remove_noteDidPassHalfJumpEvent(::System::Action* value);

  /// @brief Method remove_noteDidPassJumpThreeQuartersEvent, addr 0x2636b54, size 0xb0, virtual false, abstract: false, final false
  inline void remove_noteDidPassJumpThreeQuartersEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>* value);

  /// @brief Method remove_noteDidPassMissedMarkerEvent, addr 0x2636c04, size 0x9c, virtual false, abstract: false, final false
  inline void remove_noteDidPassMissedMarkerEvent(::System::Action* value);

  /// @brief Method remove_noteDidStartJumpEvent, addr 0x2636ab8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_noteDidStartJumpEvent(::System::Action* value);

  /// @brief Method set_movementPhase, addr 0x263ac2c, size 0x8, virtual false, abstract: false, final false
  inline void set_movementPhase(::GlobalNamespace::__NoteMovement__MovementPhase value);

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

  /// @brief Field _floorMovement, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteFloorMovement> ____floorMovement;

  /// @brief Field _jump, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteJump> ____jump;

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
  ::System::Action_1<::UnityW<::GlobalNamespace::NoteMovement>>* ___noteDidPassJumpThreeQuartersEvent;

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
