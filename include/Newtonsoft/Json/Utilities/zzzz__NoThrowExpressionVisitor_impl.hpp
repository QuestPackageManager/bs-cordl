#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/NoThrowExpressionVisitor.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__NoThrowExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__ConditionalExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor.VisitConditional
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::*)(::System::Linq::Expressions::ConditionalExpression*)>(&::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::VisitConditional)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2a427e0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::*)()>(
    &::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a42654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::setStaticF_ErrorResult(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "ErrorResult", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::getStaticF_ErrorResult() {
  return ::cordl_internals::getStaticField<::System::Object*, "ErrorResult", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>::get>();
}
inline ::System::Linq::Expressions::Expression* Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::VisitConditional(::System::Linq::Expressions::ConditionalExpression* node) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor* Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>());
}
inline void Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor::NoThrowExpressionVisitor() {}
