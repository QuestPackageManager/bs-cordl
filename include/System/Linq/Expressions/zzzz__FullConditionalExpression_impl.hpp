#pragma once
// IWYU pragma private; include "System/Linq/Expressions/FullConditionalExpression.hpp"
#include "System/Linq/Expressions/zzzz__ConditionalExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__FullConditionalExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::FullConditionalExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::FullConditionalExpression::*)(
    ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::FullConditionalExpression::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f751c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FullConditionalExpression*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::FullConditionalExpression.GetFalse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::FullConditionalExpression::*)()>(
    &::System::Linq::Expressions::FullConditionalExpression::GetFalse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f75388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FullConditionalExpression*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::FullConditionalExpression*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::FullConditionalExpression::__cordl_internal_get__false() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____false;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::FullConditionalExpression::__cordl_internal_get__false() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____false;
}
constexpr void System::Linq::Expressions::FullConditionalExpression::__cordl_internal_set__false(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____false = value;
}
inline void System::Linq::Expressions::FullConditionalExpression::_ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue,
                                                                        ::System::Linq::Expressions::Expression* ifFalse) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FullConditionalExpression*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, test, ifTrue, ifFalse);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::FullConditionalExpression::GetFalse() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::FullConditionalExpression*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::FullConditionalExpression* System::Linq::Expressions::FullConditionalExpression::New_ctor(::System::Linq::Expressions::Expression* test,
                                                                                                                              ::System::Linq::Expressions::Expression* ifTrue,
                                                                                                                              ::System::Linq::Expressions::Expression* ifFalse) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::FullConditionalExpression*>(test, ifTrue, ifFalse));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::FullConditionalExpression::FullConditionalExpression() {}
