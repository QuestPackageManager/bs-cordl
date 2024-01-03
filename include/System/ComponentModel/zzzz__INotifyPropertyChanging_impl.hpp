#pragma once
#include "System/ComponentModel/zzzz__INotifyPropertyChanging_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangingEventHandler_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::INotifyPropertyChanging.add_PropertyChanging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::INotifyPropertyChanging::*)(::System::ComponentModel::PropertyChangingEventHandler*)>(
    &::System::ComponentModel::INotifyPropertyChanging::add_PropertyChanging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyPropertyChanging*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyPropertyChanging*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::INotifyPropertyChanging.remove_PropertyChanging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::INotifyPropertyChanging::*)(::System::ComponentModel::PropertyChangingEventHandler*)>(
    &::System::ComponentModel::INotifyPropertyChanging::remove_PropertyChanging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyPropertyChanging*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyPropertyChanging*>::get(), 1));
    return ___internal_method;
  }
};
inline void System::ComponentModel::INotifyPropertyChanging::add_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyPropertyChanging*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::INotifyPropertyChanging::remove_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyPropertyChanging*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
