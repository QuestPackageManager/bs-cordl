#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateServerViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(CreateServerViewController)
namespace GlobalNamespace {
class CreateServerFormController;
}
namespace GlobalNamespace {
struct CreateServerFormData;
}
namespace GlobalNamespace {
class MultiplayerModeSettings;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class CreateServerViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CreateServerViewController);
// Type: ::CreateServerViewController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CreateServerViewController*
class CORDL_TYPE CreateServerViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _cancelCreateServerButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelCreateServerButton, put = __cordl_internal_set__cancelCreateServerButton))::UnityW<::UnityEngine::UI::Button> _cancelCreateServerButton;

  /// @brief Field _createServerButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__createServerButton, put = __cordl_internal_set__createServerButton))::UnityW<::UnityEngine::UI::Button> _createServerButton;

  /// @brief Field _createServerFormController, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__createServerFormController,
                      put = __cordl_internal_set__createServerFormController))::UnityW<::GlobalNamespace::CreateServerFormController> _createServerFormController;

  /// @brief Field _multiplayerModeSettings, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerModeSettings, put = __cordl_internal_set__multiplayerModeSettings))::GlobalNamespace::MultiplayerModeSettings* _multiplayerModeSettings;

  /// @brief Field didFinishEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent))::System::Action_2<bool, ::GlobalNamespace::CreateServerFormData>* didFinishEvent;

  __declspec(property(get = get_multiplayerModeSettings))::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings;

  /// @brief Method ApplyAndGetData, addr 0x2651a60, size 0xd0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::CreateServerFormData ApplyAndGetData();

  /// @brief Method DidActivate, addr 0x2651958, size 0x108, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::CreateServerViewController* New_ctor();

  /// @brief Method Setup, addr 0x2651914, size 0x44, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings);

  /// @brief Method <DidActivate>b__10_0, addr 0x2651b38, size 0x58, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_0();

  /// @brief Method <DidActivate>b__10_1, addr 0x2651b90, size 0x58, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_1();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelCreateServerButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelCreateServerButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__createServerButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__createServerButton();

  constexpr ::UnityW<::GlobalNamespace::CreateServerFormController> const& __cordl_internal_get__createServerFormController() const;

  constexpr ::UnityW<::GlobalNamespace::CreateServerFormController>& __cordl_internal_get__createServerFormController();

  constexpr ::GlobalNamespace::MultiplayerModeSettings*& __cordl_internal_get__multiplayerModeSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSettings*> const& __cordl_internal_get__multiplayerModeSettings() const;

  constexpr ::System::Action_2<bool, ::GlobalNamespace::CreateServerFormData>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<bool, ::GlobalNamespace::CreateServerFormData>*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__cancelCreateServerButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__createServerButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__createServerFormController(::UnityW<::GlobalNamespace::CreateServerFormController> value);

  constexpr void __cordl_internal_set__multiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<bool, ::GlobalNamespace::CreateServerFormData>* value);

  /// @brief Method .ctor, addr 0x2651b30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x26517ac, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<bool, ::GlobalNamespace::CreateServerFormData>* value);

  /// @brief Method get_multiplayerModeSettings, addr 0x265190c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings();

  /// @brief Method remove_didFinishEvent, addr 0x265185c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<bool, ::GlobalNamespace::CreateServerFormData>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateServerViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateServerViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateServerViewController(CreateServerViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateServerViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateServerViewController(CreateServerViewController const&) = delete;

  /// @brief Field _createServerButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____createServerButton;

  /// @brief Field _cancelCreateServerButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelCreateServerButton;

  /// @brief Field _createServerFormController, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CreateServerFormController> ____createServerFormController;

  /// @brief Field didFinishEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_2<bool, ::GlobalNamespace::CreateServerFormData>* ___didFinishEvent;

  /// @brief Field _multiplayerModeSettings, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerModeSettings* ____multiplayerModeSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreateServerViewController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CreateServerViewController, ____createServerButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreateServerViewController, ____cancelCreateServerButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreateServerViewController, ____createServerFormController) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreateServerViewController, ___didFinishEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreateServerViewController, ____multiplayerModeSettings) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CreateServerViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreateServerViewController*, "", "CreateServerViewController");
