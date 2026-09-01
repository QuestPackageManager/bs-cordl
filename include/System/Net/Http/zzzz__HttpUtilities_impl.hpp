#pragma once
// IWYU pragma private; include "System\Net\Http\HttpUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/zzzz__HttpUtilities_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpUtilities.IsSupportedSecureScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::Http::HttpUtilities::IsSupportedSecureScheme)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60d6308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpUtilities*>(), { "IsSupportedSecureScheme", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpUtilities.IsSecureWebSocketScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::Http::HttpUtilities::IsSecureWebSocketScheme)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60d6378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpUtilities*>(), { "IsSecureWebSocketScheme", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::HttpUtilities::IsSupportedSecureScheme(::StringW scheme) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpUtilities*>(), { "IsSupportedSecureScheme", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scheme);
}
inline bool System::Net::Http::HttpUtilities::IsSecureWebSocketScheme(::StringW scheme) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpUtilities*>(), { "IsSecureWebSocketScheme", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scheme);
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpUtilities::HttpUtilities() {}
