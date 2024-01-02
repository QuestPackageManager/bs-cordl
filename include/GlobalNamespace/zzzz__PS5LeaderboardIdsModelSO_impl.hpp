#pragma once
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsModelSO_impl.hpp"
#include "GlobalNamespace/zzzz__PS5LeaderboardIdsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS5LeaderboardIdsModelSO.DoesSupport360
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PS5LeaderboardIdsModelSO::*)()>(
    &::GlobalNamespace::PS5LeaderboardIdsModelSO::DoesSupport360)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23682b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5LeaderboardIdsModelSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5LeaderboardIdsModelSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5LeaderboardIdsModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5LeaderboardIdsModelSO::*)()>(&::GlobalNamespace::PS5LeaderboardIdsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23682b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5LeaderboardIdsModelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PS5LeaderboardIdsModelSO::DoesSupport360() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5LeaderboardIdsModelSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PS5LeaderboardIdsModelSO* GlobalNamespace::PS5LeaderboardIdsModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS5LeaderboardIdsModelSO*>());
}
inline void GlobalNamespace::PS5LeaderboardIdsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5LeaderboardIdsModelSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS5LeaderboardIdsModelSO::PS5LeaderboardIdsModelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
