#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\InternalsVisibleToAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__InternalsVisibleToAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::InternalsVisibleToAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::InternalsVisibleToAttribute::*)(::StringW)>(
    &::System::Runtime::CompilerServices::InternalsVisibleToAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b72e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::InternalsVisibleToAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::InternalsVisibleToAttribute.set_AllInternalsVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::InternalsVisibleToAttribute::*)(bool)>(
    &::System::Runtime::CompilerServices::InternalsVisibleToAttribute::set_AllInternalsVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b72e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::InternalsVisibleToAttribute*>(), { "set_AllInternalsVisible", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::CompilerServices::InternalsVisibleToAttribute::__cordl_internal_get__assemblyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assemblyName;
}
constexpr ::StringW const& System::Runtime::CompilerServices::InternalsVisibleToAttribute::__cordl_internal_get__assemblyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assemblyName;
}
constexpr void System::Runtime::CompilerServices::InternalsVisibleToAttribute::__cordl_internal_set__assemblyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____assemblyName = value;
}
constexpr bool& System::Runtime::CompilerServices::InternalsVisibleToAttribute::__cordl_internal_get__allInternalsVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allInternalsVisible;
}
constexpr bool const& System::Runtime::CompilerServices::InternalsVisibleToAttribute::__cordl_internal_get__allInternalsVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allInternalsVisible;
}
constexpr void System::Runtime::CompilerServices::InternalsVisibleToAttribute::__cordl_internal_set__allInternalsVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allInternalsVisible = value;
}
inline void System::Runtime::CompilerServices::InternalsVisibleToAttribute::_ctor(::StringW assemblyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::InternalsVisibleToAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assemblyName);
}
inline void System::Runtime::CompilerServices::InternalsVisibleToAttribute::set_AllInternalsVisible(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::InternalsVisibleToAttribute*>(), { "set_AllInternalsVisible", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::CompilerServices::InternalsVisibleToAttribute* System::Runtime::CompilerServices::InternalsVisibleToAttribute::New_ctor(::StringW assemblyName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::InternalsVisibleToAttribute*>(assemblyName));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::InternalsVisibleToAttribute::InternalsVisibleToAttribute() {}
