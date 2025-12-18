#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LeaderboardList.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Leaderboard_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LeaderboardList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LeaderboardList::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::LeaderboardList::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5c41d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LeaderboardList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Models::LeaderboardList::_ctor(::System::IntPtr a) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LeaderboardList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
inline ::Oculus::Platform::Models::LeaderboardList* Oculus::Platform::Models::LeaderboardList::New_ctor(::System::IntPtr a) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::LeaderboardList*>(a));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LeaderboardList::LeaderboardList() {}
