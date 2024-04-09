#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerNoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerGameNoteController)
namespace GlobalNamespace {
template <typename T> class ICubeNoteControllerInitializable_1;
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
class __MultiplayerConnectedPlayerGameNoteController__Pool;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerGameNoteController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConnectedPlayerGameNoteController::Pool*
class CORDL_TYPE __MultiplayerConnectedPlayerGameNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x25ed618, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerConnectedPlayerGameNoteController__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerGameNoteController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerConnectedPlayerGameNoteController__Pool(__MultiplayerConnectedPlayerGameNoteController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerGameNoteController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerConnectedPlayerGameNoteController__Pool(__MultiplayerConnectedPlayerGameNoteController__Pool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerConnectedPlayerGameNoteController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConnectedPlayerGameNoteController*
class CORDL_TYPE MultiplayerConnectedPlayerGameNoteController : public ::GlobalNamespace::MultiplayerConnectedPlayerNoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool;

  /// @brief Field _gameplayType, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__gameplayType, put = __cordl_internal_set__gameplayType))::GlobalNamespace::__NoteData__GameplayType _gameplayType;

  /// @brief Field _noteVisualModifierType, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__noteVisualModifierType, put = __cordl_internal_set__noteVisualModifierType))::GlobalNamespace::NoteVisualModifierType _noteVisualModifierType;

  /// @brief Field cubeNoteControllerDidInitEvent, offset 0x88, size 0x8
  __declspec(
      property(get = __cordl_internal_get_cubeNoteControllerDidInitEvent,
               put = __cordl_internal_set_cubeNoteControllerDidInitEvent))::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* cubeNoteControllerDidInitEvent;

  __declspec(property(get = get_gameplayType))::GlobalNamespace::__NoteData__GameplayType gameplayType;

  __declspec(property(get = get_noteMovement))::UnityW<::GlobalNamespace::NoteMovement> noteMovement;

  __declspec(property(get = get_noteVisualModifierType))::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  /// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>"
  constexpr operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
  constexpr operator ::GlobalNamespace::INoteMovementProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept;

  /// @brief Method Init, addr 0x25e9814, size 0x118, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
                   float_t moveDuration, float_t jumpDuration, float_t jumpGravity, ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float_t uniformScale);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* New_ctor();

  constexpr ::GlobalNamespace::__NoteData__GameplayType const& __cordl_internal_get__gameplayType() const;

  constexpr ::GlobalNamespace::__NoteData__GameplayType& __cordl_internal_get__gameplayType();

  constexpr ::GlobalNamespace::NoteVisualModifierType const& __cordl_internal_get__noteVisualModifierType() const;

  constexpr ::GlobalNamespace::NoteVisualModifierType& __cordl_internal_get__noteVisualModifierType();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*& __cordl_internal_get_cubeNoteControllerDidInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*> const&
  __cordl_internal_get_cubeNoteControllerDidInitEvent() const;

  constexpr void __cordl_internal_set__gameplayType(::GlobalNamespace::__NoteData__GameplayType value);

  constexpr void __cordl_internal_set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType value);

  constexpr void __cordl_internal_set_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value);

  /// @brief Method .ctor, addr 0x25ed610, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_cubeNoteControllerDidInitEvent, addr 0x25ed498, size 0xb0, virtual true, abstract: false, final true
  inline void add_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value);

  /// @brief Method get_gameplayType, addr 0x25ed600, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__NoteData__GameplayType get_gameplayType();

  /// @brief Method get_noteMovement, addr 0x25ed5f8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::NoteMovement> get_noteMovement();

  /// @brief Method get_noteVisualModifierType, addr 0x25ed608, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  /// @brief Convert to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>"
  constexpr ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*
  i___GlobalNamespace__ICubeNoteControllerInitializable_1___UnityW___GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMovementProvider"
  constexpr ::GlobalNamespace::INoteMovementProvider* i___GlobalNamespace__INoteMovementProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr ::GlobalNamespace::INoteVisualModifierTypeProvider* i___GlobalNamespace__INoteVisualModifierTypeProvider() noexcept;

  /// @brief Method remove_cubeNoteControllerDidInitEvent, addr 0x25ed548, size 0xb0, virtual true, abstract: false, final true
  inline void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerGameNoteController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerGameNoteController(MultiplayerConnectedPlayerGameNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerGameNoteController(MultiplayerConnectedPlayerGameNoteController const&) = delete;

  /// @brief Field cubeNoteControllerDidInitEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* ___cubeNoteControllerDidInitEvent;

  /// @brief Field _noteVisualModifierType, offset: 0x90, size: 0x4, def value: None
  ::GlobalNamespace::NoteVisualModifierType ____noteVisualModifierType;

  /// @brief Field _gameplayType, offset: 0x94, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__GameplayType ____gameplayType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, ___cubeNoteControllerDidInitEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, ____noteVisualModifierType) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, ____gameplayType) == 0x94, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*, "", "MultiplayerConnectedPlayerGameNoteController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*, "", "MultiplayerConnectedPlayerGameNoteController/Pool");
