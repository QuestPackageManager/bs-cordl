#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/FormatterData.hpp"
#include "System/Runtime/Remoting/zzzz__ProviderData_impl.hpp"
#include "System/Runtime/Remoting/zzzz__FormatterData_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::FormatterData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::FormatterData::*)()>(&::System::Runtime::Remoting::FormatterData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b26f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::FormatterData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::FormatterData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::FormatterData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::FormatterData* System::Runtime::Remoting::FormatterData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::FormatterData*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::FormatterData::FormatterData() {}
