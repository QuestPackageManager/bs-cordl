#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IExtensibleDataObject.hpp"
#include "System/Runtime/Serialization/zzzz__IExtensibleDataObject_def.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataObject_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::IExtensibleDataObject.get_ExtensionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ExtensionDataObject* (
    ::System::Runtime::Serialization::IExtensibleDataObject::*)()>(&::System::Runtime::Serialization::IExtensibleDataObject::get_ExtensionData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::IExtensibleDataObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::IExtensibleDataObject*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IExtensibleDataObject.set_ExtensionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::IExtensibleDataObject::*)(
    ::System::Runtime::Serialization::ExtensionDataObject*)>(&::System::Runtime::Serialization::IExtensibleDataObject::set_ExtensionData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::IExtensibleDataObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::IExtensibleDataObject*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Runtime::Serialization::ExtensionDataObject* System::Runtime::Serialization::IExtensibleDataObject::get_ExtensionData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::IExtensibleDataObject*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ExtensionDataObject*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::IExtensibleDataObject::set_ExtensionData(::System::Runtime::Serialization::ExtensionDataObject* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::IExtensibleDataObject*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
