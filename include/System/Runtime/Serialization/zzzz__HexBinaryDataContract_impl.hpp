#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\HexBinaryDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__StringDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__HexBinaryDataContract_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::HexBinaryDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::HexBinaryDataContract::*)()>(&::System::Runtime::Serialization::HexBinaryDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x615d96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::HexBinaryDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::HexBinaryDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::HexBinaryDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::HexBinaryDataContract* System::Runtime::Serialization::HexBinaryDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::HexBinaryDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::HexBinaryDataContract::HexBinaryDataContract() {}
