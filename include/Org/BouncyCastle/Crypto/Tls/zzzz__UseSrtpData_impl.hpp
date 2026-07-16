#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/UseSrtpData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__UseSrtpData_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::UseSrtpData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::UseSrtpData::*)(::ArrayW<int32_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::UseSrtpData::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3490608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::UseSrtpData.get_ProtectionProfiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Tls::UseSrtpData::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::UseSrtpData::get_ProtectionProfiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3497458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::UseSrtpData.get_Mki
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::UseSrtpData::*)()>(&::Org::BouncyCastle::Crypto::Tls::UseSrtpData::get_Mki)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3497460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Tls::UseSrtpData::__cordl_internal_get_mProtectionProfiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mProtectionProfiles;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Tls::UseSrtpData::__cordl_internal_get_mProtectionProfiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mProtectionProfiles;
}
constexpr void Org::BouncyCastle::Crypto::Tls::UseSrtpData::__cordl_internal_set_mProtectionProfiles(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mProtectionProfiles = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::UseSrtpData::__cordl_internal_get_mMki() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMki;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::UseSrtpData::__cordl_internal_get_mMki() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMki;
}
constexpr void Org::BouncyCastle::Crypto::Tls::UseSrtpData::__cordl_internal_set_mMki(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMki = value;
}
inline void Org::BouncyCastle::Crypto::Tls::UseSrtpData::_ctor(::ArrayW<int32_t> protectionProfiles, ::ArrayW<uint8_t> mki) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, protectionProfiles, mki);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::UseSrtpData::get_ProtectionProfiles() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::UseSrtpData::get_Mki() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::UseSrtpData* Org::BouncyCastle::Crypto::Tls::UseSrtpData::New_ctor(::ArrayW<int32_t> protectionProfiles, ::ArrayW<uint8_t> mki) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>(protectionProfiles, mki));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::UseSrtpData::UseSrtpData() {}
