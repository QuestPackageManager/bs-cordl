#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/Emit/zzzz__UnmanagedMarshal_def.hpp"
//  Writing Method size for method: ::System::Reflection::Emit::UnmanagedMarshal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::Emit::UnmanagedMarshal::*)()>(&::System::Reflection::Emit::UnmanagedMarshal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a2318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Emit::UnmanagedMarshal*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Reflection::Emit::UnmanagedMarshal* System::Reflection::Emit::UnmanagedMarshal::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::Emit::UnmanagedMarshal*>());
}
inline void System::Reflection::Emit::UnmanagedMarshal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Emit::UnmanagedMarshal*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::Emit::UnmanagedMarshal::UnmanagedMarshal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
