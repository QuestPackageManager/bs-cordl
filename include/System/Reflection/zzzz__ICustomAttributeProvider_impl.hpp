#pragma once
#include "System/Reflection/zzzz__ICustomAttributeProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::ICustomAttributeProvider.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::ICustomAttributeProvider::*)(bool)>(
    &::System::Reflection::ICustomAttributeProvider::GetCustomAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ICustomAttributeProvider*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ICustomAttributeProvider.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::ICustomAttributeProvider::*)(
    ::System::Type*, bool)>(&::System::Reflection::ICustomAttributeProvider::GetCustomAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ICustomAttributeProvider*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ICustomAttributeProvider.IsDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::ICustomAttributeProvider::*)(::System::Type*, bool)>(
    &::System::Reflection::ICustomAttributeProvider::IsDefined)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ICustomAttributeProvider*>::get(), 2));
    return ___internal_method;
  }
};
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::ICustomAttributeProvider::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ICustomAttributeProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::ICustomAttributeProvider::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ICustomAttributeProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, attributeType, inherit);
}
inline bool System::Reflection::ICustomAttributeProvider::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ICustomAttributeProvider*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attributeType, inherit);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
