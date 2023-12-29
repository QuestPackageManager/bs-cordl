#pragma once
#include "Oculus/Platform/Models/zzzz__MatchmakingStats_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithMatchmakingStatsUnderMatchmakingStats_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingStats_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::*)(void*)>(
    &::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25934ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats.GetMatchmakingStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingStats* (
    ::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::*)()>(&::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetMatchmakingStats)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2596ddc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingStats* (
    ::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::*)(void*)>(&::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2596e18;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats* Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>(c_message));
}
inline void Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::MatchmakingStats* Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetMatchmakingStats() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(),
                                               "GetMatchmakingStats", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingStats*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::MatchmakingStats* Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetDataFromMessage(void* c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(), "GetDataFromMessage",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingStats*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::MessageWithMatchmakingStatsUnderMatchmakingStats() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
