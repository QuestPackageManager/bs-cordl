#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions_MergedRestriction.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_impl.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_MergedRestriction_def.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::System::Dynamic::__BindingRestrictions__MergedRestriction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::__BindingRestrictions__MergedRestriction::*)(
    ::System::Dynamic::BindingRestrictions*, ::System::Dynamic::BindingRestrictions*)>(&::System::Dynamic::__BindingRestrictions__MergedRestriction::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c813d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__MergedRestriction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::BindingRestrictions*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::BindingRestrictions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::__BindingRestrictions__MergedRestriction.GetExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Dynamic::__BindingRestrictions__MergedRestriction::*)()>(
    &::System::Dynamic::__BindingRestrictions__MergedRestriction::GetExpression)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2c81c74;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__MergedRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__MergedRestriction*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Dynamic::BindingRestrictions*& System::Dynamic::__BindingRestrictions__MergedRestriction::__cordl_internal_get_Left() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Left;
}
constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::BindingRestrictions*> const& System::Dynamic::__BindingRestrictions__MergedRestriction::__cordl_internal_get_Left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Left;
}
constexpr void System::Dynamic::__BindingRestrictions__MergedRestriction::__cordl_internal_set_Left(::System::Dynamic::BindingRestrictions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Left)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Dynamic::BindingRestrictions*& System::Dynamic::__BindingRestrictions__MergedRestriction::__cordl_internal_get_Right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Right;
}
constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::BindingRestrictions*> const& System::Dynamic::__BindingRestrictions__MergedRestriction::__cordl_internal_get_Right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Right;
}
constexpr void System::Dynamic::__BindingRestrictions__MergedRestriction::__cordl_internal_set_Right(::System::Dynamic::BindingRestrictions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Right)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Dynamic::__BindingRestrictions__MergedRestriction* System::Dynamic::__BindingRestrictions__MergedRestriction::New_ctor(::System::Dynamic::BindingRestrictions* left,
                                                                                                                                        ::System::Dynamic::BindingRestrictions* right) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Dynamic::__BindingRestrictions__MergedRestriction*>(left, right));
}
inline void System::Dynamic::__BindingRestrictions__MergedRestriction::_ctor(::System::Dynamic::BindingRestrictions* left, ::System::Dynamic::BindingRestrictions* right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__MergedRestriction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::BindingRestrictions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::BindingRestrictions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, left, right);
}
inline ::System::Linq::Expressions::Expression* System::Dynamic::__BindingRestrictions__MergedRestriction::GetExpression() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__MergedRestriction*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Dynamic::__BindingRestrictions__MergedRestriction::__BindingRestrictions__MergedRestriction() {}
