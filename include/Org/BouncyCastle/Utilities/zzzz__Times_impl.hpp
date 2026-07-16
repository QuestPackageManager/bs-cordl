#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Times.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__Times_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Times.NanoTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::Org::BouncyCastle::Utilities::Times::NanoTime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x363ca5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Times*>(), { "NanoTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Times._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Times::*)()>(&::Org::BouncyCastle::Utilities::Times::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363cb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Times*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::Times::setStaticF_NanosecondsPerTick(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "NanosecondsPerTick", ::Org::BouncyCastle::Utilities::Times*>(std::forward<int64_t>(value));
}
inline int64_t Org::BouncyCastle::Utilities::Times::getStaticF_NanosecondsPerTick() {
  return ::cordl_internals::getStaticField<int64_t, "NanosecondsPerTick", ::Org::BouncyCastle::Utilities::Times*>();
}
inline int64_t Org::BouncyCastle::Utilities::Times::NanoTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Times*>(), { "NanoTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Times::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Times*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Times* Org::BouncyCastle::Utilities::Times::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Times*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Times::Times() {}
