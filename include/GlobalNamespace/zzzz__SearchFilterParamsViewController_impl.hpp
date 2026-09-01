#pragma once
// IWYU pragma private; include "GlobalNamespace\SearchFilterParamsViewController.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__SearchFilterParamsViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicsDropdown_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyDropdown_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityDropdown_def.hpp"
#include "GlobalNamespace/zzzz__SongPacksDropdown_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SearchFilterParamsViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SearchFilterParamsViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>*)>(&::GlobalNamespace::SearchFilterParamsViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59575d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(),
                            { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SearchFilterParamsViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SearchFilterParamsViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>*)>(&::GlobalNamespace::SearchFilterParamsViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5957694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(),
                         { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SearchFilterParamsViewController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SearchFilterParamsViewController::*)(
    ::by_ref<::GlobalNamespace::LevelFilter>, ::ArrayW<::GlobalNamespace::BeatmapCharacteristic>)>(&::GlobalNamespace::SearchFilterParamsViewController::Setup)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5957754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(),
                                         { "Setup", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::LevelFilter>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SearchFilterParamsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SearchFilterParamsViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::SearchFilterParamsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5957b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SearchFilterParamsViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SearchFilterParamsViewController::*)(bool, bool)>(
    &::GlobalNamespace::SearchFilterParamsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5957e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SearchFilterParamsViewController.OkButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SearchFilterParamsViewController::*)()>(&::GlobalNamespace::SearchFilterParamsViewController::OkButtonPressed)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5958068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), { "OkButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SearchFilterParamsViewController.MinBpmControllerValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SearchFilterParamsViewController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(
    &::GlobalNamespace::SearchFilterParamsViewController::MinBpmControllerValueDidChange)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59582cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(),
                                                { "MinBpmControllerValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SearchFilterParamsViewController.MaxBpmControllerValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SearchFilterParamsViewController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(
    &::GlobalNamespace::SearchFilterParamsViewController::MaxBpmControllerValueDidChange)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5958390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(),
                                                { "MaxBpmControllerValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SearchFilterParamsViewController.HandleFilterByOwnedValueValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SearchFilterParamsViewController::*)(bool)>(
    &::GlobalNamespace::SearchFilterParamsViewController::HandleFilterByOwnedValueValueChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5958454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), { "HandleFilterByOwnedValueValueChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SearchFilterParamsViewController.HandleFilterByNotOwnedValueValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SearchFilterParamsViewController::*)(bool)>(
    &::GlobalNamespace::SearchFilterParamsViewController::HandleFilterByNotOwnedValueValueChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5958478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), { "HandleFilterByNotOwnedValueValueChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SearchFilterParamsViewController.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SearchFilterParamsViewController::*)(::by_ref<::GlobalNamespace::LevelFilter>)>(
    &::GlobalNamespace::SearchFilterParamsViewController::Refresh)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5957794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), { "Refresh", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::LevelFilter>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SearchFilterParamsViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SearchFilterParamsViewController::*)()>(&::GlobalNamespace::SearchFilterParamsViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595849c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByOwnedToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByOwnedToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByOwnedToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByOwnedToggle;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__filterByOwnedToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterByOwnedToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByNotOwnedToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByNotOwnedToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByNotOwnedToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByNotOwnedToggle;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__filterByNotOwnedToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterByNotOwnedToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByCharacteristicToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByCharacteristicToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByCharacteristicToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByCharacteristicToggle;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__filterByCharacteristicToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterByCharacteristicToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicsDropdown>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__beatmapCharacteristicsDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicsDropdown;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicsDropdown> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__beatmapCharacteristicsDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicsDropdown;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__beatmapCharacteristicsDropdown(::UnityW<::GlobalNamespace::BeatmapCharacteristicsDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicsDropdown = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByDifficultyToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByDifficultyToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByDifficultyToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByDifficultyToggle;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__filterByDifficultyToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterByDifficultyToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__beatmapDifficultyDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficultyDropdown;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__beatmapDifficultyDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficultyDropdown;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__beatmapDifficultyDropdown(::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDifficultyDropdown = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterBySongPacksToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterBySongPacksToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterBySongPacksToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterBySongPacksToggle;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__filterBySongPacksToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterBySongPacksToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::SongPacksDropdown>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__songPacksDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPacksDropdown;
}
constexpr ::UnityW<::GlobalNamespace::SongPacksDropdown> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__songPacksDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPacksDropdown;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__songPacksDropdown(::UnityW<::GlobalNamespace::SongPacksDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPacksDropdown = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByNotPlayedYetToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByNotPlayedYetToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByNotPlayedYetToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByNotPlayedYetToggle;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__filterByNotPlayedYetToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterByNotPlayedYetToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByMinBpmToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByMinBpmToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByMinBpmToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByMinBpmToggle;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__filterByMinBpmToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterByMinBpmToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__minBpmController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minBpmController;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__minBpmController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minBpmController;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__minBpmController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minBpmController = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByMaxBpmToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByMaxBpmToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterByMaxBpmToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterByMaxBpmToggle;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__filterByMaxBpmToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterByMaxBpmToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__maxBpmController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxBpmController;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__maxBpmController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxBpmController;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__maxBpmController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxBpmController = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerSensitivityDropdown>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterBySensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterBySensitivity;
}
constexpr ::UnityW<::GlobalNamespace::PlayerSensitivityDropdown> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__filterBySensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterBySensitivity;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__filterBySensitivity(::UnityW<::GlobalNamespace::PlayerSensitivityDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterBySensitivity = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__forcedSensitivityOptionNotice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forcedSensitivityOptionNotice;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__forcedSensitivityOptionNotice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forcedSensitivityOptionNotice;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__forcedSensitivityOptionNotice(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forcedSensitivityOptionNotice = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__okButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__okButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____okButton = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::LevelFilter& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__currentSearchFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSearchFilter;
}
constexpr ::GlobalNamespace::LevelFilter const& GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get__currentSearchFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSearchFilter;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set__currentSearchFilter(::GlobalNamespace::LevelFilter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentSearchFilter = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>*&
GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>* const&
GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::SearchFilterParamsViewController::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void
GlobalNamespace::SearchFilterParamsViewController::add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(),
                          { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::SearchFilterParamsViewController::remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(),
                          { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SearchFilterParamsViewController::Setup(::by_ref<::GlobalNamespace::LevelFilter> filter, ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> notAllowedCharacteristics) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(),
                                              { "Setup", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::LevelFilter>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter, notAllowedCharacteristics);
}
inline void GlobalNamespace::SearchFilterParamsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SearchFilterParamsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::SearchFilterParamsViewController::OkButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), { "OkButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SearchFilterParamsViewController::MinBpmControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* minBpmController, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(),
                                              { "MinBpmControllerValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minBpmController, value);
}
inline void GlobalNamespace::SearchFilterParamsViewController::MaxBpmControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* maxBpmController, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(),
                                              { "MaxBpmControllerValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxBpmController, value);
}
inline void GlobalNamespace::SearchFilterParamsViewController::HandleFilterByOwnedValueValueChanged(bool isOn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), { "HandleFilterByOwnedValueValueChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void GlobalNamespace::SearchFilterParamsViewController::HandleFilterByNotOwnedValueValueChanged(bool isOn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), { "HandleFilterByNotOwnedValueValueChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void GlobalNamespace::SearchFilterParamsViewController::Refresh(::by_ref<::GlobalNamespace::LevelFilter> filter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), { "Refresh", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::LevelFilter>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter);
}
inline void GlobalNamespace::SearchFilterParamsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SearchFilterParamsViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SearchFilterParamsViewController* GlobalNamespace::SearchFilterParamsViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SearchFilterParamsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SearchFilterParamsViewController::SearchFilterParamsViewController() {}
