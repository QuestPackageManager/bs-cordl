#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredBombNoteController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MirroredNoteController_1_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(MirroredBombNoteController)
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
class MirroredBombNoteController_Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class MirroredBombNoteController;
}
namespace GlobalNamespace {
class MirroredBombNoteController_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirroredBombNoteController);
MARK_REF_PTR_T(::GlobalNamespace::MirroredBombNoteController_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirroredBombNoteController/Pool
class CORDL_TYPE MirroredBombNoteController_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::MirroredBombNoteController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::MirroredBombNoteController_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x5726b34, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredBombNoteController_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirroredBombNoteController_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredBombNoteController_Pool(MirroredBombNoteController_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredBombNoteController_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredBombNoteController_Pool(MirroredBombNoteController_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5670 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredBombNoteController_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MirroredNoteController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirroredBombNoteController
class CORDL_TYPE MirroredBombNoteController : public ::GlobalNamespace::MirroredNoteController_1<::GlobalNamespace::INoteMirrorable*> {
public:
  // Declarations
  using Pool = ::GlobalNamespace::MirroredBombNoteController_Pool;

  static inline ::GlobalNamespace::MirroredBombNoteController* New_ctor();

  /// @brief Method .ctor, addr 0x5726ae8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredBombNoteController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirroredBombNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredBombNoteController(MirroredBombNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredBombNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredBombNoteController(MirroredBombNoteController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5671 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredBombNoteController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredBombNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredBombNoteController*, "", "MirroredBombNoteController");
NEED_NO_BOX(::GlobalNamespace::MirroredBombNoteController_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredBombNoteController_Pool*, "", "MirroredBombNoteController/Pool");
