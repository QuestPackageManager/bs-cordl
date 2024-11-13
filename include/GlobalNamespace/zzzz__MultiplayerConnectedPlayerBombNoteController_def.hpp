#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerBombNoteController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerNoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerBombNoteController)
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerBombNoteController__Pool;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerBombNoteController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConnectedPlayerBombNoteController::Pool*
class CORDL_TYPE __MultiplayerConnectedPlayerBombNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3b55a7c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerConnectedPlayerBombNoteController__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerBombNoteController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerConnectedPlayerBombNoteController__Pool(__MultiplayerConnectedPlayerBombNoteController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerBombNoteController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerConnectedPlayerBombNoteController__Pool(__MultiplayerConnectedPlayerBombNoteController__Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4479 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerConnectedPlayerBombNoteController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConnectedPlayerBombNoteController*
class CORDL_TYPE MultiplayerConnectedPlayerBombNoteController : public ::GlobalNamespace::MultiplayerConnectedPlayerNoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool;

  /// @brief Method Init, addr 0x3b51c18, size 0x58, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t moveDuration,
                   float_t jumpDuration, float_t jumpGravity);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController* New_ctor();

  /// @brief Method .ctor, addr 0x3b55a6c, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4480 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*, "", "MultiplayerConnectedPlayerBombNoteController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool*, "", "MultiplayerConnectedPlayerBombNoteController/Pool");
