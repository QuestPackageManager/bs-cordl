#pragma once
// IWYU pragma private; include "GlobalNamespace\LevelInfo.hpp"
#include "GlobalNamespace/zzzz__BeatmapInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelInfo.get_levelID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LevelInfo::*)()>(&::GlobalNamespace::LevelInfo::get_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { "get_levelID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelInfo.set_levelID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelInfo::*)(::StringW)>(&::GlobalNamespace::LevelInfo::set_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { "set_levelID", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelInfo.get_beatmaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BeatmapInfo*> (::GlobalNamespace::LevelInfo::*)()>(&::GlobalNamespace::LevelInfo::get_beatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { "get_beatmaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelInfo.set_beatmaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelInfo::*)(::ArrayW<::GlobalNamespace::BeatmapInfo*>)>(&::GlobalNamespace::LevelInfo::set_beatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { "set_beatmaps", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelInfo.get_songDurationMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LevelInfo::*)()>(&::GlobalNamespace::LevelInfo::get_songDurationMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { "get_songDurationMs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelInfo.set_songDurationMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelInfo::*)(int32_t)>(&::GlobalNamespace::LevelInfo::set_songDurationMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { "set_songDurationMs", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelInfo::*)()>(&::GlobalNamespace::LevelInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LevelInfo::__cordl_internal_get__levelID_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::LevelInfo::__cordl_internal_get__levelID_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID_k__BackingField;
}
constexpr void GlobalNamespace::LevelInfo::__cordl_internal_set__levelID_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelID_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapInfo*>& GlobalNamespace::LevelInfo::__cordl_internal_get__beatmaps_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmaps_k__BackingField;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapInfo*> const& GlobalNamespace::LevelInfo::__cordl_internal_get__beatmaps_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmaps_k__BackingField;
}
constexpr void GlobalNamespace::LevelInfo::__cordl_internal_set__beatmaps_k__BackingField(::ArrayW<::GlobalNamespace::BeatmapInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmaps_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LevelInfo::__cordl_internal_get__songDurationMs_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDurationMs_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LevelInfo::__cordl_internal_get__songDurationMs_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDurationMs_k__BackingField;
}
constexpr void GlobalNamespace::LevelInfo::__cordl_internal_set__songDurationMs_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songDurationMs_k__BackingField = value;
}
inline ::StringW GlobalNamespace::LevelInfo::get_levelID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { "get_levelID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LevelInfo::set_levelID(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { "set_levelID", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::BeatmapInfo*> GlobalNamespace::LevelInfo::get_beatmaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { "get_beatmaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapInfo*>>(this, ___internal_method);
}
inline void GlobalNamespace::LevelInfo::set_beatmaps(::ArrayW<::GlobalNamespace::BeatmapInfo*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { "set_beatmaps", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LevelInfo::get_songDurationMs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { "get_songDurationMs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LevelInfo::set_songDurationMs(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { "set_songDurationMs", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelInfo* GlobalNamespace::LevelInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelInfo::LevelInfo() {}
