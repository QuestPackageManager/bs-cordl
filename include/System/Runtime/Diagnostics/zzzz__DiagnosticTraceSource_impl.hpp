#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/DiagnosticTraceSource.hpp"
#include "System/Diagnostics/zzzz__TraceSource_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__DiagnosticTraceSource_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceSource::*)(::StringW)>(&::System::Runtime::Diagnostics::DiagnosticTraceSource::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6187504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceSource*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Diagnostics::DiagnosticTraceSource::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceSource*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::System::Runtime::Diagnostics::DiagnosticTraceSource* System::Runtime::Diagnostics::DiagnosticTraceSource::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Diagnostics::DiagnosticTraceSource*>(name));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::DiagnosticTraceSource::DiagnosticTraceSource() {}
