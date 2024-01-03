#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggerNonUserCodeAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DebuggerNonUserCodeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::DebuggerNonUserCodeAttribute::*)()>(
    &::System::Diagnostics::DebuggerNonUserCodeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2579c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerNonUserCodeAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Diagnostics::DebuggerNonUserCodeAttribute* System::Diagnostics::DebuggerNonUserCodeAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::DebuggerNonUserCodeAttribute*>());
}
inline void System::Diagnostics::DebuggerNonUserCodeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerNonUserCodeAttribute*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DebuggerNonUserCodeAttribute::DebuggerNonUserCodeAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
