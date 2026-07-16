#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapSelectionView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapSelectionView.SetBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapSelectionView::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapSelectionView::SetBeatmap)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5969390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSelectionView*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapSelectionView*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapSelectionView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapSelectionView::*)()>(&::GlobalNamespace::BeatmapSelectionView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5969434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSelectionView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LevelBar>& GlobalNamespace::BeatmapSelectionView::__cordl_internal_get__levelBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr ::UnityW<::GlobalNamespace::LevelBar> const& GlobalNamespace::BeatmapSelectionView::__cordl_internal_get__levelBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr void GlobalNamespace::BeatmapSelectionView::__cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelBar = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::BeatmapSelectionView::__cordl_internal_get__noLevelText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noLevelText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::BeatmapSelectionView::__cordl_internal_get__noLevelText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noLevelText;
}
constexpr void GlobalNamespace::BeatmapSelectionView::__cordl_internal_set__noLevelText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noLevelText = value;
}
inline void GlobalNamespace::BeatmapSelectionView::SetBeatmap(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapSelectionView*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey);
}
inline void GlobalNamespace::BeatmapSelectionView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapSelectionView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapSelectionView* GlobalNamespace::BeatmapSelectionView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapSelectionView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapSelectionView::BeatmapSelectionView() {}
