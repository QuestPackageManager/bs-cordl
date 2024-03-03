#pragma once
#include "HMUI/zzzz__ITableCellOwner_def.hpp"
#include "HMUI/zzzz__TableViewSelectionType_def.hpp"
//  Writing Method size for method: ::HMUI::ITableCellOwner.get_selectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableViewSelectionType (::HMUI::ITableCellOwner::*)()>(&::HMUI::ITableCellOwner::get_selectionType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ITableCellOwner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ITableCellOwner*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ITableCellOwner.get_canSelectSelectedCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ITableCellOwner::*)()>(&::HMUI::ITableCellOwner::get_canSelectSelectedCell)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ITableCellOwner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ITableCellOwner*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ITableCellOwner.get_numberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::ITableCellOwner::*)()>(&::HMUI::ITableCellOwner::get_numberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ITableCellOwner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ITableCellOwner*>::get(), 2));
    return ___internal_method;
  }
};
inline ::HMUI::TableViewSelectionType HMUI::ITableCellOwner::get_selectionType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ITableCellOwner*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableViewSelectionType, false>(this, ___internal_method);
}
inline bool HMUI::ITableCellOwner::get_canSelectSelectedCell() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ITableCellOwner*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t HMUI::ITableCellOwner::get_numberOfCells() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ITableCellOwner*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
