#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteFloorMovement.hpp"
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
class IVariableMovementDataProvider;
}
namespace GlobalNamespace {
class PlayerTransforms;
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
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteFloorMovement
class CORDL_TYPE NoteFloorMovement : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field _beatTime, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__beatTime, put = __cordl_internal_set__beatTime)) float_t _beatTime;

  /// @brief Field _inverseWorldRotation, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__inverseWorldRotation, put = __cordl_internal_set__inverseWorldRotation)) ::UnityEngine::Quaternion _inverseWorldRotation;

  /// @brief Field _localPosition, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get__localPosition, put = __cordl_internal_set__localPosition)) ::UnityEngine::Vector3 _localPosition;

  /// @brief Field _moveEndOffset, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get__moveEndOffset, put = __cordl_internal_set__moveEndOffset)) ::UnityEngine::Vector3 _moveEndOffset;

  /// @brief Field _moveStartOffset, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get__moveStartOffset, put = __cordl_internal_set__moveStartOffset)) ::UnityEngine::Vector3 _moveStartOffset;

  /// @brief Field _playerTransforms, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms)) ::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field _rotatedObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rotatedObject, put = __cordl_internal_set__rotatedObject)) ::UnityW<::UnityEngine::Transform> _rotatedObject;

  /// @brief Field _variableMovementDataProvider, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::IVariableMovementDataProvider* _variableMovementDataProvider;

  /// @brief Field _worldRotation, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__worldRotation, put = __cordl_internal_set__worldRotation)) ::UnityEngine::Quaternion _worldRotation;

  __declspec(property(get = get_distanceToPlayer)) float_t distanceToPlayer;

  __declspec(property(get = get_endPos)) ::UnityEngine::Vector3 endPos;

  __declspec(property(get = get_inverseWorldRotation)) ::UnityEngine::Quaternion inverseWorldRotation;

  __declspec(property(get = get_localPosition)) ::UnityEngine::Vector3 localPosition;

  __declspec(property(get = get_noteTime)) float_t noteTime;

  __declspec(property(get = get_worldRotation)) ::UnityEngine::Quaternion worldRotation;

  /// @brief Method Init, addr 0x5729c10, size 0x78, virtual false, abstract: false, final false
  inline void Init(float_t worldRotation, float_t beatTime, ::UnityEngine::Vector3 moveStartOffset, ::UnityEngine::Vector3 moveEndOffset);

  /// @brief Method ManualUpdate, addr 0x572a034, size 0x3b8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ManualUpdate();

  static inline ::GlobalNamespace::NoteFloorMovement* New_ctor();

  /// @brief Method SetToStart, addr 0x5729ea8, size 0x18c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 SetToStart();

  /// @brief Method ShouldMove, addr 0x5729c88, size 0x220, virtual false, abstract: false, final false
  inline bool ShouldMove();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSyncController();

  constexpr float_t const& __cordl_internal_get__beatTime() const;

  constexpr float_t& __cordl_internal_get__beatTime();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__inverseWorldRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__inverseWorldRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__moveEndOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__moveEndOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__moveStartOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__moveStartOffset();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rotatedObject() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rotatedObject();

  constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::IVariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__worldRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__worldRotation();

  constexpr void __cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__beatTime(float_t value);

  constexpr void __cordl_internal_set__inverseWorldRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__localPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__moveEndOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__moveStartOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set__rotatedObject(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value);

  constexpr void __cordl_internal_set__worldRotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x572a3ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_distanceToPlayer, addr 0x5729ae4, size 0x40, virtual false, abstract: false, final false
  inline float_t get_distanceToPlayer();

  /// @brief Method get_endPos, addr 0x5729b24, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_endPos();

  /// @brief Method get_inverseWorldRotation, addr 0x5729bf8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inverseWorldRotation();

  /// @brief Method get_localPosition, addr 0x5729c04, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method get_noteTime, addr 0x5729be4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteTime();

  /// @brief Method get_worldRotation, addr 0x5729bec, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_worldRotation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteFloorMovement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteFloorMovement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteFloorMovement(NoteFloorMovement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteFloorMovement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteFloorMovement(NoteFloorMovement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5696 };

  /// @brief Field _rotatedObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rotatedObject;

  /// @brief Field _playerTransforms, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _audioTimeSyncController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field _variableMovementDataProvider, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IVariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field _localPosition, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localPosition;

  /// @brief Field _beatTime, offset: 0x4c, size: 0x4, def value: None
  float_t ____beatTime;

  /// @brief Field _moveStartOffset, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____moveStartOffset;

  /// @brief Field _moveEndOffset, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____moveEndOffset;

  /// @brief Field _worldRotation, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____worldRotation;

  /// @brief Field _inverseWorldRotation, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____inverseWorldRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____rotatedObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____playerTransforms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____audioTimeSyncController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____variableMovementDataProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____localPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____beatTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____moveStartOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____moveEndOffset) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____worldRotation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteFloorMovement, ____inverseWorldRotation) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteFloorMovement, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteFloorMovement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteFloorMovement*, "", "NoteFloorMovement");
