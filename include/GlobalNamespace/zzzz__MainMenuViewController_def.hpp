#pragma once
// IWYU pragma private; include "GlobalNamespace/MainMenuViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainMenuViewController)
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class MusicPackPromoBanner;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel__PromoInfo;
}
namespace GlobalNamespace {
struct __MainMenuViewController__MenuButton;
}
namespace GlobalNamespace {
struct __MainMenuViewController___LoadMusicPackPromoDataAsync_d__21;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
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
namespace GlobalNamespace {
struct __MainMenuViewController___LoadMusicPackPromoDataAsync_d__21;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MainMenuViewController__MenuButton);
MARK_REF_PTR_T(::GlobalNamespace::MainMenuViewController);
MARK_VAL_T(::GlobalNamespace::__MainMenuViewController___LoadMusicPackPromoDataAsync_d__21);
// Type: ::MenuButton
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainMenuViewController__MenuButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MainMenuViewController__MenuButton(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BeatmapEditor value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const BeatmapEditor;

  /// @brief Field FloorAdjust value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const FloorAdjust;

  /// @brief Field HowToPlay value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const HowToPlay;

  /// @brief Field Multiplayer value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const Multiplayer;

  /// @brief Field Options value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const Options;

  /// @brief Field Party value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const Party;

  /// @brief Field Quit value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const Quit;

  /// @brief Field SoloCampaign value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const SoloCampaign;

  /// @brief Field SoloFreePlay value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MainMenuViewController__MenuButton const SoloFreePlay;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainMenuViewController__MenuButton, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainMenuViewController__MenuButton, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadMusicPackPromoDataAsync>d__21
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MainMenuViewController::<LoadMusicPackPromoDataAsync>d__21
struct CORDL_TYPE __MainMenuViewController___LoadMusicPackPromoDataAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2666110, size 0x3b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26664c0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainMenuViewController___LoadMusicPackPromoDataAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainMenuViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,bool>>", modifiers: "", def_value: None }]
  constexpr __MainMenuViewController___LoadMusicPackPromoDataAsync_d__21(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::MainMenuViewController> __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainMenuViewController> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainMenuViewController___LoadMusicPackPromoDataAsync_d__21, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainMenuViewController___LoadMusicPackPromoDataAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainMenuViewController___LoadMusicPackPromoDataAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainMenuViewController___LoadMusicPackPromoDataAsync_d__21, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainMenuViewController___LoadMusicPackPromoDataAsync_d__21, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainMenuViewController
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 225, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainMenuViewController*
class CORDL_TYPE MainMenuViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using MenuButton = ::GlobalNamespace::__MainMenuViewController__MenuButton;

  using _LoadMusicPackPromoDataAsync_d__21 = ::GlobalNamespace::__MainMenuViewController___LoadMusicPackPromoDataAsync_d__21;

  /// @brief Field _analyticsModel, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _beatmapEditorButton, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEditorButton, put = __cordl_internal_set__beatmapEditorButton))::UnityW<::UnityEngine::UI::Button> _beatmapEditorButton;

  /// @brief Field _campaignButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__campaignButton, put = __cordl_internal_set__campaignButton))::UnityW<::UnityEngine::UI::Button> _campaignButton;

  /// @brief Field _dlcPromoPanelModel, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__dlcPromoPanelModel, put = __cordl_internal_set__dlcPromoPanelModel))::GlobalNamespace::DlcPromoPanelModel* _dlcPromoPanelModel;

  /// @brief Field _howToPlayButton, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__howToPlayButton, put = __cordl_internal_set__howToPlayButton))::UnityW<::UnityEngine::UI::Button> _howToPlayButton;

  /// @brief Field _isLoadingPackPromoData, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get__isLoadingPackPromoData, put = __cordl_internal_set__isLoadingPackPromoData)) bool _isLoadingPackPromoData;

  /// @brief Field _multiplayerButton, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerButton, put = __cordl_internal_set__multiplayerButton))::UnityW<::UnityEngine::UI::Button> _multiplayerButton;

  /// @brief Field _musicPackPromoBanner, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__musicPackPromoBanner, put = __cordl_internal_set__musicPackPromoBanner))::UnityW<::GlobalNamespace::MusicPackPromoBanner> _musicPackPromoBanner;

  /// @brief Field _musicPackPromoButton, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__musicPackPromoButton, put = __cordl_internal_set__musicPackPromoButton))::UnityW<::UnityEngine::UI::Button> _musicPackPromoButton;

  /// @brief Field _optionsButton, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__optionsButton, put = __cordl_internal_set__optionsButton))::UnityW<::UnityEngine::UI::Button> _optionsButton;

  /// @brief Field _partyButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__partyButton, put = __cordl_internal_set__partyButton))::UnityW<::UnityEngine::UI::Button> _partyButton;

  /// @brief Field _quitButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__quitButton, put = __cordl_internal_set__quitButton))::UnityW<::UnityEngine::UI::Button> _quitButton;

  /// @brief Field _soloButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__soloButton, put = __cordl_internal_set__soloButton))::UnityW<::UnityEngine::UI::Button> _soloButton;

  /// @brief Field didFinishEvent, offset 0xd0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didFinishEvent,
      put = __cordl_internal_set_didFinishEvent))::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>* didFinishEvent;

  /// @brief Field promoButtonWasPressedEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_promoButtonWasPressedEvent,
                      put = __cordl_internal_set_promoButtonWasPressedEvent))::System::Action_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* promoButtonWasPressedEvent;

  /// @brief Method DidActivate, addr 0x2665984, size 0x49c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleMenuButton, addr 0x2665f18, size 0x1b0, virtual false, abstract: false, final false
  inline void HandleMenuButton(::GlobalNamespace::__MainMenuViewController__MenuButton menuButton);

  /// @brief Method LoadMusicPackPromoDataAsync, addr 0x2665e20, size 0x94, virtual false, abstract: false, final false
  inline void LoadMusicPackPromoDataAsync();

  static inline ::GlobalNamespace::MainMenuViewController* New_ctor();

  /// @brief Method PackPromoButtonWasPressed, addr 0x2665eb4, size 0x64, virtual false, abstract: false, final false
  inline void PackPromoButtonWasPressed();

  /// @brief Method <DidActivate>b__20_0, addr 0x26660d0, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_0();

  /// @brief Method <DidActivate>b__20_1, addr 0x26660d8, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_1();

  /// @brief Method <DidActivate>b__20_2, addr 0x26660e0, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_2();

  /// @brief Method <DidActivate>b__20_3, addr 0x26660e8, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_3();

  /// @brief Method <DidActivate>b__20_4, addr 0x26660f0, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_4();

  /// @brief Method <DidActivate>b__20_5, addr 0x26660f8, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_5();

  /// @brief Method <DidActivate>b__20_6, addr 0x2666100, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_6();

  /// @brief Method <DidActivate>b__20_7, addr 0x2666108, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__20_7();

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__beatmapEditorButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__beatmapEditorButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__campaignButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__campaignButton();

  constexpr ::GlobalNamespace::DlcPromoPanelModel*& __cordl_internal_get__dlcPromoPanelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> const& __cordl_internal_get__dlcPromoPanelModel() const;

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__howToPlayButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__howToPlayButton();

  constexpr bool const& __cordl_internal_get__isLoadingPackPromoData() const;

  constexpr bool& __cordl_internal_get__isLoadingPackPromoData();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__multiplayerButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__multiplayerButton();

  constexpr ::UnityW<::GlobalNamespace::MusicPackPromoBanner> const& __cordl_internal_get__musicPackPromoBanner() const;

  constexpr ::UnityW<::GlobalNamespace::MusicPackPromoBanner>& __cordl_internal_get__musicPackPromoBanner();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__musicPackPromoButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__musicPackPromoButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__optionsButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__optionsButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__partyButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__partyButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__quitButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__quitButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__soloButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__soloButton();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>*> const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*& __cordl_internal_get_promoButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> const& __cordl_internal_get_promoButtonWasPressedEvent() const;

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__beatmapEditorButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__campaignButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value);

  constexpr void __cordl_internal_set__howToPlayButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__isLoadingPackPromoData(bool value);

  constexpr void __cordl_internal_set__multiplayerButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__musicPackPromoBanner(::UnityW<::GlobalNamespace::MusicPackPromoBanner> value);

  constexpr void __cordl_internal_set__musicPackPromoButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__optionsButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__partyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__quitButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__soloButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>* value);

  constexpr void __cordl_internal_set_promoButtonWasPressedEvent(::System::Action_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* value);

  /// @brief Method .ctor, addr 0x26660c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x26656c4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>* value);

  /// @brief Method add_promoButtonWasPressedEvent, addr 0x2665824, size 0xb0, virtual false, abstract: false, final false
  inline void add_promoButtonWasPressedEvent(::System::Action_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x2665774, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>* value);

  /// @brief Method remove_promoButtonWasPressedEvent, addr 0x26658d4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_promoButtonWasPressedEvent(::System::Action_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainMenuViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainMenuViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainMenuViewController(MainMenuViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainMenuViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainMenuViewController(MainMenuViewController const&) = delete;

  /// @brief Field _soloButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____soloButton;

  /// @brief Field _partyButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____partyButton;

  /// @brief Field _campaignButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____campaignButton;

  /// @brief Field _quitButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____quitButton;

  /// @brief Field _howToPlayButton, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____howToPlayButton;

  /// @brief Field _beatmapEditorButton, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____beatmapEditorButton;

  /// @brief Field _multiplayerButton, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____multiplayerButton;

  /// @brief Field _optionsButton, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____optionsButton;

  /// @brief Field _musicPackPromoButton, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____musicPackPromoButton;

  /// @brief Field _musicPackPromoBanner, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MusicPackPromoBanner> ____musicPackPromoBanner;

  /// @brief Field _dlcPromoPanelModel, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* ____dlcPromoPanelModel;

  /// @brief Field _analyticsModel, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field didFinishEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>* ___didFinishEvent;

  /// @brief Field promoButtonWasPressedEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* ___promoButtonWasPressedEvent;

  /// @brief Field _isLoadingPackPromoData, offset: 0xe0, size: 0x1, def value: None
  bool ____isLoadingPackPromoData;

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

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____analyticsModel) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ___didFinishEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ___promoButtonWasPressedEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuViewController, ____isLoadingPackPromoData) == 0xe0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainMenuViewController__MenuButton, "", "MainMenuViewController/MenuButton");
NEED_NO_BOX(::GlobalNamespace::MainMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainMenuViewController*, "", "MainMenuViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainMenuViewController___LoadMusicPackPromoDataAsync_d__21, "", "MainMenuViewController/<LoadMusicPackPromoDataAsync>d__21");
