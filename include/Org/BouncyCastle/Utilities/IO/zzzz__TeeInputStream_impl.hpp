#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\IO\TeeInputStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__TeeInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::TeeInputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::TeeInputStream::*)(::System::IO::Stream*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::IO::TeeInputStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36302e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::TeeInputStream*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::TeeInputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::TeeInputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::TeeInputStream::Close)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3630314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::TeeInputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::TeeInputStream*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::TeeInputStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::IO::TeeInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::IO::TeeInputStream::Read)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36303b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::TeeInputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::TeeInputStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::TeeInputStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::IO::TeeInputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::TeeInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3630428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::TeeInputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::TeeInputStream*>(), 37 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Utilities::IO::TeeInputStream::__cordl_internal_get_input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Utilities::IO::TeeInputStream::__cordl_internal_get_input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr void Org::BouncyCastle::Utilities::IO::TeeInputStream::__cordl_internal_set_input(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___input = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Utilities::IO::TeeInputStream::__cordl_internal_get_tee() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tee;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Utilities::IO::TeeInputStream::__cordl_internal_get_tee() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tee;
}
constexpr void Org::BouncyCastle::Utilities::IO::TeeInputStream::__cordl_internal_set_tee(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tee = value;
}
inline void Org::BouncyCastle::Utilities::IO::TeeInputStream::_ctor(::System::IO::Stream* input, ::System::IO::Stream* tee) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::TeeInputStream*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, tee);
}
inline void Org::BouncyCastle::Utilities::IO::TeeInputStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::TeeInputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::IO::TeeInputStream::Read(::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::TeeInputStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buf, off, len);
}
inline int32_t Org::BouncyCastle::Utilities::IO::TeeInputStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::TeeInputStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::IO::TeeInputStream* Org::BouncyCastle::Utilities::IO::TeeInputStream::New_ctor(::System::IO::Stream* input, ::System::IO::Stream* tee) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::IO::TeeInputStream*>(input, tee));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::IO::TeeInputStream::TeeInputStream() {}
