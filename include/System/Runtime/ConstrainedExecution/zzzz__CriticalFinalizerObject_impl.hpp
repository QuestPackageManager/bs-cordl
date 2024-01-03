#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
//  Writing Method size for method: ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ConstrainedExecution::CriticalFinalizerObject::*)()>(
    &::System::Runtime::ConstrainedExecution::CriticalFinalizerObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d76ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ConstrainedExecution::CriticalFinalizerObject::*)()>(
    &::System::Runtime::ConstrainedExecution::CriticalFinalizerObject::Finalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24da714;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject* System::Runtime::ConstrainedExecution::CriticalFinalizerObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*>());
}
inline void System::Runtime::ConstrainedExecution::CriticalFinalizerObject::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::ConstrainedExecution::CriticalFinalizerObject::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject::CriticalFinalizerObject() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
