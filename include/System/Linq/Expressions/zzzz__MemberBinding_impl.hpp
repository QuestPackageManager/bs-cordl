#pragma once
#include "System/Linq/Expressions/zzzz__MemberBindingType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__MemberBinding_def.hpp"
#include "System/Linq/Expressions/zzzz__MemberBindingType_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::MemberBinding.get_BindingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::MemberBindingType (::System::Linq::Expressions::MemberBinding::*)()>(
    &::System::Linq::Expressions::MemberBinding::get_BindingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0c4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberBinding*>::get(),
                                                                               "get_BindingType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MemberBinding.get_Member
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberInfo* (::System::Linq::Expressions::MemberBinding::*)()>(
    &::System::Linq::Expressions::MemberBinding::get_Member)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0c4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberBinding*>::get(), "get_Member",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::MemberBindingType& System::Linq::Expressions::MemberBinding::__cordl_internal_get__BindingType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindingType_k__BackingField;
}
constexpr ::System::Linq::Expressions::MemberBindingType const& System::Linq::Expressions::MemberBinding::__cordl_internal_get__BindingType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindingType_k__BackingField;
}
constexpr void System::Linq::Expressions::MemberBinding::__cordl_internal_set__BindingType_k__BackingField(::System::Linq::Expressions::MemberBindingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BindingType_k__BackingField = value;
}
constexpr ::System::Reflection::MemberInfo*& System::Linq::Expressions::MemberBinding::__cordl_internal_get__Member_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Member_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> const& System::Linq::Expressions::MemberBinding::__cordl_internal_get__Member_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Member_k__BackingField;
}
constexpr void System::Linq::Expressions::MemberBinding::__cordl_internal_set__Member_k__BackingField(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Member_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::MemberBindingType System::Linq::Expressions::MemberBinding::get_BindingType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberBinding*>::get(),
                                                                             "get_BindingType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::MemberBindingType, false>(this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* System::Linq::Expressions::MemberBinding::get_Member() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberBinding*>::get(), "get_Member",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::MemberBinding::MemberBinding() {}
