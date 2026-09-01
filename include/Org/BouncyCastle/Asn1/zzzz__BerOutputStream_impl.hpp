#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\BerOutputStream.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerOutputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOutputStream::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::BerOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3689420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOutputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOutputStream.WriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOutputStream::*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::BerOutputStream::WriteObject)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x368ad0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerOutputStream*>(), 42 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::BerOutputStream::_ctor(::System::IO::Stream* os) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOutputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, os);
}
inline void Org::BouncyCastle::Asn1::BerOutputStream::WriteObject(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerOutputStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::BerOutputStream* Org::BouncyCastle::Asn1::BerOutputStream::New_ctor(::System::IO::Stream* os) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerOutputStream*>(os));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerOutputStream::BerOutputStream() {}
