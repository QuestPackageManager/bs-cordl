#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\IAvatarVisualDataProvider.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarVisualDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarVisualDataProvider.get_avatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::BeatSaber::AvatarCore::IAvatarVisualDataProvider::*)()>(
    &::BeatSaber::AvatarCore::IAvatarVisualDataProvider::get_avatarsData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarVisualDataProvider.add_visualDataDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::IAvatarVisualDataProvider::*)(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*)>(
    &::BeatSaber::AvatarCore::IAvatarVisualDataProvider::add_visualDataDidChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarVisualDataProvider.remove_visualDataDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::IAvatarVisualDataProvider::*)(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*)>(
    &::BeatSaber::AvatarCore::IAvatarVisualDataProvider::remove_visualDataDidChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(), 2 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::MultiplayerAvatarsData BeatSaber::AvatarCore::IAvatarVisualDataProvider::get_avatarsData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::IAvatarVisualDataProvider::add_visualDataDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::IAvatarVisualDataProvider::remove_visualDataDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
