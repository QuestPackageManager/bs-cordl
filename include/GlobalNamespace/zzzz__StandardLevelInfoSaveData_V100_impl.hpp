#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelInfoSaveData_V100.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelInfoSaveData_V100_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelInfoSaveData_V100_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap.get_difficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(), { "get_difficulty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap.get_difficultyRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::get_difficultyRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(), { "get_difficultyRank", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap.get_beatmapFilename
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::get_beatmapFilename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(), { "get_beatmapFilename", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap.get_noteJumpMovementSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(), { "get_noteJumpMovementSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap.get_noteJumpStartBeatOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(), { "get_noteJumpStartBeatOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::*)(::StringW, int32_t, ::StringW, float_t, int32_t)>(
    &::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x374fba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_set__difficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulty = value;
}
constexpr int32_t& GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_get__difficultyRank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyRank;
}
constexpr int32_t const& GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_get__difficultyRank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyRank;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_set__difficultyRank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficultyRank = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_get__beatmapFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapFilename;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_get__beatmapFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapFilename;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_set__beatmapFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapFilename = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_get__noteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_get__noteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_set__noteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpMovementSpeed = value;
}
constexpr int32_t& GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_get__noteJumpStartBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr int32_t const& GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_get__noteJumpStartBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::__cordl_internal_set__noteJumpStartBeatOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpStartBeatOffset = value;
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::get_difficulty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(), { "get_difficulty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::get_difficultyRank() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(), { "get_difficultyRank", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::get_beatmapFilename() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(), { "get_beatmapFilename", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::get_noteJumpMovementSpeed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(), { "get_noteJumpMovementSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::get_noteJumpStartBeatOffset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(), { "get_noteJumpStartBeatOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::_ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed,
                                                                                     int32_t noteJumpStartBeatOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, difficultyName, difficultyRank, beatmapFilename, noteJumpMovementSpeed, noteJumpStartBeatOffset);
}
inline ::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*
GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::New_ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed,
                                                                            int32_t noteJumpStartBeatOffset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>(difficultyName, difficultyRank, beatmapFilename, noteJumpMovementSpeed,
                                                                                                                                noteJumpStartBeatOffset));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap::StandardLevelInfoSaveData_V100_DifficultyBeatmap() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_songName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_songName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_songName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_songSubName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_songSubName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_songSubName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_songAuthorName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_songAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_songAuthorName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_levelAuthorName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_levelAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_levelAuthorName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_beatsPerMinute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_beatsPerMinute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_songTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_songTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_songTimeOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_shuffle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_shuffle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_shuffle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_shufflePeriod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_shufflePeriod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_shufflePeriod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_previewStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_previewStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_previewStartTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_previewDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_previewDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_previewDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_songFilename
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_songFilename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_songFilename", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_coverImageFilename
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_V100::get_coverImageFilename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_coverImageFilename", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_environmentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::get_environmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_environmentName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100.get_difficultyBeatmaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*> (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_V100::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374fb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_difficultyBeatmaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_V100._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelInfoSaveData_V100::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_V100::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x374fb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__songName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__songName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__songName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songName = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__songSubName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSubName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__songSubName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSubName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__songSubName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songSubName = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__songAuthorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__songAuthorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__songAuthorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songAuthorName = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__levelAuthorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAuthorName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__levelAuthorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAuthorName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__levelAuthorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelAuthorName = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__beatsPerMinute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__beatsPerMinute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__beatsPerMinute(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatsPerMinute = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__shuffle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shuffle;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__shuffle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shuffle;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__shuffle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shuffle = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__shufflePeriod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shufflePeriod;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__shufflePeriod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shufflePeriod;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__shufflePeriod(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shufflePeriod = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__previewStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewStartTime;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__previewStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewStartTime;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__previewStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewStartTime = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__previewDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDuration;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__previewDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDuration;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__previewDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewDuration = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__songFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songFilename;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__songFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songFilename;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__songFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songFilename = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__coverImageFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImageFilename;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__coverImageFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImageFilename;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__coverImageFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coverImageFilename = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__environmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__environmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__environmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentName = value;
}
constexpr ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__difficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*> const& GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_get__difficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_V100::__cordl_internal_set__difficultyBeatmaps(::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficultyBeatmaps = value;
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_V100::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_V100::get_songName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_songName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_V100::get_songSubName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_songSubName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_V100::get_songAuthorName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_songAuthorName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_V100::get_levelAuthorName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_levelAuthorName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData_V100::get_beatsPerMinute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_beatsPerMinute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData_V100::get_songTimeOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_songTimeOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData_V100::get_shuffle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_shuffle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData_V100::get_shufflePeriod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_shufflePeriod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData_V100::get_previewStartTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_previewStartTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData_V100::get_previewDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_previewDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_V100::get_songFilename() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_songFilename", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_V100::get_coverImageFilename() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_coverImageFilename", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_V100::get_environmentName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_environmentName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*> GlobalNamespace::StandardLevelInfoSaveData_V100::get_difficultyBeatmaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { "get_difficultyBeatmaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelInfoSaveData_V100::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelInfoSaveData_V100*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelInfoSaveData_V100* GlobalNamespace::StandardLevelInfoSaveData_V100::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelInfoSaveData_V100*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelInfoSaveData_V100::StandardLevelInfoSaveData_V100() {}
