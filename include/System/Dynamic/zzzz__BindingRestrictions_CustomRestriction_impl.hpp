#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions_CustomRestriction.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_impl.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_CustomRestriction_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_CustomRestriction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BindingRestrictions_CustomRestriction::*)(::System::Linq::Expressions::Expression*)>(
    &::GlobalNamespace::BindingRestrictions_CustomRestriction::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x40f6ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_CustomRestriction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_CustomRestriction.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BindingRestrictions_CustomRestriction::*)(::System::Object*)>(
    &::GlobalNamespace::BindingRestrictions_CustomRestriction::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x40f71b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_CustomRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_CustomRestriction*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_CustomRestriction.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BindingRestrictions_CustomRestriction::*)()>(
    &::GlobalNamespace::BindingRestrictions_CustomRestriction::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x40f7220;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_CustomRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_CustomRestriction*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_CustomRestriction.GetExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::GlobalNamespace::BindingRestrictions_CustomRestriction::*)()>(
    &::GlobalNamespace::BindingRestrictions_CustomRestriction::GetExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f7250;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_CustomRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_CustomRestriction*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& GlobalNamespace::BindingRestrictions_CustomRestriction::__cordl_internal_get__expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr ::System::Linq::Expressions::Expression* const& GlobalNamespace::BindingRestrictions_CustomRestriction::__cordl_internal_get__expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr void GlobalNamespace::BindingRestrictions_CustomRestriction::__cordl_internal_set__expression(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BindingRestrictions_CustomRestriction::_ctor(::System::Linq::Expressions::Expression* expression) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_CustomRestriction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expression);
}
inline bool GlobalNamespace::BindingRestrictions_CustomRestriction::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_CustomRestriction*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::BindingRestrictions_CustomRestriction::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_CustomRestriction*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* GlobalNamespace::BindingRestrictions_CustomRestriction::GetExpression() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_CustomRestriction*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BindingRestrictions_CustomRestriction* GlobalNamespace::BindingRestrictions_CustomRestriction::New_ctor(::System::Linq::Expressions::Expression* expression) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(expression));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BindingRestrictions_CustomRestriction::BindingRestrictions_CustomRestriction() {}
