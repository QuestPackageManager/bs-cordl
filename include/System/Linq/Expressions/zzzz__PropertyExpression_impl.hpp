#pragma once
// IWYU pragma private; include "System\Linq\Expressions\PropertyExpression.hpp"
#include "System/Linq/Expressions/zzzz__MemberExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__PropertyExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::PropertyExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::PropertyExpression::*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*)>(
    &::System::Linq::Expressions::PropertyExpression::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f86cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::PropertyExpression*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::PropertyExpression.GetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberInfo* (::System::Linq::Expressions::PropertyExpression::*)()>(
    &::System::Linq::Expressions::PropertyExpression::GetMember)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::PropertyExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::PropertyExpression*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::PropertyExpression.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Linq::Expressions::PropertyExpression::*)()>(&::System::Linq::Expressions::PropertyExpression::get_Type)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f86e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::PropertyExpression*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::PropertyInfo*& System::Linq::Expressions::PropertyExpression::__cordl_internal_get__property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property;
}
constexpr ::System::Reflection::PropertyInfo* const& System::Linq::Expressions::PropertyExpression::__cordl_internal_get__property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property;
}
constexpr void System::Linq::Expressions::PropertyExpression::__cordl_internal_set__property(::System::Reflection::PropertyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____property = value;
}
inline void System::Linq::Expressions::PropertyExpression::_ctor(::System::Linq::Expressions::Expression* expression, ::System::Reflection::PropertyInfo* member) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::PropertyExpression*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expression, member);
}
inline ::System::Reflection::MemberInfo* System::Linq::Expressions::PropertyExpression::GetMember() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::PropertyExpression*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*>(this, ___internal_method);
}
inline ::System::Type* System::Linq::Expressions::PropertyExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::PropertyExpression*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::PropertyExpression* System::Linq::Expressions::PropertyExpression::New_ctor(::System::Linq::Expressions::Expression* expression,
                                                                                                                ::System::Reflection::PropertyInfo* member) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::PropertyExpression*>(expression, member));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::PropertyExpression::PropertyExpression() {}
