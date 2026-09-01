#pragma once
// IWYU pragma private; include "System\Net\Mail\QuotedPairReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Mail/zzzz__QuotedPairReader_def.hpp"
//  Writing Method size for method: ::System::Net::Mail::QuotedPairReader.CountQuotedChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, bool)>(&::System::Net::Mail::QuotedPairReader::CountQuotedChars)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x636e5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::QuotedPairReader*>(),
                                                             { "CountQuotedChars", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::QuotedPairReader.CountBackslashes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Net::Mail::QuotedPairReader::CountBackslashes)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x636fa98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::QuotedPairReader*>(), { "CountBackslashes", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t System::Net::Mail::QuotedPairReader::CountQuotedChars(::StringW data, int32_t index, bool permitUnicodeEscaping) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Mail::QuotedPairReader*>(), { "CountQuotedChars", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, index, permitUnicodeEscaping);
}
inline int32_t System::Net::Mail::QuotedPairReader::CountBackslashes(::StringW data, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::QuotedPairReader*>(), { "CountBackslashes", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, index);
}
// Ctor Parameters []
constexpr ::System::Net::Mail::QuotedPairReader::QuotedPairReader() {}
