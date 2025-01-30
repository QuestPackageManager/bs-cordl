#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredGameNoteController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ICubeNoteControllerInitializable_1_def.hpp"
#include "GlobalNamespace/zzzz__INoteMovementProvider_def.hpp"
#include "GlobalNamespace/zzzz__INoteVisualModifierTypeProvider_def.hpp"
#include "GlobalNamespace/zzzz__MirroredNoteController_1_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MirroredGameNoteController)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class MirroredGameNoteController_Pool;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MirroredGameNoteController;
}
namespace GlobalNamespace {
class MirroredGameNoteController_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirroredGameNoteController);
MARK_REF_PTR_T(::GlobalNamespace::MirroredGameNoteController_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirroredGameNoteController/Pool
class CORDL_TYPE MirroredGameNoteController_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::MirroredGameNoteController_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3aec988, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredGameNoteController_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirroredGameNoteController_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredGameNoteController_Pool(MirroredGameNoteController_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredGameNoteController_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredGameNoteController_Pool(MirroredGameNoteController_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4109 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredGameNoteController_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ICubeNoteControllerInitializable`1<T>, INoteMovementProvider, INoteVisualModifierTypeProvider, MirroredNoteController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirroredGameNoteController
class CORDL_TYPE MirroredGameNoteController : public ::GlobalNamespace::MirroredNoteController_1<::GlobalNamespace::IGameNoteMirrorable*> {
public:
  // Declarations
  using Pool = ::GlobalNamespace::MirroredGameNoteController_Pool;

  /// @brief Field _colorId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__colorId, put = setStaticF__colorId)) int32_t _colorId;

  /// @brief Field _colorManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _materialPropertyBlockController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  /// @brief Field cubeNoteControllerDidInitEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_cubeNoteControllerDidInitEvent,
                      put = __cordl_internal_set_cubeNoteControllerDidInitEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* cubeNoteControllerDidInitEvent;

  __declspec(property(get = get_noteMovement)) ::UnityW<::GlobalNamespace::NoteMovement> noteMovement;

  __declspec(property(get = get_noteVisualModifierType)) ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  /// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>"
  constexpr operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
  constexpr operator ::GlobalNamespace::INoteMovementProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept;

  /// @brief Method Mirror, addr 0x3aec788, size 0x150, virtual true, abstract: false, final false
  inline void Mirror(::GlobalNamespace::IGameNoteMirrorable* noteController);

  static inline ::GlobalNamespace::MirroredGameNoteController* New_ctor();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* const& __cordl_internal_get_cubeNoteControllerDidInitEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*& __cordl_internal_get_cubeNoteControllerDidInitEvent();

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value);

  /// @brief Method .ctor, addr 0x3aec8d8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_cubeNoteControllerDidInitEvent, addr 0x3aec4d8, size 0xb0, virtual true, abstract: false, final true
  inline void add_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value);

  static inline int32_t getStaticF__colorId();

  /// @brief Method get_noteMovement, addr 0x3aec638, size 0xac, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::NoteMovement> get_noteMovement();

  /// @brief Method get_noteVisualModifierType, addr 0x3aec6e4, size 0xa4, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  /// @brief Convert to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>"
  constexpr ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*
  i___GlobalNamespace__ICubeNoteControllerInitializable_1___UnityW___GlobalNamespace__MirroredGameNoteController__() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMovementProvider"
  constexpr ::GlobalNamespace::INoteMovementProvider* i___GlobalNamespace__INoteMovementProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr ::GlobalNamespace::INoteVisualModifierTypeProvider* i___GlobalNamespace__INoteVisualModifierTypeProvider() noexcept;

  /// @brief Method remove_cubeNoteControllerDidInitEvent, addr 0x3aec588, size 0xb0, virtual true, abstract: false, final true
  inline void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value);

  static inline void setStaticF__colorId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredGameNoteController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirroredGameNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredGameNoteController(MirroredGameNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredGameNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredGameNoteController(MirroredGameNoteController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4110 };

  /// @brief Field _materialPropertyBlockController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _colorManager, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field cubeNoteControllerDidInitEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* ___cubeNoteControllerDidInitEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirroredGameNoteController, ____materialPropertyBlockController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredGameNoteController, ____colorManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredGameNoteController, ___cubeNoteControllerDidInitEvent) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredGameNoteController, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredGameNoteController*, "", "MirroredGameNoteController");
NEED_NO_BOX(::GlobalNamespace::MirroredGameNoteController_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredGameNoteController_Pool*, "", "MirroredGameNoteController/Pool");
