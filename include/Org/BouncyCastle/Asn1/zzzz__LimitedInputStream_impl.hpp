#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\LimitedInputStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__LimitedInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LimitedInputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::LimitedInputStream::*)(::System::IO::Stream*, int32_t)>(
    &::Org::BouncyCastle::Asn1::LimitedInputStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x368d43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LimitedInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LimitedInputStream.get_Limit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::LimitedInputStream::*)()>(&::Org::BouncyCastle::Asn1::LimitedInputStream::get_Limit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368d468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LimitedInputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::LimitedInputStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LimitedInputStream.SetParentEofDetect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::LimitedInputStream::*)(bool)>(&::Org::BouncyCastle::Asn1::LimitedInputStream::SetParentEofDetect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x368d470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LimitedInputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::LimitedInputStream*>(), 43 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Asn1::LimitedInputStream::__cordl_internal_get__in() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____in;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Asn1::LimitedInputStream::__cordl_internal_get__in() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____in;
}
constexpr void Org::BouncyCastle::Asn1::LimitedInputStream::__cordl_internal_set__in(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____in = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::LimitedInputStream::__cordl_internal_get__limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limit;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::LimitedInputStream::__cordl_internal_get__limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limit;
}
constexpr void Org::BouncyCastle::Asn1::LimitedInputStream::__cordl_internal_set__limit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____limit = value;
}
inline void Org::BouncyCastle::Asn1::LimitedInputStream::_ctor(::System::IO::Stream* inStream, int32_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::LimitedInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inStream, limit);
}
inline int32_t Org::BouncyCastle::Asn1::LimitedInputStream::get_Limit() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::LimitedInputStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::LimitedInputStream::SetParentEofDetect(bool on) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::LimitedInputStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline ::Org::BouncyCastle::Asn1::LimitedInputStream* Org::BouncyCastle::Asn1::LimitedInputStream::New_ctor(::System::IO::Stream* inStream, int32_t limit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::LimitedInputStream*>(inStream, limit));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::LimitedInputStream::LimitedInputStream() {}
