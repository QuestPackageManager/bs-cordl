#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\WrappedGeneratorStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__WrappedGeneratorStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__IStreamGenerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x35a5554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::Close)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x35a5580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*& Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::__cordl_internal_get_gen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gen;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* const& Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::__cordl_internal_get_gen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gen;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::__cordl_internal_set_gen(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gen = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* gen, ::System::IO::Stream* str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gen, str);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream* Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* gen,
                                                                                                                                      ::System::IO::Stream* str) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*>(gen, str));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::WrappedGeneratorStream() {}
