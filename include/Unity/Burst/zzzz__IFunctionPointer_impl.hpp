#pragma once
// IWYU pragma private; include "Unity/Burst/IFunctionPointer.hpp"
#include "Unity/Burst/zzzz__IFunctionPointer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Unity::Burst::IFunctionPointer.FromIntPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Burst::IFunctionPointer* (::Unity::Burst::IFunctionPointer::*)(::System::IntPtr)>(
    &::Unity::Burst::IFunctionPointer::FromIntPtr)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::IFunctionPointer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::IFunctionPointer*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Unity::Burst::IFunctionPointer* Unity::Burst::IFunctionPointer::FromIntPtr(::System::IntPtr ptr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::IFunctionPointer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::IFunctionPointer*, false>(this, ___internal_method, ptr);
}
