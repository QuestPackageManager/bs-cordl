#pragma once
// IWYU pragma private; include "GlobalNamespace\GameServerPlayersTableView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerPlayersTableView_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameServerPlayerTableCell_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayerData_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayersDataModel_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.add_selectSuggestedLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayersTableView::*)(::System::Action_1<::GlobalNamespace::BeatmapKey>*)>(
    &::GlobalNamespace::GameServerPlayersTableView::add_selectSuggestedLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5940c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                                                             { "add_selectSuggestedLevelEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapKey>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.remove_selectSuggestedLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayersTableView::*)(::System::Action_1<::GlobalNamespace::BeatmapKey>*)>(
    &::GlobalNamespace::GameServerPlayersTableView::remove_selectSuggestedLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5940d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                                                             { "remove_selectSuggestedLevelEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapKey>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.add_selectSuggestedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayersTableView::*)(::System::Action_1<::GlobalNamespace::GameplayModifiers*>*)>(
    &::GlobalNamespace::GameServerPlayersTableView::add_selectSuggestedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5940dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                                                             { "add_selectSuggestedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::GameplayModifiers*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.remove_selectSuggestedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayersTableView::*)(::System::Action_1<::GlobalNamespace::GameplayModifiers*>*)>(
    &::GlobalNamespace::GameServerPlayersTableView::remove_selectSuggestedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5940e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                                                { "remove_selectSuggestedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::GameplayModifiers*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.add_kickPlayerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayersTableView::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameServerPlayersTableView::add_kickPlayerEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5940f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "add_kickPlayerEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.remove_kickPlayerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayersTableView::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameServerPlayersTableView::remove_kickPlayerEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5941004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "remove_kickPlayerEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.CellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GameServerPlayersTableView::*)(int32_t)>(&::GlobalNamespace::GameServerPlayersTableView::CellSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59410c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.NumberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameServerPlayersTableView::*)()>(&::GlobalNamespace::GameServerPlayersTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59410d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "NumberOfCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.get_currentCellId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameServerPlayersTableView::*)()>(&::GlobalNamespace::GameServerPlayersTableView::get_currentCellId)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5941120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "get_currentCellId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.GetCurrentPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameServerPlayerTableCell> (::GlobalNamespace::GameServerPlayersTableView::*)()>(
    &::GlobalNamespace::GameServerPlayersTableView::GetCurrentPrefab)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59411bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "GetCurrentPrefab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.CellForIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::GlobalNamespace::GameServerPlayersTableView::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::GameServerPlayersTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5941258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                                                                                           { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.TryGetLobbyPlayerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameServerPlayersTableView::*)(
    int32_t, ::by_ref<::GlobalNamespace::IConnectedPlayer*>, ::by_ref<::GlobalNamespace::ILobbyPlayerData*>)>(&::GlobalNamespace::GameServerPlayersTableView::TryGetLobbyPlayerData)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5941728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                            { "TryGetLobbyPlayerData",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::IConnectedPlayer*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ILobbyPlayerData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.HandleCellUseBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayersTableView::*)(int32_t)>(&::GlobalNamespace::GameServerPlayersTableView::HandleCellUseBeatmap)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5942844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "HandleCellUseBeatmap", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.HandleCellUseModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayersTableView::*)(int32_t)>(&::GlobalNamespace::GameServerPlayersTableView::HandleCellUseModifiers)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5942af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "HandleCellUseModifiers", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.HandleCellKickPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayersTableView::*)(int32_t)>(&::GlobalNamespace::GameServerPlayersTableView::HandleCellKickPlayer)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5942d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "HandleCellKickPlayer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayersTableView::*)(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*,
                                                                                                               ::GlobalNamespace::ILobbyPlayersDataModel*, bool, bool, bool, bool, bool)>(
    &::GlobalNamespace::GameServerPlayersTableView::SetData)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5942e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                                                                                           { "SetData",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::ILobbyPlayersDataModel*>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayersTableView::*)()>(&::GlobalNamespace::GameServerPlayersTableView::Init)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5942f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayersTableView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayersTableView::*)()>(&::GlobalNamespace::GameServerPlayersTableView::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5942f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TableView>& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__tableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr ::UnityW<::HMUI::TableView> const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__tableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableView = value;
}
constexpr ::UnityW<::GlobalNamespace::GameServerPlayerTableCell>& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__gameServerPlayerCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameServerPlayerCellPrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__gameServerPlayerCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameServerPlayerCellPrefab;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__gameServerPlayerCellPrefab(::UnityW<::GlobalNamespace::GameServerPlayerTableCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameServerPlayerCellPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::GameServerPlayerTableCell>& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__gameServerPlayerCellWithoutSongsPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameServerPlayerCellWithoutSongsPrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__gameServerPlayerCellWithoutSongsPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameServerPlayerCellWithoutSongsPrefab;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__gameServerPlayerCellWithoutSongsPrefab(::UnityW<::GlobalNamespace::GameServerPlayerTableCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameServerPlayerCellWithoutSongsPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::GameServerPlayerTableCell>& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__gameServerPlayerCellWithoutModifiersPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameServerPlayerCellWithoutModifiersPrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__gameServerPlayerCellWithoutModifiersPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameServerPlayerCellWithoutModifiersPrefab;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__gameServerPlayerCellWithoutModifiersPrefab(::UnityW<::GlobalNamespace::GameServerPlayerTableCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameServerPlayerCellWithoutModifiersPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__tableHeaderSongGo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableHeaderSongGo;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__tableHeaderSongGo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableHeaderSongGo;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__tableHeaderSongGo(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableHeaderSongGo = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__tableHeaderModifiersGo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableHeaderModifiersGo;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__tableHeaderModifiersGo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableHeaderModifiersGo;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__tableHeaderModifiersGo(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableHeaderModifiersGo = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::GlobalNamespace::IEntitlementModel*& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__entitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr ::GlobalNamespace::IEntitlementModel* const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__entitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entitlementModel = value;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapKey>*& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get_selectSuggestedLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectSuggestedLevelEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapKey>* const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get_selectSuggestedLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectSuggestedLevelEvent;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set_selectSuggestedLevelEvent(::System::Action_1<::GlobalNamespace::BeatmapKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectSuggestedLevelEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::GameplayModifiers*>*& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get_selectSuggestedGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectSuggestedGameplayModifiersEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::GameplayModifiers*>* const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get_selectSuggestedGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectSuggestedGameplayModifiersEvent;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectSuggestedGameplayModifiersEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get_kickPlayerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kickPlayerEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get_kickPlayerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kickPlayerEvent;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set_kickPlayerEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kickPlayerEvent = value;
}
constexpr bool& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr bool& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__hasKickPermissions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasKickPermissions;
}
constexpr bool const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__hasKickPermissions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasKickPermissions;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__hasKickPermissions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasKickPermissions = value;
}
constexpr bool& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__allowSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowSelection;
}
constexpr bool const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__allowSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowSelection;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__allowSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowSelection = value;
}
constexpr bool& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__showSongSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showSongSelection;
}
constexpr bool const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__showSongSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showSongSelection;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__showSongSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showSongSelection = value;
}
constexpr bool& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__showModifierSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showModifierSelection;
}
constexpr bool const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__showModifierSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showModifierSelection;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__showModifierSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showModifierSelection = value;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__selectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__selectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedPlayer;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__selectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedPlayer = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__sortedConnectedPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedConnectedPlayers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const&
GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__sortedConnectedPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedConnectedPlayers;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__sortedConnectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sortedConnectedPlayers = value;
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__lobbyPlayersDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayersDataModel;
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel* const& GlobalNamespace::GameServerPlayersTableView::__cordl_internal_get__lobbyPlayersDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayersDataModel;
}
constexpr void GlobalNamespace::GameServerPlayersTableView::__cordl_internal_set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyPlayersDataModel = value;
}
inline void GlobalNamespace::GameServerPlayersTableView::add_selectSuggestedLevelEvent(::System::Action_1<::GlobalNamespace::BeatmapKey>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                                                           { "add_selectSuggestedLevelEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayersTableView::remove_selectSuggestedLevelEvent(::System::Action_1<::GlobalNamespace::BeatmapKey>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                                                           { "remove_selectSuggestedLevelEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayersTableView::add_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                                                           { "add_selectSuggestedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::GameplayModifiers*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayersTableView::remove_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                                                           { "remove_selectSuggestedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::GameplayModifiers*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayersTableView::add_kickPlayerEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "add_kickPlayerEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayersTableView::remove_kickPlayerEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "remove_kickPlayerEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::GameServerPlayersTableView::CellSize(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline int32_t GlobalNamespace::GameServerPlayersTableView::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "NumberOfCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameServerPlayersTableView::get_currentCellId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "get_currentCellId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> GlobalNamespace::GameServerPlayersTableView::GetCurrentPrefab() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "GetCurrentPrefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameServerPlayerTableCell>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> GlobalNamespace::GameServerPlayersTableView::CellForIdx(::HMUI::TableView* tableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, tableView, idx);
}
inline bool GlobalNamespace::GameServerPlayersTableView::TryGetLobbyPlayerData(int32_t idx, ::by_ref<::GlobalNamespace::IConnectedPlayer*> player,
                                                                               ::by_ref<::GlobalNamespace::ILobbyPlayerData*> playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                          { "TryGetLobbyPlayerData",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::IConnectedPlayer*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ILobbyPlayerData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idx, player, playerData);
}
inline void GlobalNamespace::GameServerPlayersTableView::HandleCellUseBeatmap(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "HandleCellUseBeatmap", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline void GlobalNamespace::GameServerPlayersTableView::HandleCellUseModifiers(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "HandleCellUseModifiers", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline void GlobalNamespace::GameServerPlayersTableView::HandleCellKickPlayer(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "HandleCellKickPlayer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline void GlobalNamespace::GameServerPlayersTableView::SetData(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* sortedPlayers,
                                                                 ::GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel, bool hasKickPermissions, bool allowSelection, bool showSongSelection,
                                                                 bool showModifierSelection, bool clearSelection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(),
                                                                                         { "SetData",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::ILobbyPlayersDataModel*>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sortedPlayers, lobbyPlayersDataModel, hasKickPermissions, allowSelection, showSongSelection, showModifierSelection,
                                                   clearSelection);
}
inline void GlobalNamespace::GameServerPlayersTableView::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerPlayersTableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayersTableView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameServerPlayersTableView* GlobalNamespace::GameServerPlayersTableView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameServerPlayersTableView*>());
}
/// @brief Convert operator to "::HMUI::TableView_IDataSource"
constexpr GlobalNamespace::GameServerPlayersTableView::operator ::HMUI::TableView_IDataSource*() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::TableView_IDataSource"
constexpr ::HMUI::TableView_IDataSource* GlobalNamespace::GameServerPlayersTableView::i___HMUI__TableView_IDataSource() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerPlayersTableView::GameServerPlayersTableView() {}
