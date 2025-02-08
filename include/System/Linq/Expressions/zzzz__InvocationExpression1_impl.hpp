#pragma once
// IWYU pragma private; include "System/Linq/Expressions/InvocationExpression1.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::InvocationExpression1::*)(
    ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::InvocationExpression1::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40bde14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression1*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression1.GetArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::InvocationExpression1::*)(int32_t)>(
    &::System::Linq::Expressions::InvocationExpression1::GetArgument)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x40bde38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression1*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression1*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression1.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::InvocationExpression1::*)()>(
    &::System::Linq::Expressions::InvocationExpression1::get_ArgumentCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40bded0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression1*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression1*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression1.Rewrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::InvocationExpression* (
    ::System::Linq::Expressions::InvocationExpression1::*)(::System::Linq::Expressions::Expression*,
                                                           ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*>)>(
    &::System::Linq::Expressions::InvocationExpression1::Rewrite)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x40bded8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression1*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression1*>::get(), 14));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Linq::Expressions::InvocationExpression1::__cordl_internal_get__arg0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr ::System::Object* const& System::Linq::Expressions::InvocationExpression1::__cordl_internal_get__arg0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr void System::Linq::Expressions::InvocationExpression1::__cordl_internal_set__arg0(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arg0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::InvocationExpression1::_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression1*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lambda, returnType, arg0);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InvocationExpression1::GetArgument(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression1*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::InvocationExpression1::get_ArgumentCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression1*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::InvocationExpression*
System::Linq::Expressions::InvocationExpression1::Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                          ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression1*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::InvocationExpression*, false>(this, ___internal_method, lambda, arguments);
}
inline ::System::Linq::Expressions::InvocationExpression1* System::Linq::Expressions::InvocationExpression1::New_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType,
                                                                                                                      ::System::Linq::Expressions::Expression* arg0) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::InvocationExpression1*>(lambda, returnType, arg0));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::InvocationExpression1::InvocationExpression1() {}
