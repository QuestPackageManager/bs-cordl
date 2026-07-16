#pragma once
// IWYU pragma private; include "System/Resources/SatelliteContractVersionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Resources/zzzz__SatelliteContractVersionAttribute_def.hpp"
//  Writing Method size for method: ::System::Resources::SatelliteContractVersionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::SatelliteContractVersionAttribute::*)(::StringW)>(&::System::Resources::SatelliteContractVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b72ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::SatelliteContractVersionAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::SatelliteContractVersionAttribute.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::SatelliteContractVersionAttribute::*)()>(&::System::Resources::SatelliteContractVersionAttribute::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b72b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::SatelliteContractVersionAttribute*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Resources::SatelliteContractVersionAttribute::__cordl_internal_get__Version_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Version_k__BackingField;
}
constexpr ::StringW const& System::Resources::SatelliteContractVersionAttribute::__cordl_internal_get__Version_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Version_k__BackingField;
}
constexpr void System::Resources::SatelliteContractVersionAttribute::__cordl_internal_set__Version_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Version_k__BackingField = value;
}
inline void System::Resources::SatelliteContractVersionAttribute::_ctor(::StringW version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::SatelliteContractVersionAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
inline ::StringW System::Resources::SatelliteContractVersionAttribute::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::SatelliteContractVersionAttribute*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Resources::SatelliteContractVersionAttribute* System::Resources::SatelliteContractVersionAttribute::New_ctor(::StringW version) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::SatelliteContractVersionAttribute*>(version));
}
// Ctor Parameters []
constexpr ::System::Resources::SatelliteContractVersionAttribute::SatelliteContractVersionAttribute() {}
