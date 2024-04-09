#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderMovement)
namespace GlobalNamespace {
class IAudioTimeSource;
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
class SliderMovement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderMovement);
// Type: ::SliderMovement
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderMovement*
class CORDL_TYPE SliderMovement : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController))::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field _headDidMovePastCutMarkReported, offset 0xa9, size 0x1
  __declspec(property(get = __cordl_internal_get__headDidMovePastCutMarkReported, put = __cordl_internal_set__headDidMovePastCutMarkReported)) bool _headDidMovePastCutMarkReported;

  /// @brief Field _headNoteGravity, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__headNoteGravity, put = __cordl_internal_set__headNoteGravity)) float_t _headNoteGravity;

  /// @brief Field _headNoteJumpEndPos, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get__headNoteJumpEndPos, put = __cordl_internal_set__headNoteJumpEndPos))::UnityEngine::Vector3 _headNoteJumpEndPos;

  /// @brief Field _headNoteJumpStartPos, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__headNoteJumpStartPos, put = __cordl_internal_set__headNoteJumpStartPos))::UnityEngine::Vector3 _headNoteJumpStartPos;

  /// @brief Field _headNoteTime, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__headNoteTime, put = __cordl_internal_set__headNoteTime)) float_t _headNoteTime;

  /// @brief Field _inverseWorldRotation, offset 0x84, size 0x10
  __declspec(property(get = __cordl_internal_get__inverseWorldRotation, put = __cordl_internal_set__inverseWorldRotation))::UnityEngine::Quaternion _inverseWorldRotation;

  /// @brief Field _jumpDuration, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpDuration, put = __cordl_internal_set__jumpDuration)) float_t _jumpDuration;

  /// @brief Field _localPosition, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get__localPosition, put = __cordl_internal_set__localPosition))::UnityEngine::Vector3 _localPosition;

  /// @brief Field _movementEndReported, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__movementEndReported, put = __cordl_internal_set__movementEndReported)) bool _movementEndReported;

  /// @brief Field _playerTransforms, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms))::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field _tailDidMovePastCutMarkReported, offset 0xaa, size 0x1
  __declspec(property(get = __cordl_internal_get__tailDidMovePastCutMarkReported, put = __cordl_internal_set__tailDidMovePastCutMarkReported)) bool _tailDidMovePastCutMarkReported;

  /// @brief Field _tailNoteGravity, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__tailNoteGravity, put = __cordl_internal_set__tailNoteGravity)) float_t _tailNoteGravity;

  /// @brief Field _tailNoteTime, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__tailNoteTime, put = __cordl_internal_set__tailNoteTime)) float_t _tailNoteTime;

  /// @brief Field _timeSinceHeadNoteJump, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get__timeSinceHeadNoteJump, put = __cordl_internal_set__timeSinceHeadNoteJump)) float_t _timeSinceHeadNoteJump;

  /// @brief Field _transform, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _worldRotation, offset 0x74, size 0x10
  __declspec(property(get = __cordl_internal_get__worldRotation, put = __cordl_internal_set__worldRotation))::UnityEngine::Quaternion _worldRotation;

  /// @brief Field headDidMovePastCutMarkEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_headDidMovePastCutMarkEvent, put = __cordl_internal_set_headDidMovePastCutMarkEvent))::System::Action* headDidMovePastCutMarkEvent;

  __declspec(property(get = get_headNoteGravity)) float_t headNoteGravity;

  __declspec(property(get = get_jumpDuration)) float_t jumpDuration;

  /// @brief Field movementDidFinishEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_movementDidFinishEvent, put = __cordl_internal_set_movementDidFinishEvent))::System::Action* movementDidFinishEvent;

  /// @brief Field movementDidMoveEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_movementDidMoveEvent, put = __cordl_internal_set_movementDidMoveEvent))::System::Action_1<float_t>* movementDidMoveEvent;

  /// @brief Field tailDidMovePastCutMarkEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_tailDidMovePastCutMarkEvent, put = __cordl_internal_set_tailDidMovePastCutMarkEvent))::System::Action* tailDidMovePastCutMarkEvent;

  __declspec(property(get = get_tailNoteGravity)) float_t tailNoteGravity;

  __declspec(property(get = get_timeSinceHeadNoteJump)) float_t timeSinceHeadNoteJump;

  /// @brief Method Init, addr 0x25a823c, size 0xf0, virtual false, abstract: false, final false
  inline void Init(float_t headNoteTime, float_t tailNoteTime, float_t worldRotation, ::UnityEngine::Vector3 headNoteJumpStartPos, ::UnityEngine::Vector3 headNoteJumpEndPos, float_t jumpDuration,
                   float_t headNoteGravity, float_t tailNoteGravity);

  /// @brief Method ManualUpdate, addr 0x25a99fc, size 0x20c, virtual false, abstract: false, final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::SliderMovement* New_ctor();

  /// @brief Method StartMovement, addr 0x25a8ecc, size 0x28, virtual false, abstract: false, final false
  inline void StartMovement();

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr bool const& __cordl_internal_get__headDidMovePastCutMarkReported() const;

  constexpr bool& __cordl_internal_get__headDidMovePastCutMarkReported();

  constexpr float_t const& __cordl_internal_get__headNoteGravity() const;

  constexpr float_t& __cordl_internal_get__headNoteGravity();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__headNoteJumpEndPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__headNoteJumpEndPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__headNoteJumpStartPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__headNoteJumpStartPos();

  constexpr float_t const& __cordl_internal_get__headNoteTime() const;

  constexpr float_t& __cordl_internal_get__headNoteTime();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__inverseWorldRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__inverseWorldRotation();

  constexpr float_t const& __cordl_internal_get__jumpDuration() const;

  constexpr float_t& __cordl_internal_get__jumpDuration();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPosition();

  constexpr bool const& __cordl_internal_get__movementEndReported() const;

  constexpr bool& __cordl_internal_get__movementEndReported();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr bool const& __cordl_internal_get__tailDidMovePastCutMarkReported() const;

  constexpr bool& __cordl_internal_get__tailDidMovePastCutMarkReported();

  constexpr float_t const& __cordl_internal_get__tailNoteGravity() const;

  constexpr float_t& __cordl_internal_get__tailNoteGravity();

  constexpr float_t const& __cordl_internal_get__tailNoteTime() const;

  constexpr float_t& __cordl_internal_get__tailNoteTime();

  constexpr float_t const& __cordl_internal_get__timeSinceHeadNoteJump() const;

  constexpr float_t& __cordl_internal_get__timeSinceHeadNoteJump();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__worldRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__worldRotation();

  constexpr ::System::Action*& __cordl_internal_get_headDidMovePastCutMarkEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_headDidMovePastCutMarkEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_movementDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_movementDidFinishEvent() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_movementDidMoveEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __cordl_internal_get_movementDidMoveEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_tailDidMovePastCutMarkEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_tailDidMovePastCutMarkEvent() const;

  constexpr void __cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__headDidMovePastCutMarkReported(bool value);

  constexpr void __cordl_internal_set__headNoteGravity(float_t value);

  constexpr void __cordl_internal_set__headNoteJumpEndPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__headNoteJumpStartPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__headNoteTime(float_t value);

  constexpr void __cordl_internal_set__inverseWorldRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__jumpDuration(float_t value);

  constexpr void __cordl_internal_set__localPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__movementEndReported(bool value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set__tailDidMovePastCutMarkReported(bool value);

  constexpr void __cordl_internal_set__tailNoteGravity(float_t value);

  constexpr void __cordl_internal_set__tailNoteTime(float_t value);

  constexpr void __cordl_internal_set__timeSinceHeadNoteJump(float_t value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__worldRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_headDidMovePastCutMarkEvent(::System::Action* value);

  constexpr void __cordl_internal_set_movementDidFinishEvent(::System::Action* value);

  constexpr void __cordl_internal_set_movementDidMoveEvent(::System::Action_1<float_t>* value);

  constexpr void __cordl_internal_set_tailDidMovePastCutMarkEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x25ad2cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_headDidMovePastCutMarkEvent, addr 0x25a90f0, size 0x9c, virtual false, abstract: false, final false
  inline void add_headDidMovePastCutMarkEvent(::System::Action* value);

  /// @brief Method add_movementDidFinishEvent, addr 0x25a9054, size 0x9c, virtual false, abstract: false, final false
  inline void add_movementDidFinishEvent(::System::Action* value);

  /// @brief Method add_movementDidMoveEvent, addr 0x25ad14c, size 0xb0, virtual false, abstract: false, final false
  inline void add_movementDidMoveEvent(::System::Action_1<float_t>* value);

  /// @brief Method add_tailDidMovePastCutMarkEvent, addr 0x25a918c, size 0x9c, virtual false, abstract: false, final false
  inline void add_tailDidMovePastCutMarkEvent(::System::Action* value);

  /// @brief Method get_headNoteGravity, addr 0x25ad2b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_headNoteGravity();

  /// @brief Method get_jumpDuration, addr 0x25ad2ac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_jumpDuration();

  /// @brief Method get_tailNoteGravity, addr 0x25ad2bc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tailNoteGravity();

  /// @brief Method get_timeSinceHeadNoteJump, addr 0x25ad2c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timeSinceHeadNoteJump();

  /// @brief Method remove_headDidMovePastCutMarkEvent, addr 0x25a9758, size 0x9c, virtual false, abstract: false, final false
  inline void remove_headDidMovePastCutMarkEvent(::System::Action* value);

  /// @brief Method remove_movementDidFinishEvent, addr 0x25a96bc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_movementDidFinishEvent(::System::Action* value);

  /// @brief Method remove_movementDidMoveEvent, addr 0x25ad1fc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_movementDidMoveEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_tailDidMovePastCutMarkEvent, addr 0x25a97f4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_tailDidMovePastCutMarkEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderMovement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderMovement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderMovement(SliderMovement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderMovement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderMovement(SliderMovement const&) = delete;

  /// @brief Field _audioTimeSyncController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field _playerTransforms, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field movementDidFinishEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___movementDidFinishEvent;

  /// @brief Field movementDidMoveEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___movementDidMoveEvent;

  /// @brief Field headDidMovePastCutMarkEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___headDidMovePastCutMarkEvent;

  /// @brief Field tailDidMovePastCutMarkEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___tailDidMovePastCutMarkEvent;

  /// @brief Field _headNoteJumpStartPos, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headNoteJumpStartPos;

  /// @brief Field _headNoteJumpEndPos, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headNoteJumpEndPos;

  /// @brief Field _headNoteTime, offset: 0x60, size: 0x4, def value: None
  float_t ____headNoteTime;

  /// @brief Field _tailNoteTime, offset: 0x64, size: 0x4, def value: None
  float_t ____tailNoteTime;

  /// @brief Field _localPosition, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localPosition;

  /// @brief Field _worldRotation, offset: 0x74, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____worldRotation;

  /// @brief Field _inverseWorldRotation, offset: 0x84, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____inverseWorldRotation;

  /// @brief Field _jumpDuration, offset: 0x94, size: 0x4, def value: None
  float_t ____jumpDuration;

  /// @brief Field _headNoteGravity, offset: 0x98, size: 0x4, def value: None
  float_t ____headNoteGravity;

  /// @brief Field _tailNoteGravity, offset: 0x9c, size: 0x4, def value: None
  float_t ____tailNoteGravity;

  /// @brief Field _transform, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _movementEndReported, offset: 0xa8, size: 0x1, def value: None
  bool ____movementEndReported;

  /// @brief Field _headDidMovePastCutMarkReported, offset: 0xa9, size: 0x1, def value: None
  bool ____headDidMovePastCutMarkReported;

  /// @brief Field _tailDidMovePastCutMarkReported, offset: 0xaa, size: 0x1, def value: None
  bool ____tailDidMovePastCutMarkReported;

  /// @brief Field _timeSinceHeadNoteJump, offset: 0xac, size: 0x4, def value: None
  float_t ____timeSinceHeadNoteJump;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderMovement, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____audioTimeSyncController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____playerTransforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ___movementDidFinishEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ___movementDidMoveEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ___headDidMovePastCutMarkEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ___tailDidMovePastCutMarkEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____headNoteJumpStartPos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____headNoteJumpEndPos) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____headNoteTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____tailNoteTime) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____localPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____worldRotation) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____inverseWorldRotation) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____jumpDuration) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____headNoteGravity) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____tailNoteGravity) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____transform) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____movementEndReported) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____headDidMovePastCutMarkReported) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____tailDidMovePastCutMarkReported) == 0xaa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____timeSinceHeadNoteJump) == 0xac, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderMovement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMovement*, "", "SliderMovement");
