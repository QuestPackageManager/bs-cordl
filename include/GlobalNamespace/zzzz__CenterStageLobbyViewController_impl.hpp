#pragma once
// IWYU pragma private; include "GlobalNamespace\CenterStageLobbyViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__CenterStageLobbyViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CenterStageLobbyViewController.SetLevelGameplaySetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageLobbyViewController::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(
    &::GlobalNamespace::CenterStageLobbyViewController::SetLevelGameplaySetupData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x596081c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageLobbyViewController*>(),
                                                                                           { "SetLevelGameplaySetupData", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageLobbyViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageLobbyViewController::*)()>(&::GlobalNamespace::CenterStageLobbyViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596096c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageLobbyViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView>& GlobalNamespace::CenterStageLobbyViewController::__cordl_internal_get__beatmapSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSelectionView;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView> const& GlobalNamespace::CenterStageLobbyViewController::__cordl_internal_get__beatmapSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSelectionView;
}
constexpr void GlobalNamespace::CenterStageLobbyViewController::__cordl_internal_set__beatmapSelectionView(::UnityW<::GlobalNamespace::BeatmapSelectionView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapSelectionView = value;
}
constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView>& GlobalNamespace::CenterStageLobbyViewController::__cordl_internal_get__modifiersSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersSelectionView;
}
constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView> const& GlobalNamespace::CenterStageLobbyViewController::__cordl_internal_get__modifiersSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersSelectionView;
}
constexpr void GlobalNamespace::CenterStageLobbyViewController::__cordl_internal_set__modifiersSelectionView(::UnityW<::GlobalNamespace::ModifiersSelectionView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiersSelectionView = value;
}
inline void GlobalNamespace::CenterStageLobbyViewController::SetLevelGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageLobbyViewController*>(),
                                                                                         { "SetLevelGameplaySetupData", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelGameplaySetupData);
}
inline void GlobalNamespace::CenterStageLobbyViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageLobbyViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CenterStageLobbyViewController* GlobalNamespace::CenterStageLobbyViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CenterStageLobbyViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CenterStageLobbyViewController::CenterStageLobbyViewController() {}
