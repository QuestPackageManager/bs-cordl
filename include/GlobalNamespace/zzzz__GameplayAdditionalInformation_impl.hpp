#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayAdditionalInformation.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayAdditionalInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayAdditionalInformation::*)(::StringW, bool, bool, ::GlobalNamespace::PlaymodeOptions, ::StringW, bool, ::StringW,
                                                                                                                  bool)>(&::GlobalNamespace::GameplayAdditionalInformation::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3995e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayAdditionalInformation*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PlaymodeOptions>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_backButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr ::StringW const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_backButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_backButtonText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backButtonText = value;
}
constexpr bool& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_useTestNoteCutSoundEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useTestNoteCutSoundEffects;
}
constexpr bool const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_useTestNoteCutSoundEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useTestNoteCutSoundEffects;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_useTestNoteCutSoundEffects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useTestNoteCutSoundEffects = value;
}
constexpr bool& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_startPaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPaused;
}
constexpr bool const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_startPaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPaused;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_startPaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startPaused = value;
}
constexpr ::GlobalNamespace::PlaymodeOptions& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_playmodeOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playmodeOptions;
}
constexpr ::GlobalNamespace::PlaymodeOptions const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_playmodeOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playmodeOptions;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_playmodeOptions(::GlobalNamespace::PlaymodeOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playmodeOptions = value;
}
constexpr ::StringW& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_recordingRelativePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingRelativePath;
}
constexpr ::StringW const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_recordingRelativePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingRelativePath;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_recordingRelativePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordingRelativePath = value;
}
constexpr bool& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_profileSong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profileSong;
}
constexpr bool const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_profileSong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profileSong;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_profileSong(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___profileSong = value;
}
constexpr ::StringW& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_reportDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reportDescriptor;
}
constexpr ::StringW const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_reportDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reportDescriptor;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_reportDescriptor(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reportDescriptor = value;
}
constexpr bool& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_fpfcEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fpfcEnabled;
}
constexpr bool const& GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_get_fpfcEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fpfcEnabled;
}
constexpr void GlobalNamespace::GameplayAdditionalInformation::__cordl_internal_set_fpfcEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fpfcEnabled = value;
}
inline void GlobalNamespace::GameplayAdditionalInformation::_ctor(::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused, ::GlobalNamespace::PlaymodeOptions playmodeOptions,
                                                                  ::StringW recordingRelativePath, bool profileSong, /* [Nullable(1)] */ ::StringW reportDescriptor, bool fpfcEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayAdditionalInformation*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PlaymodeOptions>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backButtonText, useTestNoteCutSoundEffects, startPaused, playmodeOptions, recordingRelativePath, profileSong,
                                                   reportDescriptor, fpfcEnabled);
}
/// @brief [NullableContext(2)]
inline ::GlobalNamespace::GameplayAdditionalInformation* GlobalNamespace::GameplayAdditionalInformation::New_ctor(::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused,
                                                                                                                  ::GlobalNamespace::PlaymodeOptions playmodeOptions, ::StringW recordingRelativePath,
                                                                                                                  bool profileSong, /* [Nullable(1)] */ ::StringW reportDescriptor, bool fpfcEnabled) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayAdditionalInformation*>(backButtonText, useTestNoteCutSoundEffects, startPaused, playmodeOptions,
                                                                                                             recordingRelativePath, profileSong, reportDescriptor, fpfcEnabled));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayAdditionalInformation::GameplayAdditionalInformation() {}
