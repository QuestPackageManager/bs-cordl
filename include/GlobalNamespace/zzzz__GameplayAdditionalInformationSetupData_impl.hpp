#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayAdditionalInformationSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformationSetupData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayAdditionalInformationSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayAdditionalInformationSetupData::*)(::GlobalNamespace::GameplayAdditionalInformation*)>(
    &::GlobalNamespace::GameplayAdditionalInformationSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3709d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayAdditionalInformationSetupData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayAdditionalInformation*& GlobalNamespace::GameplayAdditionalInformationSetupData::__cordl_internal_get_additionalInformation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalInformation;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformation* const& GlobalNamespace::GameplayAdditionalInformationSetupData::__cordl_internal_get_additionalInformation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalInformation;
}
constexpr void GlobalNamespace::GameplayAdditionalInformationSetupData::__cordl_internal_set_additionalInformation(::GlobalNamespace::GameplayAdditionalInformation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___additionalInformation = value;
}
inline void GlobalNamespace::GameplayAdditionalInformationSetupData::_ctor(::GlobalNamespace::GameplayAdditionalInformation* additionalInformation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayAdditionalInformationSetupData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, additionalInformation);
}
inline ::GlobalNamespace::GameplayAdditionalInformationSetupData*
GlobalNamespace::GameplayAdditionalInformationSetupData::New_ctor(::GlobalNamespace::GameplayAdditionalInformation* additionalInformation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayAdditionalInformationSetupData*>(additionalInformation));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData::GameplayAdditionalInformationSetupData() {}
