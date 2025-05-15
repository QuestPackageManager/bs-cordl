#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerNoteController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerNoteController)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerNoteController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerNoteController);
// Dependencies NoteController
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerNoteController
class CORDL_TYPE MultiplayerConnectedPlayerNoteController : public ::GlobalNamespace::NoteController {
public:
  // Declarations
  /// @brief Field _visualsWrapperGo, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__visualsWrapperGo, put = __cordl_internal_set__visualsWrapperGo)) ::UnityW<::UnityEngine::GameObject> _visualsWrapperGo;

  /// @brief Method HiddenStateDidChange, addr 0x3bbb738, size 0x24, virtual true, abstract: false, final false
  inline void HiddenStateDidChange(bool hide);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerNoteController* New_ctor();

  /// @brief Method Pause, addr 0x3bbb75c, size 0x10, virtual true, abstract: false, final false
  inline void Pause(bool pause);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__visualsWrapperGo() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__visualsWrapperGo();

  constexpr void __cordl_internal_set__visualsWrapperGo(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x3bbb4ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerNoteController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerNoteController(MultiplayerConnectedPlayerNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerNoteController(MultiplayerConnectedPlayerNoteController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4501 };

  /// @brief Field _visualsWrapperGo, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____visualsWrapperGo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerNoteController, ____visualsWrapperGo) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerNoteController, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerNoteController*, "", "MultiplayerConnectedPlayerNoteController");
