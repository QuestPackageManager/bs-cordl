#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(PlayerOptionsViewController)
namespace GlobalNamespace {
class PlayerSettingsPanelController;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System {
template <typename T> class Action_1;
}
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerOptionsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerOptionsViewController);
// Type: ::PlayerOptionsViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5640))
// CS Name: ::PlayerOptionsViewController*
class CORDL_TYPE PlayerOptionsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _playerSettingsPanelController, offset 0x70, size 0x8
  __declspec(property(get = __get__playerSettingsPanelController, put = __set__playerSettingsPanelController))::GlobalNamespace::PlayerSettingsPanelController* _playerSettingsPanelController;

  /// @brief Field _okButton, offset 0x78, size 0x8
  __declspec(property(get = __get__okButton, put = __set__okButton))::UnityEngine::UI::Button* _okButton;

  /// @brief Field _playerDataModel, offset 0x80, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field didFinishEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::HMUI::ViewController*>* didFinishEvent;

  constexpr ::GlobalNamespace::PlayerSettingsPanelController*& __get__playerSettingsPanelController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSettingsPanelController*> const& __get__playerSettingsPanelController() const;

  constexpr void __set__playerSettingsPanelController(::GlobalNamespace::PlayerSettingsPanelController* value);

  constexpr ::UnityEngine::UI::Button*& __get__okButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__okButton() const;

  constexpr void __set__okButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::System::Action_1<::HMUI::ViewController*>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::ViewController*>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::HMUI::ViewController*>* value);

  /// @brief Method add_didFinishEvent, addr 0x22b3574, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::HMUI::ViewController*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x22b3624, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::HMUI::ViewController*>* value);

  /// @brief Method DidActivate, addr 0x22b36d4, size 0xec, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22b3b08, size 0xb0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  static inline ::GlobalNamespace::PlayerOptionsViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22b3bb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__6_0, addr 0x22b3bc0, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__6_0();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerOptionsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerOptionsViewController(PlayerOptionsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerOptionsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerOptionsViewController(PlayerOptionsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerOptionsViewController();

public:
  /// @brief Field _playerSettingsPanelController, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSettingsPanelController* ____playerSettingsPanelController;

  /// @brief Field _okButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____okButton;

  /// @brief Field _playerDataModel, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field didFinishEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::HMUI::ViewController*>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerOptionsViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerOptionsViewController, ____playerSettingsPanelController) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerOptionsViewController, ____okButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerOptionsViewController, ____playerDataModel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerOptionsViewController, ___didFinishEvent) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerOptionsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerOptionsViewController*, "", "PlayerOptionsViewController");
