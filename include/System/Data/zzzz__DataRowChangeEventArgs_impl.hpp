#pragma once
// IWYU pragma private; include "System/Data/DataRowChangeEventArgs.hpp"
#include "System/Data/zzzz__DataRowAction_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Data/zzzz__DataRowChangeEventArgs_def.hpp"
#include "System/Data/zzzz__DataRowAction_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
//  Writing Method size for method: ::System::Data::DataRowChangeEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRowChangeEventArgs::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(
    &::System::Data::DataRowChangeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e11160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRowChangeEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataRow*& System::Data::DataRowChangeEventArgs::__cordl_internal_get__Row_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Row_k__BackingField;
}
constexpr ::System::Data::DataRow* const& System::Data::DataRowChangeEventArgs::__cordl_internal_get__Row_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Row_k__BackingField;
}
constexpr void System::Data::DataRowChangeEventArgs::__cordl_internal_set__Row_k__BackingField(::System::Data::DataRow* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Row_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataRowAction& System::Data::DataRowChangeEventArgs::__cordl_internal_get__Action_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Action_k__BackingField;
}
constexpr ::System::Data::DataRowAction const& System::Data::DataRowChangeEventArgs::__cordl_internal_get__Action_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Action_k__BackingField;
}
constexpr void System::Data::DataRowChangeEventArgs::__cordl_internal_set__Action_k__BackingField(::System::Data::DataRowAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Action_k__BackingField = value;
}
inline void System::Data::DataRowChangeEventArgs::_ctor(::System::Data::DataRow* row, ::System::Data::DataRowAction action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRowChangeEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, action);
}
inline ::System::Data::DataRowChangeEventArgs* System::Data::DataRowChangeEventArgs::New_ctor(::System::Data::DataRow* row, ::System::Data::DataRowAction action) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataRowChangeEventArgs*>(row, action));
}
// Ctor Parameters []
constexpr ::System::Data::DataRowChangeEventArgs::DataRowChangeEventArgs() {}
