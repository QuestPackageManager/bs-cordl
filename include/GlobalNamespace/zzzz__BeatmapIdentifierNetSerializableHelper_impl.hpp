#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapIdentifierNetSerializableHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializableHelper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapIdentifierNetSerializableHelper.ToBeatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (*)(::GlobalNamespace::BeatmapKeyNetSerializable*)>(
    &::GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToBeatmapKey)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x371c52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>(),
                                                                                           { "ToBeatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapIdentifierNetSerializableHelper.ToIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKeyNetSerializable* (*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToIdentifier)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x371c5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>(), { "ToIdentifier", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToBeatmapKey(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>(),
                                                                                         { "ToBeatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(nullptr, ___internal_method, beatmapKeySerializable);
}
inline ::GlobalNamespace::BeatmapKeyNetSerializable* GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToIdentifier(::GlobalNamespace::BeatmapKey beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>(), { "ToIdentifier", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKeyNetSerializable*>(nullptr, ___internal_method, beatmapKey);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapIdentifierNetSerializableHelper::BeatmapIdentifierNetSerializableHelper() {}
