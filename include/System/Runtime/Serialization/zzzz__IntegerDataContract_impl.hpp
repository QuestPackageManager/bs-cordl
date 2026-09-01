#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\IntegerDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__LongDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__IntegerDataContract_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::IntegerDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::IntegerDataContract::*)()>(&::System::Runtime::Serialization::IntegerDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x615c920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IntegerDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::IntegerDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IntegerDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::IntegerDataContract* System::Runtime::Serialization::IntegerDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::IntegerDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::IntegerDataContract::IntegerDataContract() {}
