#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalPlayerInGameMenuInitData.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalPlayerInGameMenuInitData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalPlayerInGameMenuInitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalPlayerInGameMenuInitData::*)(::by_ref<::GlobalNamespace::BeatmapKey>, bool)>(
    &::GlobalNamespace::LocalPlayerInGameMenuInitData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59a99ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalPlayerInGameMenuInitData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::LocalPlayerInGameMenuInitData::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::LocalPlayerInGameMenuInitData::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::LocalPlayerInGameMenuInitData::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr bool& GlobalNamespace::LocalPlayerInGameMenuInitData::__cordl_internal_get_hasSong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSong;
}
constexpr bool const& GlobalNamespace::LocalPlayerInGameMenuInitData::__cordl_internal_get_hasSong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSong;
}
constexpr void GlobalNamespace::LocalPlayerInGameMenuInitData::__cordl_internal_set_hasSong(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasSong = value;
}
inline void GlobalNamespace::LocalPlayerInGameMenuInitData::_ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, bool hasSong) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalPlayerInGameMenuInitData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey, hasSong);
}
inline ::GlobalNamespace::LocalPlayerInGameMenuInitData* GlobalNamespace::LocalPlayerInGameMenuInitData::New_ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, bool hasSong) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalPlayerInGameMenuInitData*>(beatmapKey, hasSong));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalPlayerInGameMenuInitData::LocalPlayerInGameMenuInitData() {}
