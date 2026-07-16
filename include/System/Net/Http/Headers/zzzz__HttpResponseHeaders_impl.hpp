#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HttpResponseHeaders.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HttpResponseHeaders_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::HttpResponseHeaders._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpResponseHeaders::*)()>(&::System::Net::Http::Headers::HttpResponseHeaders::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60da094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpResponseHeaders*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::HttpResponseHeaders::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpResponseHeaders*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::HttpResponseHeaders* System::Net::Http::Headers::HttpResponseHeaders::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::HttpResponseHeaders*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HttpResponseHeaders::HttpResponseHeaders() {}
