#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteJump)
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class PlayerSpaceConvertor;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJump;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteJump);
// Type: ::NoteJump
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 281, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4778))
// CS Name: ::NoteJump*
class CORDL_TYPE NoteJump : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rotatedObject, offset 0x18, size 0x8
  __declspec(property(get = __get__rotatedObject, put = __set__rotatedObject))::UnityEngine::Transform* _rotatedObject;

  /// @brief Field _yAvoidanceUp, offset 0x20, size 0x4
  __declspec(property(get = __get__yAvoidanceUp, put = __set__yAvoidanceUp)) float_t _yAvoidanceUp;

  /// @brief Field _yAvoidanceDown, offset 0x24, size 0x4
  __declspec(property(get = __get__yAvoidanceDown, put = __set__yAvoidanceDown)) float_t _yAvoidanceDown;

  /// @brief Field _endDistanceOffset, offset 0x28, size 0x4
  __declspec(property(get = __get__endDistanceOffset, put = __set__endDistanceOffset)) float_t _endDistanceOffset;

  /// @brief Field _playerTransforms, offset 0x30, size 0x8
  __declspec(property(get = __get__playerTransforms, put = __set__playerTransforms))::GlobalNamespace::PlayerTransforms* _playerTransforms;

  /// @brief Field _playerSpaceConvertor, offset 0x38, size 0x8
  __declspec(property(get = __get__playerSpaceConvertor, put = __set__playerSpaceConvertor))::GlobalNamespace::PlayerSpaceConvertor* _playerSpaceConvertor;

  /// @brief Field _audioTimeSyncController, offset 0x40, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field noteJumpDidFinishEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_noteJumpDidFinishEvent, put = __set_noteJumpDidFinishEvent))::System::Action* noteJumpDidFinishEvent;

  /// @brief Field noteJumpDidPassMissedMarkerEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_noteJumpDidPassMissedMarkerEvent, put = __set_noteJumpDidPassMissedMarkerEvent))::System::Action* noteJumpDidPassMissedMarkerEvent;

  /// @brief Field noteJumpDidPassThreeQuartersEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_noteJumpDidPassThreeQuartersEvent, put = __set_noteJumpDidPassThreeQuartersEvent))::System::Action_1<::GlobalNamespace::NoteJump*>* noteJumpDidPassThreeQuartersEvent;

  /// @brief Field noteJumpDidPassHalfEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_noteJumpDidPassHalfEvent, put = __set_noteJumpDidPassHalfEvent))::System::Action* noteJumpDidPassHalfEvent;

  /// @brief Field noteJumpDidUpdateProgressEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_noteJumpDidUpdateProgressEvent, put = __set_noteJumpDidUpdateProgressEvent))::System::Action_1<float_t>* noteJumpDidUpdateProgressEvent;

  /// @brief Field _startPos, offset 0x70, size 0xc
  __declspec(property(get = __get__startPos, put = __set__startPos))::UnityEngine::Vector3 _startPos;

  /// @brief Field _endPos, offset 0x7c, size 0xc
  __declspec(property(get = __get__endPos, put = __set__endPos))::UnityEngine::Vector3 _endPos;

  /// @brief Field _jumpDuration, offset 0x88, size 0x4
  __declspec(property(get = __get__jumpDuration, put = __set__jumpDuration)) float_t _jumpDuration;

  /// @brief Field _moveVec, offset 0x8c, size 0xc
  __declspec(property(get = __get__moveVec, put = __set__moveVec))::UnityEngine::Vector3 _moveVec;

  /// @brief Field _beatTime, offset 0x98, size 0x4
  __declspec(property(get = __get__beatTime, put = __set__beatTime)) float_t _beatTime;

  /// @brief Field _startVerticalVelocity, offset 0x9c, size 0x4
  __declspec(property(get = __get__startVerticalVelocity, put = __set__startVerticalVelocity)) float_t _startVerticalVelocity;

  /// @brief Field _startRotation, offset 0xa0, size 0x10
  __declspec(property(get = __get__startRotation, put = __set__startRotation))::UnityEngine::Quaternion _startRotation;

  /// @brief Field _middleRotation, offset 0xb0, size 0x10
  __declspec(property(get = __get__middleRotation, put = __set__middleRotation))::UnityEngine::Quaternion _middleRotation;

  /// @brief Field _endRotation, offset 0xc0, size 0x10
  __declspec(property(get = __get__endRotation, put = __set__endRotation))::UnityEngine::Quaternion _endRotation;

  /// @brief Field _gravity, offset 0xd0, size 0x4
  __declspec(property(get = __get__gravity, put = __set__gravity)) float_t _gravity;

  /// @brief Field _yAvoidance, offset 0xd4, size 0x4
  __declspec(property(get = __get__yAvoidance, put = __set__yAvoidance)) float_t _yAvoidance;

  /// @brief Field _missedTime, offset 0xd8, size 0x4
  __declspec(property(get = __get__missedTime, put = __set__missedTime)) float_t _missedTime;

  /// @brief Field _missedMarkReported, offset 0xdc, size 0x1
  __declspec(property(get = __get__missedMarkReported, put = __set__missedMarkReported)) bool _missedMarkReported;

  /// @brief Field _threeQuartersMarkReported, offset 0xdd, size 0x1
  __declspec(property(get = __get__threeQuartersMarkReported, put = __set__threeQuartersMarkReported)) bool _threeQuartersMarkReported;

  /// @brief Field _halfJumpMarkReported, offset 0xde, size 0x1
  __declspec(property(get = __get__halfJumpMarkReported, put = __set__halfJumpMarkReported)) bool _halfJumpMarkReported;

  /// @brief Field _localPosition, offset 0xe0, size 0xc
  __declspec(property(get = __get__localPosition, put = __set__localPosition))::UnityEngine::Vector3 _localPosition;

  /// @brief Field _randomRotations, offset 0xf0, size 0x8
  __declspec(property(get = __get__randomRotations, put = __set__randomRotations))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _randomRotations;

  /// @brief Field _worldRotation, offset 0xf8, size 0x10
  __declspec(property(get = __get__worldRotation, put = __set__worldRotation))::UnityEngine::Quaternion _worldRotation;

  /// @brief Field _inverseWorldRotation, offset 0x108, size 0x10
  __declspec(property(get = __get__inverseWorldRotation, put = __set__inverseWorldRotation))::UnityEngine::Quaternion _inverseWorldRotation;

  /// @brief Field _rotateTowardsPlayer, offset 0x118, size 0x1
  __declspec(property(get = __get__rotateTowardsPlayer, put = __set__rotateTowardsPlayer)) bool _rotateTowardsPlayer;

  __declspec(property(get = get_distanceToPlayer)) float_t distanceToPlayer;

  __declspec(property(get = get_beatPos))::UnityEngine::Vector3 beatPos;

  __declspec(property(get = get_jumpDuration)) float_t jumpDuration;

  __declspec(property(get = get_moveVec))::UnityEngine::Vector3 moveVec;

  __declspec(property(get = get_localPosition))::UnityEngine::Vector3 localPosition;

  constexpr ::UnityEngine::Transform*& __get__rotatedObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rotatedObject() const;

  constexpr void __set__rotatedObject(::UnityEngine::Transform* value);

  constexpr float_t& __get__yAvoidanceUp();

  constexpr float_t const& __get__yAvoidanceUp() const;

  constexpr void __set__yAvoidanceUp(float_t value);

  constexpr float_t& __get__yAvoidanceDown();

  constexpr float_t const& __get__yAvoidanceDown() const;

  constexpr void __set__yAvoidanceDown(float_t value);

  constexpr float_t& __get__endDistanceOffset();

  constexpr float_t const& __get__endDistanceOffset() const;

  constexpr void __set__endDistanceOffset(float_t value);

  constexpr ::GlobalNamespace::PlayerTransforms*& __get__playerTransforms();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& __get__playerTransforms() const;

  constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms* value);

  constexpr ::GlobalNamespace::PlayerSpaceConvertor*& __get__playerSpaceConvertor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpaceConvertor*> const& __get__playerSpaceConvertor() const;

  constexpr void __set__playerSpaceConvertor(::GlobalNamespace::PlayerSpaceConvertor* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::System::Action*& __get_noteJumpDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_noteJumpDidFinishEvent() const;

  constexpr void __set_noteJumpDidFinishEvent(::System::Action* value);

  constexpr ::System::Action*& __get_noteJumpDidPassMissedMarkerEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_noteJumpDidPassMissedMarkerEvent() const;

  constexpr void __set_noteJumpDidPassMissedMarkerEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::NoteJump*>*& __get_noteJumpDidPassThreeQuartersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteJump*>*> const& __get_noteJumpDidPassThreeQuartersEvent() const;

  constexpr void __set_noteJumpDidPassThreeQuartersEvent(::System::Action_1<::GlobalNamespace::NoteJump*>* value);

  constexpr ::System::Action*& __get_noteJumpDidPassHalfEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_noteJumpDidPassHalfEvent() const;

  constexpr void __set_noteJumpDidPassHalfEvent(::System::Action* value);

  constexpr ::System::Action_1<float_t>*& __get_noteJumpDidUpdateProgressEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __get_noteJumpDidUpdateProgressEvent() const;

  constexpr void __set_noteJumpDidUpdateProgressEvent(::System::Action_1<float_t>* value);

  constexpr ::UnityEngine::Vector3& __get__startPos();

  constexpr ::UnityEngine::Vector3 const& __get__startPos() const;

  constexpr void __set__startPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__endPos();

  constexpr ::UnityEngine::Vector3 const& __get__endPos() const;

  constexpr void __set__endPos(::UnityEngine::Vector3 value);

  constexpr float_t& __get__jumpDuration();

  constexpr float_t const& __get__jumpDuration() const;

  constexpr void __set__jumpDuration(float_t value);

  constexpr ::UnityEngine::Vector3& __get__moveVec();

  constexpr ::UnityEngine::Vector3 const& __get__moveVec() const;

  constexpr void __set__moveVec(::UnityEngine::Vector3 value);

  constexpr float_t& __get__beatTime();

  constexpr float_t const& __get__beatTime() const;

  constexpr void __set__beatTime(float_t value);

  constexpr float_t& __get__startVerticalVelocity();

  constexpr float_t const& __get__startVerticalVelocity() const;

  constexpr void __set__startVerticalVelocity(float_t value);

  constexpr ::UnityEngine::Quaternion& __get__startRotation();

  constexpr ::UnityEngine::Quaternion const& __get__startRotation() const;

  constexpr void __set__startRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get__middleRotation();

  constexpr ::UnityEngine::Quaternion const& __get__middleRotation() const;

  constexpr void __set__middleRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get__endRotation();

  constexpr ::UnityEngine::Quaternion const& __get__endRotation() const;

  constexpr void __set__endRotation(::UnityEngine::Quaternion value);

  constexpr float_t& __get__gravity();

  constexpr float_t const& __get__gravity() const;

  constexpr void __set__gravity(float_t value);

  constexpr float_t& __get__yAvoidance();

  constexpr float_t const& __get__yAvoidance() const;

  constexpr void __set__yAvoidance(float_t value);

  constexpr float_t& __get__missedTime();

  constexpr float_t const& __get__missedTime() const;

  constexpr void __set__missedTime(float_t value);

  constexpr bool& __get__missedMarkReported();

  constexpr bool const& __get__missedMarkReported() const;

  constexpr void __set__missedMarkReported(bool value);

  constexpr bool& __get__threeQuartersMarkReported();

  constexpr bool const& __get__threeQuartersMarkReported() const;

  constexpr void __set__threeQuartersMarkReported(bool value);

  constexpr bool& __get__halfJumpMarkReported();

  constexpr bool const& __get__halfJumpMarkReported() const;

  constexpr void __set__halfJumpMarkReported(bool value);

  constexpr ::UnityEngine::Vector3& __get__localPosition();

  constexpr ::UnityEngine::Vector3 const& __get__localPosition() const;

  constexpr void __set__localPosition(::UnityEngine::Vector3 value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get__randomRotations();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get__randomRotations() const;

  constexpr void __set__randomRotations(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::UnityEngine::Quaternion& __get__worldRotation();

  constexpr ::UnityEngine::Quaternion const& __get__worldRotation() const;

  constexpr void __set__worldRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get__inverseWorldRotation();

  constexpr ::UnityEngine::Quaternion const& __get__inverseWorldRotation() const;

  constexpr void __set__inverseWorldRotation(::UnityEngine::Quaternion value);

  constexpr bool& __get__rotateTowardsPlayer();

  constexpr bool const& __get__rotateTowardsPlayer() const;

  constexpr void __set__rotateTowardsPlayer(bool value);

  /// @brief Method add_noteJumpDidFinishEvent addr 0x2388cb8 size 0x9c virtual false final false
  inline void add_noteJumpDidFinishEvent(::System::Action* value);

  /// @brief Method remove_noteJumpDidFinishEvent addr 0x2388d54 size 0x9c virtual false final false
  inline void remove_noteJumpDidFinishEvent(::System::Action* value);

  /// @brief Method add_noteJumpDidPassMissedMarkerEvent addr 0x2388df0 size 0x9c virtual false final false
  inline void add_noteJumpDidPassMissedMarkerEvent(::System::Action* value);

  /// @brief Method remove_noteJumpDidPassMissedMarkerEvent addr 0x2388e8c size 0x9c virtual false final false
  inline void remove_noteJumpDidPassMissedMarkerEvent(::System::Action* value);

  /// @brief Method add_noteJumpDidPassThreeQuartersEvent addr 0x2388f28 size 0xb0 virtual false final false
  inline void add_noteJumpDidPassThreeQuartersEvent(::System::Action_1<::GlobalNamespace::NoteJump*>* value);

  /// @brief Method remove_noteJumpDidPassThreeQuartersEvent addr 0x2388fd8 size 0xb0 virtual false final false
  inline void remove_noteJumpDidPassThreeQuartersEvent(::System::Action_1<::GlobalNamespace::NoteJump*>* value);

  /// @brief Method add_noteJumpDidPassHalfEvent addr 0x2389088 size 0x9c virtual false final false
  inline void add_noteJumpDidPassHalfEvent(::System::Action* value);

  /// @brief Method remove_noteJumpDidPassHalfEvent addr 0x2389124 size 0x9c virtual false final false
  inline void remove_noteJumpDidPassHalfEvent(::System::Action* value);

  /// @brief Method add_noteJumpDidUpdateProgressEvent addr 0x23891c0 size 0xb0 virtual false final false
  inline void add_noteJumpDidUpdateProgressEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_noteJumpDidUpdateProgressEvent addr 0x2389270 size 0xb0 virtual false final false
  inline void remove_noteJumpDidUpdateProgressEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_distanceToPlayer addr 0x2389320 size 0x48 virtual false final false
  inline float_t get_distanceToPlayer();

  /// @brief Method get_beatPos addr 0x2389368 size 0x30 virtual false final false
  inline ::UnityEngine::Vector3 get_beatPos();

  /// @brief Method get_jumpDuration addr 0x2389398 size 0x8 virtual false final false
  inline float_t get_jumpDuration();

  /// @brief Method get_moveVec addr 0x23893a0 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_moveVec();

  /// @brief Method get_localPosition addr 0x23893ac size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method Init addr 0x23893b8 size 0x394 virtual false final false
  inline void Init(float_t beatTime, float_t worldRotation, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, float_t jumpDuration, float_t gravity, float_t flipYSide,
                   float_t endRotation, bool rotateTowardsPlayer, bool useRandomRotation);

  /// @brief Method ManualUpdate addr 0x238974c size 0x640 virtual false final false
  inline ::UnityEngine::Vector3 ManualUpdate();

  static inline ::GlobalNamespace::NoteJump* New_ctor();

  /// @brief Method .ctor addr 0x2389d8c size 0x1b8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteJump", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteJump(NoteJump&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteJump", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteJump(NoteJump const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteJump();

public:
  /// @brief Field _rotatedObject, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rotatedObject;

  /// @brief Field _yAvoidanceUp, offset: 0x20, size: 0x4, def value: None
  float_t ____yAvoidanceUp;

  /// @brief Field _yAvoidanceDown, offset: 0x24, size: 0x4, def value: None
  float_t ____yAvoidanceDown;

  /// @brief Field _endDistanceOffset, offset: 0x28, size: 0x4, def value: None
  float_t ____endDistanceOffset;

  /// @brief Field _playerTransforms, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlayerTransforms* ____playerTransforms;

  /// @brief Field _playerSpaceConvertor, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpaceConvertor* ____playerSpaceConvertor;

  /// @brief Field _audioTimeSyncController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field noteJumpDidFinishEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___noteJumpDidFinishEvent;

  /// @brief Field noteJumpDidPassMissedMarkerEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___noteJumpDidPassMissedMarkerEvent;

  /// @brief Field noteJumpDidPassThreeQuartersEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteJump*>* ___noteJumpDidPassThreeQuartersEvent;

  /// @brief Field noteJumpDidPassHalfEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___noteJumpDidPassHalfEvent;

  /// @brief Field noteJumpDidUpdateProgressEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___noteJumpDidUpdateProgressEvent;

  /// @brief Field _startPos, offset: 0x70, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _endPos, offset: 0x7c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endPos;

  /// @brief Field _jumpDuration, offset: 0x88, size: 0x4, def value: None
  float_t ____jumpDuration;

  /// @brief Field _moveVec, offset: 0x8c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____moveVec;

  /// @brief Field _beatTime, offset: 0x98, size: 0x4, def value: None
  float_t ____beatTime;

  /// @brief Field _startVerticalVelocity, offset: 0x9c, size: 0x4, def value: None
  float_t ____startVerticalVelocity;

  /// @brief Field _startRotation, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____startRotation;

  /// @brief Field _middleRotation, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____middleRotation;

  /// @brief Field _endRotation, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____endRotation;

  /// @brief Field _gravity, offset: 0xd0, size: 0x4, def value: None
  float_t ____gravity;

  /// @brief Field _yAvoidance, offset: 0xd4, size: 0x4, def value: None
  float_t ____yAvoidance;

  /// @brief Field _missedTime, offset: 0xd8, size: 0x4, def value: None
  float_t ____missedTime;

  /// @brief Field _missedMarkReported, offset: 0xdc, size: 0x1, def value: None
  bool ____missedMarkReported;

  /// @brief Field _threeQuartersMarkReported, offset: 0xdd, size: 0x1, def value: None
  bool ____threeQuartersMarkReported;

  /// @brief Field _halfJumpMarkReported, offset: 0xde, size: 0x1, def value: None
  bool ____halfJumpMarkReported;

  /// @brief Field _localPosition, offset: 0xe0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localPosition;

  /// @brief Field _randomRotations, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____randomRotations;

  /// @brief Field _worldRotation, offset: 0xf8, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____worldRotation;

  /// @brief Field _inverseWorldRotation, offset: 0x108, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____inverseWorldRotation;

  /// @brief Field _rotateTowardsPlayer, offset: 0x118, size: 0x1, def value: None
  bool ____rotateTowardsPlayer;

  /// @brief Field kMissedTimeOffset offset 0xffffffff size 0x4
  static constexpr float_t kMissedTimeOffset{ 0.15 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteJump, 0x120>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteJump);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJump*, "", "NoteJump");
