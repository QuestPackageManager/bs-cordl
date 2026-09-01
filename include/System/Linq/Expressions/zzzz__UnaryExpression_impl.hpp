#pragma once
// IWYU pragma private; include "System\Linq\Expressions\UnaryExpression.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_impl.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__UnaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::UnaryExpression::*)(
    ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*)>(&::System::Linq::Expressions::UnaryExpression::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f897a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Linq::Expressions::UnaryExpression::*)()>(&::System::Linq::Expressions::UnaryExpression::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f89828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::UnaryExpression::*)()>(
    &::System::Linq::Expressions::UnaryExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f89830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.get_Operand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::UnaryExpression::*)()>(
    &::System::Linq::Expressions::UnaryExpression::get_Operand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f89838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_Operand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.get_Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Linq::Expressions::UnaryExpression::*)()>(
    &::System::Linq::Expressions::UnaryExpression::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f89840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_Method", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.get_IsLifted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::UnaryExpression::*)()>(&::System::Linq::Expressions::UnaryExpression::get_IsLifted)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5f89848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_IsLifted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.get_IsLiftedToNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::UnaryExpression::*)()>(&::System::Linq::Expressions::UnaryExpression::get_IsLiftedToNull)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f89a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_IsLiftedToNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::UnaryExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(
    &::System::Linq::Expressions::UnaryExpression::Accept)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f89aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.get_CanReduce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::UnaryExpression::*)()>(&::System::Linq::Expressions::UnaryExpression::get_CanReduce)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f89b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.Reduce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::UnaryExpression::*)()>(
    &::System::Linq::Expressions::UnaryExpression::Reduce)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f89b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.get_IsPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::UnaryExpression::*)()>(&::System::Linq::Expressions::UnaryExpression::get_IsPrefix)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f8a8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_IsPrefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.FunctionalOp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::UnaryExpression* (::System::Linq::Expressions::UnaryExpression::*)(::System::Linq::Expressions::Expression*)>(
    &::System::Linq::Expressions::UnaryExpression::FunctionalOp)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f8a93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "FunctionalOp", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.ReduceVariable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::UnaryExpression::*)()>(
    &::System::Linq::Expressions::UnaryExpression::ReduceVariable)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5f8a634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "ReduceVariable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.ReduceMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::UnaryExpression::*)()>(
    &::System::Linq::Expressions::UnaryExpression::ReduceMember)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x5f8a178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "ReduceMember", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.ReduceIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::UnaryExpression::*)()>(
    &::System::Linq::Expressions::UnaryExpression::ReduceIndex)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x5f89ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "ReduceIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::UnaryExpression* (::System::Linq::Expressions::UnaryExpression::*)(::System::Linq::Expressions::Expression*)>(
    &::System::Linq::Expressions::UnaryExpression::Update)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f855bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "Update", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Linq::Expressions::UnaryExpression::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& System::Linq::Expressions::UnaryExpression::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void System::Linq::Expressions::UnaryExpression::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
constexpr ::System::Linq::Expressions::ExpressionType& System::Linq::Expressions::UnaryExpression::__cordl_internal_get__NodeType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NodeType_k__BackingField;
}
constexpr ::System::Linq::Expressions::ExpressionType const& System::Linq::Expressions::UnaryExpression::__cordl_internal_get__NodeType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NodeType_k__BackingField;
}
constexpr void System::Linq::Expressions::UnaryExpression::__cordl_internal_set__NodeType_k__BackingField(::System::Linq::Expressions::ExpressionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____NodeType_k__BackingField = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::UnaryExpression::__cordl_internal_get__Operand_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Operand_k__BackingField;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::UnaryExpression::__cordl_internal_get__Operand_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Operand_k__BackingField;
}
constexpr void System::Linq::Expressions::UnaryExpression::__cordl_internal_set__Operand_k__BackingField(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Operand_k__BackingField = value;
}
constexpr ::System::Reflection::MethodInfo*& System::Linq::Expressions::UnaryExpression::__cordl_internal_get__Method_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Method_k__BackingField;
}
constexpr ::System::Reflection::MethodInfo* const& System::Linq::Expressions::UnaryExpression::__cordl_internal_get__Method_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Method_k__BackingField;
}
constexpr void System::Linq::Expressions::UnaryExpression::__cordl_internal_set__Method_k__BackingField(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Method_k__BackingField = value;
}
inline void System::Linq::Expressions::UnaryExpression::_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* expression, ::System::Type* type,
                                                              ::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, expression, type, method);
}
inline ::System::Type* System::Linq::Expressions::UnaryExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::UnaryExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::UnaryExpression::get_Operand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_Operand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Linq::Expressions::UnaryExpression::get_Method() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_Method", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline bool System::Linq::Expressions::UnaryExpression::get_IsLifted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_IsLifted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Linq::Expressions::UnaryExpression::get_IsLiftedToNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_IsLiftedToNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::UnaryExpression::Accept(::System::Linq::Expressions::ExpressionVisitor* visitor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, visitor);
}
inline bool System::Linq::Expressions::UnaryExpression::get_CanReduce() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::UnaryExpression::Reduce() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline bool System::Linq::Expressions::UnaryExpression::get_IsPrefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "get_IsPrefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Linq::Expressions::UnaryExpression* System::Linq::Expressions::UnaryExpression::FunctionalOp(::System::Linq::Expressions::Expression* operand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "FunctionalOp", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::UnaryExpression*>(this, ___internal_method, operand);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::UnaryExpression::ReduceVariable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "ReduceVariable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::UnaryExpression::ReduceMember() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "ReduceMember", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::UnaryExpression::ReduceIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "ReduceIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::UnaryExpression* System::Linq::Expressions::UnaryExpression::Update(::System::Linq::Expressions::Expression* operand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::UnaryExpression*>(), { "Update", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::UnaryExpression*>(this, ___internal_method, operand);
}
inline ::System::Linq::Expressions::UnaryExpression* System::Linq::Expressions::UnaryExpression::New_ctor(::System::Linq::Expressions::ExpressionType nodeType,
                                                                                                          ::System::Linq::Expressions::Expression* expression, ::System::Type* type,
                                                                                                          ::System::Reflection::MethodInfo* method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::UnaryExpression*>(nodeType, expression, type, method));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::UnaryExpression::UnaryExpression() {}
