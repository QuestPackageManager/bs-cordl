#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialNoteController)
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
class __TutorialNoteController__Pool;
}
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialNoteController;
}
namespace GlobalNamespace {
class __TutorialNoteController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialNoteController);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialNoteController__Pool);
// Type: ::TutorialNoteController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4761))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4787))
// CS Name: ::TutorialNoteController*
class CORDL_TYPE TutorialNoteController : public ::GlobalNamespace::NoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__TutorialNoteController__Pool;

  /// @brief Field _cuttableBySaberCore, offset 0x80, size 0x8
  __declspec(property(get = __get__cuttableBySaberCore, put = __set__cuttableBySaberCore))::GlobalNamespace::BoxCuttableBySaber* _cuttableBySaberCore;

  /// @brief Field _cuttableBySaberBeforeNote, offset 0x88, size 0x8
  __declspec(property(get = __get__cuttableBySaberBeforeNote, put = __set__cuttableBySaberBeforeNote))::GlobalNamespace::BoxCuttableBySaber* _cuttableBySaberBeforeNote;

  /// @brief Field _wrapperGO, offset 0x90, size 0x8
  __declspec(property(get = __get__wrapperGO, put = __set__wrapperGO))::UnityEngine::GameObject* _wrapperGO;

  /// @brief Field _beforeNoteCutWasOk, offset 0x98, size 0x1
  __declspec(property(get = __get__beforeNoteCutWasOk, put = __set__beforeNoteCutWasOk)) bool _beforeNoteCutWasOk;

  /// @brief Field _cutAngleTolerance, offset 0x9c, size 0x4
  __declspec(property(get = __get__cutAngleTolerance, put = __set__cutAngleTolerance)) float_t _cutAngleTolerance;

  __declspec(property(get = get_noteMovement))::GlobalNamespace::NoteMovement* noteMovement;

  __declspec(property(get = get_noteVisualModifierType))::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  __declspec(property(get = get_gameplayType))::GlobalNamespace::__NoteData__GameplayType gameplayType;

  /// @brief Convert operator to "::GlobalNamespace::IGameNoteMirrorable"
  constexpr operator ::GlobalNamespace::IGameNoteMirrorable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
  constexpr operator ::GlobalNamespace::INoteMirrorable*() noexcept;

  constexpr ::GlobalNamespace::BoxCuttableBySaber*& __get__cuttableBySaberCore();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoxCuttableBySaber*> const& __get__cuttableBySaberCore() const;

  constexpr void __set__cuttableBySaberCore(::GlobalNamespace::BoxCuttableBySaber* value);

  constexpr ::GlobalNamespace::BoxCuttableBySaber*& __get__cuttableBySaberBeforeNote();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoxCuttableBySaber*> const& __get__cuttableBySaberBeforeNote() const;

  constexpr void __set__cuttableBySaberBeforeNote(::GlobalNamespace::BoxCuttableBySaber* value);

  constexpr ::UnityEngine::GameObject*& __get__wrapperGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__wrapperGO() const;

  constexpr void __set__wrapperGO(::UnityEngine::GameObject* value);

  constexpr bool& __get__beforeNoteCutWasOk();

  constexpr bool const& __get__beforeNoteCutWasOk() const;

  constexpr void __set__beforeNoteCutWasOk(bool value);

  constexpr float_t& __get__cutAngleTolerance();

  constexpr float_t const& __get__cutAngleTolerance() const;

  constexpr void __set__cutAngleTolerance(float_t value);

  /// @brief Method get_noteMovement, addr 0x238beac, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteMovement* get_noteMovement();

  /// @brief Method get_noteVisualModifierType, addr 0x238beb4, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  /// @brief Method get_gameplayType, addr 0x238bebc, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__NoteData__GameplayType get_gameplayType();

  /// @brief Method Init, addr 0x238bec4, size 0x104, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
                   float_t moveDuration, float_t jumpDuration, float_t jumpGravity, float_t cutAngleTolerance, float_t uniformScale);

  /// @brief Method Awake, addr 0x238bfc8, size 0xec, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x238c0b4, size 0x160, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method NoteDidPassMissedMarker, addr 0x238c214, size 0x4c, virtual true, abstract: false, final false
  inline void NoteDidPassMissedMarker();

  /// @brief Method HandleBeforeNoteWasCutBySaber, addr 0x238c260, size 0x10c, virtual false, abstract: false, final false
  inline void HandleBeforeNoteWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HandleCoreWasCutBySaber, addr 0x238c36c, size 0x42c, virtual false, abstract: false, final false
  inline void HandleCoreWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HiddenStateDidChange, addr 0x238c798, size 0x24, virtual true, abstract: false, final false
  inline void HiddenStateDidChange(bool hide);

  /// @brief Method Pause, addr 0x238c7bc, size 0x10, virtual true, abstract: false, final false
  inline void Pause(bool pause);

  static inline ::GlobalNamespace::TutorialNoteController* New_ctor();

  /// @brief Method .ctor, addr 0x238c7cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialNoteController(TutorialNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialNoteController(TutorialNoteController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialNoteController();

public:
  /// @brief Field _cuttableBySaberCore, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::BoxCuttableBySaber* ____cuttableBySaberCore;

  /// @brief Field _cuttableBySaberBeforeNote, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::BoxCuttableBySaber* ____cuttableBySaberBeforeNote;

  /// @brief Field _wrapperGO, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____wrapperGO;

  /// @brief Field _beforeNoteCutWasOk, offset: 0x98, size: 0x1, def value: None
  bool ____beforeNoteCutWasOk;

  /// @brief Field _cutAngleTolerance, offset: 0x9c, size: 0x4, def value: None
  float_t ____cutAngleTolerance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialNoteController, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoteController, ____cuttableBySaberCore) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoteController, ____cuttableBySaberBeforeNote) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoteController, ____wrapperGO) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoteController, ____beforeNoteCutWasOk) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoteController, ____cutAngleTolerance) == 0x9c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2828 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4787))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4786)) CS Name: ::TutorialNoteController::Pool*
class CORDL_TYPE __TutorialNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::TutorialNoteController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__TutorialNoteController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x238c7d4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialNoteController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialNoteController__Pool(__TutorialNoteController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialNoteController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialNoteController__Pool(__TutorialNoteController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialNoteController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialNoteController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialNoteController*, "", "TutorialNoteController");
NEED_NO_BOX(::GlobalNamespace::__TutorialNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialNoteController__Pool*, "", "TutorialNoteController/Pool");
