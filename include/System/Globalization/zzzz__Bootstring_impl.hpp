#pragma once
// IWYU pragma private; include "System/Globalization/Bootstring.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__Bootstring_def.hpp"
//  Writing Method size for method: ::System::Globalization::Bootstring._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::Bootstring::*)(char16_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::System::Globalization::Bootstring::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bddf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Bootstring*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::Bootstring.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::Bootstring::*)(::StringW, int32_t)>(&::System::Globalization::Bootstring::Encode)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5bdd588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Bootstring*>(), { "Encode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::Bootstring.EncodeDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Globalization::Bootstring::*)(int32_t)>(&::System::Globalization::Bootstring::EncodeDigit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bddf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Bootstring*>(), { "EncodeDigit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::Bootstring.DecodeDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::Bootstring::*)(char16_t)>(&::System::Globalization::Bootstring::DecodeDigit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5bddfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Bootstring*>(), { "DecodeDigit", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::Bootstring.Adapt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::Bootstring::*)(int32_t, int32_t, bool)>(&::System::Globalization::Bootstring::Adapt)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5bddf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::Bootstring*>(), { "Adapt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::Bootstring.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::Bootstring::*)(::StringW, int32_t)>(&::System::Globalization::Bootstring::Decode)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5bddc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Bootstring*>(), { "Decode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr char16_t& System::Globalization::Bootstring::__cordl_internal_get_delimiter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delimiter;
}
constexpr char16_t const& System::Globalization::Bootstring::__cordl_internal_get_delimiter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delimiter;
}
constexpr void System::Globalization::Bootstring::__cordl_internal_set_delimiter(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delimiter = value;
}
constexpr int32_t& System::Globalization::Bootstring::__cordl_internal_get_base_num() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base_num;
}
constexpr int32_t const& System::Globalization::Bootstring::__cordl_internal_get_base_num() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base_num;
}
constexpr void System::Globalization::Bootstring::__cordl_internal_set_base_num(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___base_num = value;
}
constexpr int32_t& System::Globalization::Bootstring::__cordl_internal_get_tmin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmin;
}
constexpr int32_t const& System::Globalization::Bootstring::__cordl_internal_get_tmin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmin;
}
constexpr void System::Globalization::Bootstring::__cordl_internal_set_tmin(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tmin = value;
}
constexpr int32_t& System::Globalization::Bootstring::__cordl_internal_get_tmax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmax;
}
constexpr int32_t const& System::Globalization::Bootstring::__cordl_internal_get_tmax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmax;
}
constexpr void System::Globalization::Bootstring::__cordl_internal_set_tmax(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tmax = value;
}
constexpr int32_t& System::Globalization::Bootstring::__cordl_internal_get_skew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skew;
}
constexpr int32_t const& System::Globalization::Bootstring::__cordl_internal_get_skew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skew;
}
constexpr void System::Globalization::Bootstring::__cordl_internal_set_skew(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skew = value;
}
constexpr int32_t& System::Globalization::Bootstring::__cordl_internal_get_damp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___damp;
}
constexpr int32_t const& System::Globalization::Bootstring::__cordl_internal_get_damp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___damp;
}
constexpr void System::Globalization::Bootstring::__cordl_internal_set_damp(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___damp = value;
}
constexpr int32_t& System::Globalization::Bootstring::__cordl_internal_get_initial_bias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initial_bias;
}
constexpr int32_t const& System::Globalization::Bootstring::__cordl_internal_get_initial_bias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initial_bias;
}
constexpr void System::Globalization::Bootstring::__cordl_internal_set_initial_bias(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initial_bias = value;
}
constexpr int32_t& System::Globalization::Bootstring::__cordl_internal_get_initial_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initial_n;
}
constexpr int32_t const& System::Globalization::Bootstring::__cordl_internal_get_initial_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initial_n;
}
constexpr void System::Globalization::Bootstring::__cordl_internal_set_initial_n(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initial_n = value;
}
inline void System::Globalization::Bootstring::_ctor(char16_t delimiter, int32_t baseNum, int32_t tmin, int32_t tmax, int32_t skew, int32_t damp, int32_t initialBias, int32_t initialN) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Bootstring*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delimiter, baseNum, tmin, tmax, skew, damp, initialBias, initialN);
}
inline ::StringW System::Globalization::Bootstring::Encode(::StringW s, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Bootstring*>(), { "Encode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, s, offset);
}
inline char16_t System::Globalization::Bootstring::EncodeDigit(int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Bootstring*>(), { "EncodeDigit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, d);
}
inline int32_t System::Globalization::Bootstring::DecodeDigit(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Bootstring*>(), { "DecodeDigit", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, c);
}
inline int32_t System::Globalization::Bootstring::Adapt(int32_t delta, int32_t numPoints, bool firstTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::Bootstring*>(), { "Adapt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, delta, numPoints, firstTime);
}
inline ::StringW System::Globalization::Bootstring::Decode(::StringW s, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Bootstring*>(), { "Decode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, s, offset);
}
inline ::System::Globalization::Bootstring* System::Globalization::Bootstring::New_ctor(char16_t delimiter, int32_t baseNum, int32_t tmin, int32_t tmax, int32_t skew, int32_t damp,
                                                                                        int32_t initialBias, int32_t initialN) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::Bootstring*>(delimiter, baseNum, tmin, tmax, skew, damp, initialBias, initialN));
}
// Ctor Parameters []
constexpr ::System::Globalization::Bootstring::Bootstring() {}
