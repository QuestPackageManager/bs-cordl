#pragma once
// IWYU pragma private; include "GlobalNamespace/PracticeSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PracticeSettings.get_startSongTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PracticeSettings::*)()>(&::GlobalNamespace::PracticeSettings::get_startSongTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3749db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "get_startSongTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeSettings.set_startSongTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PracticeSettings::*)(float_t)>(&::GlobalNamespace::PracticeSettings::set_startSongTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3749dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "set_startSongTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeSettings.get_songSpeedMul
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PracticeSettings::*)()>(&::GlobalNamespace::PracticeSettings::get_songSpeedMul)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3749dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "get_songSpeedMul", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeSettings.set_songSpeedMul
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PracticeSettings::*)(float_t)>(&::GlobalNamespace::PracticeSettings::set_songSpeedMul)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3749dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "set_songSpeedMul", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeSettings.get_startInAdvanceAndClearNotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PracticeSettings::*)()>(&::GlobalNamespace::PracticeSettings::get_startInAdvanceAndClearNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3749dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "get_startInAdvanceAndClearNotes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeSettings.set_startInAdvanceAndClearNotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PracticeSettings::*)(bool)>(&::GlobalNamespace::PracticeSettings::set_startInAdvanceAndClearNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3749de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "set_startInAdvanceAndClearNotes", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeSettings.get_defaultPracticeSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PracticeSettings* (*)()>(&::GlobalNamespace::PracticeSettings::get_defaultPracticeSettings)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3749de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "get_defaultPracticeSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PracticeSettings::*)()>(&::GlobalNamespace::PracticeSettings::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3748588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PracticeSettings::*)(::GlobalNamespace::PracticeSettings*)>(&::GlobalNamespace::PracticeSettings::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3749e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::PracticeSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PracticeSettings::*)(float_t, float_t)>(&::GlobalNamespace::PracticeSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3747a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeSettings.ResetToDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PracticeSettings::*)()>(&::GlobalNamespace::PracticeSettings::ResetToDefault)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3749e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "ResetToDefault", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PracticeSettings::__cordl_internal_get__startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSongTime;
}
constexpr float_t const& GlobalNamespace::PracticeSettings::__cordl_internal_get__startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSongTime;
}
constexpr void GlobalNamespace::PracticeSettings::__cordl_internal_set__startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startSongTime = value;
}
constexpr float_t& GlobalNamespace::PracticeSettings::__cordl_internal_get__songSpeedMul() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeedMul;
}
constexpr float_t const& GlobalNamespace::PracticeSettings::__cordl_internal_get__songSpeedMul() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeedMul;
}
constexpr void GlobalNamespace::PracticeSettings::__cordl_internal_set__songSpeedMul(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songSpeedMul = value;
}
constexpr bool& GlobalNamespace::PracticeSettings::__cordl_internal_get__startInAdvanceAndClearNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startInAdvanceAndClearNotes;
}
constexpr bool const& GlobalNamespace::PracticeSettings::__cordl_internal_get__startInAdvanceAndClearNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startInAdvanceAndClearNotes;
}
constexpr void GlobalNamespace::PracticeSettings::__cordl_internal_set__startInAdvanceAndClearNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startInAdvanceAndClearNotes = value;
}
inline float_t GlobalNamespace::PracticeSettings::get_startSongTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "get_startSongTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PracticeSettings::set_startSongTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "set_startSongTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PracticeSettings::get_songSpeedMul() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "get_songSpeedMul", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PracticeSettings::set_songSpeedMul(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "set_songSpeedMul", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PracticeSettings::get_startInAdvanceAndClearNotes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "get_startInAdvanceAndClearNotes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PracticeSettings::set_startInAdvanceAndClearNotes(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "set_startInAdvanceAndClearNotes", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PracticeSettings* GlobalNamespace::PracticeSettings::get_defaultPracticeSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "get_defaultPracticeSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PracticeSettings*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PracticeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PracticeSettings::_ctor(::GlobalNamespace::PracticeSettings* practiceSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::PracticeSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, practiceSettings);
}
inline void GlobalNamespace::PracticeSettings::_ctor(float_t startSongTime, float_t songSpeedMul) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startSongTime, songSpeedMul);
}
inline void GlobalNamespace::PracticeSettings::ResetToDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PracticeSettings*>(), { "ResetToDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PracticeSettings* GlobalNamespace::PracticeSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PracticeSettings*>());
}
inline ::GlobalNamespace::PracticeSettings* GlobalNamespace::PracticeSettings::New_ctor(::GlobalNamespace::PracticeSettings* practiceSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PracticeSettings*>(practiceSettings));
}
inline ::GlobalNamespace::PracticeSettings* GlobalNamespace::PracticeSettings::New_ctor(float_t startSongTime, float_t songSpeedMul) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PracticeSettings*>(startSongTime, songSpeedMul));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PracticeSettings::PracticeSettings() {}
