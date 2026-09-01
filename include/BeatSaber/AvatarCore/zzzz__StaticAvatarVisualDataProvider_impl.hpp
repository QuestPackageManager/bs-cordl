#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\StaticAvatarVisualDataProvider.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__StaticAvatarVisualDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarVisualDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider.get_avatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::*)()>(
    &::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::get_avatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3271de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider*>(), { "get_avatarsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider.add_visualDataDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::*)(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*)>(
    &::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::add_visualDataDidChangeEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3271df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider*>(),
                                                             { "add_visualDataDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider.remove_visualDataDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::*)(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*)>(
    &::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::remove_visualDataDidChangeEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3271dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider*>(),
                                                             { "remove_visualDataDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3271e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerAvatarsData& BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::__cordl_internal_get__avatarsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarsData;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::__cordl_internal_get__avatarsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarsData;
}
constexpr void BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::__cordl_internal_set__avatarsData(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarsData = value;
}
inline ::GlobalNamespace::MultiplayerAvatarsData BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::get_avatarsData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider*>(), { "get_avatarsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::add_visualDataDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider*>(),
                                                           { "add_visualDataDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::remove_visualDataDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider*>(),
                                                           { "remove_visualDataDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::_ctor(::GlobalNamespace::MultiplayerAvatarsData avatarsData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarsData);
}
inline ::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider* BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::New_ctor(::GlobalNamespace::MultiplayerAvatarsData avatarsData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider*>(avatarsData));
}
/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
constexpr BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::operator ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::i___BeatSaber__AvatarCore__IAvatarVisualDataProvider() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::StaticAvatarVisualDataProvider::StaticAvatarVisualDataProvider() {}
