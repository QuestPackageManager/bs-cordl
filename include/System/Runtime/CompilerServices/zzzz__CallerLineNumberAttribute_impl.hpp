#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CallerLineNumberAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallerLineNumberAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallerLineNumberAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::CallerLineNumberAttribute::*)()>(
    &::System::Runtime::CompilerServices::CallerLineNumberAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6d9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallerLineNumberAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::CallerLineNumberAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallerLineNumberAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::CallerLineNumberAttribute* System::Runtime::CompilerServices::CallerLineNumberAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::CallerLineNumberAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::CallerLineNumberAttribute::CallerLineNumberAttribute() {}
