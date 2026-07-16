#pragma once
// IWYU pragma private; include "System/Net/Mail/DomainLiteralReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Mail/zzzz__DomainLiteralReader_def.hpp"
//  Writing Method size for method: ::System::Net::Mail::DomainLiteralReader.ReadReverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Net::Mail::DomainLiteralReader::ReadReverse)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6368998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::DomainLiteralReader*>(), { "ReadReverse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t System::Net::Mail::DomainLiteralReader::ReadReverse(::StringW data, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::DomainLiteralReader*>(), { "ReadReverse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, index);
}
// Ctor Parameters []
constexpr ::System::Net::Mail::DomainLiteralReader::DomainLiteralReader() {}
