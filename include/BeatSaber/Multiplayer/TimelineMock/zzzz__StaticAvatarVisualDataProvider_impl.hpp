#pragma once
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Multiplayer/TimelineMock/zzzz__StaticAvatarVisualDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarVisualDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
//  Writing Method size for method: ::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider.get_avatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (
    ::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::*)()>(&::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::get_avatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe7641c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider*>::get(),
                                                 "get_avatarsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::*)(
    ::GlobalNamespace::MultiplayerAvatarsData)>(&::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xe76430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
constexpr BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::operator ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::i___BeatSaber__AvatarCore__IAvatarVisualDataProvider() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData& BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::__cordl_internal_get__avatarsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarsData;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::__cordl_internal_get__avatarsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarsData;
}
constexpr void BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::__cordl_internal_set__avatarsData(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarsData = value;
}
inline ::GlobalNamespace::MultiplayerAvatarsData BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::get_avatarsData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider*>::get(),
                                               "get_avatarsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData, false>(this, ___internal_method);
}
inline ::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider*
BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::New_ctor(::GlobalNamespace::MultiplayerAvatarsData avatarsData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider*>(avatarsData));
}
inline void BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::_ctor(::GlobalNamespace::MultiplayerAvatarsData avatarsData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarsData);
}
// Ctor Parameters []
constexpr ::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider::StaticAvatarVisualDataProvider() {}
