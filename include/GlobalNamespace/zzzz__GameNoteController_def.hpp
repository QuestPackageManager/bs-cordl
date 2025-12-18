#pragma once
// IWYU pragma private; include "GlobalNamespace/GameNoteController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameNoteController)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
namespace GlobalNamespace {
class GameNoteController_Pool;
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
struct NoteData_GameplayType;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
struct NoteSpawnData;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace GlobalNamespace {
class Saber;
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
class GameNoteController;
}
namespace GlobalNamespace {
class GameNoteController_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameNoteController);
MARK_REF_PTR_T(::GlobalNamespace::GameNoteController_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameNoteController/Pool
class CORDL_TYPE GameNoteController_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::GameNoteController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::GameNoteController_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x5726aac, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameNoteController_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameNoteController_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameNoteController_Pool(GameNoteController_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameNoteController_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameNoteController_Pool(GameNoteController_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5662 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameNoteController_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies NoteController, NoteData::GameplayType, NoteVisualModifierType
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameNoteController
class CORDL_TYPE GameNoteController : public ::GlobalNamespace::NoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::GameNoteController_Pool;

  /// @brief Field _audioTimeSyncController, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _bigCuttableBySaberList, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__bigCuttableBySaberList,
                      put = __cordl_internal_set__bigCuttableBySaberList)) ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*>
      _bigCuttableBySaberList;

  /// @brief Field _cutAngleTolerance, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__cutAngleTolerance, put = __cordl_internal_set__cutAngleTolerance)) float_t _cutAngleTolerance;

  /// @brief Field _gameplayType, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get__gameplayType, put = __cordl_internal_set__gameplayType)) ::GlobalNamespace::NoteData_GameplayType _gameplayType;

  /// @brief Field _noteVisualModifierType, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__noteVisualModifierType, put = __cordl_internal_set__noteVisualModifierType)) ::GlobalNamespace::NoteVisualModifierType _noteVisualModifierType;

  /// @brief Field _smallCuttableBySaberList, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__smallCuttableBySaberList,
                      put = __cordl_internal_set__smallCuttableBySaberList)) ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*>
      _smallCuttableBySaberList;

  /// @brief Field _wrapperGO, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__wrapperGO, put = __cordl_internal_set__wrapperGO)) ::UnityW<::UnityEngine::GameObject> _wrapperGO;

  /// @brief Field cubeNoteControllerDidInitEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_cubeNoteControllerDidInitEvent,
                      put = __cordl_internal_set_cubeNoteControllerDidInitEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>* cubeNoteControllerDidInitEvent;

  __declspec(property(get = get_gameplayType)) ::GlobalNamespace::NoteData_GameplayType gameplayType;

  __declspec(property(get = get_noteMovement)) ::UnityW<::GlobalNamespace::NoteMovement> noteMovement;

  __declspec(property(get = get_noteVisualModifierType)) ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  /// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::GameNoteController>>"
  constexpr operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::GameNoteController>>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IGameNoteMirrorable"
  constexpr operator ::GlobalNamespace::IGameNoteMirrorable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
  constexpr operator ::GlobalNamespace::INoteMirrorable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
  constexpr operator ::GlobalNamespace::INoteMovementProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept;

  /// @brief Method Awake, addr 0x5725fbc, size 0x158, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleBigWasCutBySaber, addr 0x572644c, size 0x18, virtual false, abstract: false, final false
  inline void HandleBigWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HandleCut, addr 0x5726464, size 0x548, virtual false, abstract: false, final false
  inline void HandleCut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec, bool allowBadCut);

  /// @brief Method HandleSmallWasCutBySaber, addr 0x57269ac, size 0x18, virtual false, abstract: false, final false
  inline void HandleSmallWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HiddenStateDidChange, addr 0x5726a78, size 0x20, virtual true, abstract: false, final false
  inline void HiddenStateDidChange(bool hide);

  /// @brief Method Init, addr 0x5725dc8, size 0x1f4, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType,
                   float_t cutAngleTolerance, float_t uniformScale);

  static inline ::GlobalNamespace::GameNoteController* New_ctor();

  /// @brief Method NoteDidPassMissedMarker, addr 0x57262f0, size 0xb0, virtual true, abstract: false, final false
  inline void NoteDidPassMissedMarker();

  /// @brief Method NoteDidStartDissolving, addr 0x57263a0, size 0xac, virtual true, abstract: false, final false
  inline void NoteDidStartDissolving();

  /// @brief Method NoteDidStartJump, addr 0x57269c4, size 0xb4, virtual true, abstract: false, final false
  inline void NoteDidStartJump();

  /// @brief Method OnDestroy, addr 0x5726114, size 0x1dc, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x5726a98, size 0x10, virtual true, abstract: false, final false
  inline void Pause(bool pause);

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> const& __cordl_internal_get__bigCuttableBySaberList() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*>& __cordl_internal_get__bigCuttableBySaberList();

  constexpr float_t const& __cordl_internal_get__cutAngleTolerance() const;

  constexpr float_t& __cordl_internal_get__cutAngleTolerance();

  constexpr ::GlobalNamespace::NoteData_GameplayType const& __cordl_internal_get__gameplayType() const;

  constexpr ::GlobalNamespace::NoteData_GameplayType& __cordl_internal_get__gameplayType();

  constexpr ::GlobalNamespace::NoteVisualModifierType const& __cordl_internal_get__noteVisualModifierType() const;

  constexpr ::GlobalNamespace::NoteVisualModifierType& __cordl_internal_get__noteVisualModifierType();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> const& __cordl_internal_get__smallCuttableBySaberList() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*>& __cordl_internal_get__smallCuttableBySaberList();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__wrapperGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__wrapperGO();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>* const& __cordl_internal_get_cubeNoteControllerDidInitEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>*& __cordl_internal_get_cubeNoteControllerDidInitEvent();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__bigCuttableBySaberList(::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> value);

  constexpr void __cordl_internal_set__cutAngleTolerance(float_t value);

  constexpr void __cordl_internal_set__gameplayType(::GlobalNamespace::NoteData_GameplayType value);

  constexpr void __cordl_internal_set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType value);

  constexpr void __cordl_internal_set__smallCuttableBySaberList(::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> value);

  constexpr void __cordl_internal_set__wrapperGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>* value);

  /// @brief Method .ctor, addr 0x5726aa8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_cubeNoteControllerDidInitEvent, addr 0x5725c30, size 0xc0, virtual true, abstract: false, final true
  inline void add_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>* value);

  /// @brief Method get_gameplayType, addr 0x5725dc0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteData_GameplayType get_gameplayType();

  /// @brief Method get_noteMovement, addr 0x5725db0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::NoteMovement> get_noteMovement();

  /// @brief Method get_noteVisualModifierType, addr 0x5725db8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  /// @brief Convert to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::GameNoteController>>"
  constexpr ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::GameNoteController>>*
  i___GlobalNamespace__ICubeNoteControllerInitializable_1___UnityW___GlobalNamespace__GameNoteController__() noexcept;

  /// @brief Convert to "::GlobalNamespace::IGameNoteMirrorable"
  constexpr ::GlobalNamespace::IGameNoteMirrorable* i___GlobalNamespace__IGameNoteMirrorable() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMirrorable"
  constexpr ::GlobalNamespace::INoteMirrorable* i___GlobalNamespace__INoteMirrorable() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMovementProvider"
  constexpr ::GlobalNamespace::INoteMovementProvider* i___GlobalNamespace__INoteMovementProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr ::GlobalNamespace::INoteVisualModifierTypeProvider* i___GlobalNamespace__INoteVisualModifierTypeProvider() noexcept;

  /// @brief Method remove_cubeNoteControllerDidInitEvent, addr 0x5725cf0, size 0xc0, virtual true, abstract: false, final true
  inline void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameNoteController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameNoteController(GameNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameNoteController(GameNoteController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5663 };

  /// @brief Field _bigCuttableBySaberList, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> ____bigCuttableBySaberList;

  /// @brief Field _smallCuttableBySaberList, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> ____smallCuttableBySaberList;

  /// @brief Field _wrapperGO, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____wrapperGO;

  /// @brief Field _audioTimeSyncController, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field cubeNoteControllerDidInitEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>* ___cubeNoteControllerDidInitEvent;

  /// @brief Field _noteVisualModifierType, offset: 0xb0, size: 0x4, def value: None
  ::GlobalNamespace::NoteVisualModifierType ____noteVisualModifierType;

  /// @brief Field _gameplayType, offset: 0xb4, size: 0x4, def value: None
  ::GlobalNamespace::NoteData_GameplayType ____gameplayType;

  /// @brief Field _cutAngleTolerance, offset: 0xb8, size: 0x4, def value: None
  float_t ____cutAngleTolerance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameNoteController, ____bigCuttableBySaberList) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____smallCuttableBySaberList) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____wrapperGO) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____audioTimeSyncController) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ___cubeNoteControllerDidInitEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____noteVisualModifierType) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____gameplayType) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____cutAngleTolerance) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameNoteController, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameNoteController*, "", "GameNoteController");
NEED_NO_BOX(::GlobalNamespace::GameNoteController_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameNoteController_Pool*, "", "GameNoteController/Pool");
