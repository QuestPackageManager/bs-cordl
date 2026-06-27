#pragma once
// IWYU pragma private; include "GlobalNamespace/MainMenuViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainMenuViewController)
namespace GlobalNamespace {
class DlcPromoPanelModel_PromoInfo;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
struct MainMenuViewController_MenuButton;
}
namespace GlobalNamespace {
class MusicPackPromoBanner;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
struct MainMenuViewController_MenuButton;
}
namespace GlobalNamespace {
class MainMenuViewController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MainMenuViewController_MenuButton);
MARK_REF_PTR_T(::GlobalNamespace::MainMenuViewController);
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MainMenuViewController/MenuButton
struct CORDL_TYPE MainMenuViewController_MenuButton {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MainMenuViewController_MenuButton_Unwrapped
enum struct __MainMenuViewController_MenuButton_Unwrapped : int32_t {
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
constexpr operator __MainMenuViewController_MenuButton_Unwrapped () const noexcept {
return static_cast<__MainMenuViewController_MenuButton_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MainMenuViewController_MenuButton() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MainMenuViewController_MenuButton(int32_t  value__) noexcept;

/// @brief Field BeatmapEditor value: I32(2)
static ::GlobalNamespace::MainMenuViewController_MenuButton const BeatmapEditor;

/// @brief Field FloorAdjust value: I32(4)
static ::GlobalNamespace::MainMenuViewController_MenuButton const FloorAdjust;

/// @brief Field HowToPlay value: I32(8)
static ::GlobalNamespace::MainMenuViewController_MenuButton const HowToPlay;

/// @brief Field Multiplayer value: I32(6)
static ::GlobalNamespace::MainMenuViewController_MenuButton const Multiplayer;

/// @brief Field Options value: I32(7)
static ::GlobalNamespace::MainMenuViewController_MenuButton const Options;

/// @brief Field Party value: I32(1)
static ::GlobalNamespace::MainMenuViewController_MenuButton const Party;

/// @brief Field Quit value: I32(5)
static ::GlobalNamespace::MainMenuViewController_MenuButton const Quit;

/// @brief Field SoloCampaign value: I32(3)
static ::GlobalNamespace::MainMenuViewController_MenuButton const SoloCampaign;

/// @brief Field SoloFreePlay value: I32(0)
static ::GlobalNamespace::MainMenuViewController_MenuButton const SoloFreePlay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6977};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainMenuViewController_MenuButton, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainMenuViewController_MenuButton, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainMenuViewController
class CORDL_TYPE MainMenuViewController : public ::HMUI::ViewController {
public:
// Declarations
using MenuButton = ::GlobalNamespace::MainMenuViewController_MenuButton;

/// @brief Field _analyticsModel, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__analyticsModel, put=__cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel*  _analyticsModel;

/// @brief Field _beatmapEditorButton, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatmapEditorButton, put=__cordl_internal_set__beatmapEditorButton)) ::UnityW<::UnityEngine::UI::Button>  _beatmapEditorButton;

/// @brief Field _campaignButton, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__campaignButton, put=__cordl_internal_set__campaignButton)) ::UnityW<::UnityEngine::UI::Button>  _campaignButton;

/// @brief Field _dlcPromoPanelModel, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__dlcPromoPanelModel, put=__cordl_internal_set__dlcPromoPanelModel)) ::GlobalNamespace::DlcPromoPanelModel*  _dlcPromoPanelModel;

/// @brief Field _howToPlayButton, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__howToPlayButton, put=__cordl_internal_set__howToPlayButton)) ::UnityW<::UnityEngine::UI::Button>  _howToPlayButton;

/// @brief Field _multiplayerButton, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__multiplayerButton, put=__cordl_internal_set__multiplayerButton)) ::UnityW<::UnityEngine::UI::Button>  _multiplayerButton;

/// @brief Field _musicPackPromoBanner, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__musicPackPromoBanner, put=__cordl_internal_set__musicPackPromoBanner)) ::UnityW<::GlobalNamespace::MusicPackPromoBanner>  _musicPackPromoBanner;

/// @brief Field _musicPackPromoButton, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__musicPackPromoButton, put=__cordl_internal_set__musicPackPromoButton)) ::UnityW<::UnityEngine::UI::Button>  _musicPackPromoButton;

/// @brief Field _optionsButton, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__optionsButton, put=__cordl_internal_set__optionsButton)) ::UnityW<::UnityEngine::UI::Button>  _optionsButton;

/// @brief Field _partyButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__partyButton, put=__cordl_internal_set__partyButton)) ::UnityW<::UnityEngine::UI::Button>  _partyButton;

/// @brief Field _quitButton, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__quitButton, put=__cordl_internal_set__quitButton)) ::UnityW<::UnityEngine::UI::Button>  _quitButton;

/// @brief Field _soloButton, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__soloButton, put=__cordl_internal_set__soloButton)) ::UnityW<::UnityEngine::UI::Button>  _soloButton;

/// @brief Field didFinishEvent, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_didFinishEvent, put=__cordl_internal_set_didFinishEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>,::GlobalNamespace::MainMenuViewController_MenuButton>*  didFinishEvent;

/// @brief Field promoButtonWasPressedEvent, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_promoButtonWasPressedEvent, put=__cordl_internal_set_promoButtonWasPressedEvent)) ::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  promoButtonWasPressedEvent;

/// @brief Method DidActivate, addr 0x582ccd8, size 0x7b8, virtual true, abstract: false, final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate, addr 0x582d564, size 0xe4, virtual true, abstract: false, final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method HandleMainMenuPromoChanged, addr 0x582d490, size 0xd4, virtual false, abstract: false, final false
inline void HandleMainMenuPromoChanged() ;

/// @brief Method HandleMenuButton, addr 0x582d6b8, size 0x1f8, virtual false, abstract: false, final false
inline void HandleMenuButton(::GlobalNamespace::MainMenuViewController_MenuButton  menuButton) ;

static inline ::GlobalNamespace::MainMenuViewController* New_ctor() ;

/// @brief Method PackPromoButtonWasPressed, addr 0x582d660, size 0x58, virtual false, abstract: false, final false
inline void PackPromoButtonWasPressed() ;

/// @brief Method Update, addr 0x582d648, size 0x18, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <DidActivate>b__19_0, addr 0x582d8b4, size 0x8, virtual false, abstract: false, final false
inline void _DidActivate_b__19_0() ;

/// @brief Method <DidActivate>b__19_1, addr 0x582d8bc, size 0x8, virtual false, abstract: false, final false
inline void _DidActivate_b__19_1() ;

/// @brief Method <DidActivate>b__19_2, addr 0x582d8c4, size 0x8, virtual false, abstract: false, final false
inline void _DidActivate_b__19_2() ;

/// @brief Method <DidActivate>b__19_3, addr 0x582d8cc, size 0x8, virtual false, abstract: false, final false
inline void _DidActivate_b__19_3() ;

/// @brief Method <DidActivate>b__19_4, addr 0x582d8d4, size 0x8, virtual false, abstract: false, final false
inline void _DidActivate_b__19_4() ;

/// @brief Method <DidActivate>b__19_5, addr 0x582d8dc, size 0x8, virtual false, abstract: false, final false
inline void _DidActivate_b__19_5() ;

/// @brief Method <DidActivate>b__19_6, addr 0x582d8e4, size 0x8, virtual false, abstract: false, final false
inline void _DidActivate_b__19_6() ;

/// @brief Method <DidActivate>b__19_7, addr 0x582d8ec, size 0x8, virtual false, abstract: false, final false
inline void _DidActivate_b__19_7() ;

constexpr ::GlobalNamespace::IAnalyticsModel* const& __cordl_internal_get__analyticsModel() const;

constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__beatmapEditorButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__beatmapEditorButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__campaignButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__campaignButton() ;

constexpr ::GlobalNamespace::DlcPromoPanelModel* const& __cordl_internal_get__dlcPromoPanelModel() const;

constexpr ::GlobalNamespace::DlcPromoPanelModel*& __cordl_internal_get__dlcPromoPanelModel() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__howToPlayButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__howToPlayButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__multiplayerButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__multiplayerButton() ;

constexpr ::UnityW<::GlobalNamespace::MusicPackPromoBanner> const& __cordl_internal_get__musicPackPromoBanner() const;

constexpr ::UnityW<::GlobalNamespace::MusicPackPromoBanner>& __cordl_internal_get__musicPackPromoBanner() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__musicPackPromoButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__musicPackPromoButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__optionsButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__optionsButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__partyButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__partyButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__quitButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__quitButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__soloButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__soloButton() ;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>,::GlobalNamespace::MainMenuViewController_MenuButton>* const& __cordl_internal_get_didFinishEvent() const;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>,::GlobalNamespace::MainMenuViewController_MenuButton>*& __cordl_internal_get_didFinishEvent() ;

constexpr ::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* const& __cordl_internal_get_promoButtonWasPressedEvent() const;

constexpr ::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*& __cordl_internal_get_promoButtonWasPressedEvent() ;

constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value) ;

constexpr void __cordl_internal_set__beatmapEditorButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__campaignButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel*  value) ;

constexpr void __cordl_internal_set__howToPlayButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__multiplayerButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__musicPackPromoBanner(::UnityW<::GlobalNamespace::MusicPackPromoBanner>  value) ;

constexpr void __cordl_internal_set__musicPackPromoButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__optionsButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__partyButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__quitButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__soloButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>,::GlobalNamespace::MainMenuViewController_MenuButton>*  value) ;

constexpr void __cordl_internal_set_promoButtonWasPressedEvent(::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  value) ;

/// @brief Method .ctor, addr 0x582d8b0, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_didFinishEvent, addr 0x582c9d8, size 0xc0, virtual false, abstract: false, final false
inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>,::GlobalNamespace::MainMenuViewController_MenuButton>*  value) ;

/// @brief Method add_promoButtonWasPressedEvent, addr 0x582cb58, size 0xc0, virtual false, abstract: false, final false
inline void add_promoButtonWasPressedEvent(::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  value) ;

/// @brief Method remove_didFinishEvent, addr 0x582ca98, size 0xc0, virtual false, abstract: false, final false
inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>,::GlobalNamespace::MainMenuViewController_MenuButton>*  value) ;

/// @brief Method remove_promoButtonWasPressedEvent, addr 0x582cc18, size 0xc0, virtual false, abstract: false, final false
inline void remove_promoButtonWasPressedEvent(::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainMenuViewController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainMenuViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainMenuViewController(MainMenuViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainMenuViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainMenuViewController(MainMenuViewController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6978};

/// @brief Field _soloButton, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____soloButton;

/// @brief Field _partyButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____partyButton;

/// @brief Field _campaignButton, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____campaignButton;

/// @brief Field _quitButton, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____quitButton;

/// @brief Field _howToPlayButton, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____howToPlayButton;

/// @brief Field _beatmapEditorButton, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____beatmapEditorButton;

/// @brief Field _multiplayerButton, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____multiplayerButton;

/// @brief Field _optionsButton, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____optionsButton;

/// @brief Field _musicPackPromoButton, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____musicPackPromoButton;

/// @brief Field _musicPackPromoBanner, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicPackPromoBanner>  ____musicPackPromoBanner;

/// @brief Field _dlcPromoPanelModel, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::DlcPromoPanelModel*  ____dlcPromoPanelModel;

/// @brief Field _analyticsModel, offset: 0xd0, size: 0x8, def value: None
 ::GlobalNamespace::IAnalyticsModel*  ____analyticsModel;

/// @brief Field didFinishEvent, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>,::GlobalNamespace::MainMenuViewController_MenuButton>*  ___didFinishEvent;

/// @brief Field promoButtonWasPressedEvent, offset: 0xe0, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*  ___promoButtonWasPressedEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____soloButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____partyButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____campaignButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____quitButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____howToPlayButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____beatmapEditorButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____multiplayerButton) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____optionsButton) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____musicPackPromoButton) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____musicPackPromoBanner) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____dlcPromoPanelModel) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____analyticsModel) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ___didFinishEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ___promoButtonWasPressedEvent) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainMenuViewController, 0xe8>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainMenuViewController_MenuButton, "", "MainMenuViewController/MenuButton");
NEED_NO_BOX(::GlobalNamespace::MainMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainMenuViewController*, "", "MainMenuViewController");
