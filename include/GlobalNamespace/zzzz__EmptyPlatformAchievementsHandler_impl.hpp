#pragma once
// IWYU pragma private; include "GlobalNamespace/EmptyPlatformAchievementsHandler.hpp"
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EmptyPlatformAchievementsHandler_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EmptyPlatformAchievementsHandler.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EmptyPlatformAchievementsHandler::*)()>(
    &::GlobalNamespace::EmptyPlatformAchievementsHandler::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26a471c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyPlatformAchievementsHandler.UnlockAchievement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::EmptyPlatformAchievementsHandler::*)(::StringW, ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*)>(
    &::GlobalNamespace::EmptyPlatformAchievementsHandler::UnlockAchievement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a4720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(), "UnlockAchievement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyPlatformAchievementsHandler.GetUnlockedAchievements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::HMAsyncRequest* (::GlobalNamespace::EmptyPlatformAchievementsHandler::*)(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*)>(
        &::GlobalNamespace::EmptyPlatformAchievementsHandler::GetUnlockedAchievements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a4728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(), "GetUnlockedAchievements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyPlatformAchievementsHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EmptyPlatformAchievementsHandler::*)()>(
    &::GlobalNamespace::EmptyPlatformAchievementsHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a4730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EmptyPlatformAchievementsHandler::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::EmptyPlatformAchievementsHandler::UnlockAchievement(::StringW achievementId, ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler* completionHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(), "UnlockAchievement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, achievementId, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::EmptyPlatformAchievementsHandler::GetUnlockedAchievements(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler* completionHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(), "GetUnlockedAchievements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, completionHandler);
}
inline void GlobalNamespace::EmptyPlatformAchievementsHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EmptyPlatformAchievementsHandler* GlobalNamespace::EmptyPlatformAchievementsHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EmptyPlatformAchievementsHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IPlatformAchievementsHandler"
constexpr GlobalNamespace::EmptyPlatformAchievementsHandler::operator ::GlobalNamespace::IPlatformAchievementsHandler*() noexcept {
  return static_cast<::GlobalNamespace::IPlatformAchievementsHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPlatformAchievementsHandler"
constexpr ::GlobalNamespace::IPlatformAchievementsHandler* GlobalNamespace::EmptyPlatformAchievementsHandler::i___GlobalNamespace__IPlatformAchievementsHandler() noexcept {
  return static_cast<::GlobalNamespace::IPlatformAchievementsHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EmptyPlatformAchievementsHandler::EmptyPlatformAchievementsHandler() {}
