#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ReflectionBlockedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ReflectionBlockedAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::ReflectionBlockedAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::ReflectionBlockedAttribute::*)()>(
    &::System::Runtime::CompilerServices::ReflectionBlockedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6f454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReflectionBlockedAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::ReflectionBlockedAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReflectionBlockedAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::ReflectionBlockedAttribute* System::Runtime::CompilerServices::ReflectionBlockedAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::ReflectionBlockedAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::ReflectionBlockedAttribute::ReflectionBlockedAttribute() {}
