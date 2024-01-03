#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainMenuViewController)
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class MusicPackPromoBanner;
}
namespace GlobalNamespace {
struct __MainMenuViewController__MenuButton;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MainMenuViewController__MenuButton;
}
namespace GlobalNamespace {
class MainMenuViewController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MainMenuViewController__MenuButton);
MARK_REF_PTR_T(::GlobalNamespace::MainMenuViewController);
// Type: ::MenuButton
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5690))
// CS Name: ::MainMenuViewController::MenuButton
struct CORDL_TYPE __MainMenuViewController__MenuButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MainMenuViewController__MenuButton_Unwrapped
  enum struct ____MainMenuViewController__MenuButton_Unwrapped : int32_t {
    __E_SoloFreePlay = static_cast<int32_t>(0x0),
    __E_Party = static_cast<int32_t>(0x1),
    __E_BeatmapEditor = static_cast<int32_t>(0x2),
    __E_SoloCampaign = static_cast<int32_t>(0x3),
    __E_FloorAdjust = static_cast<int32_t>(0x4),
    __E_Quit = static_cast<int32_t>(0x5),
    __E_Multiplayer = static_cast<int32_t>(0x6),
    __E_Options = static_cast<int32_t>(0x7),
    __E_HowToPlay = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MainMenuViewController__MenuButton_Unwrapped() const noexcept {
    return static_cast<____MainMenuViewController__MenuButton_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MainMenuViewController__MenuButton(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainMenuViewController__MenuButton();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SoloFreePlay value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const SoloFreePlay;

  /// @brief Field Party value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const Party;

  /// @brief Field BeatmapEditor value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const BeatmapEditor;

  /// @brief Field SoloCampaign value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const SoloCampaign;

  /// @brief Field FloorAdjust value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const FloorAdjust;

  /// @brief Field Quit value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const Quit;

  /// @brief Field Multiplayer value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const Multiplayer;

  /// @brief Field Options value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const Options;

  /// @brief Field HowToPlay value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const HowToPlay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainMenuViewController__MenuButton, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainMenuViewController__MenuButton, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainMenuViewController
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5691))
// CS Name: ::MainMenuViewController*
class CORDL_TYPE MainMenuViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using MenuButton = ::GlobalNamespace::__MainMenuViewController__MenuButton;

  /// @brief Field _soloButton, offset 0x70, size 0x8
  __declspec(property(get = __get__soloButton, put = __set__soloButton))::UnityEngine::UI::Button* _soloButton;

  /// @brief Field _partyButton, offset 0x78, size 0x8
  __declspec(property(get = __get__partyButton, put = __set__partyButton))::UnityEngine::UI::Button* _partyButton;

  /// @brief Field _campaignButton, offset 0x80, size 0x8
  __declspec(property(get = __get__campaignButton, put = __set__campaignButton))::UnityEngine::UI::Button* _campaignButton;

  /// @brief Field _quitButton, offset 0x88, size 0x8
  __declspec(property(get = __get__quitButton, put = __set__quitButton))::UnityEngine::UI::Button* _quitButton;

  /// @brief Field _howToPlayButton, offset 0x90, size 0x8
  __declspec(property(get = __get__howToPlayButton, put = __set__howToPlayButton))::UnityEngine::UI::Button* _howToPlayButton;

  /// @brief Field _beatmapEditorButton, offset 0x98, size 0x8
  __declspec(property(get = __get__beatmapEditorButton, put = __set__beatmapEditorButton))::UnityEngine::UI::Button* _beatmapEditorButton;

  /// @brief Field _multiplayerButton, offset 0xa0, size 0x8
  __declspec(property(get = __get__multiplayerButton, put = __set__multiplayerButton))::UnityEngine::UI::Button* _multiplayerButton;

  /// @brief Field _optionsButton, offset 0xa8, size 0x8
  __declspec(property(get = __get__optionsButton, put = __set__optionsButton))::UnityEngine::UI::Button* _optionsButton;

  /// @brief Field _musicPackPromoButton, offset 0xb0, size 0x8
  __declspec(property(get = __get__musicPackPromoButton, put = __set__musicPackPromoButton))::UnityEngine::UI::Button* _musicPackPromoButton;

  /// @brief Field _musicPackPromoBanner, offset 0xb8, size 0x8
  __declspec(property(get = __get__musicPackPromoBanner, put = __set__musicPackPromoBanner))::GlobalNamespace::MusicPackPromoBanner* _musicPackPromoBanner;

  /// @brief Field _dlcPromoPanelModel, offset 0xc0, size 0x8
  __declspec(property(get = __get__dlcPromoPanelModel, put = __set__dlcPromoPanelModel))::GlobalNamespace::DlcPromoPanelModel* _dlcPromoPanelModel;

  /// @brief Field _appStaticSettings, offset 0xc8, size 0x8
  __declspec(property(get = __get__appStaticSettings, put = __set__appStaticSettings))::GlobalNamespace::AppStaticSettingsSO* _appStaticSettings;

  /// @brief Field _analyticsModel, offset 0xd0, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field didFinishEvent, offset 0xd8, size 0x8
  __declspec(property(get = __get_didFinishEvent,
                      put = __set_didFinishEvent))::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>* didFinishEvent;

  /// @brief Field musicPackPromoButtonWasPressedEvent, offset 0xe0, size 0x8
  __declspec(property(
      get = __get_musicPackPromoButtonWasPressedEvent,
      put = __set_musicPackPromoButtonWasPressedEvent))::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>* musicPackPromoButtonWasPressedEvent;

  constexpr ::UnityEngine::UI::Button*& __get__soloButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__soloButton() const;

  constexpr void __set__soloButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__partyButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__partyButton() const;

  constexpr void __set__partyButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__campaignButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__campaignButton() const;

  constexpr void __set__campaignButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__quitButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__quitButton() const;

  constexpr void __set__quitButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__howToPlayButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__howToPlayButton() const;

  constexpr void __set__howToPlayButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__beatmapEditorButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__beatmapEditorButton() const;

  constexpr void __set__beatmapEditorButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__multiplayerButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__multiplayerButton() const;

  constexpr void __set__multiplayerButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__optionsButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__optionsButton() const;

  constexpr void __set__optionsButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__musicPackPromoButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__musicPackPromoButton() const;

  constexpr void __set__musicPackPromoButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::MusicPackPromoBanner*& __get__musicPackPromoBanner();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MusicPackPromoBanner*> const& __get__musicPackPromoBanner() const;

  constexpr void __set__musicPackPromoBanner(::GlobalNamespace::MusicPackPromoBanner* value);

  constexpr ::GlobalNamespace::DlcPromoPanelModel*& __get__dlcPromoPanelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> const& __get__dlcPromoPanelModel() const;

  constexpr void __set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value);

  constexpr ::GlobalNamespace::AppStaticSettingsSO*& __get__appStaticSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> const& __get__appStaticSettings() const;

  constexpr void __set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>*> const&
  __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>* value);

  constexpr ::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*& __get_musicPackPromoButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*> const&
  __get_musicPackPromoButtonWasPressedEvent() const;

  constexpr void __set_musicPackPromoButtonWasPressedEvent(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  /// @brief Method add_didFinishEvent, addr 0x22c8abc, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>* value);

  /// @brief Method remove_didFinishEvent, addr 0x22c8b6c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>* value);

  /// @brief Method add_musicPackPromoButtonWasPressedEvent, addr 0x22c8c1c, size 0xb0, virtual false, abstract: false, final false
  inline void add_musicPackPromoButtonWasPressedEvent(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  /// @brief Method remove_musicPackPromoButtonWasPressedEvent, addr 0x22c8ccc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_musicPackPromoButtonWasPressedEvent(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  /// @brief Method DidActivate, addr 0x22c8d7c, size 0x528, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method PackPromoButtonWasPressed, addr 0x22c92a4, size 0x5c, virtual false, abstract: false, final false
  inline void PackPromoButtonWasPressed();

  /// @brief Method HandleMenuButton, addr 0x22c9300, size 0x1b0, virtual false, abstract: false, final false
  inline void HandleMenuButton(::GlobalNamespace::__MainMenuViewController__MenuButton menuButton);

  static inline ::GlobalNamespace::MainMenuViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22c94b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__20_0, addr 0x22c94b8, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_0();

  /// @brief Method <DidActivate>b__20_1, addr 0x22c94c0, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_1();

  /// @brief Method <DidActivate>b__20_2, addr 0x22c94c8, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_2();

  /// @brief Method <DidActivate>b__20_3, addr 0x22c94d0, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_3();

  /// @brief Method <DidActivate>b__20_4, addr 0x22c94d8, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_4();

  /// @brief Method <DidActivate>b__20_5, addr 0x22c94e0, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_5();

  /// @brief Method <DidActivate>b__20_6, addr 0x22c94e8, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_6();

  /// @brief Method <DidActivate>b__20_7, addr 0x22c94f0, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_7();

  // Ctor Parameters [CppParam { name: "", ty: "MainMenuViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainMenuViewController(MainMenuViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainMenuViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainMenuViewController(MainMenuViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainMenuViewController();

public:
  /// @brief Field _soloButton, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____soloButton;

  /// @brief Field _partyButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____partyButton;

  /// @brief Field _campaignButton, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____campaignButton;

  /// @brief Field _quitButton, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____quitButton;

  /// @brief Field _howToPlayButton, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____howToPlayButton;

  /// @brief Field _beatmapEditorButton, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____beatmapEditorButton;

  /// @brief Field _multiplayerButton, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____multiplayerButton;

  /// @brief Field _optionsButton, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____optionsButton;

  /// @brief Field _musicPackPromoButton, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____musicPackPromoButton;

  /// @brief Field _musicPackPromoBanner, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::MusicPackPromoBanner* ____musicPackPromoBanner;

  /// @brief Field _dlcPromoPanelModel, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* ____dlcPromoPanelModel;

  /// @brief Field _appStaticSettings, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::AppStaticSettingsSO* ____appStaticSettings;

  /// @brief Field _analyticsModel, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field didFinishEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>* ___didFinishEvent;

  /// @brief Field musicPackPromoButtonWasPressedEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>* ___musicPackPromoButtonWasPressedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainMenuViewController, 0xe8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____soloButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____partyButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____campaignButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____quitButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____howToPlayButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____beatmapEditorButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____multiplayerButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____optionsButton) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____musicPackPromoButton) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____musicPackPromoBanner) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____dlcPromoPanelModel) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____appStaticSettings) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____analyticsModel) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ___didFinishEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ___musicPackPromoButtonWasPressedEvent) == 0xe0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainMenuViewController__MenuButton, "", "MainMenuViewController/MenuButton");
NEED_NO_BOX(::GlobalNamespace::MainMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainMenuViewController*, "", "MainMenuViewController");
