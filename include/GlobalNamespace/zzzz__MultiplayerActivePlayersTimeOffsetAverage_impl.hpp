#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerActivePlayersTimeOffsetAverage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActivePlayersTimeOffsetAverage_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerObservable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage.get_offsetSyncTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::*)()>(
    &::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_offsetSyncTime)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x59c8e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>(), { "get_offsetSyncTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage.get_isFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::*)()>(
    &::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_isFailed)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x59c90d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>(), { "get_isFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::*)()>(
    &::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c9224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_get__lastReturnedOffsetSyncTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReturnedOffsetSyncTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_get__lastReturnedOffsetSyncTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReturnedOffsetSyncTime;
}
constexpr void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_set__lastReturnedOffsetSyncTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastReturnedOffsetSyncTime = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_get__timeOfLastValidReturnedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOfLastValidReturnedTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_get__timeOfLastValidReturnedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOfLastValidReturnedTime;
}
constexpr void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__cordl_internal_set__timeOfLastValidReturnedTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeOfLastValidReturnedTime = value;
}
inline int64_t GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_offsetSyncTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>(), { "get_offsetSyncTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_isFailed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>(), { "get_isFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*>());
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerObservable"
constexpr GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::operator ::GlobalNamespace::IMultiplayerObservable*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerObservable"
constexpr ::GlobalNamespace::IMultiplayerObservable* GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::i___GlobalNamespace__IMultiplayerObservable() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerObservable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::MultiplayerActivePlayersTimeOffsetAverage() {}
