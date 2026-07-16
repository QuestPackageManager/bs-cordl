#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DateTimeOffsetAdapter.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DateTimeOffsetAdapter_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DateTimeOffsetAdapter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DateTimeOffsetAdapter::*)(::System::DateTime, int16_t)>(
    &::System::Runtime::Serialization::DateTimeOffsetAdapter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61477c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DateTimeOffsetAdapter.get_UtcDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Runtime::Serialization::DateTimeOffsetAdapter::*)()>(
    &::System::Runtime::Serialization::DateTimeOffsetAdapter::get_UtcDateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61477cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>(), { "get_UtcDateTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DateTimeOffsetAdapter.get_OffsetMinutes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::Runtime::Serialization::DateTimeOffsetAdapter::*)()>(
    &::System::Runtime::Serialization::DateTimeOffsetAdapter::get_OffsetMinutes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61477d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>(), { "get_OffsetMinutes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DateTimeOffsetAdapter.GetDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::System::Runtime::Serialization::DateTimeOffsetAdapter)>(
    &::System::Runtime::Serialization::DateTimeOffsetAdapter::GetDateTimeOffset)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x61477dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>(),
                                                             { "GetDateTimeOffset", {}, { ::i2c::type_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DateTimeOffsetAdapter.GetDateTimeOffsetAdapter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DateTimeOffsetAdapter (*)(::System::DateTimeOffset)>(
    &::System::Runtime::Serialization::DateTimeOffsetAdapter::GetDateTimeOffsetAdapter)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6147abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>(),
                                                                                           { "GetDateTimeOffsetAdapter", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DateTimeOffsetAdapter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::DateTimeOffsetAdapter::*)(::System::IFormatProvider*)>(
    &::System::Runtime::Serialization::DateTimeOffsetAdapter::ToString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x61479ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::DateTimeOffsetAdapter::_ctor(::System::DateTime dateTime, int16_t offsetMinutes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dateTime, offsetMinutes);
}
inline ::System::DateTime System::Runtime::Serialization::DateTimeOffsetAdapter::get_UtcDateTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>(), { "get_UtcDateTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline int16_t System::Runtime::Serialization::DateTimeOffsetAdapter::get_OffsetMinutes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>(), { "get_OffsetMinutes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method);
}
inline ::System::DateTimeOffset System::Runtime::Serialization::DateTimeOffsetAdapter::GetDateTimeOffset(::System::Runtime::Serialization::DateTimeOffsetAdapter value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>(),
                                                                                         { "GetDateTimeOffset", {}, { ::i2c::type_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, value);
}
inline ::System::Runtime::Serialization::DateTimeOffsetAdapter System::Runtime::Serialization::DateTimeOffsetAdapter::GetDateTimeOffsetAdapter(::System::DateTimeOffset value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>(),
                                                                                         { "GetDateTimeOffsetAdapter", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DateTimeOffsetAdapter>(nullptr, ___internal_method, value);
}
inline ::StringW System::Runtime::Serialization::DateTimeOffsetAdapter::ToString(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DateTimeOffsetAdapter>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, provider);
}
// Ctor Parameters [CppParam { name: "utcDateTime", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "offsetMinutes", ty: "int16_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Runtime::Serialization::DateTimeOffsetAdapter::DateTimeOffsetAdapter(::System::DateTime utcDateTime, int16_t offsetMinutes) noexcept {
  this->utcDateTime = utcDateTime;
  this->offsetMinutes = offsetMinutes;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DateTimeOffsetAdapter::DateTimeOffsetAdapter() {}
