#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\Events\SpaceshipGlobalFields.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipGlobalFields_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields.SetGlobalAppID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t)>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::SetGlobalAppID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x32654f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>(), { "SetGlobalAppID", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields.get_buildVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::get_buildVersion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x326523c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>(), { "get_buildVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields.get_appId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)()>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::get_appId)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3265544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>(), { "get_appId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields.get_userType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::get_userType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3265590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>(), { "get_userType", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::setStaticF__appId(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "_appId", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>(std::forward<uint64_t>(value));
}
inline uint64_t BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::getStaticF__appId() {
  return ::cordl_internals::getStaticField<uint64_t, "_appId", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::SetGlobalAppID(uint64_t appId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>(), { "SetGlobalAppID", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, appId);
}
inline ::StringW BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::get_buildVersion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>(), { "get_buildVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline uint64_t BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::get_appId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>(), { "get_appId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method);
}
inline ::StringW BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::get_userType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>(), { "get_userType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::SpaceshipGlobalFields() {}
