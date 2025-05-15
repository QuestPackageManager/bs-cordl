#pragma once
// IWYU pragma private; include "System/Linq/Expressions/FieldExpression.hpp"
#include "System/Linq/Expressions/zzzz__MemberExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__FieldExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::FieldExpression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::FieldExpression::*)(
    ::System::Linq::Expressions::Expression*, ::System::Reflection::FieldInfo*)>(&::System::Linq::Expressions::FieldExpression::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40ba8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FieldExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::FieldExpression.GetMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberInfo* (::System::Linq::Expressions::FieldExpression::*)()>(
    &::System::Linq::Expressions::FieldExpression::GetMember)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40ba960;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FieldExpression*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FieldExpression*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::FieldExpression.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Linq::Expressions::FieldExpression::*)()>(
    &::System::Linq::Expressions::FieldExpression::get_Type)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40ba968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FieldExpression*>::get(), "get_Type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::FieldInfo*& System::Linq::Expressions::FieldExpression::__cordl_internal_get__field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____field;
}
constexpr ::System::Reflection::FieldInfo* const& System::Linq::Expressions::FieldExpression::__cordl_internal_get__field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____field;
}
constexpr void System::Linq::Expressions::FieldExpression::__cordl_internal_set__field(::System::Reflection::FieldInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____field)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::FieldExpression::_ctor(::System::Linq::Expressions::Expression* expression, ::System::Reflection::FieldInfo* member) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FieldExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expression, member);
}
inline ::System::Reflection::MemberInfo* System::Linq::Expressions::FieldExpression::GetMember() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FieldExpression*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*, false>(this, ___internal_method);
}
inline ::System::Type* System::Linq::Expressions::FieldExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FieldExpression*>::get(), "get_Type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::FieldExpression* System::Linq::Expressions::FieldExpression::New_ctor(::System::Linq::Expressions::Expression* expression,
                                                                                                          ::System::Reflection::FieldInfo* member) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::FieldExpression*>(expression, member));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::FieldExpression::FieldExpression() {}
