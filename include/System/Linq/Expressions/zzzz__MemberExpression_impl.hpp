#pragma once
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__MemberExpression_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::MemberExpression.get_Member
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberInfo* (::System::Linq::Expressions::MemberExpression::*)()>(
    &::System::Linq::Expressions::MemberExpression::get_Member)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29601fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberExpression*>::get(),
                                                                               "get_Member", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MemberExpression.GetMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberInfo* (::System::Linq::Expressions::MemberExpression::*)()>(
    &::System::Linq::Expressions::MemberExpression::GetMember)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2960208;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberExpression*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberExpression*>::get(), 5));
    return ___internal_method;
  }
};
inline ::System::Reflection::MemberInfo* System::Linq::Expressions::MemberExpression::get_Member() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberExpression*>::get(),
                                                                             "get_Member", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* System::Linq::Expressions::MemberExpression::GetMember() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberExpression*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::MemberExpression::MemberExpression() {}
