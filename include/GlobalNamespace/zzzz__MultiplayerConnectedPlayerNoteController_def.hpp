#pragma once
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
// Type: ::MultiplayerConnectedPlayerNoteController
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4761))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5138))
// CS Name: ::MultiplayerConnectedPlayerNoteController*
class CORDL_TYPE MultiplayerConnectedPlayerNoteController : public ::GlobalNamespace::NoteController {
public:
  // Declarations
  /// @brief Field _visualsWrapperGo, offset 0x80, size 0x8
  __declspec(property(get = __get__visualsWrapperGo, put = __set__visualsWrapperGo))::UnityEngine::GameObject* _visualsWrapperGo;

  constexpr ::UnityEngine::GameObject*& __get__visualsWrapperGo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__visualsWrapperGo() const;

  constexpr void __set__visualsWrapperGo(::UnityEngine::GameObject* value);

  /// @brief Method HiddenStateDidChange addr 0x23d7a28 size 0x24 virtual true final false
  inline void HiddenStateDidChange(bool hide);

  /// @brief Method Pause addr 0x23d7a4c size 0x10 virtual true final false
  inline void Pause(bool pause);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerNoteController* New_ctor();

  /// @brief Method .ctor addr 0x23d779c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerNoteController(MultiplayerConnectedPlayerNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerNoteController(MultiplayerConnectedPlayerNoteController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerNoteController();

public:
  /// @brief Field _visualsWrapperGo, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____visualsWrapperGo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerNoteController, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerNoteController*, "", "MultiplayerConnectedPlayerNoteController");
