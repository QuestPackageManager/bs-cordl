#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelOrPackIdFilterExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelOrPackIdFilterExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelOrPackIdFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions.ShouldAllowPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevelOrPackIdFilter)>(&::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::ShouldAllowPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3749e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*>(),
                                                                                           { "ShouldAllowPacks", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelOrPackIdFilter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions.ShouldAllowLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevelOrPackIdFilter)>(&::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::ShouldAllowLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3749ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*>(),
                                                                                           { "ShouldAllowLevels", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelOrPackIdFilter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions.ShouldAllowEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevelOrPackIdFilter)>(&::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::ShouldAllowEmpty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3749eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*>(),
                                                                                           { "ShouldAllowEmpty", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelOrPackIdFilter>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::ShouldAllowPacks(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*>(),
                                                                                         { "ShouldAllowPacks", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelOrPackIdFilter>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filter);
}
inline bool GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::ShouldAllowLevels(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*>(),
                                                                                         { "ShouldAllowLevels", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelOrPackIdFilter>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filter);
}
inline bool GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::ShouldAllowEmpty(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions*>(),
                                                                                         { "ShouldAllowEmpty", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelOrPackIdFilter>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filter);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilterExtensions::BeatmapLevelOrPackIdFilterExtensions() {}
