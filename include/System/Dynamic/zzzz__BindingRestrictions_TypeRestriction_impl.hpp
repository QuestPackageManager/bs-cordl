#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions_TypeRestriction.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_impl.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_TypeRestriction_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_TypeRestriction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BindingRestrictions_TypeRestriction::*)(
    ::System::Linq::Expressions::Expression*, ::System::Type*)>(&::GlobalNamespace::BindingRestrictions_TypeRestriction::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x40fd0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_TypeRestriction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_TypeRestriction.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BindingRestrictions_TypeRestriction::*)(::System::Object*)>(
    &::GlobalNamespace::BindingRestrictions_TypeRestriction::Equals)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x40fda10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_TypeRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_TypeRestriction*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_TypeRestriction.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BindingRestrictions_TypeRestriction::*)()>(
    &::GlobalNamespace::BindingRestrictions_TypeRestriction::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x40fdad4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_TypeRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_TypeRestriction*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_TypeRestriction.GetExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::GlobalNamespace::BindingRestrictions_TypeRestriction::*)()>(
    &::GlobalNamespace::BindingRestrictions_TypeRestriction::GetExpression)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x40fdb28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_TypeRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_TypeRestriction*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& GlobalNamespace::BindingRestrictions_TypeRestriction::__cordl_internal_get__expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr ::System::Linq::Expressions::Expression* const& GlobalNamespace::BindingRestrictions_TypeRestriction::__cordl_internal_get__expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr void GlobalNamespace::BindingRestrictions_TypeRestriction::__cordl_internal_set__expression(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& GlobalNamespace::BindingRestrictions_TypeRestriction::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::Type* const& GlobalNamespace::BindingRestrictions_TypeRestriction::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void GlobalNamespace::BindingRestrictions_TypeRestriction::__cordl_internal_set__type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BindingRestrictions_TypeRestriction::_ctor(::System::Linq::Expressions::Expression* parameter, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_TypeRestriction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameter, type);
}
inline bool GlobalNamespace::BindingRestrictions_TypeRestriction::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_TypeRestriction*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::BindingRestrictions_TypeRestriction::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_TypeRestriction*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* GlobalNamespace::BindingRestrictions_TypeRestriction::GetExpression() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BindingRestrictions_TypeRestriction*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BindingRestrictions_TypeRestriction* GlobalNamespace::BindingRestrictions_TypeRestriction::New_ctor(::System::Linq::Expressions::Expression* parameter,
                                                                                                                              ::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(parameter, type));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BindingRestrictions_TypeRestriction::BindingRestrictions_TypeRestriction() {}
