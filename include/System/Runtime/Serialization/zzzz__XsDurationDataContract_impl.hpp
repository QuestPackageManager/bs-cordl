#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XsDurationDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__TimeSpanDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XsDurationDataContract_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XsDurationDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XsDurationDataContract::*)()>(&::System::Runtime::Serialization::XsDurationDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61590c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XsDurationDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::XsDurationDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XsDurationDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XsDurationDataContract* System::Runtime::Serialization::XsDurationDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XsDurationDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XsDurationDataContract::XsDurationDataContract() {}
