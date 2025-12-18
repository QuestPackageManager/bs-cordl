#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusRichPresencePlatformHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusRichPresencePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresencePlatformHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusRichPresencePlatformHandler.SetPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusRichPresencePlatformHandler::*)(::GlobalNamespace::IRichPresenceData*)>(
    &::GlobalNamespace::OculusRichPresencePlatformHandler::SetPresence)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x576b3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRichPresencePlatformHandler*>::get(), "SetPresence", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRichPresenceData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusRichPresencePlatformHandler.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusRichPresencePlatformHandler::*)()>(
    &::GlobalNamespace::OculusRichPresencePlatformHandler::Clear)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x576b730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRichPresencePlatformHandler*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusRichPresencePlatformHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusRichPresencePlatformHandler::*)()>(
    &::GlobalNamespace::OculusRichPresencePlatformHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x576b7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRichPresencePlatformHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusRichPresencePlatformHandler::SetPresence(::GlobalNamespace::IRichPresenceData* richPresenceData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRichPresencePlatformHandler*>::get(), "SetPresence", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRichPresenceData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, richPresenceData);
}
inline void GlobalNamespace::OculusRichPresencePlatformHandler::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRichPresencePlatformHandler*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusRichPresencePlatformHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRichPresencePlatformHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusRichPresencePlatformHandler* GlobalNamespace::OculusRichPresencePlatformHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusRichPresencePlatformHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRichPresencePlatformHandler"
constexpr GlobalNamespace::OculusRichPresencePlatformHandler::operator ::GlobalNamespace::IRichPresencePlatformHandler*() noexcept {
  return static_cast<::GlobalNamespace::IRichPresencePlatformHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRichPresencePlatformHandler"
constexpr ::GlobalNamespace::IRichPresencePlatformHandler* GlobalNamespace::OculusRichPresencePlatformHandler::i___GlobalNamespace__IRichPresencePlatformHandler() noexcept {
  return static_cast<::GlobalNamespace::IRichPresencePlatformHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusRichPresencePlatformHandler::OculusRichPresencePlatformHandler() {}
