#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerStatisticsViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerStatisticsViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAllOverallStatsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStatisticsViewController_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::*)()>(
    &::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59667a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::*)(::StringW)>(
    &::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::set_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59667ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData.get_playerOverallStatsDataFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>* (
    ::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::*)()>(&::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::get_playerOverallStatsDataFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59667b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>(), { "get_playerOverallStatsDataFunc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData.set_playerOverallStatsDataFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::*)(
    ::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>*)>(&::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::set_playerOverallStatsDataFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59667bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>(),
                                         { "set_playerOverallStatsDataFunc", {}, { ::i2c::type_of<::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::*)(
    ::StringW, ::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>*)>(&::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5966150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>(),
                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>*>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>* GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::get_playerOverallStatsDataFunc() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>(), { "get_playerOverallStatsDataFunc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>*>(*this, ___internal_method);
}
inline void
GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::set_playerOverallStatsDataFunc(::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>(),
                                       { "set_playerOverallStatsDataFunc", {}, { ::i2c::type_of<::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::_ctor(::StringW text,
                                                                                  ::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>* playerOverallStatsDataFunc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>(),
                                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, playerOverallStatsDataFunc);
}
// Ctor Parameters [CppParam { name: "_text_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_playerOverallStatsDataFunc_k__BackingField", ty:
// "::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::PlayerStatisticsViewController_StatsScopeData(
    ::StringW _text_k__BackingField, ::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>* _playerOverallStatsDataFunc_k__BackingField) noexcept {
  this->_text_k__BackingField = _text_k__BackingField;
  this->_playerOverallStatsDataFunc_k__BackingField = _playerOverallStatsDataFunc_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData::PlayerStatisticsViewController_StatsScopeData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerStatisticsViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::PlayerStatisticsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x5965b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { ::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerStatisticsViewController::*)(bool, bool)>(&::GlobalNamespace::PlayerStatisticsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59665c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { ::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController.UpdateView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerStatisticsViewController::*)(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*)>(
    &::GlobalNamespace::PlayerStatisticsViewController::UpdateView)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x5966158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(),
                                                             { "UpdateView", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController.HandleStatsScopeSegmentedControlDidSelectCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerStatisticsViewController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::PlayerStatisticsViewController::HandleStatsScopeSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5966674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(),
                                                             { "HandleStatsScopeSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerStatisticsViewController::*)()>(&::GlobalNamespace::PlayerStatisticsViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59666c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController._DidActivate_b__19_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (::GlobalNamespace::PlayerStatisticsViewController::*)()>(
    &::GlobalNamespace::PlayerStatisticsViewController::_DidActivate_b__19_1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59666c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { "<DidActivate>b__19_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController._DidActivate_b__19_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (::GlobalNamespace::PlayerStatisticsViewController::*)()>(
    &::GlobalNamespace::PlayerStatisticsViewController::_DidActivate_b__19_2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59666f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { "<DidActivate>b__19_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController._DidActivate_b__19_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (::GlobalNamespace::PlayerStatisticsViewController::*)()>(
    &::GlobalNamespace::PlayerStatisticsViewController::_DidActivate_b__19_3)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5966720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { "<DidActivate>b__19_3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController._DidActivate_b__19_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (::GlobalNamespace::PlayerStatisticsViewController::*)()>(
    &::GlobalNamespace::PlayerStatisticsViewController::_DidActivate_b__19_4)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x596674c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { "<DidActivate>b__19_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStatisticsViewController._DidActivate_b__19_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (::GlobalNamespace::PlayerStatisticsViewController::*)()>(
    &::GlobalNamespace::PlayerStatisticsViewController::_DidActivate_b__19_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5966778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { "<DidActivate>b__19_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TextSegmentedControl>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__statsScopeSegmentedControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statsScopeSegmentedControl;
}
constexpr ::UnityW<::HMUI::TextSegmentedControl> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__statsScopeSegmentedControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statsScopeSegmentedControl;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__statsScopeSegmentedControl(::UnityW<::HMUI::TextSegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____statsScopeSegmentedControl = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__playedLevelsCountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playedLevelsCountText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__playedLevelsCountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playedLevelsCountText;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__playedLevelsCountText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playedLevelsCountText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__clearedLevelsCountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelsCountText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__clearedLevelsCountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelsCountText;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__clearedLevelsCountText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearedLevelsCountText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__failedLevelsCountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedLevelsCountText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__failedLevelsCountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedLevelsCountText;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__failedLevelsCountText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failedLevelsCountText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__timePlayedText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timePlayedText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__timePlayedText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timePlayedText;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__timePlayedText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timePlayedText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__goodCutsCountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCutsCountText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__goodCutsCountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCutsCountText;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__goodCutsCountText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____goodCutsCountText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__badCutsCountCountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutsCountCountText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__badCutsCountCountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutsCountCountText;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__badCutsCountCountText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badCutsCountCountText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__missedCountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedCountText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__missedCountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedCountText;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__missedCountText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missedCountText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__totalScoreText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalScoreText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__totalScoreText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalScoreText;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__totalScoreText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalScoreText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__fullComboCountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullComboCountText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__fullComboCountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullComboCountText;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__fullComboCountText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullComboCountText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__handDistanceTravelledText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handDistanceTravelledText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__handDistanceTravelledText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handDistanceTravelledText;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__handDistanceTravelledText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handDistanceTravelledText = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::ArrayW<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__statsScopeDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statsScopeDatas;
}
constexpr ::ArrayW<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData> const& GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_get__statsScopeDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statsScopeDatas;
}
constexpr void GlobalNamespace::PlayerStatisticsViewController::__cordl_internal_set__statsScopeDatas(::ArrayW<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____statsScopeDatas = value;
}
inline void GlobalNamespace::PlayerStatisticsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::PlayerStatisticsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::PlayerStatisticsViewController::UpdateView(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* playerOverallStatsData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(),
                                                           { "UpdateView", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerOverallStatsData);
}
inline void GlobalNamespace::PlayerStatisticsViewController::HandleStatsScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(),
                                                           { "HandleStatsScopeSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentedControl, cellIdx);
}
inline void GlobalNamespace::PlayerStatisticsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* GlobalNamespace::PlayerStatisticsViewController::_DidActivate_b__19_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { "<DidActivate>b__19_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* GlobalNamespace::PlayerStatisticsViewController::_DidActivate_b__19_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { "<DidActivate>b__19_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* GlobalNamespace::PlayerStatisticsViewController::_DidActivate_b__19_3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { "<DidActivate>b__19_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* GlobalNamespace::PlayerStatisticsViewController::_DidActivate_b__19_4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { "<DidActivate>b__19_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* GlobalNamespace::PlayerStatisticsViewController::_DidActivate_b__19_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStatisticsViewController*>(), { "<DidActivate>b__19_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerStatisticsViewController* GlobalNamespace::PlayerStatisticsViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerStatisticsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerStatisticsViewController::PlayerStatisticsViewController() {}
