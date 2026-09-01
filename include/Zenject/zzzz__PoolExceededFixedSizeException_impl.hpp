#pragma once
// IWYU pragma private; include "Zenject\PoolExceededFixedSizeException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Zenject/zzzz__PoolExceededFixedSizeException_def.hpp"
//  Writing Method size for method: ::Zenject::PoolExceededFixedSizeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PoolExceededFixedSizeException::*)(::StringW)>(&::Zenject::PoolExceededFixedSizeException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e6963c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolExceededFixedSizeException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Zenject::PoolExceededFixedSizeException::_ctor(::StringW errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolExceededFixedSizeException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage);
}
inline ::Zenject::PoolExceededFixedSizeException* Zenject::PoolExceededFixedSizeException::New_ctor(::StringW errorMessage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolExceededFixedSizeException*>(errorMessage));
}
// Ctor Parameters []
constexpr ::Zenject::PoolExceededFixedSizeException::PoolExceededFixedSizeException() {}
