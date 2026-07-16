#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/TypeDependencyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TypeDependencyAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::TypeDependencyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::TypeDependencyAttribute::*)(::StringW)>(
    &::System::Runtime::CompilerServices::TypeDependencyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b70b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TypeDependencyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::CompilerServices::TypeDependencyAttribute::__cordl_internal_get_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr ::StringW const& System::Runtime::CompilerServices::TypeDependencyAttribute::__cordl_internal_get_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr void System::Runtime::CompilerServices::TypeDependencyAttribute::__cordl_internal_set_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeName = value;
}
inline void System::Runtime::CompilerServices::TypeDependencyAttribute::_ctor(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TypeDependencyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName);
}
inline ::System::Runtime::CompilerServices::TypeDependencyAttribute* System::Runtime::CompilerServices::TypeDependencyAttribute::New_ctor(::StringW typeName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::TypeDependencyAttribute*>(typeName));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::TypeDependencyAttribute::TypeDependencyAttribute() {}
