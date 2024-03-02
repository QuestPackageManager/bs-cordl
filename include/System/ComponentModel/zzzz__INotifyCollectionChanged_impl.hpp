#pragma once
#include "System/ComponentModel/zzzz__INotifyCollectionChanged_def.hpp"
#include "System/ComponentModel/zzzz__NotifyCollectionChangedEventHandler_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::INotifyCollectionChanged.add_CollectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::INotifyCollectionChanged::*)(
    ::System::ComponentModel::NotifyCollectionChangedEventHandler*)>(&::System::ComponentModel::INotifyCollectionChanged::add_CollectionChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyCollectionChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyCollectionChanged*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::INotifyCollectionChanged.remove_CollectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::INotifyCollectionChanged::*)(
    ::System::ComponentModel::NotifyCollectionChangedEventHandler*)>(&::System::ComponentModel::INotifyCollectionChanged::remove_CollectionChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyCollectionChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyCollectionChanged*>::get(), 1));
    return ___internal_method;
  }
};
inline void System::ComponentModel::INotifyCollectionChanged::add_CollectionChanged(::System::ComponentModel::NotifyCollectionChangedEventHandler* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyCollectionChanged*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::INotifyCollectionChanged::remove_CollectionChanged(::System::ComponentModel::NotifyCollectionChangedEventHandler* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyCollectionChanged*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
