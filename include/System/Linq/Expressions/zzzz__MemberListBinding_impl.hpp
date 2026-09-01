#pragma once
// IWYU pragma private; include "System\Linq\Expressions\MemberListBinding.hpp"
#include "System/Linq/Expressions/zzzz__MemberBinding_impl.hpp"
#include "System/Linq/Expressions/zzzz__MemberListBinding_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__ElementInit_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::MemberListBinding.get_Initializers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* (
    ::System::Linq::Expressions::MemberListBinding::*)()>(&::System::Linq::Expressions::MemberListBinding::get_Initializers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberListBinding*>(), { "get_Initializers", {}, {} })));
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
  this->____Initializers_k__BackingField = value;
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* System::Linq::Expressions::MemberListBinding::get_Initializers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MemberListBinding*>(), { "get_Initializers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::MemberListBinding::MemberListBinding() {}
