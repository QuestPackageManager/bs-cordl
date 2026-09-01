#pragma once
// IWYU pragma private; include "System\Linq\Expressions\NewArrayExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__NewArrayExpression_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::NewArrayExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::NewArrayExpression::*)(
    ::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*)>(&::System::Linq::Expressions::NewArrayExpression::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f88c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::NewArrayExpression.Make
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Linq::Expressions::NewArrayExpression* (*)(::System::Linq::Expressions::ExpressionType, ::System::Type*,
                                                                     ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*)>(
        &::System::Linq::Expressions::NewArrayExpression::Make)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f88ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(),
                                                             { "Make",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::NewArrayExpression.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Linq::Expressions::NewArrayExpression::*)()>(&::System::Linq::Expressions::NewArrayExpression::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f88d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::NewArrayExpression.get_Expressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (
    ::System::Linq::Expressions::NewArrayExpression::*)()>(&::System::Linq::Expressions::NewArrayExpression::get_Expressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f88d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(), { "get_Expressions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::NewArrayExpression.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::NewArrayExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(
    &::System::Linq::Expressions::NewArrayExpression::Accept)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f88d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::NewArrayExpression.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::NewArrayExpression* (
    ::System::Linq::Expressions::NewArrayExpression::*)(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*)>(
    &::System::Linq::Expressions::NewArrayExpression::Update)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5f85028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(),
                                                             { "Update", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Linq::Expressions::NewArrayExpression::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& System::Linq::Expressions::NewArrayExpression::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void System::Linq::Expressions::NewArrayExpression::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&
System::Linq::Expressions::NewArrayExpression::__cordl_internal_get__Expressions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expressions_k__BackingField;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* const&
System::Linq::Expressions::NewArrayExpression::__cordl_internal_get__Expressions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expressions_k__BackingField;
}
constexpr void System::Linq::Expressions::NewArrayExpression::__cordl_internal_set__Expressions_k__BackingField(
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Expressions_k__BackingField = value;
}
inline void System::Linq::Expressions::NewArrayExpression::_ctor(::System::Type* type,
                                                                 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(),
                       { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, expressions);
}
inline ::System::Linq::Expressions::NewArrayExpression*
System::Linq::Expressions::NewArrayExpression::Make(::System::Linq::Expressions::ExpressionType nodeType, ::System::Type* type,
                                                    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(),
                                                           { "Make",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::NewArrayExpression*>(nullptr, ___internal_method, nodeType, type, expressions);
}
inline ::System::Type* System::Linq::Expressions::NewArrayExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* System::Linq::Expressions::NewArrayExpression::get_Expressions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(), { "get_Expressions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::NewArrayExpression::Accept(::System::Linq::Expressions::ExpressionVisitor* visitor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, visitor);
}
inline ::System::Linq::Expressions::NewArrayExpression*
System::Linq::Expressions::NewArrayExpression::Update(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayExpression*>(),
                                                           { "Update", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::NewArrayExpression*>(this, ___internal_method, expressions);
}
inline ::System::Linq::Expressions::NewArrayExpression*
System::Linq::Expressions::NewArrayExpression::New_ctor(::System::Type* type, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::NewArrayExpression*>(type, expressions));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::NewArrayExpression::NewArrayExpression() {}
