#pragma once
// IWYU pragma private; include "System/Linq/Expressions/SwitchExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__SwitchExpression_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__SwitchCase_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::SwitchExpression.get_SwitchValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::SwitchExpression::*)()>(
    &::System::Linq::Expressions::SwitchExpression::get_SwitchValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f83d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SwitchExpression*>(), { "get_SwitchValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::SwitchExpression.get_Cases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* (
    ::System::Linq::Expressions::SwitchExpression::*)()>(&::System::Linq::Expressions::SwitchExpression::get_Cases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f83d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SwitchExpression*>(), { "get_Cases", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::SwitchExpression.get_DefaultBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::SwitchExpression::*)()>(
    &::System::Linq::Expressions::SwitchExpression::get_DefaultBody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f83d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SwitchExpression*>(), { "get_DefaultBody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::SwitchExpression.get_Comparison
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Linq::Expressions::SwitchExpression::*)()>(
    &::System::Linq::Expressions::SwitchExpression::get_Comparison)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f83d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SwitchExpression*>(), { "get_Comparison", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::SwitchExpression::__cordl_internal_get__SwitchValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SwitchValue_k__BackingField;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::SwitchExpression::__cordl_internal_get__SwitchValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SwitchValue_k__BackingField;
}
constexpr void System::Linq::Expressions::SwitchExpression::__cordl_internal_set__SwitchValue_k__BackingField(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SwitchValue_k__BackingField = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>*&
System::Linq::Expressions::SwitchExpression::__cordl_internal_get__Cases_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cases_k__BackingField;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* const&
System::Linq::Expressions::SwitchExpression::__cordl_internal_get__Cases_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cases_k__BackingField;
}
constexpr void
System::Linq::Expressions::SwitchExpression::__cordl_internal_set__Cases_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Cases_k__BackingField = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::SwitchExpression::__cordl_internal_get__DefaultBody_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DefaultBody_k__BackingField;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::SwitchExpression::__cordl_internal_get__DefaultBody_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DefaultBody_k__BackingField;
}
constexpr void System::Linq::Expressions::SwitchExpression::__cordl_internal_set__DefaultBody_k__BackingField(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DefaultBody_k__BackingField = value;
}
constexpr ::System::Reflection::MethodInfo*& System::Linq::Expressions::SwitchExpression::__cordl_internal_get__Comparison_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Comparison_k__BackingField;
}
constexpr ::System::Reflection::MethodInfo* const& System::Linq::Expressions::SwitchExpression::__cordl_internal_get__Comparison_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Comparison_k__BackingField;
}
constexpr void System::Linq::Expressions::SwitchExpression::__cordl_internal_set__Comparison_k__BackingField(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Comparison_k__BackingField = value;
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::SwitchExpression::get_SwitchValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SwitchExpression*>(), { "get_SwitchValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* System::Linq::Expressions::SwitchExpression::get_Cases() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SwitchExpression*>(), { "get_Cases", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::SwitchExpression::get_DefaultBody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SwitchExpression*>(), { "get_DefaultBody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Linq::Expressions::SwitchExpression::get_Comparison() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SwitchExpression*>(), { "get_Comparison", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::SwitchExpression::SwitchExpression() {}
