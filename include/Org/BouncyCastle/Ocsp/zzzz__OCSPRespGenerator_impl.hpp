#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/OCSPRespGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OCSPRespGenerator_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspResp_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OCSPRespGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::OcspResp* (::Org::BouncyCastle::Ocsp::OCSPRespGenerator::*)(int32_t, ::System::Object*)>(
    &::Org::BouncyCastle::Ocsp::OCSPRespGenerator::Generate)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x3575e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OCSPRespGenerator*>(), { "Generate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OCSPRespGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OCSPRespGenerator::*)()>(&::Org::BouncyCastle::Ocsp::OCSPRespGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3576150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OCSPRespGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Ocsp::OcspResp* Org::BouncyCastle::Ocsp::OCSPRespGenerator::Generate(int32_t status, ::System::Object* response) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OCSPRespGenerator*>(), { "Generate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::OcspResp*>(this, ___internal_method, status, response);
}
inline void Org::BouncyCastle::Ocsp::OCSPRespGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OCSPRespGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::OCSPRespGenerator* Org::BouncyCastle::Ocsp::OCSPRespGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::OCSPRespGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::OCSPRespGenerator::OCSPRespGenerator() {}
