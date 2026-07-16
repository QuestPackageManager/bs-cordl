#pragma once
// IWYU pragma private; include "Microsoft/CSharp/CodeDomProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Microsoft/CSharp/zzzz__CodeDomProvider_def.hpp"
//  Writing Method size for method: ::Microsoft::CSharp::CodeDomProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::CSharp::CodeDomProvider::*)()>(&::Microsoft::CSharp::CodeDomProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x618c468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::CSharp::CodeDomProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Microsoft::CSharp::CodeDomProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::CSharp::CodeDomProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Microsoft::CSharp::CodeDomProvider* Microsoft::CSharp::CodeDomProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::CSharp::CodeDomProvider*>());
}
// Ctor Parameters []
constexpr ::Microsoft::CSharp::CodeDomProvider::CodeDomProvider() {}
