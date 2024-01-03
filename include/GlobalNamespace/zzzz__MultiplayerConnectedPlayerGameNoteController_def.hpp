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
// Type: ::MultiplayerConnectedPlayerGameNoteController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5138)), TypeDefinitionIndex(TypeDefinitionIndex(14757)), TypeDefinitionIndex(TypeDefinitionIndex(4749))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5137))
// CS Name: ::MultiplayerConnectedPlayerGameNoteController*
class CORDL_TYPE MultiplayerConnectedPlayerGameNoteController : public ::GlobalNamespace::MultiplayerConnectedPlayerNoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool;

  /// @brief Field cubeNoteControllerDidInitEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_cubeNoteControllerDidInitEvent,
                      put = __set_cubeNoteControllerDidInitEvent))::System::Action_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* cubeNoteControllerDidInitEvent;

  /// @brief Field _noteVisualModifierType, offset 0x90, size 0x4
  __declspec(property(get = __get__noteVisualModifierType, put = __set__noteVisualModifierType))::GlobalNamespace::NoteVisualModifierType _noteVisualModifierType;

  /// @brief Field _gameplayType, offset 0x94, size 0x4
  __declspec(property(get = __get__gameplayType, put = __set__gameplayType))::GlobalNamespace::__NoteData__GameplayType _gameplayType;

  __declspec(property(get = get_noteMovement))::GlobalNamespace::NoteMovement* noteMovement;

  __declspec(property(get = get_gameplayType))::GlobalNamespace::__NoteData__GameplayType gameplayType;

  __declspec(property(get = get_noteVisualModifierType))::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  /// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>"
  constexpr operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>"
  constexpr ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*
  i___GlobalNamespace__ICubeNoteControllerInitializable_1___GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr ::GlobalNamespace::INoteVisualModifierTypeProvider* i___GlobalNamespace__INoteVisualModifierTypeProvider() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
  constexpr operator ::GlobalNamespace::INoteMovementProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMovementProvider"
  constexpr ::GlobalNamespace::INoteMovementProvider* i___GlobalNamespace__INoteMovementProvider() noexcept;

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*& __get_cubeNoteControllerDidInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*> const& __get_cubeNoteControllerDidInitEvent() const;

  constexpr void __set_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* value);

  constexpr ::GlobalNamespace::NoteVisualModifierType& __get__noteVisualModifierType();

  constexpr ::GlobalNamespace::NoteVisualModifierType const& __get__noteVisualModifierType() const;

  constexpr void __set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType value);

  constexpr ::GlobalNamespace::__NoteData__GameplayType& __get__gameplayType();

  constexpr ::GlobalNamespace::__NoteData__GameplayType const& __get__gameplayType() const;

  constexpr void __set__gameplayType(::GlobalNamespace::__NoteData__GameplayType value);

  /// @brief Method add_cubeNoteControllerDidInitEvent, addr 0x23d7860, size 0xb0, virtual true, abstract: false, final true
  inline void add_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* value);

  /// @brief Method remove_cubeNoteControllerDidInitEvent, addr 0x23d7910, size 0xb0, virtual true, abstract: false, final true
  inline void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* value);

  /// @brief Method get_noteMovement, addr 0x23d79c0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteMovement* get_noteMovement();

  /// @brief Method get_gameplayType, addr 0x23d79c8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__NoteData__GameplayType get_gameplayType();

  /// @brief Method get_noteVisualModifierType, addr 0x23d79d0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  /// @brief Method Init, addr 0x23d384c, size 0x118, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
                   float_t moveDuration, float_t jumpDuration, float_t jumpGravity, ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float_t uniformScale);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* New_ctor();

  /// @brief Method .ctor, addr 0x23d79d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerGameNoteController(MultiplayerConnectedPlayerGameNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerGameNoteController(MultiplayerConnectedPlayerGameNoteController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerGameNoteController();

public:
  /// @brief Field cubeNoteControllerDidInitEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* ___cubeNoteControllerDidInitEvent;

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
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), TypeDefinitionIndex(TypeDefinitionIndex(5137)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst:
// 356 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5136)) CS Name: ::MultiplayerConnectedPlayerGameNoteController::Pool*
class CORDL_TYPE __MultiplayerConnectedPlayerGameNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x23d79e0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerGameNoteController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerConnectedPlayerGameNoteController__Pool(__MultiplayerConnectedPlayerGameNoteController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerGameNoteController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerConnectedPlayerGameNoteController__Pool(__MultiplayerConnectedPlayerGameNoteController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerConnectedPlayerGameNoteController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*, "", "MultiplayerConnectedPlayerGameNoteController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*, "", "MultiplayerConnectedPlayerGameNoteController/Pool");
