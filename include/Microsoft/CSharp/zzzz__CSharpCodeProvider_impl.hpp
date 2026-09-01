#pragma once
// IWYU pragma private; include "Microsoft\CSharp\CSharpCodeProvider.hpp"
#include "Microsoft/CSharp/zzzz__CodeDomProvider_impl.hpp"
#include "Microsoft/CSharp/zzzz__CSharpCodeProvider_def.hpp"
//  Writing Method size for method: ::Microsoft::CSharp::CSharpCodeProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::CSharp::CSharpCodeProvider::*)()>(&::Microsoft::CSharp::CSharpCodeProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6191c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::CSharp::CSharpCodeProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Microsoft::CSharp::CSharpCodeProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::CSharp::CSharpCodeProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Microsoft::CSharp::CSharpCodeProvider* Microsoft::CSharp::CSharpCodeProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::CSharp::CSharpCodeProvider*>());
}
// Ctor Parameters []
constexpr ::Microsoft::CSharp::CSharpCodeProvider::CSharpCodeProvider() {}
