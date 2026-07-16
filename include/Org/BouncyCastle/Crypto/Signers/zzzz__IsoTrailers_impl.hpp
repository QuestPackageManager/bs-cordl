#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/IsoTrailers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IsoTrailers_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::IsoTrailers.CreateTrailerMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (*)()>(&::Org::BouncyCastle::Crypto::Signers::IsoTrailers::CreateTrailerMap)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x342c3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IsoTrailers*>(), { "CreateTrailerMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::IsoTrailers.GetTrailer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Crypto::IDigest*)>(&::Org::BouncyCastle::Crypto::Signers::IsoTrailers::GetTrailer)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x342886c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IsoTrailers*>(), { "GetTrailer", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::IsoTrailers.NoTrailerAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Crypto::IDigest*)>(&::Org::BouncyCastle::Crypto::Signers::IsoTrailers::NoTrailerAvailable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x342870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IsoTrailers*>(),
                                                                                           { "NoTrailerAvailable", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::IsoTrailers._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::IsoTrailers::*)()>(&::Org::BouncyCastle::Crypto::Signers::IsoTrailers::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x342ca7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IsoTrailers*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Signers::IsoTrailers::setStaticF_trailerMap(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "trailerMap", ::Org::BouncyCastle::Crypto::Signers::IsoTrailers*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Signers::IsoTrailers::getStaticF_trailerMap() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "trailerMap", ::Org::BouncyCastle::Crypto::Signers::IsoTrailers*>();
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Signers::IsoTrailers::CreateTrailerMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IsoTrailers*>(), { "CreateTrailerMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(nullptr, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Signers::IsoTrailers::GetTrailer(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IsoTrailers*>(), { "GetTrailer", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, digest);
}
inline bool Org::BouncyCastle::Crypto::Signers::IsoTrailers::NoTrailerAvailable(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IsoTrailers*>(),
                                                                                         { "NoTrailerAvailable", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Signers::IsoTrailers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IsoTrailers*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::IsoTrailers* Org::BouncyCastle::Crypto::Signers::IsoTrailers::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::IsoTrailers*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::IsoTrailers::IsoTrailers() {}
