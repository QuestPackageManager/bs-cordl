#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\KeyUsage.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__KeyUsage_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::KeyUsage.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::KeyUsage* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::KeyUsage::GetInstance)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3661138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::KeyUsage.FromExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::KeyUsage* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Asn1::X509::KeyUsage::FromExtensions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3661310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(),
                                                                                           { "FromExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::KeyUsage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::KeyUsage::*)(int32_t)>(&::Org::BouncyCastle::Asn1::X509::KeyUsage::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3661388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::KeyUsage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::KeyUsage::*)(::Org::BouncyCastle::Asn1::DerBitString*)>(
    &::Org::BouncyCastle::Asn1::X509::KeyUsage::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3661270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::KeyUsage.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::KeyUsage::*)()>(&::Org::BouncyCastle::Asn1::X509::KeyUsage::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x36613f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(), 3 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::X509::KeyUsage* Org::BouncyCastle::Asn1::X509::KeyUsage::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::KeyUsage* Org::BouncyCastle::Asn1::X509::KeyUsage::FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(),
                                                                                         { "FromExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(nullptr, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Asn1::X509::KeyUsage::_ctor(int32_t usage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage);
}
inline void Org::BouncyCastle::Asn1::X509::KeyUsage::_ctor(::Org::BouncyCastle::Asn1::DerBitString* usage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::KeyUsage::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::KeyUsage* Org::BouncyCastle::Asn1::X509::KeyUsage::New_ctor(int32_t usage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(usage));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyUsage* Org::BouncyCastle::Asn1::X509::KeyUsage::New_ctor(::Org::BouncyCastle::Asn1::DerBitString* usage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::KeyUsage*>(usage));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::KeyUsage::KeyUsage() {}
