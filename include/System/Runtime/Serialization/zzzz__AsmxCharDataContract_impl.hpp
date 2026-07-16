#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/AsmxCharDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__CharDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__AsmxCharDataContract_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::AsmxCharDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::AsmxCharDataContract::*)()>(&::System::Runtime::Serialization::AsmxCharDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6155fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::AsmxCharDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::AsmxCharDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::AsmxCharDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::AsmxCharDataContract* System::Runtime::Serialization::AsmxCharDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::AsmxCharDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::AsmxCharDataContract::AsmxCharDataContract() {}
