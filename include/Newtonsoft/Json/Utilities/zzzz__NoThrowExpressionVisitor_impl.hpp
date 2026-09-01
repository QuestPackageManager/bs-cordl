#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\NoThrowExpressionVisitor.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__NoThrowExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__ConditionalExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor.VisitConditional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (
    ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::*)(::System::Linq::Expressions::ConditionalExpression*)>(&::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::VisitConditional)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d26200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::*)()>(&::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d26080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::setStaticF_ErrorResult(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "ErrorResult", ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::getStaticF_ErrorResult() {
  return ::cordl_internals::getStaticField<::System::Object*, "ErrorResult", ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>();
}
inline ::System::Linq::Expressions::Expression* Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::VisitConditional(::System::Linq::Expressions::ConditionalExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline void Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor* Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::NoThrowExpressionVisitor() {}
