#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerGameNoteController.hpp"
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
class MultiplayerConnectedPlayerGameNoteController_Pool;
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
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerGameNoteController/Pool
class CORDL_TYPE MultiplayerConnectedPlayerGameNoteController_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x58127d4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerGameNoteController_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameNoteController_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerGameNoteController_Pool(MultiplayerConnectedPlayerGameNoteController_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameNoteController_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerGameNoteController_Pool(MultiplayerConnectedPlayerGameNoteController_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6079 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerConnectedPlayerNoteController, NoteData::GameplayType, NoteVisualModifierType
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerGameNoteController
class CORDL_TYPE MultiplayerConnectedPlayerGameNoteController : public ::GlobalNamespace::MultiplayerConnectedPlayerNoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool;

  /// @brief Field _gameplayType, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__gameplayType, put = __cordl_internal_set__gameplayType)) ::GlobalNamespace::NoteData_GameplayType _gameplayType;

  /// @brief Field _noteVisualModifierType, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__noteVisualModifierType, put = __cordl_internal_set__noteVisualModifierType)) ::GlobalNamespace::NoteVisualModifierType _noteVisualModifierType;

  /// @brief Field cubeNoteControllerDidInitEvent, offset 0x90, size 0x8
  __declspec(property(
      get = __cordl_internal_get_cubeNoteControllerDidInitEvent,
      put = __cordl_internal_set_cubeNoteControllerDidInitEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* cubeNoteControllerDidInitEvent;

  __declspec(property(get = get_gameplayType)) ::GlobalNamespace::NoteData_GameplayType gameplayType;

  __declspec(property(get = get_noteMovement)) ::UnityW<::GlobalNamespace::NoteMovement> noteMovement;

  __declspec(property(get = get_noteVisualModifierType)) ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  /// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>"
  constexpr operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
  constexpr operator ::GlobalNamespace::INoteMovementProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept;

  /// @brief Method Init, addr 0x580e8c8, size 0xb0, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType,
                   float_t uniformScale);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* New_ctor();

  constexpr ::GlobalNamespace::NoteData_GameplayType const& __cordl_internal_get__gameplayType() const;

  constexpr ::GlobalNamespace::NoteData_GameplayType& __cordl_internal_get__gameplayType();

  constexpr ::GlobalNamespace::NoteVisualModifierType const& __cordl_internal_get__noteVisualModifierType() const;

  constexpr ::GlobalNamespace::NoteVisualModifierType& __cordl_internal_get__noteVisualModifierType();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* const& __cordl_internal_get_cubeNoteControllerDidInitEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*& __cordl_internal_get_cubeNoteControllerDidInitEvent();

  constexpr void __cordl_internal_set__gameplayType(::GlobalNamespace::NoteData_GameplayType value);

  constexpr void __cordl_internal_set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType value);

  constexpr void __cordl_internal_set_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value);

  /// @brief Method .ctor, addr 0x58127cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_cubeNoteControllerDidInitEvent, addr 0x5812634, size 0xc0, virtual true, abstract: false, final true
  inline void add_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value);

  /// @brief Method get_gameplayType, addr 0x58127bc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteData_GameplayType get_gameplayType();

  /// @brief Method get_noteMovement, addr 0x58127b4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::NoteMovement> get_noteMovement();

  /// @brief Method get_noteVisualModifierType, addr 0x58127c4, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  /// @brief Convert to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>"
  constexpr ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*
  i___GlobalNamespace__ICubeNoteControllerInitializable_1___UnityW___GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMovementProvider"
  constexpr ::GlobalNamespace::INoteMovementProvider* i___GlobalNamespace__INoteMovementProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr ::GlobalNamespace::INoteVisualModifierTypeProvider* i___GlobalNamespace__INoteVisualModifierTypeProvider() noexcept;

  /// @brief Method remove_cubeNoteControllerDidInitEvent, addr 0x58126f4, size 0xc0, virtual true, abstract: false, final true
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6080 };

  /// @brief Field cubeNoteControllerDidInitEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* ___cubeNoteControllerDidInitEvent;

  /// @brief Field _noteVisualModifierType, offset: 0x98, size: 0x4, def value: None
  ::GlobalNamespace::NoteVisualModifierType ____noteVisualModifierType;

  /// @brief Field _gameplayType, offset: 0x9c, size: 0x4, def value: None
  ::GlobalNamespace::NoteData_GameplayType ____gameplayType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, ___cubeNoteControllerDidInitEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, ____noteVisualModifierType) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, ____gameplayType) == 0x9c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*, "", "MultiplayerConnectedPlayerGameNoteController");
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*, "", "MultiplayerConnectedPlayerGameNoteController/Pool");
