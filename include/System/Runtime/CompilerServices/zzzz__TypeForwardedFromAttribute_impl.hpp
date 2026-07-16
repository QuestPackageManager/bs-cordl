#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/TypeForwardedFromAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TypeForwardedFromAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::TypeForwardedFromAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::TypeForwardedFromAttribute::*)(::StringW)>(
    &::System::Runtime::CompilerServices::TypeForwardedFromAttribute::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b6e558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TypeForwardedFromAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::TypeForwardedFromAttribute.get_AssemblyFullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::CompilerServices::TypeForwardedFromAttribute::*)()>(
    &::System::Runtime::CompilerServices::TypeForwardedFromAttribute::get_AssemblyFullName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6e5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TypeForwardedFromAttribute*>(), { "get_AssemblyFullName", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::CompilerServices::TypeForwardedFromAttribute::__cordl_internal_get__AssemblyFullName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AssemblyFullName_k__BackingField;
}
constexpr ::StringW const& System::Runtime::CompilerServices::TypeForwardedFromAttribute::__cordl_internal_get__AssemblyFullName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AssemblyFullName_k__BackingField;
}
constexpr void System::Runtime::CompilerServices::TypeForwardedFromAttribute::__cordl_internal_set__AssemblyFullName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AssemblyFullName_k__BackingField = value;
}
inline void System::Runtime::CompilerServices::TypeForwardedFromAttribute::_ctor(::StringW assemblyFullName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TypeForwardedFromAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assemblyFullName);
}
inline ::StringW System::Runtime::CompilerServices::TypeForwardedFromAttribute::get_AssemblyFullName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TypeForwardedFromAttribute*>(), { "get_AssemblyFullName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::TypeForwardedFromAttribute* System::Runtime::CompilerServices::TypeForwardedFromAttribute::New_ctor(::StringW assemblyFullName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::TypeForwardedFromAttribute*>(assemblyFullName));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::TypeForwardedFromAttribute::TypeForwardedFromAttribute() {}
