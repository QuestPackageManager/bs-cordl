#pragma once
// IWYU pragma private; include "GlobalNamespace/FloorAdjustViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloorAdjustViewController)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class FloorAdjustViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloorAdjustViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloorAdjustViewController
class CORDL_TYPE FloorAdjustViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _playerHeight, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__playerHeight, put = __cordl_internal_set__playerHeight)) float_t _playerHeight;

  /// @brief Field _playerHeightText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeightText, put = __cordl_internal_set__playerHeightText)) ::UnityW<::TMPro::TextMeshProUGUI> _playerHeightText;

  /// @brief Field _settingsApplicator, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  /// @brief Field _settingsManager, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _vrPlatformHelper, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _yDecButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__yDecButton, put = __cordl_internal_set__yDecButton)) ::UnityW<::UnityEngine::UI::Button> _yDecButton;

  /// @brief Field _yIncButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__yIncButton, put = __cordl_internal_set__yIncButton)) ::UnityW<::UnityEngine::UI::Button> _yIncButton;

  /// @brief Method DidActivate, addr 0x3c17fa4, size 0x100, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::FloorAdjustViewController* New_ctor();

  /// @brief Method Update, addr 0x3c180a4, size 0x200, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <DidActivate>b__10_0, addr 0x3c182ac, size 0xbc, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_0();

  /// @brief Method <DidActivate>b__10_1, addr 0x3c18368, size 0xbc, virtual false, abstract: false, final false
  inline void _DidActivate_b__10_1();

  constexpr float_t const& __cordl_internal_get__playerHeight() const;

  constexpr float_t& __cordl_internal_get__playerHeight();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__playerHeightText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__playerHeightText();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__yDecButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__yDecButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__yIncButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__yIncButton();

  constexpr void __cordl_internal_set__playerHeight(float_t value);

  constexpr void __cordl_internal_set__playerHeightText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set__yDecButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__yIncButton(::UnityW<::UnityEngine::UI::Button> value);

  /// @brief Method .ctor, addr 0x3c182a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloorAdjustViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloorAdjustViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloorAdjustViewController(FloorAdjustViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloorAdjustViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloorAdjustViewController(FloorAdjustViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4895 };

  /// @brief Field kMaxPlayerHeight offset 0xffffffff size 0x4
  static constexpr float_t kMaxPlayerHeight{ static_cast<float_t>(3.0f) };

  /// @brief Field kMinPlayerHeight offset 0xffffffff size 0x4
  static constexpr float_t kMinPlayerHeight{ static_cast<float_t>(0.5f) };

  /// @brief Field kMoveStep offset 0xffffffff size 0x4
  static constexpr float_t kMoveStep{ static_cast<float_t>(0.05f) };

  /// @brief Field _yIncButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____yIncButton;

  /// @brief Field _yDecButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____yDecButton;

  /// @brief Field _playerHeightText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____playerHeightText;

  /// @brief Field _vrPlatformHelper, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _settingsManager, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _settingsApplicator, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  /// @brief Field _playerHeight, offset: 0xa8, size: 0x4, def value: None
  float_t ____playerHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____yIncButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____yDecButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____playerHeightText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____vrPlatformHelper) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____settingsManager) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____settingsApplicator) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloorAdjustViewController, ____playerHeight) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloorAdjustViewController, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloorAdjustViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloorAdjustViewController*, "", "FloorAdjustViewController");
