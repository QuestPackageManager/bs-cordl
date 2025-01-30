#pragma once
// IWYU pragma private; include "System/Linq/Expressions/MemberListBinding.hpp"
#include "System/Linq/Expressions/zzzz__MemberBinding_impl.hpp"
#include "System/Linq/Expressions/zzzz__MemberListBinding_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__ElementInit_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::MemberListBinding.get_Initializers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* (
    ::System::Linq::Expressions::MemberListBinding::*)()>(&::System::Linq::Expressions::MemberListBinding::get_Initializers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40bc20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberListBinding*>::get(),
                                                                               "get_Initializers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*&
System::Linq::Expressions::MemberListBinding::__cordl_internal_get__Initializers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Initializers_k__BackingField;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* const&
System::Linq::Expressions::MemberListBinding::__cordl_internal_get__Initializers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Initializers_k__BackingField;
}
constexpr void System::Linq::Expressions::MemberListBinding::__cordl_internal_set__Initializers_k__BackingField(
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Initializers_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* System::Linq::Expressions::MemberListBinding::get_Initializers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::MemberListBinding*>::get(),
                                                                             "get_Initializers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::MemberListBinding::MemberListBinding() {}
