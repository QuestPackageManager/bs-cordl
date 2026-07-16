#pragma once
// IWYU pragma private; include "AOT/MonoPInvokeCallbackAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "AOT/zzzz__MonoPInvokeCallbackAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::AOT::MonoPInvokeCallbackAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AOT::MonoPInvokeCallbackAttribute::*)(::System::Type*)>(&::AOT::MonoPInvokeCallbackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a55ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AOT::MonoPInvokeCallbackAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void AOT::MonoPInvokeCallbackAttribute::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AOT::MonoPInvokeCallbackAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::AOT::MonoPInvokeCallbackAttribute* AOT::MonoPInvokeCallbackAttribute::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AOT::MonoPInvokeCallbackAttribute*>(type));
}
// Ctor Parameters []
constexpr ::AOT::MonoPInvokeCallbackAttribute::MonoPInvokeCallbackAttribute() {}
