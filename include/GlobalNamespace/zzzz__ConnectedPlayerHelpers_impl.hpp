#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedPlayerHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerHelpers_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerHelpers.WantsToPlayNextLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerHelpers::WantsToPlayNextLevel)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x32a7570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerHelpers*>(), { "WantsToPlayNextLevel", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerHelpers.WasActiveAtLevelStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerHelpers::WasActiveAtLevelStart)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x32a7634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerHelpers*>(), { "WasActiveAtLevelStart", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerHelpers.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerHelpers::IsActive)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x32a76f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerHelpers*>(), { "IsActive", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerHelpers.HasFinishedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerHelpers::HasFinishedLevel)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x32a77bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerHelpers*>(), { "HasFinishedLevel", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerHelpers.IsActiveOrFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerHelpers::IsActiveOrFinished)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x32a7880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerHelpers*>(), { "IsActiveOrFinished", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerHelpers.IsFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerHelpers::IsFailed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x32a78a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerHelpers*>(), { "IsFailed", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::ConnectedPlayerHelpers::WantsToPlayNextLevel(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerHelpers*>(), { "WantsToPlayNextLevel", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, connectedPlayer);
}
inline bool GlobalNamespace::ConnectedPlayerHelpers::WasActiveAtLevelStart(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerHelpers*>(), { "WasActiveAtLevelStart", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, connectedPlayer);
}
inline bool GlobalNamespace::ConnectedPlayerHelpers::IsActive(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerHelpers*>(), { "IsActive", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, connectedPlayer);
}
inline bool GlobalNamespace::ConnectedPlayerHelpers::HasFinishedLevel(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerHelpers*>(), { "HasFinishedLevel", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, connectedPlayer);
}
inline bool GlobalNamespace::ConnectedPlayerHelpers::IsActiveOrFinished(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerHelpers*>(), { "IsActiveOrFinished", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, connectedPlayer);
}
inline bool GlobalNamespace::ConnectedPlayerHelpers::IsFailed(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerHelpers*>(), { "IsFailed", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, connectedPlayer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerHelpers::ConnectedPlayerHelpers() {}
