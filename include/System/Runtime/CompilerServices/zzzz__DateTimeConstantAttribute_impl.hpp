#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/DateTimeConstantAttribute.hpp"
#include "System/Runtime/CompilerServices/zzzz__CustomConstantAttribute_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__DateTimeConstantAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::DateTimeConstantAttribute.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::CompilerServices::DateTimeConstantAttribute::*)()>(
    &::System::Runtime::CompilerServices::DateTimeConstantAttribute::get_Value)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b6e008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::DateTimeConstantAttribute*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::CompilerServices::DateTimeConstantAttribute*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& System::Runtime::CompilerServices::DateTimeConstantAttribute::__cordl_internal_get__date() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____date;
}
constexpr ::System::DateTime const& System::Runtime::CompilerServices::DateTimeConstantAttribute::__cordl_internal_get__date() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____date;
}
constexpr void System::Runtime::CompilerServices::DateTimeConstantAttribute::__cordl_internal_set__date(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____date = value;
}
inline ::System::Object* System::Runtime::CompilerServices::DateTimeConstantAttribute::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::CompilerServices::DateTimeConstantAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::DateTimeConstantAttribute::DateTimeConstantAttribute() {}
