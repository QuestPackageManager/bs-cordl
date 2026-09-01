#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\JsonLinqContract.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonLinqContract_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonLinqContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonLinqContract::*)(::System::Type*)>(&::Newtonsoft::Json::Serialization::JsonLinqContract::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d3d108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonLinqContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::JsonLinqContract::_ctor(::System::Type* underlyingType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonLinqContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, underlyingType);
}
inline ::Newtonsoft::Json::Serialization::JsonLinqContract* Newtonsoft::Json::Serialization::JsonLinqContract::New_ctor(::System::Type* underlyingType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonLinqContract*>(underlyingType));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonLinqContract::JsonLinqContract() {}
