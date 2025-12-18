#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/DiagnosticTraceSource.hpp"
#include "System/Diagnostics/zzzz__TraceSource_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__DiagnosticTraceSource_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceSource::*)(::StringW)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceSource::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fd81c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceSource*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Diagnostics::DiagnosticTraceSource::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceSource*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::System::Runtime::Diagnostics::DiagnosticTraceSource* System::Runtime::Diagnostics::DiagnosticTraceSource::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Diagnostics::DiagnosticTraceSource*>(name));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::DiagnosticTraceSource::DiagnosticTraceSource() {}
