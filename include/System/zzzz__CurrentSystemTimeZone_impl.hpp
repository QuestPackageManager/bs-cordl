#pragma once
// IWYU pragma private; include "System\CurrentSystemTimeZone.hpp"
#include "System/zzzz__TimeZone_impl.hpp"
#include "System/zzzz__CurrentSystemTimeZone_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Globalization/zzzz__DaylightTime_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::CurrentSystemTimeZone._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::CurrentSystemTimeZone::*)()>(&::System::CurrentSystemTimeZone::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c25148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CurrentSystemTimeZone*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.GetUtcOffsetFromUniversalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::CurrentSystemTimeZone::*)(::System::DateTime, ::by_ref<bool>)>(
    &::System::CurrentSystemTimeZone::GetUtcOffsetFromUniversalTime)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5c2524c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::CurrentSystemTimeZone*>(), { "GetUtcOffsetFromUniversalTime", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.ToLocalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::CurrentSystemTimeZone::*)(::System::DateTime)>(&::System::CurrentSystemTimeZone::ToLocalTime)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c257b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::CurrentSystemTimeZone*>(), { ::i2c::class_of<::System::CurrentSystemTimeZone*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.GetDaylightChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DaylightTime* (::System::CurrentSystemTimeZone::*)(int32_t)>(&::System::CurrentSystemTimeZone::GetDaylightChanges)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c25af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::CurrentSystemTimeZone*>(), { ::i2c::class_of<::System::CurrentSystemTimeZone*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.CreateDaylightChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DaylightTime* (*)(int32_t)>(&::System::CurrentSystemTimeZone::CreateDaylightChanges)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5c25da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CurrentSystemTimeZone*>(), { "CreateDaylightChanges", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.GetUtcOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::CurrentSystemTimeZone::*)(::System::DateTime)>(&::System::CurrentSystemTimeZone::GetUtcOffset)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c26024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::CurrentSystemTimeZone*>(), { ::i2c::class_of<::System::CurrentSystemTimeZone*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.GetTimeZoneData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::ArrayW<int64_t>>, ::by_ref<::ArrayW<::StringW>>, ::by_ref<bool>)>(
    &::System::CurrentSystemTimeZone::GetTimeZoneData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c26130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CurrentSystemTimeZone*>(), { "GetTimeZoneData",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<int64_t>>>(),
                                                                                                         ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.GetCachedDaylightChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DaylightTime* (::System::CurrentSystemTimeZone::*)(int32_t)>(
    &::System::CurrentSystemTimeZone::GetCachedDaylightChanges)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5c25bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CurrentSystemTimeZone*>(), { "GetCachedDaylightChanges", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& System::CurrentSystemTimeZone::__cordl_internal_get_m_ticksOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ticksOffset;
}
constexpr int64_t const& System::CurrentSystemTimeZone::__cordl_internal_get_m_ticksOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ticksOffset;
}
constexpr void System::CurrentSystemTimeZone::__cordl_internal_set_m_ticksOffset(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ticksOffset = value;
}
constexpr ::StringW& System::CurrentSystemTimeZone::__cordl_internal_get_m_standardName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_standardName;
}
constexpr ::StringW const& System::CurrentSystemTimeZone::__cordl_internal_get_m_standardName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_standardName;
}
constexpr void System::CurrentSystemTimeZone::__cordl_internal_set_m_standardName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_standardName = value;
}
constexpr ::StringW& System::CurrentSystemTimeZone::__cordl_internal_get_m_daylightName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_daylightName;
}
constexpr ::StringW const& System::CurrentSystemTimeZone::__cordl_internal_get_m_daylightName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_daylightName;
}
constexpr void System::CurrentSystemTimeZone::__cordl_internal_set_m_daylightName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_daylightName = value;
}
constexpr ::System::Collections::Hashtable*& System::CurrentSystemTimeZone::__cordl_internal_get_m_CachedDaylightChanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedDaylightChanges;
}
constexpr ::System::Collections::Hashtable* const& System::CurrentSystemTimeZone::__cordl_internal_get_m_CachedDaylightChanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedDaylightChanges;
}
constexpr void System::CurrentSystemTimeZone::__cordl_internal_set_m_CachedDaylightChanges(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedDaylightChanges = value;
}
inline void System::CurrentSystemTimeZone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CurrentSystemTimeZone*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t System::CurrentSystemTimeZone::GetUtcOffsetFromUniversalTime(::System::DateTime time, ::by_ref<bool> isAmbiguousLocalDst) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::CurrentSystemTimeZone*>(), { "GetUtcOffsetFromUniversalTime", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, time, isAmbiguousLocalDst);
}
inline ::System::DateTime System::CurrentSystemTimeZone::ToLocalTime(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::CurrentSystemTimeZone*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, time);
}
inline ::System::Globalization::DaylightTime* System::CurrentSystemTimeZone::GetDaylightChanges(int32_t year) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::CurrentSystemTimeZone*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DaylightTime*>(this, ___internal_method, year);
}
inline ::System::Globalization::DaylightTime* System::CurrentSystemTimeZone::CreateDaylightChanges(int32_t year) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CurrentSystemTimeZone*>(), { "CreateDaylightChanges", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DaylightTime*>(nullptr, ___internal_method, year);
}
inline ::System::TimeSpan System::CurrentSystemTimeZone::GetUtcOffset(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::CurrentSystemTimeZone*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, time);
}
inline bool System::CurrentSystemTimeZone::GetTimeZoneData(int32_t year, ::by_ref<::ArrayW<int64_t>> data, ::by_ref<::ArrayW<::StringW>> names, ::by_ref<bool> daylight_inverted) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::CurrentSystemTimeZone*>(),
          { "GetTimeZoneData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<int64_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, year, data, names, daylight_inverted);
}
inline ::System::Globalization::DaylightTime* System::CurrentSystemTimeZone::GetCachedDaylightChanges(int32_t year) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CurrentSystemTimeZone*>(), { "GetCachedDaylightChanges", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DaylightTime*>(this, ___internal_method, year);
}
inline ::System::CurrentSystemTimeZone* System::CurrentSystemTimeZone::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::CurrentSystemTimeZone*>());
}
// Ctor Parameters []
constexpr ::System::CurrentSystemTimeZone::CurrentSystemTimeZone() {}
