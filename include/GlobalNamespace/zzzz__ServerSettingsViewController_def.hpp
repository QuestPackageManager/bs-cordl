#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerSettingsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(ServerSettingsViewController)
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace HMUI {
class InputFieldView;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ServerSettingsViewController);
// Type: ::ServerSettingsViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ServerSettingsViewController*
class CORDL_TYPE ServerSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _enabled, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__enabled, put = __cordl_internal_set__enabled))::UnityW<::UnityEngine::UI::Toggle> _enabled;

  /// @brief Field _forceGameLift, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__forceGameLift, put = __cordl_internal_set__forceGameLift))::UnityW<::UnityEngine::UI::Toggle> _forceGameLift;

  /// @brief Field _hostName, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__hostName, put = __cordl_internal_set__hostName))::UnityW<::HMUI::InputFieldView> _hostName;

  /// @brief Field _mainSettingsHandler, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler, put = __cordl_internal_set__mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler;

  /// @brief Method DidActivate, addr 0x268ef88, size 0x230, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x268f1b8, size 0x58, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleEnabledChanged, addr 0x268f210, size 0x6c, virtual false, abstract: false, final false
  inline void HandleEnabledChanged(bool newValue);

  /// @brief Method HandleForceGameliftChanged, addr 0x268f2ec, size 0x6c, virtual false, abstract: false, final false
  inline void HandleForceGameliftChanged(bool newValue);

  /// @brief Method HandleHostnameChanged, addr 0x268f27c, size 0x70, virtual false, abstract: false, final false
  inline void HandleHostnameChanged(::HMUI::InputFieldView* inputView);

  static inline ::GlobalNamespace::ServerSettingsViewController* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__enabled() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__enabled();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__forceGameLift() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__forceGameLift();

  constexpr ::UnityW<::HMUI::InputFieldView> const& __cordl_internal_get__hostName() const;

  constexpr ::UnityW<::HMUI::InputFieldView>& __cordl_internal_get__hostName();

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler() const;

  constexpr void __cordl_internal_set__enabled(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__forceGameLift(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__hostName(::UnityW<::HMUI::InputFieldView> value);

  constexpr void __cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  /// @brief Method .ctor, addr 0x268f358, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerSettingsViewController(ServerSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerSettingsViewController(ServerSettingsViewController const&) = delete;

  /// @brief Field _enabled, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____enabled;

  /// @brief Field _hostName, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::InputFieldView> ____hostName;

  /// @brief Field _forceGameLift, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____forceGameLift;

  /// @brief Field _mainSettingsHandler, offset: 0x88, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServerSettingsViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerSettingsViewController, ____enabled) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerSettingsViewController, ____hostName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerSettingsViewController, ____forceGameLift) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerSettingsViewController, ____mainSettingsHandler) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ServerSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServerSettingsViewController*, "", "ServerSettingsViewController");
