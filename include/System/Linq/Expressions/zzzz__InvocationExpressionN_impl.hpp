#pragma once
#include "System/Linq/Expressions/zzzz__InvocationExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpressionN_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpressionN._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::InvocationExpressionN::*)(
    ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*, ::System::Type*)>(
    &::System::Linq::Expressions::InvocationExpressionN::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c08d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpressionN*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpressionN.GetArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::InvocationExpressionN::*)(int32_t)>(
    &::System::Linq::Expressions::InvocationExpressionN::GetArgument)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c08d6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpressionN*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpressionN*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpressionN.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::InvocationExpressionN::*)()>(
    &::System::Linq::Expressions::InvocationExpressionN::get_ArgumentCount)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2c08e14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpressionN*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpressionN*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpressionN.Rewrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::InvocationExpression* (
    ::System::Linq::Expressions::InvocationExpressionN::*)(::System::Linq::Expressions::Expression*,
                                                           ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*>)>(
    &::System::Linq::Expressions::InvocationExpressionN::Rewrite)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c08eb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpressionN*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpressionN*>::get(), 14));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& System::Linq::Expressions::InvocationExpressionN::__cordl_internal_get__arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*> const&
System::Linq::Expressions::InvocationExpressionN::__cordl_internal_get__arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr void System::Linq::Expressions::InvocationExpressionN::__cordl_internal_set__arguments(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arguments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::InvocationExpressionN*
System::Linq::Expressions::InvocationExpressionN::New_ctor(::System::Linq::Expressions::Expression* lambda,
                                                           ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments, ::System::Type* returnType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::InvocationExpressionN*>(lambda, arguments, returnType));
}
inline void System::Linq::Expressions::InvocationExpressionN::_ctor(::System::Linq::Expressions::Expression* lambda,
                                                                    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments, ::System::Type* returnType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpressionN*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lambda, arguments, returnType);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InvocationExpressionN::GetArgument(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpressionN*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::InvocationExpressionN::get_ArgumentCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpressionN*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::InvocationExpression*
System::Linq::Expressions::InvocationExpressionN::Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                          ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpressionN*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::InvocationExpression*, false>(this, ___internal_method, lambda, arguments);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::InvocationExpressionN::InvocationExpressionN() {}
