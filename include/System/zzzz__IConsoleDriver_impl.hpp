#pragma once
#include "System/zzzz__IConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
//  Writing Method size for method: ::System::IConsoleDriver.ReadKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ConsoleKeyInfo (::System::IConsoleDriver::*)(bool)>(&::System::IConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IConsoleDriver*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IConsoleDriver*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::ConsoleKeyInfo System::IConsoleDriver::ReadKey(bool intercept) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IConsoleDriver*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo, false>(this, ___internal_method, intercept);
}
