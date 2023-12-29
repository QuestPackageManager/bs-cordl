#pragma once
#include "System/ComponentModel/Design/zzzz__ITypeDescriptorFilterService_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::ITypeDescriptorFilterService.FilterAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::Design::ITypeDescriptorFilterService::*)(
    ::System::ComponentModel::IComponent*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::Design::ITypeDescriptorFilterService::FilterAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::ITypeDescriptorFilterService.FilterEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::Design::ITypeDescriptorFilterService::*)(
    ::System::ComponentModel::IComponent*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::Design::ITypeDescriptorFilterService::FilterEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::ITypeDescriptorFilterService.FilterProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::Design::ITypeDescriptorFilterService::*)(
    ::System::ComponentModel::IComponent*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::Design::ITypeDescriptorFilterService::FilterProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(), 2));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::Design::ITypeDescriptorFilterService::FilterAttributes(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* attributes) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, component, attributes);
}
inline bool System::ComponentModel::Design::ITypeDescriptorFilterService::FilterEvents(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* events) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, component, events);
}
inline bool System::ComponentModel::Design::ITypeDescriptorFilterService::FilterProperties(::System::ComponentModel::IComponent* component, ::System::Collections::IDictionary* properties) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, component, properties);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
