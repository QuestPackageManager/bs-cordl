#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/NormalizedStringDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__StringDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__NormalizedStringDataContract_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::NormalizedStringDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::NormalizedStringDataContract::*)()>(
    &::System::Runtime::Serialization::NormalizedStringDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61583c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NormalizedStringDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::NormalizedStringDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NormalizedStringDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::NormalizedStringDataContract* System::Runtime::Serialization::NormalizedStringDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::NormalizedStringDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::NormalizedStringDataContract::NormalizedStringDataContract() {}
