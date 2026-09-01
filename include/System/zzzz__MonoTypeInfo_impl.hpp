#pragma once
// IWYU pragma private; include "System\MonoTypeInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MonoTypeInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeConstructorInfo_def.hpp"
//  Writing Method size for method: ::System::MonoTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MonoTypeInfo::*)()>(&::System::MonoTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8ec54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoTypeInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::MonoTypeInfo::__cordl_internal_get_full_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___full_name;
}
constexpr ::StringW const& System::MonoTypeInfo::__cordl_internal_get_full_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___full_name;
}
constexpr void System::MonoTypeInfo::__cordl_internal_set_full_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___full_name = value;
}
constexpr ::System::Reflection::RuntimeConstructorInfo*& System::MonoTypeInfo::__cordl_internal_get_default_ctor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___default_ctor;
}
constexpr ::System::Reflection::RuntimeConstructorInfo* const& System::MonoTypeInfo::__cordl_internal_get_default_ctor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___default_ctor;
}
constexpr void System::MonoTypeInfo::__cordl_internal_set_default_ctor(::System::Reflection::RuntimeConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___default_ctor = value;
}
inline void System::MonoTypeInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoTypeInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::MonoTypeInfo* System::MonoTypeInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::MonoTypeInfo*>());
}
// Ctor Parameters []
constexpr ::System::MonoTypeInfo::MonoTypeInfo() {}
