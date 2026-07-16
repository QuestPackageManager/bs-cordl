#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardsSettingsSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsSettingsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsSettingsSO.get_maxNumberOfScoresInLeaderboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsSettingsSO::*)()>(
    &::GlobalNamespace::LocalLeaderboardsSettingsSO::get_maxNumberOfScoresInLeaderboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3756f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsSettingsSO*>(), { "get_maxNumberOfScoresInLeaderboard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsSettingsSO.set_maxNumberOfScoresInLeaderboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsSettingsSO::*)(int32_t)>(
    &::GlobalNamespace::LocalLeaderboardsSettingsSO::set_maxNumberOfScoresInLeaderboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3756f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsSettingsSO*>(), { "set_maxNumberOfScoresInLeaderboard", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsSettingsSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsSettingsSO::*)()>(&::GlobalNamespace::LocalLeaderboardsSettingsSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3756fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsSettingsSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LocalLeaderboardsSettingsSO::__cordl_internal_get__maxNumberOfScoresInLeaderboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfScoresInLeaderboard;
}
constexpr int32_t const& GlobalNamespace::LocalLeaderboardsSettingsSO::__cordl_internal_get__maxNumberOfScoresInLeaderboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfScoresInLeaderboard;
}
constexpr void GlobalNamespace::LocalLeaderboardsSettingsSO::__cordl_internal_set__maxNumberOfScoresInLeaderboard(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxNumberOfScoresInLeaderboard = value;
}
inline int32_t GlobalNamespace::LocalLeaderboardsSettingsSO::get_maxNumberOfScoresInLeaderboard() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsSettingsSO*>(), { "get_maxNumberOfScoresInLeaderboard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsSettingsSO::set_maxNumberOfScoresInLeaderboard(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsSettingsSO*>(), { "set_maxNumberOfScoresInLeaderboard", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalLeaderboardsSettingsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsSettingsSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardsSettingsSO* GlobalNamespace::LocalLeaderboardsSettingsSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalLeaderboardsSettingsSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsSettingsSO::LocalLeaderboardsSettingsSO() {}
