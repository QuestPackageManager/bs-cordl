#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\DerVideotexString.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerVideotexString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerVideotexString.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerVideotexString* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::DerVideotexString::GetInstance)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3692a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerVideotexString.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerVideotexString* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::DerVideotexString::GetInstance)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3692cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerVideotexString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerVideotexString::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::DerVideotexString::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3684af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerVideotexString.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::DerVideotexString::*)()>(&::Org::BouncyCastle::Asn1::DerVideotexString::GetString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3692de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerVideotexString.GetOctets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::DerVideotexString::*)()>(&::Org::BouncyCastle::Asn1::DerVideotexString::GetOctets)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3692df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), { "GetOctets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerVideotexString.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerVideotexString::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(
    &::Org::BouncyCastle::Asn1::DerVideotexString::Encode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3692e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerVideotexString.Asn1GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::DerVideotexString::*)()>(&::Org::BouncyCastle::Asn1::DerVideotexString::Asn1GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3692e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerVideotexString.Asn1Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::DerVideotexString::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Asn1::DerVideotexString::Asn1Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3692ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Asn1::DerVideotexString::__cordl_internal_get_mString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mString;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Asn1::DerVideotexString::__cordl_internal_get_mString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mString;
}
constexpr void Org::BouncyCastle::Asn1::DerVideotexString::__cordl_internal_set_mString(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mString = value;
}
inline ::Org::BouncyCastle::Asn1::DerVideotexString* Org::BouncyCastle::Asn1::DerVideotexString::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerVideotexString*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerVideotexString* Org::BouncyCastle::Asn1::DerVideotexString::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerVideotexString*>(nullptr, ___internal_method, obj, isExplicit);
}
inline void Org::BouncyCastle::Asn1::DerVideotexString::_ctor(::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline ::StringW Org::BouncyCastle::Asn1::DerVideotexString::GetString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::DerVideotexString::GetOctets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), { "GetOctets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::DerVideotexString::Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, derOut);
}
inline int32_t Org::BouncyCastle::Asn1::DerVideotexString::Asn1GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::DerVideotexString::Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerVideotexString*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, asn1Object);
}
inline ::Org::BouncyCastle::Asn1::DerVideotexString* Org::BouncyCastle::Asn1::DerVideotexString::New_ctor(::ArrayW<uint8_t> encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerVideotexString*>(encoding));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerVideotexString::DerVideotexString() {}
