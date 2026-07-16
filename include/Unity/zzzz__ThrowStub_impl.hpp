#pragma once
// IWYU pragma private; include "Unity/ThrowStub.hpp"
#include "System/zzzz__ObjectDisposedException_impl.hpp"
#include "Unity/zzzz__ThrowStub_def.hpp"
//  Writing Method size for method: ::Unity::ThrowStub.ThrowNotSupportedException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::ThrowStub::ThrowNotSupportedException)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c22e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::ThrowStub*>(), { "ThrowNotSupportedException", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::ThrowStub::ThrowNotSupportedException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::ThrowStub*>(), { "ThrowNotSupportedException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::ThrowStub::ThrowStub() {}
