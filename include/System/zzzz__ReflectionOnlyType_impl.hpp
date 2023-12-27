#pragma once
#include "System/zzzz__RuntimeType_impl.hpp"
#include "System/zzzz__ReflectionOnlyType_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
//  Writing Method size for method: ::System::ReflectionOnlyType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ReflectionOnlyType::*)()>(&::System::ReflectionOnlyType::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25f180c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReflectionOnlyType*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ReflectionOnlyType.get_TypeHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeTypeHandle (::System::ReflectionOnlyType::*)()>(&::System::ReflectionOnlyType::get_TypeHandle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25f1864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReflectionOnlyType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReflectionOnlyType*>::get(), 110));
    return ___internal_method;
  }
};
inline ::System::ReflectionOnlyType* System::ReflectionOnlyType::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ReflectionOnlyType*>());
}
inline void System::ReflectionOnlyType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReflectionOnlyType*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::RuntimeTypeHandle System::ReflectionOnlyType::get_TypeHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReflectionOnlyType*>::get(), "get_TypeHandle",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ReflectionOnlyType::ReflectionOnlyType() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
