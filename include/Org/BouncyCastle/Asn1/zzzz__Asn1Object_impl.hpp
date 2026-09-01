#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Asn1Object.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Object.FromByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::Asn1Object::FromByteArray)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x334cdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { "FromByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Object.FromStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::Asn1Object::FromStream)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x334cffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { "FromStream", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Object.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Asn1Object::*)()>(&::Org::BouncyCastle::Asn1::Asn1Object::ToAsn1Object)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x334d134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { "ToAsn1Object", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Object.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1Object::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(&::Org::BouncyCastle::Asn1::Asn1Object::Encode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Object.Asn1Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::Asn1Object::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(&::Org::BouncyCastle::Asn1::Asn1Object::Asn1Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Object.Asn1GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::Asn1Object::*)()>(&::Org::BouncyCastle::Asn1::Asn1Object::Asn1GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Object.CallAsn1Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::Asn1Object::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Asn1::Asn1Object::CallAsn1Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x334637c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { "CallAsn1Equals", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Object.CallAsn1GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::Asn1Object::*)()>(&::Org::BouncyCastle::Asn1::Asn1Object::CallAsn1GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3346258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { "CallAsn1GetHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Object._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1Object::*)()>(&::Org::BouncyCastle::Asn1::Asn1Object::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x334d138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Asn1Object::FromByteArray(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { "FromByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(nullptr, ___internal_method, data);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Asn1Object::FromStream(::System::IO::Stream* inStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { "FromStream", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(nullptr, ___internal_method, inStr);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Asn1Object::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { "ToAsn1Object", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Asn1Object::Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, derOut);
}
inline bool Org::BouncyCastle::Asn1::Asn1Object::Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, asn1Object);
}
inline int32_t Org::BouncyCastle::Asn1::Asn1Object::Asn1GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::Asn1Object::CallAsn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { "CallAsn1Equals", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Asn1::Asn1Object::CallAsn1GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { "CallAsn1GetHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Asn1Object::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Asn1Object::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Asn1Object*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Asn1Object::Asn1Object() {}
