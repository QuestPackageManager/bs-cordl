#pragma once
// IWYU pragma private; include "System/Linq/Expressions/PropertyExpression.hpp"
#include "System/Linq/Expressions/zzzz__MemberExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__PropertyExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::PropertyExpression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::PropertyExpression::*)(
    ::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*)>(&::System::Linq::Expressions::PropertyExpression::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5dd2198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::PropertyExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::PropertyExpression.GetMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberInfo* (::System::Linq::Expressions::PropertyExpression::*)()>(
    &::System::Linq::Expressions::PropertyExpression::GetMember)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd22cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::PropertyExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::PropertyExpression*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::PropertyExpression.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Linq::Expressions::PropertyExpression::*)()>(
    &::System::Linq::Expressions::PropertyExpression::get_Type)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5dd22d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::PropertyExpression*>::get(),
                                                                               "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::PropertyInfo*& System::Linq::Expressions::PropertyExpression::__cordl_internal_get__property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property;
}
constexpr ::System::Reflection::PropertyInfo* const& System::Linq::Expressions::PropertyExpression::__cordl_internal_get__property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property;
}
constexpr void System::Linq::Expressions::PropertyExpression::__cordl_internal_set__property(::System::Reflection::PropertyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____property)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::PropertyExpression::_ctor(::System::Linq::Expressions::Expression* expression, ::System::Reflection::PropertyInfo* member) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::PropertyExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expression, member);
}
inline ::System::Reflection::MemberInfo* System::Linq::Expressions::PropertyExpression::GetMember() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::PropertyExpression*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*, false>(this, ___internal_method);
}
inline ::System::Type* System::Linq::Expressions::PropertyExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::PropertyExpression*>::get(),
                                                                             "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::PropertyExpression* System::Linq::Expressions::PropertyExpression::New_ctor(::System::Linq::Expressions::Expression* expression,
                                                                                                                ::System::Reflection::PropertyInfo* member) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::PropertyExpression*>(expression, member));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::PropertyExpression::PropertyExpression() {}
