#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\IMemoable.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IMemoable.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (::Org::BouncyCastle::Utilities::IMemoable::*)()>(&::Org::BouncyCastle::Utilities::IMemoable::Copy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IMemoable*>(), { ::i2c::class_of<::Org::BouncyCastle::Utilities::IMemoable*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IMemoable.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IMemoable::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(
    &::Org::BouncyCastle::Utilities::IMemoable::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IMemoable*>(), { ::i2c::class_of<::Org::BouncyCastle::Utilities::IMemoable*>(), 1 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Utilities::IMemoable::Copy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IMemoable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IMemoable*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::IMemoable::Reset(::Org::BouncyCastle::Utilities::IMemoable* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IMemoable*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
