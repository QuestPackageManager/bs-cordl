#pragma once
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
class MultiplayerStatusData;
}
namespace GlobalNamespace {
struct __MultiplayerModeSelectionViewController__MenuButton;
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
struct __MultiplayerModeSelectionViewController__MenuButton;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionViewController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerModeSelectionViewController);
// Type: ::MenuButton
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MultiplayerModeSelectionViewController::MenuButton
struct CORDL_TYPE __MultiplayerModeSelectionViewController__MenuButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerModeSelectionViewController__MenuButton_Unwrapped
  enum struct ____MultiplayerModeSelectionViewController__MenuButton_Unwrapped : int32_t {
    __E_QuickPlay = static_cast<int32_t>(0x0),
    __E_CreateServer = static_cast<int32_t>(0x1),
    __E_JoinWithCode = static_cast<int32_t>(0x2),
    __E_GameBrowser = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerModeSelectionViewController__MenuButton_Unwrapped() const noexcept {
    return static_cast<____MultiplayerModeSelectionViewController__MenuButton_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerModeSelectionViewController__MenuButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerModeSelectionViewController__MenuButton(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CreateServer value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton const CreateServer;

  /// @brief Field GameBrowser value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton const GameBrowser;

  /// @brief Field JoinWithCode value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton const JoinWithCode;

  /// @brief Field QuickPlay value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton const QuickPlay;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerModeSelectionViewController
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerModeSelectionViewController*
class CORDL_TYPE MultiplayerModeSelectionViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using MenuButton = ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton;

  /// @brief Field _createServerButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__createServerButton, put = __cordl_internal_set__createServerButton))::UnityW<::UnityEngine::UI::Button> _createServerButton;

  /// @brief Field _customServerEndPointText, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__customServerEndPointText, put = __cordl_internal_set__customServerEndPointText))::UnityW<::TMPro::TextMeshProUGUI> _customServerEndPointText;

  /// @brief Field _gameBrowserButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__gameBrowserButton, put = __cordl_internal_set__gameBrowserButton))::UnityW<::UnityEngine::UI::Button> _gameBrowserButton;

  /// @brief Field _joinWithCodeButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__joinWithCodeButton, put = __cordl_internal_set__joinWithCodeButton))::UnityW<::UnityEngine::UI::Button> _joinWithCodeButton;

  /// @brief Field _maintenanceMessageText, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__maintenanceMessageText, put = __cordl_internal_set__maintenanceMessageText))::UnityW<::TMPro::TextMeshProUGUI> _maintenanceMessageText;

  /// @brief Field _networkConfig, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig))::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _quickPlayButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__quickPlayButton, put = __cordl_internal_set__quickPlayButton))::UnityW<::UnityEngine::UI::Button> _quickPlayButton;

  /// @brief Field didFinishEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent))::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>,
                                                                                    ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x2653e4c, size 0x2dc, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleMenuButton, addr 0x26543b4, size 0x28, virtual false, abstract: false, final false
  inline void HandleMenuButton(::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton menuButton);

  static inline ::GlobalNamespace::MultiplayerModeSelectionViewController* New_ctor();

  /// @brief Method SetData, addr 0x2654128, size 0x28c, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::MultiplayerStatusData* multiplayerStatusData);

  /// @brief Method <DidActivate>b__11_0, addr 0x26543e4, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__11_0();

  /// @brief Method <DidActivate>b__11_1, addr 0x2654408, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__11_1();

  /// @brief Method <DidActivate>b__11_2, addr 0x265442c, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__11_2();

  /// @brief Method <DidActivate>b__11_3, addr 0x2654450, size 0x24, virtual false, abstract: false, final false
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

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> const& __cordl_internal_get__networkConfig() const;

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__quickPlayButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__quickPlayButton();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*&
  __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*> const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__createServerButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__customServerEndPointText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__gameBrowserButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__joinWithCodeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__maintenanceMessageText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr void __cordl_internal_set__quickPlayButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_didFinishEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>* value);

  /// @brief Method .ctor, addr 0x26543dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x2653cec, size 0xb0, virtual false, abstract: false, final false
  inline void
  add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>* value);

  /// @brief Method remove_didFinishEvent, addr 0x2653d9c, size 0xb0, virtual false, abstract: false, final false
  inline void
  remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>* value);

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

  /// @brief Field _quickPlayButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____quickPlayButton;

  /// @brief Field _gameBrowserButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____gameBrowserButton;

  /// @brief Field _joinWithCodeButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____joinWithCodeButton;

  /// @brief Field _createServerButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____createServerButton;

  /// @brief Field _maintenanceMessageText, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____maintenanceMessageText;

  /// @brief Field _customServerEndPointText, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____customServerEndPointText;

  /// @brief Field _networkConfig, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field didFinishEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerModeSelectionViewController, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____quickPlayButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____gameBrowserButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____joinWithCodeButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____createServerButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____maintenanceMessageText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____customServerEndPointText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ____networkConfig) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionViewController, ___didFinishEvent) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton, "", "MultiplayerModeSelectionViewController/MenuButton");
NEED_NO_BOX(::GlobalNamespace::MultiplayerModeSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSelectionViewController*, "", "MultiplayerModeSelectionViewController");
