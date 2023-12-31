#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__RichPresence_def.hpp"
#include "Oculus/Platform/Models/zzzz__DestinationList_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/zzzz__RichPresenceOptions_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::RichPresence.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)()>(&::Oculus::Platform::RichPresence::Clear)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x26ff0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "Clear",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RichPresence.GetDestinations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* (*)()>(
    &::Oculus::Platform::RichPresence::GetDestinations)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x26cc53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "GetDestinations",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RichPresence.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(::Oculus::Platform::RichPresenceOptions*)>(&::Oculus::Platform::RichPresence::Set)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x26ff1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "Set", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RichPresenceOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RichPresence.GetNextDestinationListPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* (*)(::Oculus::Platform::Models::DestinationList*)>(&::Oculus::Platform::RichPresence::GetNextDestinationListPage)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x26ff3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "GetNextDestinationListPage", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::DestinationList*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request* Oculus::Platform::RichPresence::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* Oculus::Platform::RichPresence::GetDestinations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "GetDestinations",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request* Oculus::Platform::RichPresence::Set(::Oculus::Platform::RichPresenceOptions* richPresenceOptions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "Set", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RichPresenceOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method, richPresenceOptions);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* Oculus::Platform::RichPresence::GetNextDestinationListPage(::Oculus::Platform::Models::DestinationList* list) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresence*>::get(), "GetNextDestinationListPage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::DestinationList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>*, false>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::RichPresence::RichPresence() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
