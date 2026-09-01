#pragma once
// IWYU pragma private; include "System\Linq\Expressions\LabelExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__LabelExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__LabelTarget_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::LabelExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::LabelExpression::*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*)>(
    &::System::Linq::Expressions::LabelExpression::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f86814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LabelExpression.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Linq::Expressions::LabelExpression::*)()>(&::System::Linq::Expressions::LabelExpression::get_Type)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f8687c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LabelExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::LabelExpression::*)()>(
    &::System::Linq::Expressions::LabelExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LabelExpression.get_Target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::LabelTarget* (::System::Linq::Expressions::LabelExpression::*)()>(
    &::System::Linq::Expressions::LabelExpression::get_Target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8689c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(), { "get_Target", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LabelExpression.get_DefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::LabelExpression::*)()>(
    &::System::Linq::Expressions::LabelExpression::get_DefaultValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f868a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(), { "get_DefaultValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LabelExpression.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::LabelExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(
    &::System::Linq::Expressions::LabelExpression::Accept)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f868ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LabelExpression.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::LabelExpression* (
    ::System::Linq::Expressions::LabelExpression::*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::LabelExpression::Update)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f84bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(),
                                                { "Update", {}, { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::LabelTarget*& System::Linq::Expressions::LabelExpression::__cordl_internal_get__Target_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Target_k__BackingField;
}
constexpr ::System::Linq::Expressions::LabelTarget* const& System::Linq::Expressions::LabelExpression::__cordl_internal_get__Target_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Target_k__BackingField;
}
constexpr void System::Linq::Expressions::LabelExpression::__cordl_internal_set__Target_k__BackingField(::System::Linq::Expressions::LabelTarget* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Target_k__BackingField = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::LabelExpression::__cordl_internal_get__DefaultValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DefaultValue_k__BackingField;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::LabelExpression::__cordl_internal_get__DefaultValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DefaultValue_k__BackingField;
}
constexpr void System::Linq::Expressions::LabelExpression::__cordl_internal_set__DefaultValue_k__BackingField(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DefaultValue_k__BackingField = value;
}
inline void System::Linq::Expressions::LabelExpression::_ctor(::System::Linq::Expressions::LabelTarget* label, ::System::Linq::Expressions::Expression* defaultValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, defaultValue);
}
inline ::System::Type* System::Linq::Expressions::LabelExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::LabelExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType>(this, ___internal_method);
}
inline ::System::Linq::Expressions::LabelTarget* System::Linq::Expressions::LabelExpression::get_Target() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(), { "get_Target", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LabelTarget*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::LabelExpression::get_DefaultValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(), { "get_DefaultValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::LabelExpression::Accept(::System::Linq::Expressions::ExpressionVisitor* visitor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, visitor);
}
inline ::System::Linq::Expressions::LabelExpression* System::Linq::Expressions::LabelExpression::Update(::System::Linq::Expressions::LabelTarget* target,
                                                                                                        ::System::Linq::Expressions::Expression* defaultValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LabelExpression*>(),
                                              { "Update", {}, { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LabelExpression*>(this, ___internal_method, target, defaultValue);
}
inline ::System::Linq::Expressions::LabelExpression* System::Linq::Expressions::LabelExpression::New_ctor(::System::Linq::Expressions::LabelTarget* label,
                                                                                                          ::System::Linq::Expressions::Expression* defaultValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::LabelExpression*>(label, defaultValue));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::LabelExpression::LabelExpression() {}
