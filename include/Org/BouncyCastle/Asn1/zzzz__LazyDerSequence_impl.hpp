#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/LazyDerSequence.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__LazyDerSequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyDerSequence._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::LazyDerSequence::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::LazyDerSequence::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3691264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyDerSequence.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::LazyDerSequence::*)()>(&::Org::BouncyCastle::Asn1::LazyDerSequence::Parse)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x36913b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), { "Parse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyDerSequence.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Asn1::LazyDerSequence::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::LazyDerSequence::get_Item)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x369151c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyDerSequence.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Asn1::LazyDerSequence::*)()>(
    &::Org::BouncyCastle::Asn1::LazyDerSequence::GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3691544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyDerSequence.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::LazyDerSequence::*)()>(&::Org::BouncyCastle::Asn1::LazyDerSequence::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3691568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LazyDerSequence.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::LazyDerSequence::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(
    &::Org::BouncyCastle::Asn1::LazyDerSequence::Encode)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x369158c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Asn1::LazyDerSequence::__cordl_internal_get_encoded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoded;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Asn1::LazyDerSequence::__cordl_internal_get_encoded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoded;
}
constexpr void Org::BouncyCastle::Asn1::LazyDerSequence::__cordl_internal_set_encoded(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoded = value;
}
inline void Org::BouncyCastle::Asn1::LazyDerSequence::_ctor(::ArrayW<uint8_t> encoded) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoded);
}
inline void Org::BouncyCastle::Asn1::LazyDerSequence::Parse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), { "Parse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::LazyDerSequence::get_Item(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method, index);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Asn1::LazyDerSequence::GetEnumerator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::LazyDerSequence::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::LazyDerSequence::Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::LazyDerSequence*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, derOut);
}
inline ::Org::BouncyCastle::Asn1::LazyDerSequence* Org::BouncyCastle::Asn1::LazyDerSequence::New_ctor(::ArrayW<uint8_t> encoded) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::LazyDerSequence*>(encoded));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::LazyDerSequence::LazyDerSequence() {}
