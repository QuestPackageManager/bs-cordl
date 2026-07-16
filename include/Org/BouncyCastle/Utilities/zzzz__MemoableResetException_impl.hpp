#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/MemoableResetException.hpp"
#include "System/zzzz__InvalidCastException_impl.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__MemoableResetException_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::MemoableResetException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::MemoableResetException::*)(::StringW)>(&::Org::BouncyCastle::Utilities::MemoableResetException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x363ba7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::MemoableResetException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::MemoableResetException::_ctor(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::MemoableResetException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline ::Org::BouncyCastle::Utilities::MemoableResetException* Org::BouncyCastle::Utilities::MemoableResetException::New_ctor(::StringW msg) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::MemoableResetException*>(msg));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::MemoableResetException::MemoableResetException() {}
