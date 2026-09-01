#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLeaderboardPanelController.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeaderboardPanelItem_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeaderboardPanelController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&::GlobalNamespace::MultiplayerLeaderboardPanelController::Start)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59ac530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLeaderboardPanelController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&::GlobalNamespace::MultiplayerLeaderboardPanelController::Update)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x59ac5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLeaderboardPanelController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&::GlobalNamespace::MultiplayerLeaderboardPanelController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59acab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLeaderboardPanelController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>>& GlobalNamespace::MultiplayerLeaderboardPanelController::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>> const& GlobalNamespace::MultiplayerLeaderboardPanelController::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelController::__cordl_internal_set__items(::ArrayW<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____items = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& GlobalNamespace::MultiplayerLeaderboardPanelController::__cordl_internal_get__scoreProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& GlobalNamespace::MultiplayerLeaderboardPanelController::__cordl_internal_get__scoreProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelController::__cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreProvider = value;
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLeaderboardPanelController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLeaderboardPanelController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLeaderboardPanelController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLeaderboardPanelController* GlobalNamespace::MultiplayerLeaderboardPanelController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLeaderboardPanelController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLeaderboardPanelController::MultiplayerLeaderboardPanelController() {}
