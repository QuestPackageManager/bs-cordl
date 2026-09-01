#pragma once
// IWYU pragma private; include "GlobalNamespace\LeaderboardViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LeaderboardViewController.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardViewController::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::LeaderboardViewController::SetData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardViewController*>(), { ::i2c::class_of<::GlobalNamespace::LeaderboardViewController*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardViewController.RefreshLevelStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardViewController::*)()>(&::GlobalNamespace::LeaderboardViewController::RefreshLevelStats)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5949a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardViewController*>(), { ::i2c::class_of<::GlobalNamespace::LeaderboardViewController*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardViewController::*)()>(&::GlobalNamespace::LeaderboardViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5949a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LeaderboardViewController::SetData(::by_ref<::GlobalNamespace::BeatmapKey> previewDifficultyBeatmap) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LeaderboardViewController*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previewDifficultyBeatmap);
}
inline void GlobalNamespace::LeaderboardViewController::RefreshLevelStats() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LeaderboardViewController*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LeaderboardViewController* GlobalNamespace::LeaderboardViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardViewController::LeaderboardViewController() {}
