#pragma once
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsModelSO_impl.hpp"
#include "GlobalNamespace/zzzz__PS4LeaderboardIdsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS4LeaderboardIdsModelSO.DoesSupport360
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PS4LeaderboardIdsModelSO::*)()>(
    &::GlobalNamespace::PS4LeaderboardIdsModelSO::DoesSupport360)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23680c4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4LeaderboardIdsModelSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4LeaderboardIdsModelSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4LeaderboardIdsModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4LeaderboardIdsModelSO::*)()>(&::GlobalNamespace::PS4LeaderboardIdsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23680cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4LeaderboardIdsModelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PS4LeaderboardIdsModelSO::DoesSupport360() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4LeaderboardIdsModelSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PS4LeaderboardIdsModelSO* GlobalNamespace::PS4LeaderboardIdsModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS4LeaderboardIdsModelSO*>());
}
inline void GlobalNamespace::PS4LeaderboardIdsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4LeaderboardIdsModelSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS4LeaderboardIdsModelSO::PS4LeaderboardIdsModelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
