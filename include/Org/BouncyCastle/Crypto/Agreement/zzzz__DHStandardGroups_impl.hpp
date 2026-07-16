#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/DHStandardGroups.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__DHStandardGroups_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups.FromHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::StringW)>(&::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::FromHex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x36e14d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups.FromPG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters* (*)(::StringW, ::StringW)>(
    &::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::FromPG)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x36e1574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(),
                                                                                           { "FromPG", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups.SafePrimeGen2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters* (*)(::StringW)>(
    &::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::SafePrimeGen2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36e1628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(), { "SafePrimeGen2", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups.SafePrimeGen2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters* (*)(::StringW, int32_t)>(
    &::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::SafePrimeGen2)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x36e1684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(),
                                                                                           { "SafePrimeGen2", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::*)()>(&::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36e1b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "Two", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_Two() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "Two", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc2409_768_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc2409_768_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc2409_768_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc2409_768_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc2409_768(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc2409_768", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc2409_768() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc2409_768", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc2409_1024_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc2409_1024_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc2409_1024_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc2409_1024_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc2409_1024(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc2409_1024", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc2409_1024() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc2409_1024", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_1536_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc3526_1536_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_1536_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc3526_1536_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_1536_l(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rfc3526_1536_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_1536_l() {
  return ::cordl_internals::getStaticField<int32_t, "rfc3526_1536_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_1536(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc3526_1536", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_1536() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc3526_1536", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_2048_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc3526_2048_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_2048_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc3526_2048_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_2048_l(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rfc3526_2048_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_2048_l() {
  return ::cordl_internals::getStaticField<int32_t, "rfc3526_2048_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_2048(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc3526_2048", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_2048() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc3526_2048", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_3072_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc3526_3072_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_3072_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc3526_3072_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_3072_l(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rfc3526_3072_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_3072_l() {
  return ::cordl_internals::getStaticField<int32_t, "rfc3526_3072_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_3072(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc3526_3072", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_3072() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc3526_3072", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_4096_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc3526_4096_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_4096_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc3526_4096_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_4096_l(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rfc3526_4096_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_4096_l() {
  return ::cordl_internals::getStaticField<int32_t, "rfc3526_4096_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_4096(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc3526_4096", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_4096() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc3526_4096", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_6144_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc3526_6144_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_6144_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc3526_6144_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_6144_l(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rfc3526_6144_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_6144_l() {
  return ::cordl_internals::getStaticField<int32_t, "rfc3526_6144_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_6144(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc3526_6144", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_6144() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc3526_6144", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_8192_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc3526_8192_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_8192_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc3526_8192_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_8192_l(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rfc3526_8192_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_8192_l() {
  return ::cordl_internals::getStaticField<int32_t, "rfc3526_8192_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc3526_8192(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc3526_8192", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc3526_8192() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc3526_8192", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc4306_768(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc4306_768", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc4306_768() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc4306_768", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc4306_1024(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc4306_1024", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc4306_1024() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc4306_1024", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc5996_768(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc5996_768", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc5996_768() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc5996_768", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc5996_1024(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc5996_1024", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc5996_1024() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc5996_1024", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe2048_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc7919_ffdhe2048_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe2048_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc7919_ffdhe2048_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe2048_l(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rfc7919_ffdhe2048_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe2048_l() {
  return ::cordl_internals::getStaticField<int32_t, "rfc7919_ffdhe2048_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe2048(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc7919_ffdhe2048", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe2048() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc7919_ffdhe2048", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe3072_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc7919_ffdhe3072_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe3072_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc7919_ffdhe3072_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe3072_l(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rfc7919_ffdhe3072_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe3072_l() {
  return ::cordl_internals::getStaticField<int32_t, "rfc7919_ffdhe3072_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe3072(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc7919_ffdhe3072", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe3072() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc7919_ffdhe3072", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe4096_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc7919_ffdhe4096_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe4096_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc7919_ffdhe4096_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe4096_l(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rfc7919_ffdhe4096_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe4096_l() {
  return ::cordl_internals::getStaticField<int32_t, "rfc7919_ffdhe4096_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe4096(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc7919_ffdhe4096", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe4096() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc7919_ffdhe4096", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe6144_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc7919_ffdhe6144_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe6144_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc7919_ffdhe6144_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe6144_l(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rfc7919_ffdhe6144_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe6144_l() {
  return ::cordl_internals::getStaticField<int32_t, "rfc7919_ffdhe6144_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe6144(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc7919_ffdhe6144", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe6144() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc7919_ffdhe6144", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe8192_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rfc7919_ffdhe8192_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe8192_p() {
  return ::cordl_internals::getStaticField<::StringW, "rfc7919_ffdhe8192_p", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe8192_l(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "rfc7919_ffdhe8192_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe8192_l() {
  return ::cordl_internals::getStaticField<int32_t, "rfc7919_ffdhe8192_l", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::setStaticF_rfc7919_ffdhe8192(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc7919_ffdhe8192", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::getStaticF_rfc7919_ffdhe8192() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "rfc7919_ffdhe8192", ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>();
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::FromHex(::StringW hex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, hex);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::FromPG(::StringW hexP, ::StringW hexG) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(), { "FromPG", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(nullptr, ___internal_method, hexP, hexG);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::SafePrimeGen2(::StringW hexP) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(), { "SafePrimeGen2", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(nullptr, ___internal_method, hexP);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::SafePrimeGen2(::StringW hexP, int32_t l) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(),
                                                                                         { "SafePrimeGen2", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(nullptr, ___internal_method, hexP, l);
}
inline void Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups* Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::DHStandardGroups() {}
