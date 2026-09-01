#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\CustomConstantAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__CustomConstantAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::CustomConstantAttribute.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::CompilerServices::CustomConstantAttribute::*)()>(
    &::System::Runtime::CompilerServices::CustomConstantAttribute::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CustomConstantAttribute*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::CompilerServices::CustomConstantAttribute*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::CustomConstantAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::CustomConstantAttribute::*)()>(
    &::System::Runtime::CompilerServices::CustomConstantAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b70304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CustomConstantAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Object* System::Runtime::CompilerServices::CustomConstantAttribute::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::CompilerServices::CustomConstantAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::CustomConstantAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CustomConstantAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::CustomConstantAttribute* System::Runtime::CompilerServices::CustomConstantAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::CustomConstantAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::CustomConstantAttribute::CustomConstantAttribute() {}
