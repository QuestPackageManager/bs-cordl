#pragma once
// IWYU pragma private; include "System/Globalization/DaylightTime.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Globalization/zzzz__DaylightTime_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Globalization::DaylightTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DaylightTime::*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan)>(
    &::System::Globalization::DaylightTime::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bbab2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DaylightTime*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DaylightTime.get_Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::DaylightTime::*)()>(&::System::Globalization::DaylightTime::get_Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbab38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DaylightTime*>(), { "get_Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DaylightTime.get_End
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::DaylightTime::*)()>(&::System::Globalization::DaylightTime::get_End)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbab40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DaylightTime*>(), { "get_End", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DaylightTime.get_Delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Globalization::DaylightTime::*)()>(&::System::Globalization::DaylightTime::get_Delta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbab48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DaylightTime*>(), { "get_Delta", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& System::Globalization::DaylightTime::__cordl_internal_get__start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start;
}
constexpr ::System::DateTime const& System::Globalization::DaylightTime::__cordl_internal_get__start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start;
}
constexpr void System::Globalization::DaylightTime::__cordl_internal_set__start(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____start = value;
}
constexpr ::System::DateTime& System::Globalization::DaylightTime::__cordl_internal_get__end() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____end;
}
constexpr ::System::DateTime const& System::Globalization::DaylightTime::__cordl_internal_get__end() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____end;
}
constexpr void System::Globalization::DaylightTime::__cordl_internal_set__end(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____end = value;
}
constexpr ::System::TimeSpan& System::Globalization::DaylightTime::__cordl_internal_get__delta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delta;
}
constexpr ::System::TimeSpan const& System::Globalization::DaylightTime::__cordl_internal_get__delta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delta;
}
constexpr void System::Globalization::DaylightTime::__cordl_internal_set__delta(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delta = value;
}
inline void System::Globalization::DaylightTime::_ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DaylightTime*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, delta);
}
inline ::System::DateTime System::Globalization::DaylightTime::get_Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DaylightTime*>(), { "get_Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Globalization::DaylightTime::get_End() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DaylightTime*>(), { "get_End", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::TimeSpan System::Globalization::DaylightTime::get_Delta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DaylightTime*>(), { "get_Delta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::Globalization::DaylightTime* System::Globalization::DaylightTime::New_ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::DaylightTime*>(start, end, delta));
}
// Ctor Parameters []
constexpr ::System::Globalization::DaylightTime::DaylightTime() {}
