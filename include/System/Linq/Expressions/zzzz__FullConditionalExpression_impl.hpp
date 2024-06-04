#pragma once
// IWYU pragma private; include "System/Linq/Expressions/FullConditionalExpression.hpp"
#include "System/Linq/Expressions/zzzz__ConditionalExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__FullConditionalExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::FullConditionalExpression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::FullConditionalExpression::*)(
    ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::FullConditionalExpression::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c1eadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FullConditionalExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::FullConditionalExpression.GetFalse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::FullConditionalExpression::*)()>(
    &::System::Linq::Expressions::FullConditionalExpression::GetFalse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1ec98;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FullConditionalExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FullConditionalExpression*>::get(), 10));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::FullConditionalExpression::__cordl_internal_get__false() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____false;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& System::Linq::Expressions::FullConditionalExpression::__cordl_internal_get__false() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____false;
}
constexpr void System::Linq::Expressions::FullConditionalExpression::__cordl_internal_set__false(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____false)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::FullConditionalExpression* System::Linq::Expressions::FullConditionalExpression::New_ctor(::System::Linq::Expressions::Expression* test,
                                                                                                                              ::System::Linq::Expressions::Expression* ifTrue,
                                                                                                                              ::System::Linq::Expressions::Expression* ifFalse) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::FullConditionalExpression*>(test, ifTrue, ifFalse));
}
inline void System::Linq::Expressions::FullConditionalExpression::_ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue,
                                                                        ::System::Linq::Expressions::Expression* ifFalse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FullConditionalExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, test, ifTrue, ifFalse);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::FullConditionalExpression::GetFalse() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FullConditionalExpression*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::FullConditionalExpression::FullConditionalExpression() {}
