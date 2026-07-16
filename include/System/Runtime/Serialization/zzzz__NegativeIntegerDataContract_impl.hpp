#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/NegativeIntegerDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__LongDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__NegativeIntegerDataContract_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::NegativeIntegerDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::NegativeIntegerDataContract::*)()>(
    &::System::Runtime::Serialization::NegativeIntegerDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61571d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NegativeIntegerDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::NegativeIntegerDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NegativeIntegerDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::NegativeIntegerDataContract* System::Runtime::Serialization::NegativeIntegerDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::NegativeIntegerDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::NegativeIntegerDataContract::NegativeIntegerDataContract() {}
