#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Misc/NetscapeCertType.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_impl.hpp"
#include "Org/BouncyCastle/Asn1/Misc/zzzz__NetscapeCertType_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::*)(int32_t)>(&::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x34551a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::*)(::Org::BouncyCastle::Asn1::DerBitString*)>(
    &::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3455214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::*)()>(&::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x34552b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>(), 3 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Misc::NetscapeCertType::_ctor(int32_t usage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage);
}
inline void Org::BouncyCastle::Asn1::Misc::NetscapeCertType::_ctor(::Org::BouncyCastle::Asn1::DerBitString* usage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage);
}
inline ::StringW Org::BouncyCastle::Asn1::Misc::NetscapeCertType::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType* Org::BouncyCastle::Asn1::Misc::NetscapeCertType::New_ctor(int32_t usage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>(usage));
}
inline ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType* Org::BouncyCastle::Asn1::Misc::NetscapeCertType::New_ctor(::Org::BouncyCastle::Asn1::DerBitString* usage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>(usage));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::NetscapeCertType() {}
