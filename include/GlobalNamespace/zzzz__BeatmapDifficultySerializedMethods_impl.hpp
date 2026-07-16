#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDifficultySerializedMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultySerializedMethods_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySerializedMethods.SerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapDifficultySerializedMethods::SerializedName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3258aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySerializedMethods*>(),
                                                                                           { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySerializedMethods.BeatmapDifficultyFromSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::BeatmapDifficulty>)>(
    &::GlobalNamespace::BeatmapDifficultySerializedMethods::BeatmapDifficultyFromSerializedName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3258bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySerializedMethods*>(),
                                                { "BeatmapDifficultyFromSerializedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::BeatmapDifficultySerializedMethods::SerializedName(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySerializedMethods*>(),
                                                                                         { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, difficulty);
}
inline bool GlobalNamespace::BeatmapDifficultySerializedMethods::BeatmapDifficultyFromSerializedName(::StringW name, ::by_ref<::GlobalNamespace::BeatmapDifficulty> difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySerializedMethods*>(),
                                              { "BeatmapDifficultyFromSerializedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, difficulty);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDifficultySerializedMethods::BeatmapDifficultySerializedMethods() {}
