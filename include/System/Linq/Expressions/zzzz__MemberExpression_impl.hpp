#pragma once
// IWYU pragma private; include "System\Linq\Expressions\MemberExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__MemberExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__FieldExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__PropertyExpression_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::MemberExpression.get_Member
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberInfo* (::System::Linq::Expressions::MemberExpression::*)()>(
    &::System::Linq::Expressions::MemberExpression::get_Member)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f82b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), { "get_Member", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MemberExpression.get_Expression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::MemberExpression::*)()>(
    &::System::Linq::Expressions::MemberExpression::get_Expression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), { "get_Expression", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MemberExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::MemberExpression::*)(::System::Linq::Expressions::Expression*)>(
    &::System::Linq::Expressions::MemberExpression::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f86c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MemberExpression.Make
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::PropertyExpression* (*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*)>(
    &::System::Linq::Expressions::MemberExpression::Make)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f86c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(),
                                                             { "Make", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MemberExpression.Make
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::FieldExpression* (*)(::System::Linq::Expressions::Expression*, ::System::Reflection::FieldInfo*)>(
    &::System::Linq::Expressions::MemberExpression::Make)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f86d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(),
                                                             { "Make", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MemberExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::MemberExpression::*)()>(
    &::System::Linq::Expressions::MemberExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MemberExpression.GetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberInfo* (::System::Linq::Expressions::MemberExpression::*)()>(
    &::System::Linq::Expressions::MemberExpression::GetMember)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f86dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MemberExpression.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::MemberExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(
    &::System::Linq::Expressions::MemberExpression::Accept)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f86dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MemberExpression.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::MemberExpression* (::System::Linq::Expressions::MemberExpression::*)(::System::Linq::Expressions::Expression*)>(
    &::System::Linq::Expressions::MemberExpression::Update)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f84dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), { "Update", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::MemberExpression::__cordl_internal_get__Expression_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expression_k__BackingField;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::MemberExpression::__cordl_internal_get__Expression_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expression_k__BackingField;
}
constexpr void System::Linq::Expressions::MemberExpression::__cordl_internal_set__Expression_k__BackingField(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Expression_k__BackingField = value;
}
inline ::System::Reflection::MemberInfo* System::Linq::Expressions::MemberExpression::get_Member() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), { "get_Member", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::MemberExpression::get_Expression() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), { "get_Expression", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline void System::Linq::Expressions::MemberExpression::_ctor(::System::Linq::Expressions::Expression* expression) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expression);
}
inline ::System::Linq::Expressions::PropertyExpression* System::Linq::Expressions::MemberExpression::Make(::System::Linq::Expressions::Expression* expression,
                                                                                                          ::System::Reflection::PropertyInfo* property) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(),
                                                           { "Make", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::PropertyExpression*>(nullptr, ___internal_method, expression, property);
}
inline ::System::Linq::Expressions::FieldExpression* System::Linq::Expressions::MemberExpression::Make(::System::Linq::Expressions::Expression* expression, ::System::Reflection::FieldInfo* field) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(),
                                                           { "Make", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::FieldExpression*>(nullptr, ___internal_method, expression, field);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::MemberExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType>(this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* System::Linq::Expressions::MemberExpression::GetMember() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::MemberExpression::Accept(::System::Linq::Expressions::ExpressionVisitor* visitor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, visitor);
}
inline ::System::Linq::Expressions::MemberExpression* System::Linq::Expressions::MemberExpression::Update(::System::Linq::Expressions::Expression* expression) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberExpression*>(), { "Update", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::MemberExpression*>(this, ___internal_method, expression);
}
inline ::System::Linq::Expressions::MemberExpression* System::Linq::Expressions::MemberExpression::New_ctor(::System::Linq::Expressions::Expression* expression) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::MemberExpression*>(expression));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::MemberExpression::MemberExpression() {}
