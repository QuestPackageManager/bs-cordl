#pragma once
// IWYU pragma private; include "System/ReflectionOnlyType.hpp"
#include "System/zzzz__RuntimeType_impl.hpp"
#include "System/zzzz__ReflectionOnlyType_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
//  Writing Method size for method: ::System::ReflectionOnlyType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ReflectionOnlyType::*)()>(&::System::ReflectionOnlyType::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3e2db94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReflectionOnlyType*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ReflectionOnlyType.get_TypeHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeTypeHandle (::System::ReflectionOnlyType::*)()>(&::System::ReflectionOnlyType::get_TypeHandle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3e2dbec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReflectionOnlyType*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReflectionOnlyType*>::get(), 112));
    return ___internal_method;
  }
};
inline void System::ReflectionOnlyType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReflectionOnlyType*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::RuntimeTypeHandle System::ReflectionOnlyType::get_TypeHandle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReflectionOnlyType*>::get(), 112)));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle, false>(this, ___internal_method);
}
inline ::System::ReflectionOnlyType* System::ReflectionOnlyType::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ReflectionOnlyType*>());
}
// Ctor Parameters []
constexpr ::System::ReflectionOnlyType::ReflectionOnlyType() {}
