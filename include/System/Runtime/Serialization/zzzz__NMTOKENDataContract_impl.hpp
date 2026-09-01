#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\NMTOKENDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__StringDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__NMTOKENDataContract_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::NMTOKENDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::NMTOKENDataContract::*)()>(&::System::Runtime::Serialization::NMTOKENDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x615dfec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NMTOKENDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::NMTOKENDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NMTOKENDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::NMTOKENDataContract* System::Runtime::Serialization::NMTOKENDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::NMTOKENDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::NMTOKENDataContract::NMTOKENDataContract() {}
