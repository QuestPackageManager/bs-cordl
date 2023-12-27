#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(SelectModifiersViewController)
namespace GlobalNamespace {
class GameplayModifiersPanelController;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectModifiersViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectModifiersViewController);
// Type: ::SelectModifiersViewController
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5721))
// CS Name: ::SelectModifiersViewController*
class CORDL_TYPE SelectModifiersViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _gameplayModifiersPanelController, offset 0x70, size 0x8
  __declspec(property(get = __get__gameplayModifiersPanelController,
                      put = __set__gameplayModifiersPanelController))::GlobalNamespace::GameplayModifiersPanelController* _gameplayModifiersPanelController;

  __declspec(property(get = get_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  constexpr ::GlobalNamespace::GameplayModifiersPanelController*& __get__gameplayModifiersPanelController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersPanelController*> const& __get__gameplayModifiersPanelController() const;

  constexpr void __set__gameplayModifiersPanelController(::GlobalNamespace::GameplayModifiersPanelController* value);

  /// @brief Method get_gameplayModifiers addr 0x22d0164 size 0x1c virtual false final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method Setup addr 0x22d0180 size 0x1c virtual false final false
  inline void Setup(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method DidActivate addr 0x22d019c size 0xa0 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::SelectModifiersViewController* New_ctor();

  /// @brief Method .ctor addr 0x22d023c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SelectModifiersViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectModifiersViewController(SelectModifiersViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectModifiersViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectModifiersViewController(SelectModifiersViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectModifiersViewController();

public:
  /// @brief Field _gameplayModifiersPanelController, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersPanelController* ____gameplayModifiersPanelController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectModifiersViewController, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectModifiersViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectModifiersViewController*, "", "SelectModifiersViewController");
