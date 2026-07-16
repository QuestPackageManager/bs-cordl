#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1OutputStream.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OutputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1OutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1OutputStream::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::Asn1OutputStream::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36832e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1OutputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1OutputStream.WriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1OutputStream::*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Asn1OutputStream::WriteObject)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x36832ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1OutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1OutputStream*>(), 42 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Asn1OutputStream::_ctor(::System::IO::Stream* os) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1OutputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, os);
}
inline void Org::BouncyCastle::Asn1::Asn1OutputStream::WriteObject(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1OutputStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Asn1OutputStream* Org::BouncyCastle::Asn1::Asn1OutputStream::New_ctor(::System::IO::Stream* os) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Asn1OutputStream*>(os));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Asn1OutputStream::Asn1OutputStream() {}
