#pragma once
// IWYU pragma private; include "Mono/Util/MonoPInvokeCallbackAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Mono/Util/zzzz__MonoPInvokeCallbackAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Mono::Util::MonoPInvokeCallbackAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Util::MonoPInvokeCallbackAttribute::*)(::System::Type*)>(&::Mono::Util::MonoPInvokeCallbackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fcb390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Util::MonoPInvokeCallbackAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void Mono::Util::MonoPInvokeCallbackAttribute::_ctor(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Util::MonoPInvokeCallbackAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::Mono::Util::MonoPInvokeCallbackAttribute* Mono::Util::MonoPInvokeCallbackAttribute::New_ctor(::System::Type* t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Util::MonoPInvokeCallbackAttribute*>(t));
}
// Ctor Parameters []
constexpr ::Mono::Util::MonoPInvokeCallbackAttribute::MonoPInvokeCallbackAttribute() {}
