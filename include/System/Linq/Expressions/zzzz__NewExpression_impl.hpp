#pragma once
// IWYU pragma private; include "System\Linq\Expressions\NewExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__NewExpression_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::NewExpression.get_Constructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Linq::Expressions::NewExpression::*)()>(
    &::System::Linq::Expressions::NewExpression::get_Constructor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f88dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewExpression*>(), { "get_Constructor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::NewExpression.GetArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::NewExpression::*)(int32_t)>(
    &::System::Linq::Expressions::NewExpression::GetArgument)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f88ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewExpression*>(), { "GetArgument", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& System::Linq::Expressions::NewExpression::__cordl_internal_get__arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* const& System::Linq::Expressions::NewExpression::__cordl_internal_get__arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr void System::Linq::Expressions::NewExpression::__cordl_internal_set__arguments(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arguments = value;
}
constexpr ::System::Reflection::ConstructorInfo*& System::Linq::Expressions::NewExpression::__cordl_internal_get__Constructor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Constructor_k__BackingField;
}
constexpr ::System::Reflection::ConstructorInfo* const& System::Linq::Expressions::NewExpression::__cordl_internal_get__Constructor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Constructor_k__BackingField;
}
constexpr void System::Linq::Expressions::NewExpression::__cordl_internal_set__Constructor_k__BackingField(::System::Reflection::ConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Constructor_k__BackingField = value;
}
inline ::System::Reflection::ConstructorInfo* System::Linq::Expressions::NewExpression::get_Constructor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewExpression*>(), { "get_Constructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::NewExpression::GetArgument(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewExpression*>(), { "GetArgument", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::NewExpression::NewExpression() {}
