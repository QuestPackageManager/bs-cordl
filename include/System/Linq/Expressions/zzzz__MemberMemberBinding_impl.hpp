#pragma once
// IWYU pragma private; include "System\Linq\Expressions\MemberMemberBinding.hpp"
#include "System/Linq/Expressions/zzzz__MemberBinding_impl.hpp"
#include "System/Linq/Expressions/zzzz__MemberMemberBinding_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__MemberBinding_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::MemberMemberBinding.get_Bindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* (
    ::System::Linq::Expressions::MemberMemberBinding::*)()>(&::System::Linq::Expressions::MemberMemberBinding::get_Bindings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberMemberBinding*>(), { "get_Bindings", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*&
System::Linq::Expressions::MemberMemberBinding::__cordl_internal_get__Bindings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bindings_k__BackingField;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* const&
System::Linq::Expressions::MemberMemberBinding::__cordl_internal_get__Bindings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bindings_k__BackingField;
}
constexpr void System::Linq::Expressions::MemberMemberBinding::__cordl_internal_set__Bindings_k__BackingField(
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Bindings_k__BackingField = value;
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* System::Linq::Expressions::MemberMemberBinding::get_Bindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberMemberBinding*>(), { "get_Bindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::MemberMemberBinding::MemberMemberBinding() {}
