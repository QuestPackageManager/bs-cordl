#pragma once
// IWYU pragma private; include "System/Net/Mail/QuotedStringFormatReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Mail/zzzz__QuotedStringFormatReader_def.hpp"
//  Writing Method size for method: ::System::Net::Mail::QuotedStringFormatReader.ReadReverseQuoted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, bool)>(&::System::Net::Mail::QuotedStringFormatReader::ReadReverseQuoted)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6369f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::QuotedStringFormatReader*>(),
                                                             { "ReadReverseQuoted", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::QuotedStringFormatReader.ReadReverseUnQuoted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, bool, bool)>(&::System::Net::Mail::QuotedStringFormatReader::ReadReverseUnQuoted)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x636a0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::QuotedStringFormatReader*>(),
                                                { "ReadReverseUnQuoted", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::QuotedStringFormatReader.IsValidQtext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, char16_t)>(&::System::Net::Mail::QuotedStringFormatReader::IsValidQtext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x636a34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::QuotedStringFormatReader*>(), { "IsValidQtext", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
inline int32_t System::Net::Mail::QuotedStringFormatReader::ReadReverseQuoted(::StringW data, int32_t index, bool permitUnicode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::QuotedStringFormatReader*>(),
                                                           { "ReadReverseQuoted", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, index, permitUnicode);
}
inline int32_t System::Net::Mail::QuotedStringFormatReader::ReadReverseUnQuoted(::StringW data, int32_t index, bool permitUnicode, bool expectCommaDelimiter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::QuotedStringFormatReader*>(),
                                                           { "ReadReverseUnQuoted", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, index, permitUnicode, expectCommaDelimiter);
}
inline bool System::Net::Mail::QuotedStringFormatReader::IsValidQtext(bool allowUnicode, char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::QuotedStringFormatReader*>(), { "IsValidQtext", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, allowUnicode, ch);
}
// Ctor Parameters []
constexpr ::System::Net::Mail::QuotedStringFormatReader::QuotedStringFormatReader() {}
