#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Misc\IdeaCbcPar.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Misc/zzzz__IdeaCbcPar_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::GetInstance)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x34567a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x34569cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x34568e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar.GetIV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::*)()>(&::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::GetIV)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3456a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(), { "GetIV", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::*)()>(
    &::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::ToAsn1Object)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3456a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::__cordl_internal_get_iv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iv;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::__cordl_internal_get_iv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iv;
}
constexpr void Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::__cordl_internal_set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iv = value;
}
inline ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar* Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::GetInstance(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(nullptr, ___internal_method, o);
}
inline void Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::_ctor(::ArrayW<uint8_t> iv) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iv);
}
inline void Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::GetIV() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(), { "GetIV", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar* Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::New_ctor(::ArrayW<uint8_t> iv) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(iv));
}
inline ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar* Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar::IdeaCbcPar() {}
