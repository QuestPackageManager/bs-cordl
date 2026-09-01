#pragma once
// IWYU pragma private; include "System\Net\HttpStatusDescription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpStatusDescription_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
//  Writing Method size for method: ::System::Net::HttpStatusDescription.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Net::HttpStatusCode)>(&::System::Net::HttpStatusDescription::Get)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63f7a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStatusDescription*>(), { "Get", {}, { ::i2c::type_of<::System::Net::HttpStatusCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpStatusDescription.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::Net::HttpStatusDescription::Get)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x63f7aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStatusDescription*>(), { "Get", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::StringW System::Net::HttpStatusDescription::Get(::System::Net::HttpStatusCode code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStatusDescription*>(), { "Get", {}, { ::i2c::type_of<::System::Net::HttpStatusCode>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, code);
}
inline ::StringW System::Net::HttpStatusDescription::Get(int32_t code) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStatusDescription*>(), { "Get", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, code);
}
// Ctor Parameters []
constexpr ::System::Net::HttpStatusDescription::HttpStatusDescription() {}
