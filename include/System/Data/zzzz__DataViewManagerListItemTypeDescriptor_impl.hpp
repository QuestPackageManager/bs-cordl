#pragma once
// IWYU pragma private; include "System/Data/DataViewManagerListItemTypeDescriptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataViewManagerListItemTypeDescriptor_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewManager_def.hpp"
#include "System/Data/zzzz__DataView_def.hpp"
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.GetDataView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataView* (::System::Data::DataViewManagerListItemTypeDescriptor::*)(::System::Data::DataTable*)>(
    &::System::Data::DataViewManagerListItemTypeDescriptor::GetDataView)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4107700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataViewManagerListItemTypeDescriptor*>::get(), "GetDataView", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataViewManager*& System::Data::DataViewManagerListItemTypeDescriptor::__cordl_internal_get__dataViewManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewManager;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataViewManager*> const& System::Data::DataViewManagerListItemTypeDescriptor::__cordl_internal_get__dataViewManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewManager;
}
constexpr void System::Data::DataViewManagerListItemTypeDescriptor::__cordl_internal_set__dataViewManager(::System::Data::DataViewManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataViewManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Data::DataView* System::Data::DataViewManagerListItemTypeDescriptor::GetDataView(::System::Data::DataTable* table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataViewManagerListItemTypeDescriptor*>::get(), "GetDataView", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataView*, false>(this, ___internal_method, table);
}
// Ctor Parameters []
constexpr ::System::Data::DataViewManagerListItemTypeDescriptor::DataViewManagerListItemTypeDescriptor() {}
