#pragma once
// IWYU pragma private; include "System\Linq\Expressions\RuntimeVariablesExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__RuntimeVariablesExpression_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::RuntimeVariablesExpression.get_Variables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* (
    ::System::Linq::Expressions::RuntimeVariablesExpression::*)()>(&::System::Linq::Expressions::RuntimeVariablesExpression::get_Variables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f89528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::RuntimeVariablesExpression*>(), { "get_Variables", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*&
System::Linq::Expressions::RuntimeVariablesExpression::__cordl_internal_get__Variables_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Variables_k__BackingField;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* const&
System::Linq::Expressions::RuntimeVariablesExpression::__cordl_internal_get__Variables_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Variables_k__BackingField;
}
constexpr void System::Linq::Expressions::RuntimeVariablesExpression::__cordl_internal_set__Variables_k__BackingField(
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Variables_k__BackingField = value;
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* System::Linq::Expressions::RuntimeVariablesExpression::get_Variables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::RuntimeVariablesExpression*>(), { "get_Variables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::RuntimeVariablesExpression::RuntimeVariablesExpression() {}
