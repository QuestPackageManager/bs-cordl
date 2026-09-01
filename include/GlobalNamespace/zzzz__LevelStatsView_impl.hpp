#pragma once
// IWYU pragma private; include "GlobalNamespace\LevelStatsView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LevelStatsView_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLevelStatsData_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelStatsView.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelStatsView::*)()>(&::GlobalNamespace::LevelStatsView::Hide)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a24d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelStatsView*>(), { "Hide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelStatsView.ShowStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelStatsView::*)(::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::PlayerData*)>(
    &::GlobalNamespace::LevelStatsView::ShowStats)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a24d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelStatsView*>(),
                                                             { "ShowStats", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::PlayerData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelStatsView.ShowStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelStatsView::*)(::GlobalNamespace::PlayerLevelStatsData*)>(&::GlobalNamespace::LevelStatsView::ShowStats)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5a24dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelStatsView*>(), { "ShowStats", {}, { ::i2c::type_of<::GlobalNamespace::PlayerLevelStatsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelStatsView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelStatsView::*)()>(&::GlobalNamespace::LevelStatsView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a24f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelStatsView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelStatsView::__cordl_internal_get__highScoreText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highScoreText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelStatsView::__cordl_internal_get__highScoreText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highScoreText;
}
constexpr void GlobalNamespace::LevelStatsView::__cordl_internal_set__highScoreText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highScoreText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelStatsView::__cordl_internal_get__maxComboText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxComboText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelStatsView::__cordl_internal_get__maxComboText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxComboText;
}
constexpr void GlobalNamespace::LevelStatsView::__cordl_internal_set__maxComboText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxComboText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelStatsView::__cordl_internal_get__maxRankText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxRankText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelStatsView::__cordl_internal_get__maxRankText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxRankText;
}
constexpr void GlobalNamespace::LevelStatsView::__cordl_internal_set__maxRankText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxRankText = value;
}
inline void GlobalNamespace::LevelStatsView::Hide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelStatsView*>(), { "Hide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelStatsView::ShowStats(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelStatsView*>(),
                                                           { "ShowStats", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::PlayerData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey, playerData);
}
inline void GlobalNamespace::LevelStatsView::ShowStats(::GlobalNamespace::PlayerLevelStatsData* playerLevelStats) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelStatsView*>(), { "ShowStats", {}, { ::i2c::type_of<::GlobalNamespace::PlayerLevelStatsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerLevelStats);
}
inline void GlobalNamespace::LevelStatsView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelStatsView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelStatsView* GlobalNamespace::LevelStatsView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelStatsView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelStatsView::LevelStatsView() {}
