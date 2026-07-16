#pragma once
// IWYU pragma private; include "System/Linq/Expressions/FieldExpression.hpp"
#include "System/Linq/Expressions/zzzz__MemberExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__FieldExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::FieldExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::FieldExpression::*)(::System::Linq::Expressions::Expression*, ::System::Reflection::FieldInfo*)>(
    &::System::Linq::Expressions::FieldExpression::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f81568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FieldExpression*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::FieldExpression.GetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberInfo* (::System::Linq::Expressions::FieldExpression::*)()>(
    &::System::Linq::Expressions::FieldExpression::GetMember)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f815e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FieldExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::FieldExpression*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::FieldExpression.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Linq::Expressions::FieldExpression::*)()>(&::System::Linq::Expressions::FieldExpression::get_Type)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f815ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FieldExpression*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::FieldInfo*& System::Linq::Expressions::FieldExpression::__cordl_internal_get__field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____field;
}
constexpr ::System::Reflection::FieldInfo* const& System::Linq::Expressions::FieldExpression::__cordl_internal_get__field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____field;
}
constexpr void System::Linq::Expressions::FieldExpression::__cordl_internal_set__field(::System::Reflection::FieldInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____field = value;
}
inline void System::Linq::Expressions::FieldExpression::_ctor(::System::Linq::Expressions::Expression* expression, ::System::Reflection::FieldInfo* member) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FieldExpression*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expression, member);
}
inline ::System::Reflection::MemberInfo* System::Linq::Expressions::FieldExpression::GetMember() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::FieldExpression*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*>(this, ___internal_method);
}
inline ::System::Type* System::Linq::Expressions::FieldExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FieldExpression*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::FieldExpression* System::Linq::Expressions::FieldExpression::New_ctor(::System::Linq::Expressions::Expression* expression,
                                                                                                          ::System::Reflection::FieldInfo* member) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::FieldExpression*>(expression, member));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::FieldExpression::FieldExpression() {}
