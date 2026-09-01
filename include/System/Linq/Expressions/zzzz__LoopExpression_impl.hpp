#pragma once
// IWYU pragma private; include "System\Linq\Expressions\LoopExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__LoopExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__LabelTarget_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::LoopExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::LoopExpression::*)(
    ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::LabelTarget*)>(&::System::Linq::Expressions::LoopExpression::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f86b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LoopExpression.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Linq::Expressions::LoopExpression::*)()>(&::System::Linq::Expressions::LoopExpression::get_Type)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f86b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LoopExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::LoopExpression::*)()>(
    &::System::Linq::Expressions::LoopExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LoopExpression.get_Body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::LoopExpression::*)()>(
    &::System::Linq::Expressions::LoopExpression::get_Body)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), { "get_Body", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LoopExpression.get_BreakLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::LabelTarget* (::System::Linq::Expressions::LoopExpression::*)()>(
    &::System::Linq::Expressions::LoopExpression::get_BreakLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), { "get_BreakLabel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LoopExpression.get_ContinueLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::LabelTarget* (::System::Linq::Expressions::LoopExpression::*)()>(
    &::System::Linq::Expressions::LoopExpression::get_ContinueLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), { "get_ContinueLabel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LoopExpression.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::LoopExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(
    &::System::Linq::Expressions::LoopExpression::Accept)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f86bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LoopExpression.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::LoopExpression* (
    ::System::Linq::Expressions::LoopExpression::*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*)>(
    &::System::Linq::Expressions::LoopExpression::Update)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f84cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(),
                                                             { "Update",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(), ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::LoopExpression::__cordl_internal_get__Body_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Body_k__BackingField;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::LoopExpression::__cordl_internal_get__Body_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Body_k__BackingField;
}
constexpr void System::Linq::Expressions::LoopExpression::__cordl_internal_set__Body_k__BackingField(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Body_k__BackingField = value;
}
constexpr ::System::Linq::Expressions::LabelTarget*& System::Linq::Expressions::LoopExpression::__cordl_internal_get__BreakLabel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BreakLabel_k__BackingField;
}
constexpr ::System::Linq::Expressions::LabelTarget* const& System::Linq::Expressions::LoopExpression::__cordl_internal_get__BreakLabel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BreakLabel_k__BackingField;
}
constexpr void System::Linq::Expressions::LoopExpression::__cordl_internal_set__BreakLabel_k__BackingField(::System::Linq::Expressions::LabelTarget* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BreakLabel_k__BackingField = value;
}
constexpr ::System::Linq::Expressions::LabelTarget*& System::Linq::Expressions::LoopExpression::__cordl_internal_get__ContinueLabel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContinueLabel_k__BackingField;
}
constexpr ::System::Linq::Expressions::LabelTarget* const& System::Linq::Expressions::LoopExpression::__cordl_internal_get__ContinueLabel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContinueLabel_k__BackingField;
}
constexpr void System::Linq::Expressions::LoopExpression::__cordl_internal_set__ContinueLabel_k__BackingField(::System::Linq::Expressions::LabelTarget* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ContinueLabel_k__BackingField = value;
}
inline void System::Linq::Expressions::LoopExpression::_ctor(::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::LabelTarget* _cordl_break,
                                                             ::System::Linq::Expressions::LabelTarget* _cordl_continue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body, _cordl_break, _cordl_continue);
}
inline ::System::Type* System::Linq::Expressions::LoopExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::LoopExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::LoopExpression::get_Body() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), { "get_Body", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::LabelTarget* System::Linq::Expressions::LoopExpression::get_BreakLabel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), { "get_BreakLabel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LabelTarget*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::LabelTarget* System::Linq::Expressions::LoopExpression::get_ContinueLabel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), { "get_ContinueLabel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LabelTarget*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::LoopExpression::Accept(::System::Linq::Expressions::ExpressionVisitor* visitor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, visitor);
}
inline ::System::Linq::Expressions::LoopExpression* System::Linq::Expressions::LoopExpression::Update(::System::Linq::Expressions::LabelTarget* breakLabel,
                                                                                                      ::System::Linq::Expressions::LabelTarget* continueLabel,
                                                                                                      ::System::Linq::Expressions::Expression* body) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LoopExpression*>(),
                                                           { "Update",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(), ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LoopExpression*>(this, ___internal_method, breakLabel, continueLabel, body);
}
inline ::System::Linq::Expressions::LoopExpression* System::Linq::Expressions::LoopExpression::New_ctor(::System::Linq::Expressions::Expression* body,
                                                                                                        ::System::Linq::Expressions::LabelTarget* _cordl_break,
                                                                                                        ::System::Linq::Expressions::LabelTarget* _cordl_continue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::LoopExpression*>(body, _cordl_break, _cordl_continue));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::LoopExpression::LoopExpression() {}
