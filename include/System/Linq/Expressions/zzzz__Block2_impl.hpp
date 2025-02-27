#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Block2.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__Block2_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Block2._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Linq::Expressions::Block2::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Block2::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40babec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Block2.GetExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::Block2::*)(int32_t)>(
    &::System::Linq::Expressions::Block2::GetExpression)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x40bac14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Block2.get_ExpressionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Block2::*)()>(&::System::Linq::Expressions::Block2::get_ExpressionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40bad04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Block2.GetOrMakeExpressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (
    ::System::Linq::Expressions::Block2::*)()>(&::System::Linq::Expressions::Block2::GetOrMakeExpressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40bad0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Block2.Rewrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::BlockExpression* (
    ::System::Linq::Expressions::Block2::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*,
                                            ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*>)>(&::System::Linq::Expressions::Block2::Rewrite)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x40bad14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(), 14));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Linq::Expressions::Block2::__cordl_internal_get__arg0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr ::System::Object* const& System::Linq::Expressions::Block2::__cordl_internal_get__arg0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr void System::Linq::Expressions::Block2::__cordl_internal_set__arg0(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arg0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::Block2::__cordl_internal_get__arg1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg1;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::Block2::__cordl_internal_get__arg1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg1;
}
constexpr void System::Linq::Expressions::Block2::__cordl_internal_set__arg1(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arg1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::Block2::_ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg0, arg1);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Block2::GetExpression(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::Block2::get_ExpressionCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* System::Linq::Expressions::Block2::GetOrMakeExpressions() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::BlockExpression*
System::Linq::Expressions::Block2::Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                           ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Block2*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::BlockExpression*, false>(this, ___internal_method, variables, args);
}
inline ::System::Linq::Expressions::Block2* System::Linq::Expressions::Block2::New_ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Block2*>(arg0, arg1));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Block2::Block2() {}
