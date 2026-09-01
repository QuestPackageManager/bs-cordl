#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDifficultyMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMethods_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMethods.Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapDifficultyMethods::Name)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3720bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMethods*>(), { "Name", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMethods.ShortName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapDifficultyMethods::ShortName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3720c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMethods*>(), { "ShortName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMethods.DefaultRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapDifficultyMethods::DefaultRating)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3720d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMethods*>(), { "DefaultRating", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMethods.NoteJumpMovementSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::BeatmapDifficulty, float_t, bool)>(&::GlobalNamespace::BeatmapDifficultyMethods::NoteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3720d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMethods*>(),
                                                { "NoteJumpMovementSpeed", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMethods.DefaultNoteJumpMovementSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapDifficultyMethods::DefaultNoteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3720db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMethods*>(),
                                                                                           { "DefaultNoteJumpMovementSpeed", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::BeatmapDifficultyMethods::Name(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMethods*>(), { "Name", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, difficulty);
}
inline ::StringW GlobalNamespace::BeatmapDifficultyMethods::ShortName(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMethods*>(), { "ShortName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, difficulty);
}
inline int32_t GlobalNamespace::BeatmapDifficultyMethods::DefaultRating(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMethods*>(), { "DefaultRating", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, difficulty);
}
inline float_t GlobalNamespace::BeatmapDifficultyMethods::NoteJumpMovementSpeed(::GlobalNamespace::BeatmapDifficulty difficulty, float_t noteJumpMovementSpeed, bool fastNotes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMethods*>(),
                                              { "NoteJumpMovementSpeed", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, difficulty, noteJumpMovementSpeed, fastNotes);
}
inline float_t GlobalNamespace::BeatmapDifficultyMethods::DefaultNoteJumpMovementSpeed(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyMethods*>(),
                                                                                         { "DefaultNoteJumpMovementSpeed", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, difficulty);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDifficultyMethods::BeatmapDifficultyMethods() {}
