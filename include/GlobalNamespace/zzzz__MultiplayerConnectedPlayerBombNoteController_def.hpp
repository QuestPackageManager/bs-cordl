#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerBombNoteController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerNoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerBombNoteController)
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController_Pool;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteSpawnData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerBombNoteController/Pool
class CORDL_TYPE MultiplayerConnectedPlayerBombNoteController_Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3bb72a4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerBombNoteController_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBombNoteController_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerBombNoteController_Pool(MultiplayerConnectedPlayerBombNoteController_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBombNoteController_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerBombNoteController_Pool(MultiplayerConnectedPlayerBombNoteController_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4492 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerConnectedPlayerNoteController
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerBombNoteController
class CORDL_TYPE MultiplayerConnectedPlayerBombNoteController : public ::GlobalNamespace::MultiplayerConnectedPlayerNoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool;

  /// @brief Method Init, addr 0x3bb353c, size 0x18, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController* New_ctor();

  /// @brief Method .ctor, addr 0x3bb7294, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerBombNoteController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBombNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerBombNoteController(MultiplayerConnectedPlayerBombNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBombNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerBombNoteController(MultiplayerConnectedPlayerBombNoteController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4493 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*, "", "MultiplayerConnectedPlayerBombNoteController");
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool*, "", "MultiplayerConnectedPlayerBombNoteController/Pool");
