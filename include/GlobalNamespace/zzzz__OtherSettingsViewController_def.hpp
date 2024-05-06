#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OtherSettingsViewController)
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace GlobalNamespace {
class NamedIntListSettingsController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class OtherSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OtherSettingsViewController);
// Type: ::OtherSettingsViewController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 153, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OtherSettingsViewController*
class CORDL_TYPE OtherSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _explicitToggleAvailable, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__explicitToggleAvailable, put = __cordl_internal_set__explicitToggleAvailable)) bool _explicitToggleAvailable;

  /// @brief Field _hideExplicitToggle, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__hideExplicitToggle, put = __cordl_internal_set__hideExplicitToggle))::UnityW<::UnityEngine::UI::Toggle> _hideExplicitToggle;

  /// @brief Field _hideExplicitWarning, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__hideExplicitWarning, put = __cordl_internal_set__hideExplicitWarning))::UnityW<::UnityEngine::GameObject> _hideExplicitWarning;

  /// @brief Field _mainSettingsHandler, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler, put = __cordl_internal_set__mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler;

  /// @brief Field _pausePressDuration, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__pausePressDuration, put = __cordl_internal_set__pausePressDuration))::UnityW<::GlobalNamespace::NamedIntListSettingsController> _pausePressDuration;

  /// @brief Field _playerDataModel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Method DidActivate, addr 0x2661594, size 0x218, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x26617f8, size 0x144, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleHideExplicitChanged, addr 0x26619a0, size 0x30, virtual false, abstract: false, final false
  inline void HandleHideExplicitChanged(bool newValue);

  /// @brief Method HandlePausePressDurationChanged, addr 0x266193c, size 0x64, virtual false, abstract: false, final false
  inline void HandlePausePressDurationChanged(int32_t newValue);

  static inline ::GlobalNamespace::OtherSettingsViewController* New_ctor();

  /// @brief Method UpdateExplicitContentHiddenWarningVisibility, addr 0x26617ac, size 0x4c, virtual false, abstract: false, final false
  inline void UpdateExplicitContentHiddenWarningVisibility();

  constexpr bool const& __cordl_internal_get__explicitToggleAvailable() const;

  constexpr bool& __cordl_internal_get__explicitToggleAvailable();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__hideExplicitToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__hideExplicitToggle();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__hideExplicitWarning() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__hideExplicitWarning();

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler() const;

  constexpr ::UnityW<::GlobalNamespace::NamedIntListSettingsController> const& __cordl_internal_get__pausePressDuration() const;

  constexpr ::UnityW<::GlobalNamespace::NamedIntListSettingsController>& __cordl_internal_get__pausePressDuration();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr void __cordl_internal_set__explicitToggleAvailable(bool value);

  constexpr void __cordl_internal_set__hideExplicitToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__hideExplicitWarning(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  constexpr void __cordl_internal_set__pausePressDuration(::UnityW<::GlobalNamespace::NamedIntListSettingsController> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  /// @brief Method .ctor, addr 0x26619d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OtherSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherSettingsViewController(OtherSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherSettingsViewController(OtherSettingsViewController const&) = delete;

  /// @brief Field _hideExplicitWarning, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____hideExplicitWarning;

  /// @brief Field _hideExplicitToggle, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____hideExplicitToggle;

  /// @brief Field _pausePressDuration, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListSettingsController> ____pausePressDuration;

  /// @brief Field _playerDataModel, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _mainSettingsHandler, offset: 0x90, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler;

  /// @brief Field _explicitToggleAvailable, offset: 0x98, size: 0x1, def value: None
  bool ____explicitToggleAvailable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OtherSettingsViewController, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OtherSettingsViewController, ____hideExplicitWarning) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OtherSettingsViewController, ____hideExplicitToggle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OtherSettingsViewController, ____pausePressDuration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OtherSettingsViewController, ____playerDataModel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OtherSettingsViewController, ____mainSettingsHandler) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OtherSettingsViewController, ____explicitToggleAvailable) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OtherSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OtherSettingsViewController*, "", "OtherSettingsViewController");
