#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteFloorMovement)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteFloorMovement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteFloorMovement);
// Type: ::NoteFloorMovement
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4777))
// CS Name: ::NoteFloorMovement*
class CORDL_TYPE NoteFloorMovement : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rotatedObject, offset 0x18, size 0x8
  __declspec(property(get = __get__rotatedObject, put = __set__rotatedObject))::UnityEngine::Transform* _rotatedObject;

  /// @brief Field _playerTransforms, offset 0x20, size 0x8
  __declspec(property(get = __get__playerTransforms, put = __set__playerTransforms))::GlobalNamespace::PlayerTransforms* _playerTransforms;

  /// @brief Field _audioTimeSyncController, offset 0x28, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field floorMovementDidFinishEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_floorMovementDidFinishEvent, put = __set_floorMovementDidFinishEvent))::System::Action* floorMovementDidFinishEvent;

  /// @brief Field _startPos, offset 0x38, size 0xc
  __declspec(property(get = __get__startPos, put = __set__startPos))::UnityEngine::Vector3 _startPos;

  /// @brief Field _endPos, offset 0x44, size 0xc
  __declspec(property(get = __get__endPos, put = __set__endPos))::UnityEngine::Vector3 _endPos;

  /// @brief Field _moveDuration, offset 0x50, size 0x4
  __declspec(property(get = __get__moveDuration, put = __set__moveDuration)) float_t _moveDuration;

  /// @brief Field _startTime, offset 0x54, size 0x4
  __declspec(property(get = __get__startTime, put = __set__startTime)) float_t _startTime;

  /// @brief Field _worldRotation, offset 0x58, size 0x10
  __declspec(property(get = __get__worldRotation, put = __set__worldRotation))::UnityEngine::Quaternion _worldRotation;

  /// @brief Field _inverseWorldRotation, offset 0x68, size 0x10
  __declspec(property(get = __get__inverseWorldRotation, put = __set__inverseWorldRotation))::UnityEngine::Quaternion _inverseWorldRotation;

  /// @brief Field _localPosition, offset 0x78, size 0xc
  __declspec(property(get = __get__localPosition, put = __set__localPosition))::UnityEngine::Vector3 _localPosition;

  __declspec(property(get = get_distanceToPlayer)) float_t distanceToPlayer;

  __declspec(property(get = get_startPos))::UnityEngine::Vector3 startPos;

  __declspec(property(get = get_endPos))::UnityEngine::Vector3 endPos;

  __declspec(property(get = get_startTime)) float_t startTime;

  __declspec(property(get = get_moveDuration)) float_t moveDuration;

  __declspec(property(get = get_worldRotation))::UnityEngine::Quaternion worldRotation;

  __declspec(property(get = get_inverseWorldRotation))::UnityEngine::Quaternion inverseWorldRotation;

  __declspec(property(get = get_localPosition))::UnityEngine::Vector3 localPosition;

  constexpr ::UnityEngine::Transform*& __get__rotatedObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rotatedObject() const;

  constexpr void __set__rotatedObject(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::PlayerTransforms*& __get__playerTransforms();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& __get__playerTransforms() const;

  constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::System::Action*& __get_floorMovementDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_floorMovementDidFinishEvent() const;

  constexpr void __set_floorMovementDidFinishEvent(::System::Action* value);

  constexpr ::UnityEngine::Vector3& __get__startPos();

  constexpr ::UnityEngine::Vector3 const& __get__startPos() const;

  constexpr void __set__startPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__endPos();

  constexpr ::UnityEngine::Vector3 const& __get__endPos() const;

  constexpr void __set__endPos(::UnityEngine::Vector3 value);

  constexpr float_t& __get__moveDuration();

  constexpr float_t const& __get__moveDuration() const;

  constexpr void __set__moveDuration(float_t value);

  constexpr float_t& __get__startTime();

  constexpr float_t const& __get__startTime() const;

  constexpr void __set__startTime(float_t value);

  constexpr ::UnityEngine::Quaternion& __get__worldRotation();

  constexpr ::UnityEngine::Quaternion const& __get__worldRotation() const;

  constexpr void __set__worldRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get__inverseWorldRotation();

  constexpr ::UnityEngine::Quaternion const& __get__inverseWorldRotation() const;

  constexpr void __set__inverseWorldRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get__localPosition();

  constexpr ::UnityEngine::Vector3 const& __get__localPosition() const;

  constexpr void __set__localPosition(::UnityEngine::Vector3 value);

  /// @brief Method add_floorMovementDidFinishEvent, addr 0x23887c0, size 0x9c, virtual false, abstract: false, final false
  inline void add_floorMovementDidFinishEvent(::System::Action* value);

  /// @brief Method remove_floorMovementDidFinishEvent, addr 0x238885c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_floorMovementDidFinishEvent(::System::Action* value);

  /// @brief Method get_distanceToPlayer, addr 0x23888f8, size 0x40, virtual false, abstract: false, final false
  inline float_t get_distanceToPlayer();

  /// @brief Method get_startPos, addr 0x2388938, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_startPos();

  /// @brief Method get_endPos, addr 0x2388944, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_endPos();

  /// @brief Method get_startTime, addr 0x2388950, size 0x8, virtual false, abstract: false, final false
  inline float_t get_startTime();

  /// @brief Method get_moveDuration, addr 0x2388958, size 0x8, virtual false, abstract: false, final false
  inline float_t get_moveDuration();

  /// @brief Method get_worldRotation, addr 0x2388960, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_worldRotation();

  /// @brief Method get_inverseWorldRotation, addr 0x238896c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inverseWorldRotation();

  /// @brief Method get_localPosition, addr 0x2388978, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method Init, addr 0x2388984, size 0xb8, virtual false, abstract: false, final false
  inline void Init(float_t worldRotation, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, float_t moveDuration, float_t startTime);

  /// @brief Method SetToStart, addr 0x2388a3c, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 SetToStart();

  /// @brief Method ManualUpdate, addr 0x2388b30, size 0x180, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ManualUpdate();

  static inline ::GlobalNamespace::NoteFloorMovement* New_ctor();

  /// @brief Method .ctor, addr 0x2388cb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteFloorMovement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteFloorMovement(NoteFloorMovement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteFloorMovement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteFloorMovement(NoteFloorMovement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteFloorMovement();

public:
  /// @brief Field _rotatedObject, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rotatedObject;

  /// @brief Field _playerTransforms, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerTransforms* ____playerTransforms;

  /// @brief Field _audioTimeSyncController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field floorMovementDidFinishEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___floorMovementDidFinishEvent;

  /// @brief Field _startPos, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _endPos, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endPos;

  /// @brief Field _moveDuration, offset: 0x50, size: 0x4, def value: None
  float_t ____moveDuration;

  /// @brief Field _startTime, offset: 0x54, size: 0x4, def value: None
  float_t ____startTime;

  /// @brief Field _worldRotation, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____worldRotation;

  /// @brief Field _inverseWorldRotation, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____inverseWorldRotation;

  /// @brief Field _localPosition, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteFloorMovement, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____rotatedObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____playerTransforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____audioTimeSyncController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ___floorMovementDidFinishEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____startPos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____endPos) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____moveDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____startTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____worldRotation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____inverseWorldRotation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____localPosition) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteFloorMovement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteFloorMovement*, "", "NoteFloorMovement");
