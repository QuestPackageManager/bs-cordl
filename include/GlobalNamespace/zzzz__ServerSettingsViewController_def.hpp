#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerSettingsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(ServerSettingsViewController)
namespace GlobalNamespace {
class SettingsManager;
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
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: ServerSettingsViewController
class CORDL_TYPE ServerSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _enabled, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__enabled, put = __cordl_internal_set__enabled)) ::UnityW<::UnityEngine::UI::Toggle> _enabled;

  /// @brief Field _forceGameLift, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__forceGameLift, put = __cordl_internal_set__forceGameLift)) ::UnityW<::UnityEngine::UI::Toggle> _forceGameLift;

  /// @brief Field _hostName, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__hostName, put = __cordl_internal_set__hostName)) ::UnityW<::HMUI::InputFieldView> _hostName;

  /// @brief Field _settingsManager, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Method DidActivate, addr 0x3af9b24, size 0x1dc, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3af9d00, size 0x58, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleEnabledChanged, addr 0x3af9d58, size 0x20, virtual false, abstract: false, final false
  inline void HandleEnabledChanged(bool newValue);

  /// @brief Method HandleForceGameliftChanged, addr 0x3af9da0, size 0x20, virtual false, abstract: false, final false
  inline void HandleForceGameliftChanged(bool newValue);

  /// @brief Method HandleHostnameChanged, addr 0x3af9d78, size 0x28, virtual false, abstract: false, final false
  inline void HandleHostnameChanged(::HMUI::InputFieldView* inputView);

  static inline ::GlobalNamespace::ServerSettingsViewController* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__enabled() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__enabled();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__forceGameLift() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__forceGameLift();

  constexpr ::UnityW<::HMUI::InputFieldView> const& __cordl_internal_get__hostName() const;

  constexpr ::UnityW<::HMUI::InputFieldView>& __cordl_internal_get__hostName();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__enabled(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__forceGameLift(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__hostName(::UnityW<::HMUI::InputFieldView> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x3af9dc0, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4952 };

  /// @brief Field _enabled, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____enabled;

  /// @brief Field _hostName, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::InputFieldView> ____hostName;

  /// @brief Field _forceGameLift, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____forceGameLift;

  /// @brief Field _settingsManager, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerSettingsViewController, ____enabled) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerSettingsViewController, ____hostName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerSettingsViewController, ____forceGameLift) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerSettingsViewController, ____settingsManager) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServerSettingsViewController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ServerSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServerSettingsViewController*, "", "ServerSettingsViewController");
