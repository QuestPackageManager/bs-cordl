#pragma once
// IWYU pragma private; include "GlobalNamespace\SelectLevelPackDestination.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__SelectLevelPackDestination_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectLevelPackDestination._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectLevelPackDestination::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::SelectLevelPackDestination::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3707fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLevelPackDestination*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::SelectLevelPackDestination::__cordl_internal_get_beatmapLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelPack;
}
constexpr ::GlobalNamespace::BeatmapLevelPack* const& GlobalNamespace::SelectLevelPackDestination::__cordl_internal_get_beatmapLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelPack;
}
constexpr void GlobalNamespace::SelectLevelPackDestination::__cordl_internal_set_beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevelPack = value;
}
inline void GlobalNamespace::SelectLevelPackDestination::_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLevelPackDestination*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelPack);
}
inline ::GlobalNamespace::SelectLevelPackDestination* GlobalNamespace::SelectLevelPackDestination::New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectLevelPackDestination*>(beatmapLevelPack));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectLevelPackDestination::SelectLevelPackDestination() {}
