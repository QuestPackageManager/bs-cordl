#pragma once
// IWYU pragma private; include "Utility\DateTimeExtensions.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Utility/zzzz__DateTimeExtensions_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Utility::DateTimeExtensions.GetSecondsSinceEpoch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Utility::DateTimeExtensions::GetSecondsSinceEpoch)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f37064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Utility::DateTimeExtensions*>(), { "GetSecondsSinceEpoch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utility::DateTimeExtensions.UnixTimestampToUniversalDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int32_t)>(&::Utility::DateTimeExtensions::UnixTimestampToUniversalDateTime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f37170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Utility::DateTimeExtensions*>(), { "UnixTimestampToUniversalDateTime", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Utility::DateTimeExtensions::setStaticF_EPOCH(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "EPOCH", ::Utility::DateTimeExtensions*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime Utility::DateTimeExtensions::getStaticF_EPOCH() {
  return ::cordl_internals::getStaticField<::System::DateTime, "EPOCH", ::Utility::DateTimeExtensions*>();
}
inline int32_t Utility::DateTimeExtensions::GetSecondsSinceEpoch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Utility::DateTimeExtensions*>(), { "GetSecondsSinceEpoch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::System::DateTime Utility::DateTimeExtensions::UnixTimestampToUniversalDateTime(int32_t unixSecondsTimestamp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Utility::DateTimeExtensions*>(), { "UnixTimestampToUniversalDateTime", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, unixSecondsTimestamp);
}
// Ctor Parameters []
constexpr ::Utility::DateTimeExtensions::DateTimeExtensions() {}
