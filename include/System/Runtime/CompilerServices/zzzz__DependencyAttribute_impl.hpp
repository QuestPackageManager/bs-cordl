#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\DependencyAttribute.hpp"
#include "System/Runtime/CompilerServices/zzzz__LoadHint_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__DependencyAttribute_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__LoadHint_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::DependencyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::DependencyAttribute::*)(::StringW, ::System::Runtime::CompilerServices::LoadHint)>(
    &::System::Runtime::CompilerServices::DependencyAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b72e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::DependencyAttribute*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::CompilerServices::LoadHint>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::CompilerServices::DependencyAttribute::__cordl_internal_get_dependentAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dependentAssembly;
}
constexpr ::StringW const& System::Runtime::CompilerServices::DependencyAttribute::__cordl_internal_get_dependentAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dependentAssembly;
}
constexpr void System::Runtime::CompilerServices::DependencyAttribute::__cordl_internal_set_dependentAssembly(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dependentAssembly = value;
}
constexpr ::System::Runtime::CompilerServices::LoadHint& System::Runtime::CompilerServices::DependencyAttribute::__cordl_internal_get_loadHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadHint;
}
constexpr ::System::Runtime::CompilerServices::LoadHint const& System::Runtime::CompilerServices::DependencyAttribute::__cordl_internal_get_loadHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadHint;
}
constexpr void System::Runtime::CompilerServices::DependencyAttribute::__cordl_internal_set_loadHint(::System::Runtime::CompilerServices::LoadHint value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadHint = value;
}
inline void System::Runtime::CompilerServices::DependencyAttribute::_ctor(::StringW dependentAssemblyArgument, ::System::Runtime::CompilerServices::LoadHint loadHintArgument) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::DependencyAttribute*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::CompilerServices::LoadHint>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependentAssemblyArgument, loadHintArgument);
}
inline ::System::Runtime::CompilerServices::DependencyAttribute* System::Runtime::CompilerServices::DependencyAttribute::New_ctor(::StringW dependentAssemblyArgument,
                                                                                                                                  ::System::Runtime::CompilerServices::LoadHint loadHintArgument) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::DependencyAttribute*>(dependentAssemblyArgument, loadHintArgument));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::DependencyAttribute::DependencyAttribute() {}
