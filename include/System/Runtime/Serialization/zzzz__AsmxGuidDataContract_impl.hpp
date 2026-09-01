#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\AsmxGuidDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__GuidDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__AsmxGuidDataContract_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::AsmxGuidDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::AsmxGuidDataContract::*)()>(&::System::Runtime::Serialization::AsmxGuidDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x615ec08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::AsmxGuidDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::AsmxGuidDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::AsmxGuidDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::AsmxGuidDataContract* System::Runtime::Serialization::AsmxGuidDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::AsmxGuidDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::AsmxGuidDataContract::AsmxGuidDataContract() {}
