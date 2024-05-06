#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TestInvitePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__IInvitePlatformHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestInvitePlatformHandler.get_isSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::TestInvitePlatformHandler::*)()>(
    &::GlobalNamespace::TestInvitePlatformHandler::get_isSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14d002c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestInvitePlatformHandler*>::get(),
                                                                               "get_isSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestInvitePlatformHandler.OpenInvitePanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestInvitePlatformHandler::*)()>(
    &::GlobalNamespace::TestInvitePlatformHandler::OpenInvitePanel)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x14d0034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestInvitePlatformHandler*>::get(),
                                                                               "OpenInvitePanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestInvitePlatformHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestInvitePlatformHandler::*)()>(&::GlobalNamespace::TestInvitePlatformHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14d009c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestInvitePlatformHandler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IInvitePlatformHandler"
constexpr GlobalNamespace::TestInvitePlatformHandler::operator ::GlobalNamespace::IInvitePlatformHandler*() noexcept {
  return static_cast<::GlobalNamespace::IInvitePlatformHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IInvitePlatformHandler"
constexpr ::GlobalNamespace::IInvitePlatformHandler* GlobalNamespace::TestInvitePlatformHandler::i___GlobalNamespace__IInvitePlatformHandler() noexcept {
  return static_cast<::GlobalNamespace::IInvitePlatformHandler*>(static_cast<void*>(this));
}
inline bool GlobalNamespace::TestInvitePlatformHandler::get_isSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestInvitePlatformHandler*>::get(),
                                                                             "get_isSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::TestInvitePlatformHandler::OpenInvitePanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestInvitePlatformHandler*>::get(),
                                                                             "OpenInvitePanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TestInvitePlatformHandler* GlobalNamespace::TestInvitePlatformHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TestInvitePlatformHandler*>());
}
inline void GlobalNamespace::TestInvitePlatformHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestInvitePlatformHandler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestInvitePlatformHandler::TestInvitePlatformHandler() {}
