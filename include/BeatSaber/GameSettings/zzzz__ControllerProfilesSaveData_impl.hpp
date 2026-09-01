#pragma once
// IWYU pragma private; include "BeatSaber\GameSettings\ControllerProfilesSaveData.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileSaveData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesSaveData_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileSaveData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSaveData::*)(
    ::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>*)>(&::BeatSaber::GameSettings::ControllerProfilesSaveData::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3292818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSaveData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatSaber::GameSettings::ControllerProfilesSaveData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& BeatSaber::GameSettings::ControllerProfilesSaveData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSaveData::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::ArrayW<::BeatSaber::GameSettings::ControllerProfileSaveData*>& BeatSaber::GameSettings::ControllerProfilesSaveData::__cordl_internal_get_profiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profiles;
}
constexpr ::ArrayW<::BeatSaber::GameSettings::ControllerProfileSaveData*> const& BeatSaber::GameSettings::ControllerProfilesSaveData::__cordl_internal_get_profiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profiles;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSaveData::__cordl_internal_set_profiles(::ArrayW<::BeatSaber::GameSettings::ControllerProfileSaveData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___profiles = value;
}
inline void BeatSaber::GameSettings::ControllerProfilesSaveData::_ctor(::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>* profiles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSaveData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profiles);
}
inline ::BeatSaber::GameSettings::ControllerProfilesSaveData*
BeatSaber::GameSettings::ControllerProfilesSaveData::New_ctor(::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>* profiles) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GameSettings::ControllerProfilesSaveData*>(profiles));
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfilesSaveData::ControllerProfilesSaveData() {}
