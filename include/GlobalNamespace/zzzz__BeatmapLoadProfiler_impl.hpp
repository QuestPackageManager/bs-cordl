#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLoadProfiler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLoadProfiler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLoadProfiler.BeginLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::BeatmapLoadProfiler::BeginLoad)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9f598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLoadProfiler*>(), { "BeginLoad", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLoadProfiler.MarkStage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::BeatmapLoadProfiler::MarkStage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9f59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLoadProfiler*>(), { "MarkStage", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLoadProfiler.MarkCacheOutcome
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, bool)>(&::GlobalNamespace::BeatmapLoadProfiler::MarkCacheOutcome)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9f5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLoadProfiler*>(), { "MarkCacheOutcome", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLoadProfiler.EndLoadAndLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::BeatmapLoadProfiler::EndLoadAndLog)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9f5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLoadProfiler*>(), { "EndLoadAndLog", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLoadProfiler::BeginLoad(::StringW levelIdentity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLoadProfiler*>(), { "BeginLoad", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, levelIdentity);
}
inline void GlobalNamespace::BeatmapLoadProfiler::MarkStage(::StringW stage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLoadProfiler*>(), { "MarkStage", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stage);
}
inline void GlobalNamespace::BeatmapLoadProfiler::MarkCacheOutcome(bool wasHit, bool wasTaskAlreadyComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLoadProfiler*>(), { "MarkCacheOutcome", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wasHit, wasTaskAlreadyComplete);
}
inline void GlobalNamespace::BeatmapLoadProfiler::EndLoadAndLog() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLoadProfiler*>(), { "EndLoadAndLog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLoadProfiler::BeatmapLoadProfiler() {}
