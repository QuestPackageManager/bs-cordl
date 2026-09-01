#pragma once
// IWYU pragma private; include "System\Net\Mail\WhitespaceReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Mail/zzzz__WhitespaceReader_def.hpp"
//  Writing Method size for method: ::System::Net::Mail::WhitespaceReader.ReadFwsReverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Net::Mail::WhitespaceReader::ReadFwsReverse)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x636e3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::WhitespaceReader*>(), { "ReadFwsReverse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::WhitespaceReader.ReadCfwsReverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Net::Mail::WhitespaceReader::ReadCfwsReverse)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x636f398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::WhitespaceReader*>(), { "ReadCfwsReverse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t System::Net::Mail::WhitespaceReader::ReadFwsReverse(::StringW data, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::WhitespaceReader*>(), { "ReadFwsReverse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, index);
}
inline int32_t System::Net::Mail::WhitespaceReader::ReadCfwsReverse(::StringW data, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::WhitespaceReader*>(), { "ReadCfwsReverse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, index);
}
// Ctor Parameters []
constexpr ::System::Net::Mail::WhitespaceReader::WhitespaceReader() {}
