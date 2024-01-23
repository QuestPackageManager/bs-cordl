#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__ArgIterator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ArgIterator.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ArgIterator::*)(::System::Object*)>(&::System::ArgIterator::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25f62a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArgIterator>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArgIterator>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArgIterator.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ArgIterator::*)()>(&::System::ArgIterator::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25f62f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArgIterator>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArgIterator>::get(), 2));
    return ___internal_method;
  }
};
inline bool System::ArgIterator::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArgIterator>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline int32_t System::ArgIterator::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArgIterator>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "sig", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "args", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "next_arg", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "num_args", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ArgIterator::ArgIterator(void* sig, void* args, int32_t next_arg, int32_t num_args) noexcept {
  this->sig = sig;
  this->args = args;
  this->next_arg = next_arg;
  this->num_args = num_args;
}
// Ctor Parameters []
constexpr ::System::ArgIterator::ArgIterator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
