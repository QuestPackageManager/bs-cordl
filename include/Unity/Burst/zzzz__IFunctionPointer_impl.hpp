#pragma once
#include "Unity/Burst/zzzz__IFunctionPointer_def.hpp"
//  Writing Method size for method: ::Unity::Burst::IFunctionPointer.FromIntPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Burst::IFunctionPointer* (::Unity::Burst::IFunctionPointer::*)(void*)>(
    &::Unity::Burst::IFunctionPointer::FromIntPtr)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::IFunctionPointer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::IFunctionPointer*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Unity::Burst::IFunctionPointer* Unity::Burst::IFunctionPointer::FromIntPtr(void* ptr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::IFunctionPointer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::IFunctionPointer*, false>(this, ___internal_method, ptr);
}
