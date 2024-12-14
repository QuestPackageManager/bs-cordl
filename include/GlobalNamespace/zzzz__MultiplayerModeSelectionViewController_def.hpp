#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerModeSelectionViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerModeSelectionViewController)
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
struct MultiplayerModeSelectionViewController_MenuButton;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerModeSelectionViewController_MenuButton;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionViewController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerModeSelectionViewController);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerModeSelectionViewController/MenuButton
struct CORDL_TYPE MultiplayerModeSelectionViewController_MenuButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerModeSelectionViewController_MenuButton_Unwrapped
  enum struct __MultiplayerModeSelectionViewController_MenuButton_Unwrapped : int32_t {
    __E_QuickPlay = static_cast<int32_t>(0x0),
    __E_CreateServer = static_cast<int32_t>(0x1),
    __E_JoinWithCode = static_cast<int32_t>(0x2),
    __E_GameBrowser = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerModeSelectionViewController_MenuButton_Unwrapped() const noexcept {
    return static_cast<__MultiplayerModeSelectionViewController_MenuButton_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerModeSelectionViewController_MenuButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerModeSelectionViewController_MenuButton(int32_t value__) noexcept;

  /// @brief Field CreateServer value: I32(1)
  static ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton const CreateServer;

  /// @brief Field GameBrowser value: I32(3)
  static ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton const GameBrowser;

  /// @brief Field JoinWithCode value: I32(2)
  static ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton const JoinWithCode;

  /// @brief Field QuickPlay value: I32(0)
  static ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton const QuickPlay;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5376 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerModeSelectionViewController
class CORDL_TYPE MultiplayerModeSelectionViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using MenuButton = ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton;

  /// @brief Field _createServerButton, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__createServerButton, put = __cordl_internal_set__createServerButton)) ::UnityW<::UnityEngine::UI::Button> _createServerButton;

  /// @brief Field _customServerEndPointText, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__customServerEndPointText, put = __cordl_internal_set__customServerEndPointText)) ::UnityW<::TMPro::TextMeshProUGUI> _customServerEndPointText;

  /// @brief Field _gameBrowserButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__gameBrowserButton, put = __cordl_internal_set__gameBrowserButton)) ::UnityW<::UnityEngine::UI::Button> _gameBrowserButton;

  /// @brief Field _joinWithCodeButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__joinWithCodeButton, put = __cordl_internal_set__joinWithCodeButton)) ::UnityW<::UnityEngine::UI::Button> _joinWithCodeButton;

  /// @brief Field _maintenanceMessageText, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__maintenanceMessageText, put = __cordl_internal_set__maintenanceMessageText)) ::UnityW<::TMPro::TextMeshProUGUI> _maintenanceMessageText;

  /// @brief Field _networkConfig, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _quickPlayButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__quickPlayButton, put = __cordl_internal_set__quickPlayButton)) ::UnityW<::UnityEngine::UI::Button> _quickPlayButton;

  /// @brief Field didFinishEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>,
                                                                                     ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x3b6be9c, size 0x2cc, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleMenuButton, addr 0x3b6c404, size 0x28, virtual false, abstract: false, final false
  inline void HandleMenuButton(::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton menuButton);

  static inline ::GlobalNamespace::MultiplayerModeSelectionViewController* New_ctor();

  /// @brief Method SetData, addr 0x3b6c168, size 0x29c, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::MultiplayerStatusData* multiplayerStatusData);

  /// @brief Method <DidActivate>b__11_0, addr 0x3b6c434, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__11_0();

  /// @brief Method <DidActivate>b__11_1, addr 0x3b6c458, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__11_1();

  /// @brief Method <DidActivate>b__11_2, addr 0x3b6c47c, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__11_2();

  /// @brief Method <DidActivate>b__11_3, addr 0x3b6c4a0, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__11_3();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__createServerButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__createServerButton();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__customServerEndPointText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__customServerEndPointText();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__gameBrowserButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__gameBrowserButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__joinWithCodeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__joinWithCodeButton();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__maintenanceMessageText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__maintenanceMessageText();

  constexpr ::GlobalNamespace::INetworkConfig* const& __cordl_internal_get__networkConfig() const;

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__quickPlayButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__quickPlayButton();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton>* const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton>*&
  __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__createServerButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__customServerEndPointText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__gameBrowserButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__joinWithCodeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__maintenanceMessageText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr void __cordl_internal_set__quickPlayButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_didFinishEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton>* value);

  /// @brief Method .ctor, addr 0x3b6c42c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3b6bd3c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton>* value);

  /// @brief Method remove_didFinishEvent, addr 0x3b6bdec, size 0xb0, virtual false, abstract: false, final false
  inline void
  remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerModeSelectionViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerModeSelectionViewController(MultiplayerModeSelectionViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerModeSelectionViewController(MultiplayerModeSelectionViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5377 };

  /// @brief Field _quickPlayButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____quickPlayButton;

  /// @brief Field _gameBrowserButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____gameBrowserButton;

  /// @brief Field _joinWithCodeButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____joinWithCodeButton;

  /// @brief Field _createServerButton, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____createServerButton;

  /// @brief Field _maintenanceMessageText, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____maintenanceMessageText;

  /// @brief Field _customServerEndPointText, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____customServerEndPointText;

  /// @brief Field _networkConfig, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field didFinishEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____quickPlayButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____gameBrowserButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____joinWithCodeButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____createServerButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____maintenanceMessageText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____customServerEndPointText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____networkConfig) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ___didFinishEvent) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerModeSelectionViewController, 0xb8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton, "", "MultiplayerModeSelectionViewController/MenuButton");
NEED_NO_BOX(::GlobalNamespace::MultiplayerModeSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSelectionViewController*, "", "MultiplayerModeSelectionViewController");
