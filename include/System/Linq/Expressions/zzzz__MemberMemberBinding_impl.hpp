#pragma once
// IWYU pragma private; include "System/Linq/Expressions/MemberMemberBinding.hpp"
#include "System/Linq/Expressions/zzzz__MemberBinding_impl.hpp"
#include "System/Linq/Expressions/zzzz__MemberMemberBinding_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__MemberBinding_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::MemberMemberBinding.get_Bindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* (
    ::System::Linq::Expressions::MemberMemberBinding::*)()>(&::System::Linq::Expressions::MemberMemberBinding::get_Bindings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c2a748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberMemberBinding*>::get(),
                                                                               "get_Bindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*&
System::Linq::Expressions::MemberMemberBinding::__cordl_internal_get__Bindings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bindings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*> const&
System::Linq::Expressions::MemberMemberBinding::__cordl_internal_get__Bindings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bindings_k__BackingField;
}
constexpr void System::Linq::Expressions::MemberMemberBinding::__cordl_internal_set__Bindings_k__BackingField(
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Bindings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* System::Linq::Expressions::MemberMemberBinding::get_Bindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberMemberBinding*>::get(),
                                                                             "get_Bindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::MemberMemberBinding::MemberMemberBinding() {}
