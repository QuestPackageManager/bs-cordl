#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDifficultyMaskExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMaskExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMaskExtensions.ToMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficultyMask (*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::BeatmapDifficultyMaskExtensions::ToMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32592d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(), { "ToMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMaskExtensions.FromMaskMaybe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> (*)(::GlobalNamespace::BeatmapDifficultyMask)>(
    &::GlobalNamespace::BeatmapDifficultyMaskExtensions::FromMaskMaybe)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32592e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                                                                           { "FromMaskMaybe", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMaskExtensions.FromMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficulty (*)(::GlobalNamespace::BeatmapDifficultyMask)>(
    &::GlobalNamespace::BeatmapDifficultyMaskExtensions::FromMask)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3259390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(), { "FromMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMaskExtensions.LocalizedKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapDifficultyMask)>(&::GlobalNamespace::BeatmapDifficultyMaskExtensions::LocalizedKey)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x32593d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                                                                           { "LocalizedKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMaskExtensions.ShortLocalizedKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapDifficultyMask)>(&::GlobalNamespace::BeatmapDifficultyMaskExtensions::ShortLocalizedKey)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x32594e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                                                                           { "ShortLocalizedKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMaskExtensions.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::BeatmapDifficultyMaskExtensions::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32595f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                                { "Contains", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMaskExtensions.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::BeatmapDifficultyMask)>(
    &::GlobalNamespace::BeatmapDifficultyMaskExtensions::Contains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3259608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                                { "Contains", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMaskExtensions.DifferenceFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::BeatmapDifficultyMask)>(
    &::GlobalNamespace::BeatmapDifficultyMaskExtensions::DifferenceFrom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3259618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                                { "DifferenceFrom", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMaskExtensions.ToHexString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapDifficultyMask)>(&::GlobalNamespace::BeatmapDifficultyMaskExtensions::ToHexString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3259648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                                                                           { "ToHexString", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::BeatmapDifficultyMaskExtensions::ToMask(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(), { "ToMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficultyMask>(nullptr, ___internal_method, difficulty);
}
inline ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> GlobalNamespace::BeatmapDifficultyMaskExtensions::FromMaskMaybe(::GlobalNamespace::BeatmapDifficultyMask mask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                                                                         { "FromMaskMaybe", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty>>(nullptr, ___internal_method, mask);
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::BeatmapDifficultyMaskExtensions::FromMask(::GlobalNamespace::BeatmapDifficultyMask mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(), { "FromMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty>(nullptr, ___internal_method, mask);
}
inline ::StringW GlobalNamespace::BeatmapDifficultyMaskExtensions::LocalizedKey(::GlobalNamespace::BeatmapDifficultyMask mask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                                                                         { "LocalizedKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mask);
}
inline ::StringW GlobalNamespace::BeatmapDifficultyMaskExtensions::ShortLocalizedKey(::GlobalNamespace::BeatmapDifficultyMask mask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                                                                         { "ShortLocalizedKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mask);
}
inline bool GlobalNamespace::BeatmapDifficultyMaskExtensions::Contains(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                              { "Contains", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mask, difficulty);
}
inline bool GlobalNamespace::BeatmapDifficultyMaskExtensions::Contains(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficultyMask other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                              { "Contains", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mask, other);
}
inline int32_t GlobalNamespace::BeatmapDifficultyMaskExtensions::DifferenceFrom(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficultyMask other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(),
                                              { "DifferenceFrom", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mask, other);
}
inline ::StringW GlobalNamespace::BeatmapDifficultyMaskExtensions::ToHexString(::GlobalNamespace::BeatmapDifficultyMask mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMaskExtensions*>(), { "ToHexString", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mask);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDifficultyMaskExtensions::BeatmapDifficultyMaskExtensions() {}
