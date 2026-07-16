#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/Destination.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationFlags_impl.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationTarget_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__Destination_def.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationFlags_def.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationTarget_def.hpp"
#include "BeatSaber/Destinations/zzzz__LevelStartDestinationParameters_def.hpp"
#include "BeatSaber/Destinations/zzzz__MissionDestinationParameters_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::Destination._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::Destination::*)(
    ::BeatSaber::Destinations::DestinationTarget, ::BeatSaber::Destinations::LevelStartDestinationParameters*, ::ArrayW<::StringW>, ::BeatSaber::Destinations::DestinationFlags,
    ::BeatSaber::Destinations::MissionDestinationParameters*, ::GlobalNamespace::GameplayAdditionalInformation*)>(&::BeatSaber::Destinations::Destination::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3280294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::Destination*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::BeatSaber::Destinations::DestinationTarget>(), ::i2c::type_of<::BeatSaber::Destinations::LevelStartDestinationParameters*>(),
                                             ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::BeatSaber::Destinations::DestinationFlags>(),
                                             ::i2c::type_of<::BeatSaber::Destinations::MissionDestinationParameters*>(), ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::Destination.get_shouldLoadMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Destinations::Destination::*)()>(&::BeatSaber::Destinations::Destination::get_shouldLoadMenu)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32803a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::Destination*>(), { "get_shouldLoadMenu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::Destination.get_shouldLoadHealthWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Destinations::Destination::*)()>(&::BeatSaber::Destinations::Destination::get_shouldLoadHealthWarning)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32803b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::Destination*>(), { "get_shouldLoadHealthWarning", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Destinations::DestinationTarget& BeatSaber::Destinations::Destination::__cordl_internal_get_stage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stage;
}
constexpr ::BeatSaber::Destinations::DestinationTarget const& BeatSaber::Destinations::Destination::__cordl_internal_get_stage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stage;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_stage(::BeatSaber::Destinations::DestinationTarget value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stage = value;
}
constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters*& BeatSaber::Destinations::Destination::__cordl_internal_get_levelStartParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelStartParameters;
}
constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters* const& BeatSaber::Destinations::Destination::__cordl_internal_get_levelStartParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelStartParameters;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_levelStartParameters(::BeatSaber::Destinations::LevelStartDestinationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelStartParameters = value;
}
constexpr ::ArrayW<::StringW>& BeatSaber::Destinations::Destination::__cordl_internal_get_arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arguments;
}
constexpr ::ArrayW<::StringW> const& BeatSaber::Destinations::Destination::__cordl_internal_get_arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arguments;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_arguments(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arguments = value;
}
constexpr ::BeatSaber::Destinations::DestinationFlags& BeatSaber::Destinations::Destination::__cordl_internal_get__destinationFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationFlags;
}
constexpr ::BeatSaber::Destinations::DestinationFlags const& BeatSaber::Destinations::Destination::__cordl_internal_get__destinationFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationFlags;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set__destinationFlags(::BeatSaber::Destinations::DestinationFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____destinationFlags = value;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformation*& BeatSaber::Destinations::Destination::__cordl_internal_get_gameplayAdditionalInformation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayAdditionalInformation;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformation* const& BeatSaber::Destinations::Destination::__cordl_internal_get_gameplayAdditionalInformation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayAdditionalInformation;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_gameplayAdditionalInformation(::GlobalNamespace::GameplayAdditionalInformation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayAdditionalInformation = value;
}
constexpr ::BeatSaber::Destinations::MissionDestinationParameters*& BeatSaber::Destinations::Destination::__cordl_internal_get_missionDestinationParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionDestinationParameters;
}
constexpr ::BeatSaber::Destinations::MissionDestinationParameters* const& BeatSaber::Destinations::Destination::__cordl_internal_get_missionDestinationParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionDestinationParameters;
}
constexpr void BeatSaber::Destinations::Destination::__cordl_internal_set_missionDestinationParameters(::BeatSaber::Destinations::MissionDestinationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missionDestinationParameters = value;
}
inline void BeatSaber::Destinations::Destination::_ctor(::BeatSaber::Destinations::DestinationTarget stage, ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                                                        ::ArrayW<::StringW> arguments, ::BeatSaber::Destinations::DestinationFlags destinationFlags,
                                                        ::BeatSaber::Destinations::MissionDestinationParameters* missionDestinationParameters,
                                                        ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::Destination*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::BeatSaber::Destinations::DestinationTarget>(), ::i2c::type_of<::BeatSaber::Destinations::LevelStartDestinationParameters*>(),
                                           ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::BeatSaber::Destinations::DestinationFlags>(),
                                           ::i2c::type_of<::BeatSaber::Destinations::MissionDestinationParameters*>(), ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stage, levelStartDestination, arguments, destinationFlags, missionDestinationParameters, gameplayAdditionalInformation);
}
inline bool BeatSaber::Destinations::Destination::get_shouldLoadMenu() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::Destination*>(), { "get_shouldLoadMenu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatSaber::Destinations::Destination::get_shouldLoadHealthWarning() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::Destination*>(), { "get_shouldLoadHealthWarning", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::BeatSaber::Destinations::Destination* BeatSaber::Destinations::Destination::New_ctor(::BeatSaber::Destinations::DestinationTarget stage,
                                                                                              ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                                                                                              ::ArrayW<::StringW> arguments, ::BeatSaber::Destinations::DestinationFlags destinationFlags,
                                                                                              ::BeatSaber::Destinations::MissionDestinationParameters* missionDestinationParameters,
                                                                                              ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::BeatSaber::Destinations::Destination*>(stage, levelStartDestination, arguments, destinationFlags, missionDestinationParameters, gameplayAdditionalInformation));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::Destination::Destination() {}
