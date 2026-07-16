#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolSettings.hpp"
#include "GlobalNamespace/zzzz__RecordingSettings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettings_def.hpp"
#include "GlobalNamespace/zzzz__RecordingSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolSettings::*)(::ArrayW<::GlobalNamespace::RecordingSettings*>)>(
    &::GlobalNamespace::RecordingToolSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fbca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettings*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::RecordingSettings*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::RecordingSettings*>& GlobalNamespace::RecordingToolSettings::__cordl_internal_get_recordingSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingSettings;
}
constexpr ::ArrayW<::GlobalNamespace::RecordingSettings*> const& GlobalNamespace::RecordingToolSettings::__cordl_internal_get_recordingSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingSettings;
}
constexpr void GlobalNamespace::RecordingToolSettings::__cordl_internal_set_recordingSettings(::ArrayW<::GlobalNamespace::RecordingSettings*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordingSettings = value;
}
inline void GlobalNamespace::RecordingToolSettings::_ctor(::ArrayW<::GlobalNamespace::RecordingSettings*> recordingSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolSettings*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::RecordingSettings*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordingSettings);
}
inline ::GlobalNamespace::RecordingToolSettings* GlobalNamespace::RecordingToolSettings::New_ctor(::ArrayW<::GlobalNamespace::RecordingSettings*> recordingSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingToolSettings*>(recordingSettings));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolSettings::RecordingToolSettings() {}
