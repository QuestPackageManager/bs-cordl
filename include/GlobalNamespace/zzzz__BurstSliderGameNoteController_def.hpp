#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstSliderGameNoteController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BurstSliderGameNoteController)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
namespace GlobalNamespace {
template <typename T> class ICubeNoteControllerInitializable_1;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
class INoteMovementProvider;
}
namespace GlobalNamespace {
class INoteVisualModifierTypeProvider;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class __BurstSliderGameNoteController__Pool;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
namespace GlobalNamespace {
class __BurstSliderGameNoteController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BurstSliderGameNoteController);
MARK_REF_PTR_T(::GlobalNamespace::__BurstSliderGameNoteController__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BurstSliderGameNoteController::Pool*
class CORDL_TYPE __BurstSliderGameNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BurstSliderGameNoteController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x2634098, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstSliderGameNoteController__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BurstSliderGameNoteController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BurstSliderGameNoteController__Pool(__BurstSliderGameNoteController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BurstSliderGameNoteController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BurstSliderGameNoteController__Pool(__BurstSliderGameNoteController__Pool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BurstSliderGameNoteController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BurstSliderGameNoteController
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BurstSliderGameNoteController*
class CORDL_TYPE BurstSliderGameNoteController : public ::GlobalNamespace::NoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__BurstSliderGameNoteController__Pool;

  /// @brief Field _audioTimeSyncController, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController,
                      put = __cordl_internal_set__audioTimeSyncController))::UnityW<::GlobalNamespace::AudioTimeSyncController> _audioTimeSyncController;

  /// @brief Field _bigCuttableBySaber, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__bigCuttableBySaber, put = __cordl_internal_set__bigCuttableBySaber))::UnityW<::GlobalNamespace::BoxCuttableBySaber> _bigCuttableBySaber;

  /// @brief Field _bigCuttableBySaberList, offset 0x80, size 0x8
  __declspec(property(
      get = __cordl_internal_get__bigCuttableBySaberList,
      put = __cordl_internal_set__bigCuttableBySaberList))::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> _bigCuttableBySaberList;

  /// @brief Field _gameplayType, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get__gameplayType, put = __cordl_internal_set__gameplayType))::GlobalNamespace::__NoteData__GameplayType _gameplayType;

  /// @brief Field _noteVisualModifierType, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__noteVisualModifierType, put = __cordl_internal_set__noteVisualModifierType))::GlobalNamespace::NoteVisualModifierType _noteVisualModifierType;

  /// @brief Field _originalColliderCenter, offset 0xc4, size 0xc
  __declspec(property(get = __cordl_internal_get__originalColliderCenter, put = __cordl_internal_set__originalColliderCenter))::UnityEngine::Vector3 _originalColliderCenter;

  /// @brief Field _originalColliderSize, offset 0xb8, size 0xc
  __declspec(property(get = __cordl_internal_get__originalColliderSize, put = __cordl_internal_set__originalColliderSize))::UnityEngine::Vector3 _originalColliderSize;

  /// @brief Field _smallCuttableBySaberList, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__smallCuttableBySaberList,
                      put = __cordl_internal_set__smallCuttableBySaberList))::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>,
                                                                                     ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> _smallCuttableBySaberList;

  /// @brief Field _wrapperGO, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__wrapperGO, put = __cordl_internal_set__wrapperGO))::UnityW<::UnityEngine::GameObject> _wrapperGO;

  /// @brief Field cubeNoteControllerDidInitEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_cubeNoteControllerDidInitEvent,
                      put = __cordl_internal_set_cubeNoteControllerDidInitEvent))::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* cubeNoteControllerDidInitEvent;

  __declspec(property(get = get_gameplayType))::GlobalNamespace::__NoteData__GameplayType gameplayType;

  __declspec(property(get = get_noteMovement))::UnityW<::GlobalNamespace::NoteMovement> noteMovement;

  __declspec(property(get = get_noteVisualModifierType))::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  /// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>"
  constexpr operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IGameNoteMirrorable"
  constexpr operator ::GlobalNamespace::IGameNoteMirrorable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
  constexpr operator ::GlobalNamespace::INoteMirrorable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
  constexpr operator ::GlobalNamespace::INoteMovementProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept;

  /// @brief Method Awake, addr 0x26335c4, size 0x1a8, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleBigWasCutBySaber, addr 0x2633aac, size 0x18, virtual false, abstract: false, final false
  inline void HandleBigWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HandleCut, addr 0x2633ac4, size 0x4c4, virtual false, abstract: false, final false
  inline void HandleCut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec, bool allowBadCut);

  /// @brief Method HandleSmallWasCutBySaber, addr 0x2633f88, size 0x18, virtual false, abstract: false, final false
  inline void HandleSmallWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HiddenStateDidChange, addr 0x2634060, size 0x24, virtual true, abstract: false, final false
  inline void HiddenStateDidChange(bool hide);

  /// @brief Method Init, addr 0x2633320, size 0x2a4, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
                   float_t moveDuration, float_t jumpDuration, float_t jumpGravity, ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float_t uniformScale);

  static inline ::GlobalNamespace::BurstSliderGameNoteController* New_ctor();

  /// @brief Method NoteDidPassMissedMarker, addr 0x2633938, size 0xbc, virtual true, abstract: false, final false
  inline void NoteDidPassMissedMarker();

  /// @brief Method NoteDidStartDissolving, addr 0x26339f4, size 0xb8, virtual true, abstract: false, final false
  inline void NoteDidStartDissolving();

  /// @brief Method NoteDidStartJump, addr 0x2633fa0, size 0xc0, virtual true, abstract: false, final false
  inline void NoteDidStartJump();

  /// @brief Method OnDestroy, addr 0x263376c, size 0x1cc, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x2634084, size 0x10, virtual true, abstract: false, final false
  inline void Pause(bool pause);

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber> const& __cordl_internal_get__bigCuttableBySaber() const;

  constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber>& __cordl_internal_get__bigCuttableBySaber();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> const& __cordl_internal_get__bigCuttableBySaberList() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*>& __cordl_internal_get__bigCuttableBySaberList();

  constexpr ::GlobalNamespace::__NoteData__GameplayType const& __cordl_internal_get__gameplayType() const;

  constexpr ::GlobalNamespace::__NoteData__GameplayType& __cordl_internal_get__gameplayType();

  constexpr ::GlobalNamespace::NoteVisualModifierType const& __cordl_internal_get__noteVisualModifierType() const;

  constexpr ::GlobalNamespace::NoteVisualModifierType& __cordl_internal_get__noteVisualModifierType();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalColliderCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalColliderCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalColliderSize() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalColliderSize();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> const& __cordl_internal_get__smallCuttableBySaberList() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*>& __cordl_internal_get__smallCuttableBySaberList();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__wrapperGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__wrapperGO();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*& __cordl_internal_get_cubeNoteControllerDidInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*> const& __cordl_internal_get_cubeNoteControllerDidInitEvent() const;

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__bigCuttableBySaber(::UnityW<::GlobalNamespace::BoxCuttableBySaber> value);

  constexpr void __cordl_internal_set__bigCuttableBySaberList(::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> value);

  constexpr void __cordl_internal_set__gameplayType(::GlobalNamespace::__NoteData__GameplayType value);

  constexpr void __cordl_internal_set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType value);

  constexpr void __cordl_internal_set__originalColliderCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__originalColliderSize(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__smallCuttableBySaberList(::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> value);

  constexpr void __cordl_internal_set__wrapperGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* value);

  /// @brief Method .ctor, addr 0x2634094, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_cubeNoteControllerDidInitEvent, addr 0x26331a8, size 0xb0, virtual true, abstract: false, final true
  inline void add_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* value);

  /// @brief Method get_gameplayType, addr 0x2633318, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__NoteData__GameplayType get_gameplayType();

  /// @brief Method get_noteMovement, addr 0x2633308, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::NoteMovement> get_noteMovement();

  /// @brief Method get_noteVisualModifierType, addr 0x2633310, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  /// @brief Convert to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>"
  constexpr ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*
  i___GlobalNamespace__ICubeNoteControllerInitializable_1___UnityW___GlobalNamespace__BurstSliderGameNoteController__() noexcept;

  /// @brief Convert to "::GlobalNamespace::IGameNoteMirrorable"
  constexpr ::GlobalNamespace::IGameNoteMirrorable* i___GlobalNamespace__IGameNoteMirrorable() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMirrorable"
  constexpr ::GlobalNamespace::INoteMirrorable* i___GlobalNamespace__INoteMirrorable() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMovementProvider"
  constexpr ::GlobalNamespace::INoteMovementProvider* i___GlobalNamespace__INoteMovementProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr ::GlobalNamespace::INoteVisualModifierTypeProvider* i___GlobalNamespace__INoteVisualModifierTypeProvider() noexcept;

  /// @brief Method remove_cubeNoteControllerDidInitEvent, addr 0x2633258, size 0xb0, virtual true, abstract: false, final true
  inline void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstSliderGameNoteController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderGameNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstSliderGameNoteController(BurstSliderGameNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderGameNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstSliderGameNoteController(BurstSliderGameNoteController const&) = delete;

  /// @brief Field _bigCuttableBySaberList, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> ____bigCuttableBySaberList;

  /// @brief Field _smallCuttableBySaberList, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> ____smallCuttableBySaberList;

  /// @brief Field _wrapperGO, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____wrapperGO;

  /// @brief Field _audioTimeSyncController, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field cubeNoteControllerDidInitEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* ___cubeNoteControllerDidInitEvent;

  /// @brief Field _noteVisualModifierType, offset: 0xa8, size: 0x4, def value: None
  ::GlobalNamespace::NoteVisualModifierType ____noteVisualModifierType;

  /// @brief Field _gameplayType, offset: 0xac, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__GameplayType ____gameplayType;

  /// @brief Field _bigCuttableBySaber, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoxCuttableBySaber> ____bigCuttableBySaber;

  /// @brief Field _originalColliderSize, offset: 0xb8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____originalColliderSize;

  /// @brief Field _originalColliderCenter, offset: 0xc4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____originalColliderCenter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BurstSliderGameNoteController, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstSliderGameNoteController, ____bigCuttableBySaberList) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstSliderGameNoteController, ____smallCuttableBySaberList) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstSliderGameNoteController, ____wrapperGO) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstSliderGameNoteController, ____audioTimeSyncController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstSliderGameNoteController, ___cubeNoteControllerDidInitEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstSliderGameNoteController, ____noteVisualModifierType) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstSliderGameNoteController, ____gameplayType) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstSliderGameNoteController, ____bigCuttableBySaber) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstSliderGameNoteController, ____originalColliderSize) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstSliderGameNoteController, ____originalColliderCenter) == 0xc4, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BurstSliderGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderGameNoteController*, "", "BurstSliderGameNoteController");
NEED_NO_BOX(::GlobalNamespace::__BurstSliderGameNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BurstSliderGameNoteController__Pool*, "", "BurstSliderGameNoteController/Pool");
