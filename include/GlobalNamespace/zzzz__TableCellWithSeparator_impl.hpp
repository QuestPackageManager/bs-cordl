#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__TableCellWithSeparator_def.hpp"
#include "HMUI/zzzz__ITableCellOwner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TableCellWithSeparator.TableViewSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableCellWithSeparator::*)(::HMUI::ITableCellOwner*, int32_t)>(
    &::GlobalNamespace::TableCellWithSeparator::TableViewSetup)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2116274;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableCellWithSeparator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableCellWithSeparator*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableCellWithSeparator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableCellWithSeparator::*)()>(&::GlobalNamespace::TableCellWithSeparator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2116358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableCellWithSeparator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TableCellWithSeparator::__cordl_internal_get__separator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TableCellWithSeparator::__cordl_internal_get__separator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separator;
}
constexpr void GlobalNamespace::TableCellWithSeparator::__cordl_internal_set__separator(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____separator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TableCellWithSeparator::TableViewSetup(::HMUI::ITableCellOwner* tableCellOwner, int32_t idx) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableCellWithSeparator*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableCellOwner, idx);
}
inline ::GlobalNamespace::TableCellWithSeparator* GlobalNamespace::TableCellWithSeparator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TableCellWithSeparator*>());
}
inline void GlobalNamespace::TableCellWithSeparator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableCellWithSeparator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TableCellWithSeparator::TableCellWithSeparator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
