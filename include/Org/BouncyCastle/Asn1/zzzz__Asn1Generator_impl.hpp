#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Asn1Generator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Generator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Generator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1Generator::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Asn1::Asn1Generator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3681654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Generator.get_Out
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::Asn1Generator::*)()>(&::Org::BouncyCastle::Asn1::Asn1Generator::get_Out)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368165c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), { "get_Out", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Generator.AddObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1Generator::*)(::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Asn1::Asn1Generator::AddObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Generator.GetRawOutputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::Asn1Generator::*)()>(&::Org::BouncyCastle::Asn1::Asn1Generator::GetRawOutputStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Asn1Generator.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Asn1Generator::*)()>(&::Org::BouncyCastle::Asn1::Asn1Generator::Close)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Asn1::Asn1Generator::__cordl_internal_get__out() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Asn1::Asn1Generator::__cordl_internal_get__out() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr void Org::BouncyCastle::Asn1::Asn1Generator::__cordl_internal_set__out(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____out = value;
}
inline void Org::BouncyCastle::Asn1::Asn1Generator::_ctor(::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::Asn1Generator::get_Out() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), { "get_Out", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Asn1Generator::AddObject(::Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::Asn1Generator::GetRawOutputStream() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Asn1Generator::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Asn1Generator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Generator* Org::BouncyCastle::Asn1::Asn1Generator::New_ctor(::System::IO::Stream* outStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Asn1Generator*>(outStream));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Asn1Generator::Asn1Generator() {}
