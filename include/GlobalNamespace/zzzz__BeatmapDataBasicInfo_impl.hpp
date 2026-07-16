#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataBasicInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataBasicInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataBasicInfo.get_numberOfLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDataBasicInfo::*)()>(&::GlobalNamespace::BeatmapDataBasicInfo::get_numberOfLines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370e228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataBasicInfo*>(), { "get_numberOfLines", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataBasicInfo.get_cuttableNotesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDataBasicInfo::*)()>(&::GlobalNamespace::BeatmapDataBasicInfo::get_cuttableNotesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370e230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataBasicInfo*>(), { "get_cuttableNotesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataBasicInfo.get_cuttableScoringObjectsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDataBasicInfo::*)()>(&::GlobalNamespace::BeatmapDataBasicInfo::get_cuttableScoringObjectsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370e238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataBasicInfo*>(), { "get_cuttableScoringObjectsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataBasicInfo.get_obstaclesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDataBasicInfo::*)()>(&::GlobalNamespace::BeatmapDataBasicInfo::get_obstaclesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370e240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataBasicInfo*>(), { "get_obstaclesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataBasicInfo.get_bombsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDataBasicInfo::*)()>(&::GlobalNamespace::BeatmapDataBasicInfo::get_bombsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370e248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataBasicInfo*>(), { "get_bombsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataBasicInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataBasicInfo::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::GlobalNamespace::BeatmapDataBasicInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x370e250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataBasicInfo*>(),
                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_get__numberOfLines_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfLines_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_get__numberOfLines_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfLines_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_set__numberOfLines_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfLines_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_get__cuttableNotesCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableNotesCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_get__cuttableNotesCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableNotesCount_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_set__cuttableNotesCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cuttableNotesCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_get__cuttableScoringObjectsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableScoringObjectsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_get__cuttableScoringObjectsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableScoringObjectsCount_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_set__cuttableScoringObjectsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cuttableScoringObjectsCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_get__obstaclesCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_get__obstaclesCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesCount_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_set__obstaclesCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstaclesCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_get__bombsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_get__bombsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombsCount_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDataBasicInfo::__cordl_internal_set__bombsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombsCount_k__BackingField = value;
}
inline int32_t GlobalNamespace::BeatmapDataBasicInfo::get_numberOfLines() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataBasicInfo*>(), { "get_numberOfLines", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataBasicInfo::get_cuttableNotesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataBasicInfo*>(), { "get_cuttableNotesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataBasicInfo::get_cuttableScoringObjectsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataBasicInfo*>(), { "get_cuttableScoringObjectsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataBasicInfo::get_obstaclesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataBasicInfo*>(), { "get_obstaclesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataBasicInfo::get_bombsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataBasicInfo*>(), { "get_bombsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataBasicInfo::_ctor(int32_t numberOfLines, int32_t cuttableNotesCount, int32_t cuttableScoringObjectsCount, int32_t obstaclesCount, int32_t bombsCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataBasicInfo*>(),
                                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfLines, cuttableNotesCount, cuttableScoringObjectsCount, obstaclesCount, bombsCount);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* GlobalNamespace::BeatmapDataBasicInfo::New_ctor(int32_t numberOfLines, int32_t cuttableNotesCount, int32_t cuttableScoringObjectsCount,
                                                                                                int32_t obstaclesCount, int32_t bombsCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataBasicInfo*>(numberOfLines, cuttableNotesCount, cuttableScoringObjectsCount, obstaclesCount, bombsCount));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataBasicInfo::BeatmapDataBasicInfo() {}
