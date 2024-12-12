#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialNoteController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialNoteController)
namespace GlobalNamespace {
class BoxCuttableBySaber;
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
namespace GlobalNamespace {
class TutorialNoteController_Pool;
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
class TutorialNoteController;
}
namespace GlobalNamespace {
class TutorialNoteController_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialNoteController);
MARK_REF_PTR_T(::GlobalNamespace::TutorialNoteController_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialNoteController/Pool
class CORDL_TYPE TutorialNoteController_Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::TutorialNoteController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::TutorialNoteController_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3aeefb0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialNoteController_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoteController_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialNoteController_Pool(TutorialNoteController_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoteController_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialNoteController_Pool(TutorialNoteController_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4136 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialNoteController_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IGameNoteMirrorable, INoteMirrorable, NoteController
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialNoteController
class CORDL_TYPE TutorialNoteController : public ::GlobalNamespace::NoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::TutorialNoteController_Pool;

  /// @brief Field _beforeNoteCutWasOk, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__beforeNoteCutWasOk, put = __cordl_internal_set__beforeNoteCutWasOk)) bool _beforeNoteCutWasOk;

  /// @brief Field _cutAngleTolerance, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__cutAngleTolerance, put = __cordl_internal_set__cutAngleTolerance)) float_t _cutAngleTolerance;

  /// @brief Field _cuttableBySaberBeforeNote, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__cuttableBySaberBeforeNote, put = __cordl_internal_set__cuttableBySaberBeforeNote)) ::UnityW<::GlobalNamespace::BoxCuttableBySaber>
      _cuttableBySaberBeforeNote;

  /// @brief Field _cuttableBySaberCore, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__cuttableBySaberCore, put = __cordl_internal_set__cuttableBySaberCore)) ::UnityW<::GlobalNamespace::BoxCuttableBySaber> _cuttableBySaberCore;

  /// @brief Field _wrapperGO, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__wrapperGO, put = __cordl_internal_set__wrapperGO)) ::UnityW<::UnityEngine::GameObject> _wrapperGO;

  __declspec(property(get = get_gameplayType)) ::GlobalNamespace::NoteData_GameplayType gameplayType;

  __declspec(property(get = get_noteMovement)) ::UnityW<::GlobalNamespace::NoteMovement> noteMovement;

  __declspec(property(get = get_noteVisualModifierType)) ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  /// @brief Convert operator to "::GlobalNamespace::IGameNoteMirrorable"
  constexpr operator ::GlobalNamespace::IGameNoteMirrorable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
  constexpr operator ::GlobalNamespace::INoteMirrorable*() noexcept;

  /// @brief Method Awake, addr 0x3aee768, size 0xe0, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleBeforeNoteWasCutBySaber, addr 0x3aee9e4, size 0x10c, virtual false, abstract: false, final false
  inline void HandleBeforeNoteWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HandleCoreWasCutBySaber, addr 0x3aeeaf0, size 0x488, virtual false, abstract: false, final false
  inline void HandleCoreWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HiddenStateDidChange, addr 0x3aeef78, size 0x24, virtual true, abstract: false, final false
  inline void HiddenStateDidChange(bool hide);

  /// @brief Method Init, addr 0x3aee6d0, size 0x98, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, float_t cutAngleTolerance, float_t uniformScale);

  static inline ::GlobalNamespace::TutorialNoteController* New_ctor();

  /// @brief Method NoteDidPassMissedMarker, addr 0x3aee99c, size 0x48, virtual true, abstract: false, final false
  inline void NoteDidPassMissedMarker();

  /// @brief Method OnDestroy, addr 0x3aee848, size 0x154, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x3aeef9c, size 0x10, virtual true, abstract: false, final false
  inline void Pause(bool pause);

  constexpr bool const& __cordl_internal_get__beforeNoteCutWasOk() const;

  constexpr bool& __cordl_internal_get__beforeNoteCutWasOk();

  constexpr float_t const& __cordl_internal_get__cutAngleTolerance() const;

  constexpr float_t& __cordl_internal_get__cutAngleTolerance();

  constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber> const& __cordl_internal_get__cuttableBySaberBeforeNote() const;

  constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber>& __cordl_internal_get__cuttableBySaberBeforeNote();

  constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber> const& __cordl_internal_get__cuttableBySaberCore() const;

  constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber>& __cordl_internal_get__cuttableBySaberCore();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__wrapperGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__wrapperGO();

  constexpr void __cordl_internal_set__beforeNoteCutWasOk(bool value);

  constexpr void __cordl_internal_set__cutAngleTolerance(float_t value);

  constexpr void __cordl_internal_set__cuttableBySaberBeforeNote(::UnityW<::GlobalNamespace::BoxCuttableBySaber> value);

  constexpr void __cordl_internal_set__cuttableBySaberCore(::UnityW<::GlobalNamespace::BoxCuttableBySaber> value);

  constexpr void __cordl_internal_set__wrapperGO(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x3aeefac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameplayType, addr 0x3aee6c8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteData_GameplayType get_gameplayType();

  /// @brief Method get_noteMovement, addr 0x3aee6b8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::NoteMovement> get_noteMovement();

  /// @brief Method get_noteVisualModifierType, addr 0x3aee6c0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  /// @brief Convert to "::GlobalNamespace::IGameNoteMirrorable"
  constexpr ::GlobalNamespace::IGameNoteMirrorable* i___GlobalNamespace__IGameNoteMirrorable() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMirrorable"
  constexpr ::GlobalNamespace::INoteMirrorable* i___GlobalNamespace__INoteMirrorable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialNoteController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialNoteController(TutorialNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialNoteController(TutorialNoteController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4137 };

  /// @brief Field _cuttableBySaberCore, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoxCuttableBySaber> ____cuttableBySaberCore;

  /// @brief Field _cuttableBySaberBeforeNote, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoxCuttableBySaber> ____cuttableBySaberBeforeNote;

  /// @brief Field _wrapperGO, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____wrapperGO;

  /// @brief Field _beforeNoteCutWasOk, offset: 0xa0, size: 0x1, def value: None
  bool ____beforeNoteCutWasOk;

  /// @brief Field _cutAngleTolerance, offset: 0xa4, size: 0x4, def value: None
  float_t ____cutAngleTolerance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialNoteController, ____cuttableBySaberCore) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoteController, ____cuttableBySaberBeforeNote) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoteController, ____wrapperGO) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoteController, ____beforeNoteCutWasOk) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoteController, ____cutAngleTolerance) == 0xa4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialNoteController, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialNoteController*, "", "TutorialNoteController");
NEED_NO_BOX(::GlobalNamespace::TutorialNoteController_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialNoteController_Pool*, "", "TutorialNoteController/Pool");
