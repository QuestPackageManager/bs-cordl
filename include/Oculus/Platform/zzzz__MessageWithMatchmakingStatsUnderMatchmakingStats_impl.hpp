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
  constexpr static std::size_t addrs = 0x2718d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats.GetMatchmakingStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingStats* (
    ::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::*)()>(&::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetMatchmakingStats)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271c664;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x271c6a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats* Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>(c_message));
}
inline void Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::MatchmakingStats* Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetMatchmakingStats() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(), 57)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingStats*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::MatchmakingStats* Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingStats*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::MessageWithMatchmakingStatsUnderMatchmakingStats() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
