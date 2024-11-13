#pragma once
// IWYU pragma private; include "System/Linq/Expressions/InvocationExpression0.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression0_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Linq::Expressions::InvocationExpression0::*)(::System::Linq::Expressions::Expression*, ::System::Type*)>(&::System::Linq::Expressions::InvocationExpression0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4056b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression0*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression0.GetArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::InvocationExpression0::*)(int32_t)>(
    &::System::Linq::Expressions::InvocationExpression0::GetArgument)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4056b98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression0*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression0*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression0.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::InvocationExpression0::*)()>(
    &::System::Linq::Expressions::InvocationExpression0::get_ArgumentCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4056be4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression0*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression0*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression0.Rewrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::InvocationExpression* (
    ::System::Linq::Expressions::InvocationExpression0::*)(::System::Linq::Expressions::Expression*,
                                                           ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*>)>(
    &::System::Linq::Expressions::InvocationExpression0::Rewrite)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4056bec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression0*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression0*>::get(), 14));
    return ___internal_method;
  }
};
inline ::System::Linq::Expressions::InvocationExpression0* System::Linq::Expressions::InvocationExpression0::New_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::InvocationExpression0*>(lambda, returnType));
}
inline void System::Linq::Expressions::InvocationExpression0::_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression0*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lambda, returnType);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InvocationExpression0::GetArgument(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression0*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::InvocationExpression0::get_ArgumentCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression0*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::InvocationExpression*
System::Linq::Expressions::InvocationExpression0::Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                          ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression0*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::InvocationExpression*, false>(this, ___internal_method, lambda, arguments);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::InvocationExpression0::InvocationExpression0() {}
