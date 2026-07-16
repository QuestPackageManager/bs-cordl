#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/UrlBase64Encoder.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__Base64Encoder_impl.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__UrlBase64Encoder_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::*)()>(&::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x362d394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder* Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::UrlBase64Encoder() {}
