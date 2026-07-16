#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Date/DateTimeUtilities.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeUtilities_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::*)()>(&::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3629268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities.DateTimeToUnixMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::DateTime)>(&::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::DateTimeToUnixMs)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x362926c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>(), { "DateTimeToUnixMs", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities.UnixMsToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::UnixMsToDateTime)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x36293f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>(), { "UnixMsToDateTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities.CurrentUnixMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::CurrentUnixMs)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x36294b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>(), { "CurrentUnixMs", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::Date::DateTimeUtilities::setStaticF_UnixEpoch(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "UnixEpoch", ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime Org::BouncyCastle::Utilities::Date::DateTimeUtilities::getStaticF_UnixEpoch() {
  return ::cordl_internals::getStaticField<::System::DateTime, "UnixEpoch", ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>();
}
inline void Org::BouncyCastle::Utilities::Date::DateTimeUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Utilities::Date::DateTimeUtilities::DateTimeToUnixMs(::System::DateTime dateTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>(), { "DateTimeToUnixMs", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, dateTime);
}
inline ::System::DateTime Org::BouncyCastle::Utilities::Date::DateTimeUtilities::UnixMsToDateTime(int64_t unixMs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>(), { "UnixMsToDateTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, unixMs);
}
inline int64_t Org::BouncyCastle::Utilities::Date::DateTimeUtilities::CurrentUnixMs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>(), { "CurrentUnixMs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities* Org::BouncyCastle::Utilities::Date::DateTimeUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::DateTimeUtilities() {}
