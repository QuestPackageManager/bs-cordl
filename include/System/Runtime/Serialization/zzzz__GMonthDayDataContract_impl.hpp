#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\GMonthDayDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__StringDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__GMonthDayDataContract_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::GMonthDayDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::GMonthDayDataContract::*)()>(&::System::Runtime::Serialization::GMonthDayDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x615daa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GMonthDayDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::GMonthDayDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GMonthDayDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::GMonthDayDataContract* System::Runtime::Serialization::GMonthDayDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::GMonthDayDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::GMonthDayDataContract::GMonthDayDataContract() {}
