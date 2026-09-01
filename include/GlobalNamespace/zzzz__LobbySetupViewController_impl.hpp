#pragma once
// IWYU pragma private; include "GlobalNamespace\LobbySetupViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__LobbySetupViewController_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizedTextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__EditableBeatmapSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__EditableModifiersSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__GameServersFilterText_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayerData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.add_selectBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbySetupViewController::add_selectBeatmapEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59616c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "add_selectBeatmapEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.remove_selectBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbySetupViewController::remove_selectBeatmapEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5961774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "remove_selectBeatmapEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.add_selectModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbySetupViewController::add_selectModifiersEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5961820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "add_selectModifiersEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.remove_selectModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbySetupViewController::remove_selectModifiersEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59618cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "remove_selectModifiersEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.add_startGameOrReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbySetupViewController::add_startGameOrReadyEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5961978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "add_startGameOrReadyEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.remove_startGameOrReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbySetupViewController::remove_startGameOrReadyEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5961a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "remove_startGameOrReadyEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.add_cancelGameOrUnreadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbySetupViewController::add_cancelGameOrUnreadyEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5961ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "add_cancelGameOrUnreadyEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.remove_cancelGameOrUnreadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbySetupViewController::remove_cancelGameOrUnreadyEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5961b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "remove_cancelGameOrUnreadyEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.add_clearSuggestedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbySetupViewController::add_clearSuggestedBeatmapEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5961c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "add_clearSuggestedBeatmapEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.remove_clearSuggestedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbySetupViewController::remove_clearSuggestedBeatmapEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5961cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "remove_clearSuggestedBeatmapEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.add_clearSuggestedModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbySetupViewController::add_clearSuggestedModifiersEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5961d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "add_clearSuggestedModifiersEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.remove_clearSuggestedModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbySetupViewController::remove_clearSuggestedModifiersEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5961e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "remove_clearSuggestedModifiersEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::GlobalNamespace::BeatmapLevelSelectionMask, bool, bool, bool, bool, bool)>(
    &::GlobalNamespace::LobbySetupViewController::Setup)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5961ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(),
                                                                                           { "Setup",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.SetLobbyPlayerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::GlobalNamespace::ILobbyPlayerData*)>(
    &::GlobalNamespace::LobbySetupViewController::SetLobbyPlayerData)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5962140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "SetLobbyPlayerData", {}, { ::i2c::type_of<::GlobalNamespace::ILobbyPlayerData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.SetPlayersMissingLevelText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::StringW)>(&::GlobalNamespace::LobbySetupViewController::SetPlayersMissingLevelText)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5962520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "SetPlayersMissingLevelText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.SetPlayerActiveState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(bool)>(&::GlobalNamespace::LobbySetupViewController::SetPlayerActiveState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5962500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "SetPlayerActiveState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.SetStartGameEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::GlobalNamespace::CannotStartGameReason)>(
    &::GlobalNamespace::LobbySetupViewController::SetStartGameEnabled)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5962580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(),
                                                                                           { "SetStartGameEnabled", {}, { ::i2c::type_of<::GlobalNamespace::CannotStartGameReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.SetLobbyState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(::GlobalNamespace::MultiplayerLobbyState)>(
    &::GlobalNamespace::LobbySetupViewController::SetLobbyState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59625e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "SetLobbyState", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLobbyState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(bool, bool, bool)>(&::GlobalNamespace::LobbySetupViewController::DidActivate)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x59626d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { ::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)()>(&::GlobalNamespace::LobbySetupViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5962a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { ::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController.SetReadyButtonActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)(bool)>(&::GlobalNamespace::LobbySetupViewController::SetReadyButtonActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5962110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "SetReadyButtonActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)()>(&::GlobalNamespace::LobbySetupViewController::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5962a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController._DidActivate_b__44_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)()>(&::GlobalNamespace::LobbySetupViewController::_DidActivate_b__44_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5962ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "<DidActivate>b__44_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController._DidActivate_b__44_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)()>(&::GlobalNamespace::LobbySetupViewController::_DidActivate_b__44_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5962af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "<DidActivate>b__44_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController._DidActivate_b__44_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)()>(&::GlobalNamespace::LobbySetupViewController::_DidActivate_b__44_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5962b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "<DidActivate>b__44_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController._DidActivate_b__44_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)()>(&::GlobalNamespace::LobbySetupViewController::_DidActivate_b__44_3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5962b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "<DidActivate>b__44_3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController._DidActivate_b__44_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)()>(&::GlobalNamespace::LobbySetupViewController::_DidActivate_b__44_4)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5962b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "<DidActivate>b__44_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbySetupViewController._DidActivate_b__44_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbySetupViewController::*)()>(&::GlobalNamespace::LobbySetupViewController::_DidActivate_b__44_5)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5962b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "<DidActivate>b__44_5", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__startGameReadyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startGameReadyButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__startGameReadyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startGameReadyButton;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__startGameReadyButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startGameReadyButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__cancelGameUnreadyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelGameUnreadyButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__cancelGameUnreadyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelGameUnreadyButton;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__cancelGameUnreadyButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancelGameUnreadyButton = value;
}
constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI>& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__startReadyText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startReadyText;
}
constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI> const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__startReadyText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startReadyText;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__startReadyText(::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startReadyText = value;
}
constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI>& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__cancelUnreadyText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelUnreadyText;
}
constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI> const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__cancelUnreadyText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelUnreadyText;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__cancelUnreadyText(::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancelUnreadyText = value;
}
constexpr ::UnityW<::GlobalNamespace::GameServersFilterText>& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__serverSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverSettings;
}
constexpr ::UnityW<::GlobalNamespace::GameServersFilterText> const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__serverSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverSettings;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__serverSettings(::UnityW<::GlobalNamespace::GameServersFilterText> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serverSettings = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__suggestionHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestionHeader;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__suggestionHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestionHeader;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__suggestionHeader(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____suggestionHeader = value;
}
constexpr ::UnityW<::GlobalNamespace::EditableBeatmapSelectionView>& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__beatmapSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSelectionView;
}
constexpr ::UnityW<::GlobalNamespace::EditableBeatmapSelectionView> const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__beatmapSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSelectionView;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__beatmapSelectionView(::UnityW<::GlobalNamespace::EditableBeatmapSelectionView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapSelectionView = value;
}
constexpr ::UnityW<::GlobalNamespace::EditableModifiersSelectionView>& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__modifiersSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersSelectionView;
}
constexpr ::UnityW<::GlobalNamespace::EditableModifiersSelectionView> const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__modifiersSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersSelectionView;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__modifiersSelectionView(::UnityW<::GlobalNamespace::EditableModifiersSelectionView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiersSelectionView = value;
}
constexpr ::UnityW<::HMUI::HoverHint>& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__cantStartGameHoverHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cantStartGameHoverHint;
}
constexpr ::UnityW<::HMUI::HoverHint> const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__cantStartGameHoverHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cantStartGameHoverHint;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__cantStartGameHoverHint(::UnityW<::HMUI::HoverHint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cantStartGameHoverHint = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__playerMissingLevelHoverHintWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerMissingLevelHoverHintWrapper;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__playerMissingLevelHoverHintWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerMissingLevelHoverHintWrapper;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__playerMissingLevelHoverHintWrapper(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerMissingLevelHoverHintWrapper = value;
}
constexpr ::UnityW<::HMUI::HoverHint>& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__playersMissingLevelHoverHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersMissingLevelHoverHint;
}
constexpr ::UnityW<::HMUI::HoverHint> const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__playersMissingLevelHoverHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersMissingLevelHoverHint;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__playersMissingLevelHoverHint(::UnityW<::HMUI::HoverHint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersMissingLevelHoverHint = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__spectatorWarningTextWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatorWarningTextWrapper;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__spectatorWarningTextWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatorWarningTextWrapper;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__spectatorWarningTextWrapper(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectatorWarningTextWrapper = value;
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::HMUI::ToggleBinder* const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleBinder = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbySetupViewController::__cordl_internal_get_selectBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectBeatmapEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get_selectBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectBeatmapEvent;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set_selectBeatmapEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectBeatmapEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbySetupViewController::__cordl_internal_get_selectModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectModifiersEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get_selectModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectModifiersEvent;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set_selectModifiersEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectModifiersEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbySetupViewController::__cordl_internal_get_startGameOrReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startGameOrReadyEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get_startGameOrReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startGameOrReadyEvent;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set_startGameOrReadyEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startGameOrReadyEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbySetupViewController::__cordl_internal_get_cancelGameOrUnreadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelGameOrUnreadyEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get_cancelGameOrUnreadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelGameOrUnreadyEvent;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set_cancelGameOrUnreadyEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancelGameOrUnreadyEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbySetupViewController::__cordl_internal_get_clearSuggestedBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearSuggestedBeatmapEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get_clearSuggestedBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearSuggestedBeatmapEvent;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set_clearSuggestedBeatmapEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearSuggestedBeatmapEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbySetupViewController::__cordl_internal_get_clearSuggestedModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearSuggestedModifiersEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get_clearSuggestedModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearSuggestedModifiersEvent;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set_clearSuggestedModifiersEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearSuggestedModifiersEvent = value;
}
constexpr bool& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__isPartyOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPartyOwner;
}
constexpr bool const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__isPartyOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPartyOwner;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__isPartyOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPartyOwner = value;
}
constexpr bool& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__isQuickStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isQuickStart;
}
constexpr bool const& GlobalNamespace::LobbySetupViewController::__cordl_internal_get__isQuickStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isQuickStart;
}
constexpr void GlobalNamespace::LobbySetupViewController::__cordl_internal_set__isQuickStart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isQuickStart = value;
}
inline void GlobalNamespace::LobbySetupViewController::add_selectBeatmapEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "add_selectBeatmapEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbySetupViewController::remove_selectBeatmapEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "remove_selectBeatmapEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbySetupViewController::add_selectModifiersEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "add_selectModifiersEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbySetupViewController::remove_selectModifiersEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "remove_selectModifiersEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbySetupViewController::add_startGameOrReadyEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "add_startGameOrReadyEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbySetupViewController::remove_startGameOrReadyEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "remove_startGameOrReadyEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbySetupViewController::add_cancelGameOrUnreadyEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "add_cancelGameOrUnreadyEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbySetupViewController::remove_cancelGameOrUnreadyEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "remove_cancelGameOrUnreadyEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbySetupViewController::add_clearSuggestedBeatmapEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "add_clearSuggestedBeatmapEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbySetupViewController::remove_clearSuggestedBeatmapEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "remove_clearSuggestedBeatmapEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbySetupViewController::add_clearSuggestedModifiersEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "add_clearSuggestedModifiersEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbySetupViewController::remove_clearSuggestedModifiersEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "remove_clearSuggestedModifiersEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbySetupViewController::Setup(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, bool isPartyOwner, bool allowSongSelection, bool allowModifierSelection,
                                                             bool isManaged, bool isQuickStart) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(),
                                                                                         { "Setup",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectionMask, isPartyOwner, allowSongSelection, allowModifierSelection, isManaged, isQuickStart);
}
inline void GlobalNamespace::LobbySetupViewController::SetLobbyPlayerData(::GlobalNamespace::ILobbyPlayerData* lobbyPlayerData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "SetLobbyPlayerData", {}, { ::i2c::type_of<::GlobalNamespace::ILobbyPlayerData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyPlayerData);
}
inline void GlobalNamespace::LobbySetupViewController::SetPlayersMissingLevelText(::StringW playersMissingLevelText) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "SetPlayersMissingLevelText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playersMissingLevelText);
}
inline void GlobalNamespace::LobbySetupViewController::SetPlayerActiveState(bool isActive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "SetPlayerActiveState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive);
}
inline void GlobalNamespace::LobbySetupViewController::SetStartGameEnabled(::GlobalNamespace::CannotStartGameReason cannotStartGameReason) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(),
                                                                                         { "SetStartGameEnabled", {}, { ::i2c::type_of<::GlobalNamespace::CannotStartGameReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cannotStartGameReason);
}
inline void GlobalNamespace::LobbySetupViewController::SetLobbyState(::GlobalNamespace::MultiplayerLobbyState lobbyState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "SetLobbyState", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLobbyState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyState);
}
inline void GlobalNamespace::LobbySetupViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::LobbySetupViewController::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbySetupViewController::SetReadyButtonActive(bool active) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "SetReadyButtonActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::LobbySetupViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbySetupViewController::_DidActivate_b__44_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "<DidActivate>b__44_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbySetupViewController::_DidActivate_b__44_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "<DidActivate>b__44_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbySetupViewController::_DidActivate_b__44_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "<DidActivate>b__44_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbySetupViewController::_DidActivate_b__44_3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "<DidActivate>b__44_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbySetupViewController::_DidActivate_b__44_4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "<DidActivate>b__44_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbySetupViewController::_DidActivate_b__44_5() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbySetupViewController*>(), { "<DidActivate>b__44_5", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbySetupViewController* GlobalNamespace::LobbySetupViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbySetupViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbySetupViewController::LobbySetupViewController() {}
