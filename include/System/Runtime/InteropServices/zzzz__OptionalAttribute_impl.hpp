#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/OptionalAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__OptionalAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::OptionalAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::OptionalAttribute::*)()>(&::System::Runtime::InteropServices::OptionalAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6a1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OptionalAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::InteropServices::OptionalAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OptionalAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::OptionalAttribute* System::Runtime::InteropServices::OptionalAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::OptionalAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::OptionalAttribute::OptionalAttribute() {}
