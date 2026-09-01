#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\UrlAndHash.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__UrlAndHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::UrlAndHash._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::UrlAndHash::*)(::StringW, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::UrlAndHash::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3499474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::UrlAndHash.get_Url
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Tls::UrlAndHash::*)()>(&::Org::BouncyCastle::Crypto::Tls::UrlAndHash::get_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3499540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::UrlAndHash.get_Sha1Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::UrlAndHash::*)()>(&::Org::BouncyCastle::Crypto::Tls::UrlAndHash::get_Sha1Hash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3499548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::UrlAndHash.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::UrlAndHash::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::UrlAndHash::Encode)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3499550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::UrlAndHash.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::UrlAndHash* (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::UrlAndHash::Parse)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3499658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(),
                                                             { "Parse", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Crypto::Tls::UrlAndHash::__cordl_internal_get_mUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mUrl;
}
constexpr ::StringW const& Org::BouncyCastle::Crypto::Tls::UrlAndHash::__cordl_internal_get_mUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mUrl;
}
constexpr void Org::BouncyCastle::Crypto::Tls::UrlAndHash::__cordl_internal_set_mUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mUrl = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::UrlAndHash::__cordl_internal_get_mSha1Hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSha1Hash;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::UrlAndHash::__cordl_internal_get_mSha1Hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSha1Hash;
}
constexpr void Org::BouncyCastle::Crypto::Tls::UrlAndHash::__cordl_internal_set_mSha1Hash(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSha1Hash = value;
}
inline void Org::BouncyCastle::Crypto::Tls::UrlAndHash::_ctor(::StringW url, ::ArrayW<uint8_t> sha1Hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, sha1Hash);
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::UrlAndHash::get_Url() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::UrlAndHash::get_Sha1Hash() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::UrlAndHash::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::UrlAndHash* Org::BouncyCastle::Crypto::Tls::UrlAndHash::Parse(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(),
                                                           { "Parse", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(nullptr, ___internal_method, context, input);
}
inline ::Org::BouncyCastle::Crypto::Tls::UrlAndHash* Org::BouncyCastle::Crypto::Tls::UrlAndHash::New_ctor(::StringW url, ::ArrayW<uint8_t> sha1Hash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::UrlAndHash*>(url, sha1Hash));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::UrlAndHash::UrlAndHash() {}
