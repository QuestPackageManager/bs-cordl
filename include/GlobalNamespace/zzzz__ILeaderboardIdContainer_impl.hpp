#pragma once
// IWYU pragma private; include "GlobalNamespace/ILeaderboardIdContainer.hpp"
#include "GlobalNamespace/zzzz__ILeaderboardIdContainer_def.hpp"
#include "GlobalNamespace/zzzz__ILeaderboardIdData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ILeaderboardIdContainer.get_leaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* (
    ::GlobalNamespace::ILeaderboardIdContainer::*)()>(&::GlobalNamespace::ILeaderboardIdContainer::get_leaderboardIds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILeaderboardIdContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILeaderboardIdContainer*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* GlobalNamespace::ILeaderboardIdContainer::get_leaderboardIds() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ILeaderboardIdContainer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>*, false>(this, ___internal_method);
}
