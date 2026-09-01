#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\IntrinsicAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IntrinsicAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::IntrinsicAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::IntrinsicAttribute::*)()>(&::System::Runtime::CompilerServices::IntrinsicAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b70548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::IntrinsicAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::IntrinsicAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::IntrinsicAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::IntrinsicAttribute* System::Runtime::CompilerServices::IntrinsicAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::IntrinsicAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::IntrinsicAttribute::IntrinsicAttribute() {}
