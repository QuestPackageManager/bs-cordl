#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteJump.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteJump)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class IVariableMovementDataProvider;
}
namespace GlobalNamespace {
class PlayerSpaceConvertor;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJump;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteJump);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteJump
class CORDL_TYPE NoteJump : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field _endDistanceOffset, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__endDistanceOffset, put = __cordl_internal_set__endDistanceOffset)) float_t _endDistanceOffset;

  /// @brief Field _endOffset, offset 0xe0, size 0xc
  __declspec(property(get = __cordl_internal_get__endOffset, put = __cordl_internal_set__endOffset)) ::UnityEngine::Vector3 _endOffset;

  /// @brief Field _endPos, offset 0x108, size 0xc
  __declspec(property(get = __cordl_internal_get__endPos, put = __cordl_internal_set__endPos)) ::UnityEngine::Vector3 _endPos;

  /// @brief Field _endRotation, offset 0xc4, size 0x10
  __declspec(property(get = __cordl_internal_get__endRotation, put = __cordl_internal_set__endRotation)) ::UnityEngine::Quaternion _endRotation;

  /// @brief Field _gravity, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get__gravity, put = __cordl_internal_set__gravity)) float_t _gravity;

  /// @brief Field _gravityBase, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get__gravityBase, put = __cordl_internal_set__gravityBase)) float_t _gravityBase;

  /// @brief Field _halfJumpDuration, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get__halfJumpDuration, put = __cordl_internal_set__halfJumpDuration)) float_t _halfJumpDuration;

  /// @brief Field _halfJumpMarkReported, offset 0x11b, size 0x1
  __declspec(property(get = __cordl_internal_get__halfJumpMarkReported, put = __cordl_internal_set__halfJumpMarkReported)) bool _halfJumpMarkReported;

  /// @brief Field _inverseWorldRotation, offset 0x12c, size 0x10
  __declspec(property(get = __cordl_internal_get__inverseWorldRotation, put = __cordl_internal_set__inverseWorldRotation)) ::UnityEngine::Quaternion _inverseWorldRotation;

  /// @brief Field _jumpDuration, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpDuration, put = __cordl_internal_set__jumpDuration)) float_t _jumpDuration;

  /// @brief Field _jumpStartedReported, offset 0x118, size 0x1
  __declspec(property(get = __cordl_internal_get__jumpStartedReported, put = __cordl_internal_set__jumpStartedReported)) bool _jumpStartedReported;

  /// @brief Field _localPosition, offset 0x90, size 0xc
  __declspec(property(get = __cordl_internal_get__localPosition, put = __cordl_internal_set__localPosition)) ::UnityEngine::Vector3 _localPosition;

  /// @brief Field _middleRotation, offset 0xb4, size 0x10
  __declspec(property(get = __cordl_internal_get__middleRotation, put = __cordl_internal_set__middleRotation)) ::UnityEngine::Quaternion _middleRotation;

  /// @brief Field _missedMarkReported, offset 0x119, size 0x1
  __declspec(property(get = __cordl_internal_get__missedMarkReported, put = __cordl_internal_set__missedMarkReported)) bool _missedMarkReported;

  /// @brief Field _missedTime, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get__missedTime, put = __cordl_internal_set__missedTime)) float_t _missedTime;

  /// @brief Field _noteTime, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__noteTime, put = __cordl_internal_set__noteTime)) float_t _noteTime;

  /// @brief Field _playerSpaceConvertor, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSpaceConvertor, put = __cordl_internal_set__playerSpaceConvertor)) ::UnityW<::GlobalNamespace::PlayerSpaceConvertor> _playerSpaceConvertor;

  /// @brief Field _playerTransforms, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms)) ::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field _randomRotations, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__randomRotations, put = __cordl_internal_set__randomRotations)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _randomRotations;

  /// @brief Field _rotateTowardsPlayer, offset 0x13c, size 0x1
  __declspec(property(get = __cordl_internal_get__rotateTowardsPlayer, put = __cordl_internal_set__rotateTowardsPlayer)) bool _rotateTowardsPlayer;

  /// @brief Field _rotatedObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rotatedObject, put = __cordl_internal_set__rotatedObject)) ::UnityW<::UnityEngine::Transform> _rotatedObject;

  /// @brief Field _startOffset, offset 0xd4, size 0xc
  __declspec(property(get = __cordl_internal_get__startOffset, put = __cordl_internal_set__startOffset)) ::UnityEngine::Vector3 _startOffset;

  /// @brief Field _startPos, offset 0xfc, size 0xc
  __declspec(property(get = __cordl_internal_get__startPos, put = __cordl_internal_set__startPos)) ::UnityEngine::Vector3 _startPos;

  /// @brief Field _startRotation, offset 0xa4, size 0x10
  __declspec(property(get = __cordl_internal_get__startRotation, put = __cordl_internal_set__startRotation)) ::UnityEngine::Quaternion _startRotation;

  /// @brief Field _threeQuartersMarkReported, offset 0x11a, size 0x1
  __declspec(property(get = __cordl_internal_get__threeQuartersMarkReported, put = __cordl_internal_set__threeQuartersMarkReported)) bool _threeQuartersMarkReported;

  /// @brief Field _variableMovementDataProvider, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::IVariableMovementDataProvider* _variableMovementDataProvider;

  /// @brief Field _worldRotation, offset 0x11c, size 0x10
  __declspec(property(get = __cordl_internal_get__worldRotation, put = __cordl_internal_set__worldRotation)) ::UnityEngine::Quaternion _worldRotation;

  /// @brief Field _yAvoidance, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__yAvoidance, put = __cordl_internal_set__yAvoidance)) float_t _yAvoidance;

  /// @brief Field _yAvoidanceDown, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__yAvoidanceDown, put = __cordl_internal_set__yAvoidanceDown)) float_t _yAvoidanceDown;

  /// @brief Field _yAvoidanceUp, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__yAvoidanceUp, put = __cordl_internal_set__yAvoidanceUp)) float_t _yAvoidanceUp;

  __declspec(property(get = get_beatPos)) ::UnityEngine::Vector3 beatPos;

  __declspec(property(get = get_distanceToPlayer)) float_t distanceToPlayer;

  __declspec(property(get = get_localPosition)) ::UnityEngine::Vector3 localPosition;

  __declspec(property(get = get_moveVec)) ::UnityEngine::Vector3 moveVec;

  /// @brief Field noteJumpDidFinishEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_noteJumpDidFinishEvent, put = __cordl_internal_set_noteJumpDidFinishEvent)) ::System::Action* noteJumpDidFinishEvent;

  /// @brief Field noteJumpDidPassHalfEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_noteJumpDidPassHalfEvent, put = __cordl_internal_set_noteJumpDidPassHalfEvent)) ::System::Action* noteJumpDidPassHalfEvent;

  /// @brief Field noteJumpDidPassMissedMarkerEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_noteJumpDidPassMissedMarkerEvent, put = __cordl_internal_set_noteJumpDidPassMissedMarkerEvent)) ::System::Action* noteJumpDidPassMissedMarkerEvent;

  /// @brief Field noteJumpDidPassThreeQuartersEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_noteJumpDidPassThreeQuartersEvent,
                      put = __cordl_internal_set_noteJumpDidPassThreeQuartersEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::NoteJump>>* noteJumpDidPassThreeQuartersEvent;

  /// @brief Field noteJumpDidStartEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_noteJumpDidStartEvent, put = __cordl_internal_set_noteJumpDidStartEvent)) ::System::Action* noteJumpDidStartEvent;

  /// @brief Field noteJumpDidUpdateProgressEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_noteJumpDidUpdateProgressEvent,
                      put = __cordl_internal_set_noteJumpDidUpdateProgressEvent)) ::System::Action_1<float_t>* noteJumpDidUpdateProgressEvent;

  __declspec(property(get = get_noteTime)) float_t noteTime;

  /// @brief Method Init, addr 0x3aec580, size 0x3d8, virtual false, abstract: false, final false
  inline void Init(float_t noteTime, float_t worldRotation, ::UnityEngine::Vector3 moveEndOffset, ::UnityEngine::Vector3 jumpEndOffset, float_t gravityBase, float_t flipYSide, float_t endRotation,
                   bool rotateTowardsPlayer, bool useRandomRotation);

  /// @brief Method ManualUpdate, addr 0x3aec958, size 0x8e8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ManualUpdate();

  static inline ::GlobalNamespace::NoteJump* New_ctor();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSyncController();

  constexpr float_t const& __cordl_internal_get__endDistanceOffset() const;

  constexpr float_t& __cordl_internal_get__endDistanceOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__endOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__endOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__endPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__endPos();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__endRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__endRotation();

  constexpr float_t const& __cordl_internal_get__gravity() const;

  constexpr float_t& __cordl_internal_get__gravity();

  constexpr float_t const& __cordl_internal_get__gravityBase() const;

  constexpr float_t& __cordl_internal_get__gravityBase();

  constexpr float_t const& __cordl_internal_get__halfJumpDuration() const;

  constexpr float_t& __cordl_internal_get__halfJumpDuration();

  constexpr bool const& __cordl_internal_get__halfJumpMarkReported() const;

  constexpr bool& __cordl_internal_get__halfJumpMarkReported();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__inverseWorldRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__inverseWorldRotation();

  constexpr float_t const& __cordl_internal_get__jumpDuration() const;

  constexpr float_t& __cordl_internal_get__jumpDuration();

  constexpr bool const& __cordl_internal_get__jumpStartedReported() const;

  constexpr bool& __cordl_internal_get__jumpStartedReported();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__middleRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__middleRotation();

  constexpr bool const& __cordl_internal_get__missedMarkReported() const;

  constexpr bool& __cordl_internal_get__missedMarkReported();

  constexpr float_t const& __cordl_internal_get__missedTime() const;

  constexpr float_t& __cordl_internal_get__missedTime();

  constexpr float_t const& __cordl_internal_get__noteTime() const;

  constexpr float_t& __cordl_internal_get__noteTime();

  constexpr ::UnityW<::GlobalNamespace::PlayerSpaceConvertor> const& __cordl_internal_get__playerSpaceConvertor() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerSpaceConvertor>& __cordl_internal_get__playerSpaceConvertor();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__randomRotations() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__randomRotations();

  constexpr bool const& __cordl_internal_get__rotateTowardsPlayer() const;

  constexpr bool& __cordl_internal_get__rotateTowardsPlayer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rotatedObject() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rotatedObject();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPos();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__startRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__startRotation();

  constexpr bool const& __cordl_internal_get__threeQuartersMarkReported() const;

  constexpr bool& __cordl_internal_get__threeQuartersMarkReported();

  constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::IVariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__worldRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__worldRotation();

  constexpr float_t const& __cordl_internal_get__yAvoidance() const;

  constexpr float_t& __cordl_internal_get__yAvoidance();

  constexpr float_t const& __cordl_internal_get__yAvoidanceDown() const;

  constexpr float_t& __cordl_internal_get__yAvoidanceDown();

  constexpr float_t const& __cordl_internal_get__yAvoidanceUp() const;

  constexpr float_t& __cordl_internal_get__yAvoidanceUp();

  constexpr ::System::Action* const& __cordl_internal_get_noteJumpDidFinishEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteJumpDidFinishEvent();

  constexpr ::System::Action* const& __cordl_internal_get_noteJumpDidPassHalfEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteJumpDidPassHalfEvent();

  constexpr ::System::Action* const& __cordl_internal_get_noteJumpDidPassMissedMarkerEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteJumpDidPassMissedMarkerEvent();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteJump>>* const& __cordl_internal_get_noteJumpDidPassThreeQuartersEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteJump>>*& __cordl_internal_get_noteJumpDidPassThreeQuartersEvent();

  constexpr ::System::Action* const& __cordl_internal_get_noteJumpDidStartEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_noteJumpDidStartEvent();

  constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_noteJumpDidUpdateProgressEvent() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_noteJumpDidUpdateProgressEvent();

  constexpr void __cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__endDistanceOffset(float_t value);

  constexpr void __cordl_internal_set__endOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__endPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__endRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__gravity(float_t value);

  constexpr void __cordl_internal_set__gravityBase(float_t value);

  constexpr void __cordl_internal_set__halfJumpDuration(float_t value);

  constexpr void __cordl_internal_set__halfJumpMarkReported(bool value);

  constexpr void __cordl_internal_set__inverseWorldRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__jumpDuration(float_t value);

  constexpr void __cordl_internal_set__jumpStartedReported(bool value);

  constexpr void __cordl_internal_set__localPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__middleRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__missedMarkReported(bool value);

  constexpr void __cordl_internal_set__missedTime(float_t value);

  constexpr void __cordl_internal_set__noteTime(float_t value);

  constexpr void __cordl_internal_set__playerSpaceConvertor(::UnityW<::GlobalNamespace::PlayerSpaceConvertor> value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set__randomRotations(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__rotateTowardsPlayer(bool value);

  constexpr void __cordl_internal_set__rotatedObject(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__startOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__threeQuartersMarkReported(bool value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value);

  constexpr void __cordl_internal_set__worldRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__yAvoidance(float_t value);

  constexpr void __cordl_internal_set__yAvoidanceDown(float_t value);

  constexpr void __cordl_internal_set__yAvoidanceUp(float_t value);

  constexpr void __cordl_internal_set_noteJumpDidFinishEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteJumpDidPassHalfEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteJumpDidPassMissedMarkerEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteJumpDidPassThreeQuartersEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteJump>>* value);

  constexpr void __cordl_internal_set_noteJumpDidStartEvent(::System::Action* value);

  constexpr void __cordl_internal_set_noteJumpDidUpdateProgressEvent(::System::Action_1<float_t>* value);

  /// @brief Method .ctor, addr 0x3aed240, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_noteJumpDidFinishEvent, addr 0x3aebe5c, size 0x9c, virtual false, abstract: false, final false
  inline void add_noteJumpDidFinishEvent(::System::Action* value);

  /// @brief Method add_noteJumpDidPassHalfEvent, addr 0x3aec22c, size 0x9c, virtual false, abstract: false, final false
  inline void add_noteJumpDidPassHalfEvent(::System::Action* value);

  /// @brief Method add_noteJumpDidPassMissedMarkerEvent, addr 0x3aebf94, size 0x9c, virtual false, abstract: false, final false
  inline void add_noteJumpDidPassMissedMarkerEvent(::System::Action* value);

  /// @brief Method add_noteJumpDidPassThreeQuartersEvent, addr 0x3aec0cc, size 0xb0, virtual false, abstract: false, final false
  inline void add_noteJumpDidPassThreeQuartersEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteJump>>* value);

  /// @brief Method add_noteJumpDidStartEvent, addr 0x3aebd24, size 0x9c, virtual false, abstract: false, final false
  inline void add_noteJumpDidStartEvent(::System::Action* value);

  /// @brief Method add_noteJumpDidUpdateProgressEvent, addr 0x3aec364, size 0xb0, virtual false, abstract: false, final false
  inline void add_noteJumpDidUpdateProgressEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_beatPos, addr 0x3aec514, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_beatPos();

  /// @brief Method get_distanceToPlayer, addr 0x3aec4cc, size 0x48, virtual false, abstract: false, final false
  inline float_t get_distanceToPlayer();

  /// @brief Method get_localPosition, addr 0x3aec574, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method get_moveVec, addr 0x3aec544, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_moveVec();

  /// @brief Method get_noteTime, addr 0x3aec4c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteTime();

  /// @brief Method remove_noteJumpDidFinishEvent, addr 0x3aebef8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_noteJumpDidFinishEvent(::System::Action* value);

  /// @brief Method remove_noteJumpDidPassHalfEvent, addr 0x3aec2c8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_noteJumpDidPassHalfEvent(::System::Action* value);

  /// @brief Method remove_noteJumpDidPassMissedMarkerEvent, addr 0x3aec030, size 0x9c, virtual false, abstract: false, final false
  inline void remove_noteJumpDidPassMissedMarkerEvent(::System::Action* value);

  /// @brief Method remove_noteJumpDidPassThreeQuartersEvent, addr 0x3aec17c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_noteJumpDidPassThreeQuartersEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteJump>>* value);

  /// @brief Method remove_noteJumpDidStartEvent, addr 0x3aebdc0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_noteJumpDidStartEvent(::System::Action* value);

  /// @brief Method remove_noteJumpDidUpdateProgressEvent, addr 0x3aec414, size 0xb0, virtual false, abstract: false, final false
  inline void remove_noteJumpDidUpdateProgressEvent(::System::Action_1<float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteJump();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteJump", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteJump(NoteJump&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteJump", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteJump(NoteJump const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4130 };

  /// @brief Field kMissedTimeOffset offset 0xffffffff size 0x4
  static constexpr float_t kMissedTimeOffset{ static_cast<float_t>(0.15f) };

  /// @brief Field _rotatedObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rotatedObject;

  /// @brief Field _yAvoidanceUp, offset: 0x28, size: 0x4, def value: None
  float_t ____yAvoidanceUp;

  /// @brief Field _yAvoidanceDown, offset: 0x2c, size: 0x4, def value: None
  float_t ____yAvoidanceDown;

  /// @brief Field _endDistanceOffset, offset: 0x30, size: 0x4, def value: None
  float_t ____endDistanceOffset;

  /// @brief Field _playerTransforms, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _playerSpaceConvertor, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerSpaceConvertor> ____playerSpaceConvertor;

  /// @brief Field _audioTimeSyncController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field _variableMovementDataProvider, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IVariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field noteJumpDidStartEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___noteJumpDidStartEvent;

  /// @brief Field noteJumpDidFinishEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___noteJumpDidFinishEvent;

  /// @brief Field noteJumpDidPassMissedMarkerEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___noteJumpDidPassMissedMarkerEvent;

  /// @brief Field noteJumpDidPassThreeQuartersEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::NoteJump>>* ___noteJumpDidPassThreeQuartersEvent;

  /// @brief Field noteJumpDidPassHalfEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___noteJumpDidPassHalfEvent;

  /// @brief Field noteJumpDidUpdateProgressEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___noteJumpDidUpdateProgressEvent;

  /// @brief Field _randomRotations, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____randomRotations;

  /// @brief Field _localPosition, offset: 0x90, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localPosition;

  /// @brief Field _noteTime, offset: 0x9c, size: 0x4, def value: None
  float_t ____noteTime;

  /// @brief Field _yAvoidance, offset: 0xa0, size: 0x4, def value: None
  float_t ____yAvoidance;

  /// @brief Field _startRotation, offset: 0xa4, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____startRotation;

  /// @brief Field _middleRotation, offset: 0xb4, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____middleRotation;

  /// @brief Field _endRotation, offset: 0xc4, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____endRotation;

  /// @brief Field _startOffset, offset: 0xd4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startOffset;

  /// @brief Field _endOffset, offset: 0xe0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endOffset;

  /// @brief Field _gravityBase, offset: 0xec, size: 0x4, def value: None
  float_t ____gravityBase;

  /// @brief Field _halfJumpDuration, offset: 0xf0, size: 0x4, def value: None
  float_t ____halfJumpDuration;

  /// @brief Field _jumpDuration, offset: 0xf4, size: 0x4, def value: None
  float_t ____jumpDuration;

  /// @brief Field _gravity, offset: 0xf8, size: 0x4, def value: None
  float_t ____gravity;

  /// @brief Field _startPos, offset: 0xfc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _endPos, offset: 0x108, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endPos;

  /// @brief Field _missedTime, offset: 0x114, size: 0x4, def value: None
  float_t ____missedTime;

  /// @brief Field _jumpStartedReported, offset: 0x118, size: 0x1, def value: None
  bool ____jumpStartedReported;

  /// @brief Field _missedMarkReported, offset: 0x119, size: 0x1, def value: None
  bool ____missedMarkReported;

  /// @brief Field _threeQuartersMarkReported, offset: 0x11a, size: 0x1, def value: None
  bool ____threeQuartersMarkReported;

  /// @brief Field _halfJumpMarkReported, offset: 0x11b, size: 0x1, def value: None
  bool ____halfJumpMarkReported;

  /// @brief Field _worldRotation, offset: 0x11c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____worldRotation;

  /// @brief Field _inverseWorldRotation, offset: 0x12c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____inverseWorldRotation;

  /// @brief Field _rotateTowardsPlayer, offset: 0x13c, size: 0x1, def value: None
  bool ____rotateTowardsPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteJump, ____rotatedObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____yAvoidanceUp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____yAvoidanceDown) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____endDistanceOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____playerTransforms) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____playerSpaceConvertor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____audioTimeSyncController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____variableMovementDataProvider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ___noteJumpDidStartEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ___noteJumpDidFinishEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ___noteJumpDidPassMissedMarkerEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ___noteJumpDidPassThreeQuartersEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ___noteJumpDidPassHalfEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ___noteJumpDidUpdateProgressEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____randomRotations) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____localPosition) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____noteTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____yAvoidance) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____startRotation) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____middleRotation) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____endRotation) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____startOffset) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____endOffset) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____gravityBase) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____halfJumpDuration) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____jumpDuration) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____gravity) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____startPos) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____endPos) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____missedTime) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____jumpStartedReported) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____missedMarkReported) == 0x119, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____threeQuartersMarkReported) == 0x11a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____halfJumpMarkReported) == 0x11b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____worldRotation) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____inverseWorldRotation) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJump, ____rotateTowardsPlayer) == 0x13c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteJump, 0x140>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteJump);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJump*, "", "NoteJump");
