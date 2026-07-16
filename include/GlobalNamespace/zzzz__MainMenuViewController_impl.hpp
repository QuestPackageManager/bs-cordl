#pragma once
// IWYU pragma private; include "GlobalNamespace/MainMenuViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__MusicPackPromoBanner_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MainMenuViewController_MenuButton::MainMenuViewController_MenuButton(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainMenuViewController_MenuButton::MainMenuViewController_MenuButton() {}
constexpr ::GlobalNamespace::MainMenuViewController_MenuButton GlobalNamespace::MainMenuViewController_MenuButton::SoloFreePlay{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MainMenuViewController_MenuButton GlobalNamespace::MainMenuViewController_MenuButton::Party{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MainMenuViewController_MenuButton GlobalNamespace::MainMenuViewController_MenuButton::BeatmapEditor{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::MainMenuViewController_MenuButton GlobalNamespace::MainMenuViewController_MenuButton::SoloCampaign{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::MainMenuViewController_MenuButton GlobalNamespace::MainMenuViewController_MenuButton::FloorAdjust{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::MainMenuViewController_MenuButton GlobalNamespace::MainMenuViewController_MenuButton::Quit{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::MainMenuViewController_MenuButton GlobalNamespace::MainMenuViewController_MenuButton::Multiplayer{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::MainMenuViewController_MenuButton GlobalNamespace::MainMenuViewController_MenuButton::Options{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::MainMenuViewController_MenuButton GlobalNamespace::MainMenuViewController_MenuButton::HowToPlay{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::MainMenuViewController_MenuButton>*)>(&::GlobalNamespace::MainMenuViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595abfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(),
            { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::MainMenuViewController_MenuButton>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::MainMenuViewController::*)(::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::MainMenuViewController_MenuButton>*)>(
        &::GlobalNamespace::MainMenuViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595acbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(),
            { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::MainMenuViewController_MenuButton>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.add_promoButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*)>(
    &::GlobalNamespace::MainMenuViewController::add_promoButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595ad7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(),
                                                             { "add_promoButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.remove_promoButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*)>(
    &::GlobalNamespace::MainMenuViewController::remove_promoButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595ae3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(),
                                                { "remove_promoButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(bool, bool, bool)>(&::GlobalNamespace::MainMenuViewController::DidActivate)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x595aefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { ::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(bool, bool)>(&::GlobalNamespace::MainMenuViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x595b788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { ::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x595b86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.HandleMainMenuPromoChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::HandleMainMenuPromoChanged)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x595b6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "HandleMainMenuPromoChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.PackPromoButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::PackPromoButtonWasPressed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x595b884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "PackPromoButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.HandleMenuButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(::GlobalNamespace::MainMenuViewController_MenuButton)>(
    &::GlobalNamespace::MainMenuViewController::HandleMenuButton)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x595b8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(),
                                                                                           { "HandleMenuButton", {}, { ::i2c::type_of<::GlobalNamespace::MainMenuViewController_MenuButton>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595bad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__19_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__19_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595bad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__19_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__19_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595bae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__19_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__19_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595bae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__19_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__19_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595baf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__19_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__19_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595baf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__19_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__19_5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595bb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_5", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__19_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__19_6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595bb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_6", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__19_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__19_7)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595bb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_7", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MainMenuViewController::__cordl_internal_get__soloButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____soloButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__soloButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____soloButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__soloButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____soloButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MainMenuViewController::__cordl_internal_get__partyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__partyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__partyButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partyButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MainMenuViewController::__cordl_internal_get__campaignButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__campaignButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__campaignButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____campaignButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MainMenuViewController::__cordl_internal_get__quitButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quitButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__quitButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quitButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__quitButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____quitButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MainMenuViewController::__cordl_internal_get__howToPlayButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____howToPlayButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__howToPlayButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____howToPlayButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__howToPlayButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____howToPlayButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MainMenuViewController::__cordl_internal_get__beatmapEditorButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEditorButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__beatmapEditorButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEditorButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__beatmapEditorButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEditorButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MainMenuViewController::__cordl_internal_get__multiplayerButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__multiplayerButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__multiplayerButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MainMenuViewController::__cordl_internal_get__optionsButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__optionsButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__optionsButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optionsButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MainMenuViewController::__cordl_internal_get__musicPackPromoButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPackPromoButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__musicPackPromoButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPackPromoButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__musicPackPromoButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____musicPackPromoButton = value;
}
constexpr ::UnityW<::GlobalNamespace::MusicPackPromoBanner>& GlobalNamespace::MainMenuViewController::__cordl_internal_get__musicPackPromoBanner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPackPromoBanner;
}
constexpr ::UnityW<::GlobalNamespace::MusicPackPromoBanner> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__musicPackPromoBanner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPackPromoBanner;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__musicPackPromoBanner(::UnityW<::GlobalNamespace::MusicPackPromoBanner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____musicPackPromoBanner = value;
}
constexpr ::GlobalNamespace::DlcPromoPanelModel*& GlobalNamespace::MainMenuViewController::__cordl_internal_get__dlcPromoPanelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr ::GlobalNamespace::DlcPromoPanelModel* const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__dlcPromoPanelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dlcPromoPanelModel = value;
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::MainMenuViewController::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsModel = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::MainMenuViewController_MenuButton>*&
GlobalNamespace::MainMenuViewController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::MainMenuViewController_MenuButton>* const&
GlobalNamespace::MainMenuViewController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::MainMenuViewController_MenuButton>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*& GlobalNamespace::MainMenuViewController::__cordl_internal_get_promoButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___promoButtonWasPressedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* const& GlobalNamespace::MainMenuViewController::__cordl_internal_get_promoButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___promoButtonWasPressedEvent;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set_promoButtonWasPressedEvent(::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___promoButtonWasPressedEvent = value;
}
inline void
GlobalNamespace::MainMenuViewController::add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::MainMenuViewController_MenuButton>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(),
          { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::MainMenuViewController_MenuButton>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MainMenuViewController::remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::MainMenuViewController_MenuButton>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(),
          { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::MainMenuViewController_MenuButton>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MainMenuViewController::add_promoButtonWasPressedEvent(::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(),
                                                           { "add_promoButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MainMenuViewController::remove_promoButtonWasPressedEvent(::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(),
                                                           { "remove_promoButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MainMenuViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MainMenuViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::MainMenuViewController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::HandleMainMenuPromoChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "HandleMainMenuPromoChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::PackPromoButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "PackPromoButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::HandleMenuButton(::GlobalNamespace::MainMenuViewController_MenuButton menuButton) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(),
                                                                                         { "HandleMenuButton", {}, { ::i2c::type_of<::GlobalNamespace::MainMenuViewController_MenuButton>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menuButton);
}
inline void GlobalNamespace::MainMenuViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__19_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__19_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__19_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__19_3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__19_4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__19_5() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_5", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__19_6() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_6", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__19_7() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainMenuViewController*>(), { "<DidActivate>b__19_7", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainMenuViewController* GlobalNamespace::MainMenuViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainMenuViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainMenuViewController::MainMenuViewController() {}
