#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\CallSite.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSite_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSiteBinder_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallSite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::CallSite::*)(::System::Runtime::CompilerServices::CallSiteBinder*)>(
    &::System::Runtime::CompilerServices::CallSite::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc1738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSite*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSiteBinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallSite.get_Binder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::CallSiteBinder* (::System::Runtime::CompilerServices::CallSite::*)()>(
    &::System::Runtime::CompilerServices::CallSite::get_Binder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc1740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSite*>(), { "get_Binder", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::CompilerServices::CallSiteBinder*& System::Runtime::CompilerServices::CallSite::__cordl_internal_get__binder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____binder;
}
constexpr ::System::Runtime::CompilerServices::CallSiteBinder* const& System::Runtime::CompilerServices::CallSite::__cordl_internal_get__binder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____binder;
}
constexpr void System::Runtime::CompilerServices::CallSite::__cordl_internal_set__binder(::System::Runtime::CompilerServices::CallSiteBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____binder = value;
}
constexpr bool& System::Runtime::CompilerServices::CallSite::__cordl_internal_get__match() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____match;
}
constexpr bool const& System::Runtime::CompilerServices::CallSite::__cordl_internal_get__match() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____match;
}
constexpr void System::Runtime::CompilerServices::CallSite::__cordl_internal_set__match(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____match = value;
}
inline void System::Runtime::CompilerServices::CallSite::_ctor(::System::Runtime::CompilerServices::CallSiteBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSite*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::CallSiteBinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binder);
}
inline ::System::Runtime::CompilerServices::CallSiteBinder* System::Runtime::CompilerServices::CallSite::get_Binder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallSite*>(), { "get_Binder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::CallSiteBinder*>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::CallSite* System::Runtime::CompilerServices::CallSite::New_ctor(::System::Runtime::CompilerServices::CallSiteBinder* binder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::CallSite*>(binder));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::CallSite::CallSite() {}
