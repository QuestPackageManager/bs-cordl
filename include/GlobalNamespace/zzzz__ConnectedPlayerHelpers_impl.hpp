#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedPlayerHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerHelpers_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerHelpers.WantsToPlayNextLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerHelpers::WantsToPlayNextLevel)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x31d3398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerHelpers*>::get(), "WantsToPlayNextLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerHelpers.WasActiveAtLevelStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerHelpers::WasActiveAtLevelStart)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x31d345c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerHelpers*>::get(), "WasActiveAtLevelStart", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerHelpers.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerHelpers::IsActive)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x31d3520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerHelpers*>::get(), "IsActive", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerHelpers.HasFinishedLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerHelpers::HasFinishedLevel)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x31d35e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerHelpers*>::get(), "HasFinishedLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerHelpers.IsActiveOrFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerHelpers::IsActiveOrFinished)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x31d36a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerHelpers*>::get(), "IsActiveOrFinished", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerHelpers.IsFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerHelpers::IsFailed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x31d36d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerHelpers*>::get(), "IsFailed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::ConnectedPlayerHelpers::WantsToPlayNextLevel(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerHelpers*>::get(), "WantsToPlayNextLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, connectedPlayer);
}
inline bool GlobalNamespace::ConnectedPlayerHelpers::WasActiveAtLevelStart(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerHelpers*>::get(), "WasActiveAtLevelStart", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, connectedPlayer);
}
inline bool GlobalNamespace::ConnectedPlayerHelpers::IsActive(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerHelpers*>::get(), "IsActive", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, connectedPlayer);
}
inline bool GlobalNamespace::ConnectedPlayerHelpers::HasFinishedLevel(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerHelpers*>::get(), "HasFinishedLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, connectedPlayer);
}
inline bool GlobalNamespace::ConnectedPlayerHelpers::IsActiveOrFinished(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerHelpers*>::get(), "IsActiveOrFinished", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, connectedPlayer);
}
inline bool GlobalNamespace::ConnectedPlayerHelpers::IsFailed(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerHelpers*>::get(), "IsFailed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, connectedPlayer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerHelpers::ConnectedPlayerHelpers() {}
