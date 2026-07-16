#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/BeatmapEditorDestinationParameters.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "BeatSaber/Destinations/zzzz__BeatmapEditorDestinationParameters_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::BeatmapEditorDestinationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::BeatmapEditorDestinationParameters::*)()>(
    &::BeatSaber::Destinations::BeatmapEditorDestinationParameters::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x32803c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::BeatmapEditorDestinationParameters*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::BeatmapEditorDestinationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::BeatmapEditorDestinationParameters::*)(
    ::StringW, bool, ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>)>(
    &::BeatSaber::Destinations::BeatmapEditorDestinationParameters::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32803e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::BeatmapEditorDestinationParameters*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Destinations::BeatmapEditorDestinationParameters::__cordl_internal_get_projectPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectPath;
}
constexpr ::StringW const& BeatSaber::Destinations::BeatmapEditorDestinationParameters::__cordl_internal_get_projectPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectPath;
}
constexpr void BeatSaber::Destinations::BeatmapEditorDestinationParameters::__cordl_internal_set_projectPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___projectPath = value;
}
constexpr bool& BeatSaber::Destinations::BeatmapEditorDestinationParameters::__cordl_internal_get_ignoreTempFolder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreTempFolder;
}
constexpr bool const& BeatSaber::Destinations::BeatmapEditorDestinationParameters::__cordl_internal_get_ignoreTempFolder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreTempFolder;
}
constexpr void BeatSaber::Destinations::BeatmapEditorDestinationParameters::__cordl_internal_set_ignoreTempFolder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreTempFolder = value;
}
constexpr ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>&
BeatSaber::Destinations::BeatmapEditorDestinationParameters::__cordl_internal_get_startLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startLevel;
}
constexpr ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> const&
BeatSaber::Destinations::BeatmapEditorDestinationParameters::__cordl_internal_get_startLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startLevel;
}
constexpr void BeatSaber::Destinations::BeatmapEditorDestinationParameters::__cordl_internal_set_startLevel(
    ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startLevel = value;
}
inline void BeatSaber::Destinations::BeatmapEditorDestinationParameters::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::BeatmapEditorDestinationParameters*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Destinations::BeatmapEditorDestinationParameters::_ctor(
    ::StringW projectPath, bool ignoreTempFolder, ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> startLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::BeatmapEditorDestinationParameters*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectPath, ignoreTempFolder, startLevel);
}
inline ::BeatSaber::Destinations::BeatmapEditorDestinationParameters* BeatSaber::Destinations::BeatmapEditorDestinationParameters::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::BeatmapEditorDestinationParameters*>());
}
inline ::BeatSaber::Destinations::BeatmapEditorDestinationParameters* BeatSaber::Destinations::BeatmapEditorDestinationParameters::New_ctor(
    ::StringW projectPath, bool ignoreTempFolder, ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> startLevel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::BeatmapEditorDestinationParameters*>(projectPath, ignoreTempFolder, startLevel));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::BeatmapEditorDestinationParameters::BeatmapEditorDestinationParameters() {}
