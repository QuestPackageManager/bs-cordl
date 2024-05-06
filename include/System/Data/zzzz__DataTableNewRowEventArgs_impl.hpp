#pragma once
// IWYU pragma private; include "System/Data/DataTableNewRowEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Data/zzzz__DataTableNewRowEventArgs_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
//  Writing Method size for method: ::System::Data::DataTableNewRowEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataTableNewRowEventArgs::*)(::System::Data::DataRow*)>(
    &::System::Data::DataTableNewRowEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cb9738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTableNewRowEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataRow*& System::Data::DataTableNewRowEventArgs::__cordl_internal_get__Row_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Row_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRow*> const& System::Data::DataTableNewRowEventArgs::__cordl_internal_get__Row_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Row_k__BackingField;
}
constexpr void System::Data::DataTableNewRowEventArgs::__cordl_internal_set__Row_k__BackingField(::System::Data::DataRow* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Row_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Data::DataTableNewRowEventArgs* System::Data::DataTableNewRowEventArgs::New_ctor(::System::Data::DataRow* dataRow) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataTableNewRowEventArgs*>(dataRow));
}
inline void System::Data::DataTableNewRowEventArgs::_ctor(::System::Data::DataRow* dataRow) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataTableNewRowEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataRow);
}
// Ctor Parameters []
constexpr ::System::Data::DataTableNewRowEventArgs::DataTableNewRowEventArgs() {}
