#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\PkiFailureInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiFailureInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo::*)(int32_t)>(&::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x334dde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo::*)(::Org::BouncyCastle::Asn1::DerBitString*)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x334de48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo::*)()>(&::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo::ToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x334dee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*>(), 3 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo::_ctor(int32_t info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo::_ctor(::Org::BouncyCastle::Asn1::DerBitString* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::StringW Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo::New_ctor(int32_t info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*>(info));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo::New_ctor(::Org::BouncyCastle::Asn1::DerBitString* info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*>(info));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo::PkiFailureInfo() {}
