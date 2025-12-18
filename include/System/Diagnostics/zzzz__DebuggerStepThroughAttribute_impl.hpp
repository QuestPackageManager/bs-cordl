#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggerStepThroughAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggerStepThroughAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DebuggerStepThroughAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::DebuggerStepThroughAttribute::*)()>(
    &::System::Diagnostics::DebuggerStepThroughAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a30a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerStepThroughAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Diagnostics::DebuggerStepThroughAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerStepThroughAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::DebuggerStepThroughAttribute* System::Diagnostics::DebuggerStepThroughAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::DebuggerStepThroughAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DebuggerStepThroughAttribute::DebuggerStepThroughAttribute() {}
