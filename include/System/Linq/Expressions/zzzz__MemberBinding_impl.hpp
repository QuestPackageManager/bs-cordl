#pragma once
// IWYU pragma private; include "System\Linq\Expressions\MemberBinding.hpp"
#include "System/Linq/Expressions/zzzz__MemberBindingType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__MemberBinding_def.hpp"
#include "System/Linq/Expressions/zzzz__MemberBindingType_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::MemberBinding.get_BindingType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::MemberBindingType (::System::Linq::Expressions::MemberBinding::*)()>(
    &::System::Linq::Expressions::MemberBinding::get_BindingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberBinding*>(), { "get_BindingType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MemberBinding.get_Member
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberInfo* (::System::Linq::Expressions::MemberBinding::*)()>(&::System::Linq::Expressions::MemberBinding::get_Member)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberBinding*>(), { "get_Member", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::MemberBindingType& System::Linq::Expressions::MemberBinding::__cordl_internal_get__BindingType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindingType_k__BackingField;
}
constexpr ::System::Linq::Expressions::MemberBindingType const& System::Linq::Expressions::MemberBinding::__cordl_internal_get__BindingType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindingType_k__BackingField;
}
constexpr void System::Linq::Expressions::MemberBinding::__cordl_internal_set__BindingType_k__BackingField(::System::Linq::Expressions::MemberBindingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BindingType_k__BackingField = value;
}
constexpr ::System::Reflection::MemberInfo*& System::Linq::Expressions::MemberBinding::__cordl_internal_get__Member_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Member_k__BackingField;
}
constexpr ::System::Reflection::MemberInfo* const& System::Linq::Expressions::MemberBinding::__cordl_internal_get__Member_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Member_k__BackingField;
}
constexpr void System::Linq::Expressions::MemberBinding::__cordl_internal_set__Member_k__BackingField(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Member_k__BackingField = value;
}
inline ::System::Linq::Expressions::MemberBindingType System::Linq::Expressions::MemberBinding::get_BindingType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberBinding*>(), { "get_BindingType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::MemberBindingType>(this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* System::Linq::Expressions::MemberBinding::get_Member() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberBinding*>(), { "get_Member", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::MemberBinding::MemberBinding() {}
