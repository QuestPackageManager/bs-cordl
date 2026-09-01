#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\NonPositiveIntegerDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__LongDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__NonPositiveIntegerDataContract_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::NonPositiveIntegerDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::NonPositiveIntegerDataContract::*)()>(
    &::System::Runtime::Serialization::NonPositiveIntegerDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x615ca58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NonPositiveIntegerDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::NonPositiveIntegerDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NonPositiveIntegerDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::NonPositiveIntegerDataContract* System::Runtime::Serialization::NonPositiveIntegerDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::NonPositiveIntegerDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::NonPositiveIntegerDataContract::NonPositiveIntegerDataContract() {}
