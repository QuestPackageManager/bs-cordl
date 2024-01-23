#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__MusicPackPromoBanner_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton::__MainMenuViewController__MenuButton(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton::__MainMenuViewController__MenuButton() {}
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton GlobalNamespace::__MainMenuViewController__MenuButton::SoloFreePlay{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton GlobalNamespace::__MainMenuViewController__MenuButton::Party{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton GlobalNamespace::__MainMenuViewController__MenuButton::BeatmapEditor{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton GlobalNamespace::__MainMenuViewController__MenuButton::SoloCampaign{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton GlobalNamespace::__MainMenuViewController__MenuButton::FloorAdjust{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton GlobalNamespace::__MainMenuViewController__MenuButton::Quit{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton GlobalNamespace::__MainMenuViewController__MenuButton::Multiplayer{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton GlobalNamespace::__MainMenuViewController__MenuButton::Options{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton GlobalNamespace::__MainMenuViewController__MenuButton::HowToPlay{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MainMenuViewController::*)(::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>*)>(
        &::GlobalNamespace::MainMenuViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c8abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MainMenuViewController::*)(::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>*)>(
        &::GlobalNamespace::MainMenuViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c8b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.add_musicPackPromoButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(
    ::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*)>(&::GlobalNamespace::MainMenuViewController::add_musicPackPromoButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c8c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "add_musicPackPromoButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.remove_musicPackPromoButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(
    ::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*)>(&::GlobalNamespace::MainMenuViewController::remove_musicPackPromoButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c8ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "remove_musicPackPromoButtonWasPressedEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::MainMenuViewController::DidActivate)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x22c8d7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.PackPromoButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(
    &::GlobalNamespace::MainMenuViewController::PackPromoButtonWasPressed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22c92a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                               "PackPromoButtonWasPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.HandleMenuButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(::GlobalNamespace::__MainMenuViewController__MenuButton)>(
    &::GlobalNamespace::MainMenuViewController::HandleMenuButton)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x22c9300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "HandleMenuButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainMenuViewController__MenuButton>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(
    &::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                               "<DidActivate>b__20_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(
    &::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                               "<DidActivate>b__20_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(
    &::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                               "<DidActivate>b__20_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(
    &::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                               "<DidActivate>b__20_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(
    &::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                               "<DidActivate>b__20_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(
    &::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                               "<DidActivate>b__20_5", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(
    &::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                               "<DidActivate>b__20_6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(
    &::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_7)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                               "<DidActivate>b__20_7", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____soloButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partyButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____campaignButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____quitButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____howToPlayButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapEditorButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optionsButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____musicPackPromoButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____musicPackPromoBanner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DlcPromoPanelModel*& GlobalNamespace::MainMenuViewController::__cordl_internal_get__dlcPromoPanelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__dlcPromoPanelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dlcPromoPanelModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO>& GlobalNamespace::MainMenuViewController::__cordl_internal_get__appStaticSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__appStaticSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__appStaticSettings(::UnityW<::GlobalNamespace::AppStaticSettingsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appStaticSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::MainMenuViewController::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& GlobalNamespace::MainMenuViewController::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>*&
GlobalNamespace::MainMenuViewController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>*> const&
GlobalNamespace::MainMenuViewController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*&
GlobalNamespace::MainMenuViewController::__cordl_internal_get_musicPackPromoButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___musicPackPromoButtonWasPressedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*> const&
GlobalNamespace::MainMenuViewController::__cordl_internal_get_musicPackPromoButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___musicPackPromoButtonWasPressedEvent;
}
constexpr void GlobalNamespace::MainMenuViewController::__cordl_internal_set_musicPackPromoButtonWasPressedEvent(
    ::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___musicPackPromoButtonWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
GlobalNamespace::MainMenuViewController::add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MainMenuViewController::remove_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::MainMenuViewController>, ::GlobalNamespace::__MainMenuViewController__MenuButton>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MainMenuViewController::add_musicPackPromoButtonWasPressedEvent(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "add_musicPackPromoButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MainMenuViewController::remove_musicPackPromoButtonWasPressedEvent(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "remove_musicPackPromoButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MainMenuViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MainMenuViewController::PackPromoButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "PackPromoButtonWasPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::HandleMenuButton(::GlobalNamespace::__MainMenuViewController__MenuButton menuButton) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "HandleMenuButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainMenuViewController__MenuButton>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menuButton);
}
inline ::GlobalNamespace::MainMenuViewController* GlobalNamespace::MainMenuViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainMenuViewController*>());
}
inline void GlobalNamespace::MainMenuViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_5() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_5", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_6() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_7() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_7", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainMenuViewController::MainMenuViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
