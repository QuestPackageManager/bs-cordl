#pragma once
// IWYU pragma private; include "Oculus/Platform/RichPresence.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__RichPresence_def.hpp"
#include "Oculus/Platform/Models/zzzz__DestinationList_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/zzzz__RichPresenceOptions_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::RichPresence.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)()>(&::Oculus::Platform::RichPresence::Clear)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3f86c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RichPresence.GetDestinations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* (*)()>(
    &::Oculus::Platform::RichPresence::GetDestinations)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3f54c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "GetDestinations",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RichPresence.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(::Oculus::Platform::RichPresenceOptions*)>(&::Oculus::Platform::RichPresence::Set)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3f86d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RichPresenceOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RichPresence.GetNextDestinationListPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* (*)(::Oculus::Platform::Models::DestinationList*)>(&::Oculus::Platform::RichPresence::GetNextDestinationListPage)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3f86ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "GetNextDestinationListPage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::DestinationList*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request* Oculus::Platform::RichPresence::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* Oculus::Platform::RichPresence::GetDestinations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "GetDestinations",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request* Oculus::Platform::RichPresence::Set(::Oculus::Platform::RichPresenceOptions* richPresenceOptions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RichPresenceOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method, richPresenceOptions);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* Oculus::Platform::RichPresence::GetNextDestinationListPage(::Oculus::Platform::Models::DestinationList* list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "GetNextDestinationListPage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::DestinationList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>*, false>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::RichPresence::RichPresence() {}
