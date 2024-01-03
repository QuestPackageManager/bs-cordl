#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__MusicPackPromoBanner_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(
    ::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>*)>(&::GlobalNamespace::MainMenuViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c8abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(
    ::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>*)>(&::GlobalNamespace::MainMenuViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c8b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>*>::get() })));
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
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "add_musicPackPromoButtonWasPressedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
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
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "remove_musicPackPromoButtonWasPressedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
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
                                                                               "PackPromoButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "HandleMenuButton", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainMenuViewController__MenuButton>::get() })));
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
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
                                                                               "<DidActivate>b__20_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
                                                                               "<DidActivate>b__20_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
                                                                               "<DidActivate>b__20_2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
                                                                               "<DidActivate>b__20_3", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
                                                                               "<DidActivate>b__20_4", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
                                                                               "<DidActivate>b__20_5", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
                                                                               "<DidActivate>b__20_6", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
                                                                               "<DidActivate>b__20_7", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::MainMenuViewController::__get__soloButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____soloButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::MainMenuViewController::__get__soloButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____soloButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__soloButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____soloButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::MainMenuViewController::__get__partyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::MainMenuViewController::__get__partyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__partyButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partyButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::MainMenuViewController::__get__campaignButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::MainMenuViewController::__get__campaignButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__campaignButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____campaignButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::MainMenuViewController::__get__quitButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quitButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::MainMenuViewController::__get__quitButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quitButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__quitButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____quitButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::MainMenuViewController::__get__howToPlayButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____howToPlayButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::MainMenuViewController::__get__howToPlayButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____howToPlayButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__howToPlayButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____howToPlayButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::MainMenuViewController::__get__beatmapEditorButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEditorButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::MainMenuViewController::__get__beatmapEditorButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEditorButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__beatmapEditorButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapEditorButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::MainMenuViewController::__get__multiplayerButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::MainMenuViewController::__get__multiplayerButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__multiplayerButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::MainMenuViewController::__get__optionsButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::MainMenuViewController::__get__optionsButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__optionsButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optionsButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::MainMenuViewController::__get__musicPackPromoButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPackPromoButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::MainMenuViewController::__get__musicPackPromoButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPackPromoButton;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__musicPackPromoButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____musicPackPromoButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MusicPackPromoBanner*& GlobalNamespace::MainMenuViewController::__get__musicPackPromoBanner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPackPromoBanner;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MusicPackPromoBanner*> const& GlobalNamespace::MainMenuViewController::__get__musicPackPromoBanner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPackPromoBanner;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__musicPackPromoBanner(::GlobalNamespace::MusicPackPromoBanner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____musicPackPromoBanner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DlcPromoPanelModel*& GlobalNamespace::MainMenuViewController::__get__dlcPromoPanelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> const& GlobalNamespace::MainMenuViewController::__get__dlcPromoPanelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dlcPromoPanelModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AppStaticSettingsSO*& GlobalNamespace::MainMenuViewController::__get__appStaticSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> const& GlobalNamespace::MainMenuViewController::__get__appStaticSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appStaticSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::MainMenuViewController::__get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& GlobalNamespace::MainMenuViewController::__get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::MainMenuViewController::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>*& GlobalNamespace::MainMenuViewController::__get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>*> const&
GlobalNamespace::MainMenuViewController::__get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void
GlobalNamespace::MainMenuViewController::__set_didFinishEvent(::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*& GlobalNamespace::MainMenuViewController::__get_musicPackPromoButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___musicPackPromoButtonWasPressedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*> const&
GlobalNamespace::MainMenuViewController::__get_musicPackPromoButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___musicPackPromoButtonWasPressedEvent;
}
constexpr void
GlobalNamespace::MainMenuViewController::__set_musicPackPromoButtonWasPressedEvent(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___musicPackPromoButtonWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
GlobalNamespace::MainMenuViewController::add_didFinishEvent(::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MainMenuViewController::remove_didFinishEvent(::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MainMenuViewController::add_musicPackPromoButtonWasPressedEvent(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "add_musicPackPromoButtonWasPressedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MainMenuViewController::remove_musicPackPromoButtonWasPressedEvent(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "remove_musicPackPromoButtonWasPressedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
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
                                                                             "PackPromoButtonWasPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::HandleMenuButton(::GlobalNamespace::__MainMenuViewController__MenuButton menuButton) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), "HandleMenuButton", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainMenuViewController__MenuButton>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menuButton);
}
inline ::GlobalNamespace::MainMenuViewController* GlobalNamespace::MainMenuViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainMenuViewController*>());
}
inline void GlobalNamespace::MainMenuViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_3", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_4", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_5() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_5", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_6() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_6", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_7() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                                                             "<DidActivate>b__20_7", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainMenuViewController::MainMenuViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
