#pragma once
// IWYU pragma private; include "System\DelegateData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DelegateData_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::DelegateData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DelegateData::*)()>(&::System::DelegateData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9071c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DelegateData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::DelegateData::__cordl_internal_get_target_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target_type;
}
constexpr ::System::Type* const& System::DelegateData::__cordl_internal_get_target_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target_type;
}
constexpr void System::DelegateData::__cordl_internal_set_target_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___target_type = value;
}
constexpr ::StringW& System::DelegateData::__cordl_internal_get_method_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_name;
}
constexpr ::StringW const& System::DelegateData::__cordl_internal_get_method_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_name;
}
constexpr void System::DelegateData::__cordl_internal_set_method_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method_name = value;
}
constexpr bool& System::DelegateData::__cordl_internal_get_curried_first_arg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curried_first_arg;
}
constexpr bool const& System::DelegateData::__cordl_internal_get_curried_first_arg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curried_first_arg;
}
constexpr void System::DelegateData::__cordl_internal_set_curried_first_arg(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curried_first_arg = value;
}
inline void System::DelegateData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DelegateData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DelegateData* System::DelegateData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DelegateData*>());
}
// Ctor Parameters []
constexpr ::System::DelegateData::DelegateData() {}
