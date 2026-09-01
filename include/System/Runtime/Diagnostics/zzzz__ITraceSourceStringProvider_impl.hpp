#pragma once
// IWYU pragma private; include "System\Runtime\Diagnostics\ITraceSourceStringProvider.hpp"
#include "System/Runtime/Diagnostics/zzzz__ITraceSourceStringProvider_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::ITraceSourceStringProvider.GetSourceString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Diagnostics::ITraceSourceStringProvider::*)()>(
    &::System::Runtime::Diagnostics::ITraceSourceStringProvider::GetSourceString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::ITraceSourceStringProvider*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Diagnostics::ITraceSourceStringProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW System::Runtime::Diagnostics::ITraceSourceStringProvider::GetSourceString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::ITraceSourceStringProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
